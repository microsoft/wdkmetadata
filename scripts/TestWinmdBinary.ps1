param
(
    [switch]
    $SkipInstallTools
)

. "$PSScriptRoot\CommonUtils.ps1"

if (!$SkipInstallTools.IsPresent)
{
    Install-BuildTools
}

Write-Host "*** Running tests on .winmd" -ForegroundColor Blue

$wdkTestsDir = "$rootDir\tests\Windows.Wdk.Tests"
dotnet test $wdkTestsDir -c:Release
ThrowOnNativeProcessError

Write-Host "`n`e[32mTesting .winmd succeeded`e[0m"

Write-Host "*** [SKIPPED] Comparing .winmd to last release. Uncomment when the first version of WDKMetadata ships." -ForegroundColor Blue

# & "$PSScriptRoot\CompareBinToLastRelease.ps1" -SkipInstallTools

# if ($LastExitCode -lt 0)
# {
#     exit -1
# }

# Write-Host "`n`e[32mComparing .winmd to last release succeeded`e[0m"

exit 0
