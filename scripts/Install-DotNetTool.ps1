Param ([string] $Name, [string] $Version = '', [string] $NuGetConfigFile)

if (-not $NuGetConfigFile) {
    throw "NuGetConfigFile is null must be a valid file path to NuGet.config file."
}

if (-not (Test-Path -Path $NuGetConfigFile -PathType Leaf)) {
	throw "NuGetConfigFile file wasn't found at supplied path valid path to NuGet.config file."
}

if ($Version -ne '')
{
    $installed = & dotnet tool list -g | select-string -Pattern "$Name\s+$Version"
    if ($installed -eq $null)
    {
        & dotnet tool update --global $Name --version $Version --configfile $NuGetConfigFile
    }
}
else
{
    $installed = & dotnet tool list -g | select-string -Pattern "$Name"
    if ($installed -eq $null)
    {
        & dotnet tool update --global $Name --configfile $NuGetConfigFile
    }
}
