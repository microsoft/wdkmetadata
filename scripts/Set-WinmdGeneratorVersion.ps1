[CmdletBinding()]
Param(
    [Parameter(Mandatory=$true)]
    [string]$WinmdGeneratorVersion
)

function Get-Version([string]$fullVersion)
{
    $null = $fullVersion -match "(\d+)\.(\d+)\.(\d+)(-.+)?"
    return $matches[1], $matches[2], $matches[3], $matches[4]
}

$dirBuildPropsFile = Join-Path $PSScriptRoot "..\Directory.Build.Props"
Write-Verbose "Updating $dirBuildPropsFile..."

$dirBuildPropsXml = New-Object xml
$dirBuildPropsXml.PreserveWhitespace = $true
$dirBuildPropsXml.Load($dirBuildPropsFile)

$dirBuildPropsXml.Project.PropertyGroup.WinmdGeneratorVersion = $WinmdGeneratorVersion
$dirBuildPropsXml.Save($dirBuildPropsFile)

$globalJson = Join-Path $PSScriptRoot "..\global.json"
Write-Verbose "Updating $globalJson..."

$json = Get-Content $globalJson -raw | ConvertFrom-Json
$json."msbuild-sdks"."Microsoft.Windows.WinmdGenerator" = $WinmdGeneratorVersion
$json | ConvertTo-Json | Out-File $globalJson

$nuspec = Join-Path $PSScriptRoot "..\sources\nuget\Microsoft.Windows.WDK.Win32Metadata\Microsoft.Windows.WDK.Win32Metadata.nuspec"
Write-Verbose "Updating $nuspec..."

$major, $minor, $revision, $suffix = Get-Version $WinmdGeneratorVersion
$sdkMetadataPackageVersion = "$minor.$major.$revision$($suffix)"
(Get-Content $nuspec) -Replace "<dependency id=""Microsoft.Windows.SDK.Win32Metadata"".*",
                               "<dependency id=""Microsoft.Windows.SDK.Win32Metadata"" version=""$sdkMetadataPackageVersion"" />" |
Set-Content $nuspec

