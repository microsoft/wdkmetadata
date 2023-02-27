[CmdletBinding()]
Param(
    [int]$NewMajorVersion = 0
)

function Get-Version([string]$fullVersion)
{
    $null = $fullVersion -match "(\d+)\.(\d+)(-.+)?"
    return $matches[1], $matches[2], $matches[3]
}

$rootDir = [System.IO.Path]::GetFullPath("$PSScriptRoot\..")
$rootVersionJsonFile = Join-Path $rootDir "version.json"

# Update main version
$versionJson = Get-Content $rootVersionJsonFile -raw | ConvertFrom-Json
$currentVersion = $versionJson."version"
$currentMajor, $currentMinor, $currentSuffix = Get-Version $currentVersion

if ($NewMajorVersion -eq 0)
{
    $NewMajorVersion = ($currentMinor -as [int]) + 1
}

$currentMinor = $NewMajorVersion

$newVersion = "$currentMajor.$currentMinor$($currentSuffix)"
$versionJson."version" = $newVersion

$versionJson | ConvertTo-Json | Out-File $rootVersionJsonFile

Write-Host "Set version in $rootVersionJsonFile from $currentVersion to $newVersion"
