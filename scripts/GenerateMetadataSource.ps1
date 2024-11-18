param
(
    [ValidateSet("x64", "x86", "arm64", "crossarch")]
    [string]
    $arch = "crossarch",

    [switch]
    $scrapeConstants
)

. "$PSScriptRoot\CommonUtils.ps1"

Write-Host "*** Generating source files: $arch" -ForegroundColor Blue

Install-BuildTools

if ($scrapeConstants)
{
    $target = "ScrapeConstants"
}
else
{
    $target = "ScrapeHeaders"
}

$timestamp = Get-Date -Format "yyyyMMddHHmmss"
$logFile = "$PSScriptRoot\..\bin\logs\GenerateMetadataSources_$timestamp.binlog"

& dotnet build "$wdkProjectRoot" -c Release -p:ScanArch=$arch -t:$target "-bl:$logFile" -v diag
ThrowOnNativeProcessError
