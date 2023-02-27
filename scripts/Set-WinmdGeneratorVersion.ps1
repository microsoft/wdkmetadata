[CmdletBinding()]
Param(
    [Parameter(Mandatory=$true)]
    [string]$WinmdGeneratorVersion
)

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

