Param ([string] $Name, [string] $Version = '', [string] $NuGetConfigFile)

if (-not $NuGetConfigFile) {
    throw "NuGetConfigFile is null. NuGetConfigFile must be a valid file path to a NuGet.config file."
}

if (-not (Test-Path -Path $NuGetConfigFile -PathType Leaf)) {
	throw "NuGetConfigFile file wasn't found at supplied path. NuGetConfigFile must be a valid file path to a NuGet.config file."
}

Write-Host "Hello Mom"

if ($Version -ne '')
{
    Write-Host "Hello Mom 2"

    $installed = & dotnet tool list -g | select-string -Pattern "$Name\s+$Version"
    if ($installed -eq $null)
    {
        Write-Host "Hello Mom 3"

        & dotnet tool update --global $Name --version $Version --configfile $NuGetConfigFile -v diag
    }
}
else
{
    Write-Host "Hello Mom 4"

    $installed = & dotnet tool list -g | select-string -Pattern "$Name"
    if ($installed -eq $null)
    {
        Write-Host "Hello Mom 5"
        & dotnet tool update --global $Name --configfile $NuGetConfigFile -v diag
    }
}
