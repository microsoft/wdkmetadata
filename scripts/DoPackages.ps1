param
(
    [switch]$skipInstallTools
)

. $PSScriptRoot\CommonUtils.ps1

if (!$skipInstallTools)
{
    Install-BuildTools
}

Write-Host "*** Packing packages..." -ForegroundColor Blue

dotnet pack "$PSScriptRoot\..\sources\packages.proj" -c Release -v diag
ThrowOnNativeProcessError
