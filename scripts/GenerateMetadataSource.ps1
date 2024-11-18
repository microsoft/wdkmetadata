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

$rootDir = [System.IO.Path]::GetFullPath("$PSScriptRoot\..")

# Explicitly restore the WDK project to avoid issues restore happening during build
& dotnet restore "$wdkProjectRoot" --configfile "$rootDir\nuget.Config" -v diag

# Create a unique log file for the build
$timestamp = Get-Date -Format "yyyyMMddHHmmss"
$logFile = "$PSScriptRoot\..\bin\logs\GenerateMetadataSources_$timestamp.binlog"

# Build the WDK project
& dotnet build "$wdkProjectRoot" -c Release -p:ScanArch=$arch -t:$target --no-restore "-bl:$logFile" -v diag
ThrowOnNativeProcessError
