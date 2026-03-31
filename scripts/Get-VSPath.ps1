$vswherePath = "${env:ProgramFiles(x86)}\Microsoft Visual Studio\Installer\vswhere.exe"
if (-not (Test-Path $vswherePath)) {
    throw "Unable to find vswhere.exe. Is VS 2017 15.3 or later installed? Use $PSScriptRoot\Install-VS.ps1 to acquire VS with the required components."
    exit 1
}

$workloadsRequired = & "$PSScriptRoot\Get-RequiredWorkloads.ps1"

# Filter out Windows SDK components so vswhere doesn't fail when the
# container image ships a different SDK version than what we list.
# SDK presence is validated separately below.
$sdkPrefixes = @(
    'Microsoft.VisualStudio.Component.Windows10SDK.',
    'Microsoft.VisualStudio.Component.Windows11SDK.'
)
$coreWorkloads = $workloadsRequired | Where-Object {
    $id = $_
    -not ($sdkPrefixes | Where-Object { $id.StartsWith($_) })
}

$vswhereArgs = & "$PSScriptRoot\Get-VSWhereBaseArgs.ps1"
$vswhereArgs += '-latest'
$coreWorkloads |% {
    $vswhereArgs += '-requires',$_
}
Write-Verbose "`"$vswherePath`" $vswhereArgs"
$output = & $vswherePath $vswhereArgs
if ($lastexitcode -eq 87) {
    $vswhere = [xml]'<instances />'
} else {
    $vswhere = [xml]$output
}
if ($vswhere.instances.length -eq 0) {
    throw "No VS installation detected that has all the required workloads installed ($coreWorkloads). Use $PSScriptRoot\Install-VS.ps1 to acquire VS with the required components."
    exit 2
}

$installPath = $vswhere.instances.instance.installationPath

# Verify that a Windows SDK is available (any version).
# Read SDK root from registry so we don't depend on a hardcoded path.
$kitsRoot = $null
foreach ($regPath in @(
    'HKLM:\SOFTWARE\Microsoft\Windows Kits\Installed Roots',
    'HKLM:\SOFTWARE\WOW6432Node\Microsoft\Windows Kits\Installed Roots'
)) {
    if (Test-Path $regPath) {
        $kitsRoot = (Get-ItemProperty $regPath -Name 'KitsRoot10' -ErrorAction SilentlyContinue).KitsRoot10
        if ($kitsRoot) { break }
    }
}
if (-not $kitsRoot) {
    $kitsRoot = Join-Path "${env:ProgramFiles(x86)}" 'Windows Kits\10'
}

$sdkIncludePath = Join-Path $kitsRoot 'Include'
$sdkVersions = @()
if (Test-Path $sdkIncludePath) {
    $sdkVersions = Get-ChildItem $sdkIncludePath -Directory |
        Where-Object { $_.Name -match '^10\.0\.\d+\.0$' } |
        Where-Object {
            # Verify key subdirectories exist for a usable SDK
            $ver = $_.FullName
            (Test-Path (Join-Path $ver 'um\Windows.h')) -and
            (Test-Path (Join-Path $ver 'shared\winapifamily.h'))
        } |
        Sort-Object Name -Descending
}
if ($sdkVersions.Count -eq 0) {
    throw "VS installation found at '$installPath' but no usable Windows SDK detected under '$sdkIncludePath'. Use $PSScriptRoot\Install-VS.ps1 to install VS with an SDK component."
    exit 3
}

Write-Verbose "Found Windows SDK version(s): $($sdkVersions.Name -join ', ')"

Write-Output $installPath
