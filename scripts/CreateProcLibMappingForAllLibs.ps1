
. $PSScriptRoot\CommonUtils.ps1

$outputFileName = Join-Path -Path $wdkProjectRoot -ChildPath "libMappings.rsp"
$inputFileName = Join-Path -Path $wdkProjectRoot -ChildPath "libMappings.old.rsp"

if (!(Test-Path $inputFileName))
{
    Copy-Item $outputFileName $inputFileName
}

$libPkgPath = "C:\Program Files (x86)\Windows Kits\10\Lib\10.0.22000.0\"
$umLibDirectory = "$libPkgPath\um\x64"
$kmLibDirectory = "$libPkgPath\km\x64"

if (!(Test-Path -path $umLibDirectory))
{
    Write-Error "Couldn't find $umLibDirectory."
    exit -1
}

if (!(Test-Path -path $kmLibDirectory))
{
    Write-Error "Couldn't find $kmLibDirectory."
    exit -1
}

# Send these in first because we want to preference what they say over other libs
$libArg = "$umLibDirectory\onecoreuap.lib $umLibDirectory\kernel32.lib $umLibDirectory\d3d10.lib"

$metadataToolsBin = "$(Get-BuildToolsNugetPropsProperty("PkgMicrosoft_Windows_WinmdGenerator"))\tools\net6.0"
dotnet $metadataToolsBin\WinmdUtils.dll createLibRsp --lib $umLibDirectory\onecoreuap.lib $umLibDirectory\kernel32.lib $umLibDirectory\d3d10.lib --libDir $kmLibDirectory --libDir $umLibDirectory --exclude ServiceMain DllMain GetDeviceID --inputRsp $inputFileName --outputRsp $outputFileName
ThrowOnNativeProcessError
