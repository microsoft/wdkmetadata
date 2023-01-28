#Requires -Version 7.0

param
(
    [switch]$Clean,

    [switch]$ExcludePackages,

    [switch]$ExcludeSamples,

    [switch]$ExcludeTests,

    [switch]$SkipInstallTools,

    [ValidateSet("crossarch", "x64", "x86", "arm64")]
    [string]
    $arch = "crossarch"
)

if ($Clean.IsPresent)
{
    dotnet clean generation/WDK
}

dotnet build generation/WDK