param
(
    [switch]$SkipInstallTools
)

. $PSScriptRoot\CommonUtils.ps1

if (!$skipInstallTools)
{
    Install-BuildTools
}

Write-Host "*** Running metadata utils tests..." -ForegroundColor Blue

& $PSScriptRoot\TestWinmdBinary.ps1 -SkipInstallTools
