
. "$PSScriptRoot\CommonUtils.ps1"

dotnet clean "$wdkProjectRoot"

if (Test-Path "$rootDir\obj")
{
    remove-item "$rootDir\obj" -force -recurse
}
