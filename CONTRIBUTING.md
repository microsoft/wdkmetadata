# Contributing

This project welcomes contributions and suggestions. Most contributions require you to agree to a
Contributor License Agreement (CLA) declaring that you have the right to, and actually do, grant us
the rights to use your contribution. For details, visit https://cla.opensource.microsoft.com.

When you submit a pull request, a CLA bot will automatically determine whether you need to provide
a CLA and decorate the PR appropriately (e.g., status check, comment). Simply follow the instructions
provided by the bot. You will only need to do this once across all repos using our CLA.

You can contribute to this project by contributing to:

* [Issues](https://github.com/microsoft/wdkmetadata/issues)
* [Discussions](https://github.com/microsoft/wdkmetadata/discussions)
* [Namespaces](#Namespaces)
* [Enums](#Enums)
* [Constants](#Constants)
* [Attributes](#Attributes)

If you intend to contribute code changes, learn how to [set up your development environment](#Set-up-your-development-environment).

When contributing code changes, [validate](#Validating-changes) your changes by rebuilding the winmd and then inspecting the reported winmd diff to ensure all changes were intentional:

* [Full builds](#Full-builds)
* [Incremental builds](#Incremental-builds)
* [Comparing against the last release](#Comparing-against-the-last-release)

This project has adopted the [Microsoft Open Source Code of Conduct](https://opensource.microsoft.com/codeofconduct/).
For more information see the [Code of Conduct FAQ](https://opensource.microsoft.com/codeofconduct/faq/) or
contact [opencode@microsoft.com](mailto:opencode@microsoft.com) with any additional questions or comments.

## Set up your development environment

* Install [Visual Studio 2022 (Desktop C++ Workload)](https://visualstudio.microsoft.com/thank-you-downloading-visual-studio/?sku=Community&channel=Release&version=VS2022&source=VSLandingPage&passive=false)
* Install [PowerShell 7](https://aka.ms/powershell-release?tag=stable)
* Run [scripts/Install-AllSoftware.ps1](scripts/Install-AllSoftware.ps1) to install the below software
  * Install [Visual Studio Code](https://code.visualstudio.com/Download)
  * Install [.NET (SDK)](https://dotnet.microsoft.com/download/dotnet)
  * Install [ILSpy](https://github.com/icsharpcode/ILSpy/releases/latest)
  * Note: To use this script, make sure that the [Microsoft App Installer](https://www.microsoft.com/p/app-installer/9nblggh4nns1) is installed, the script is run as an administrator, and running scripts is not blocked.
* Add [NuGet.org](https://api.nuget.org/v3/index.json) as a [package source](https://docs.microsoft.com/en-us/dotnet/core/tools/dotnet-nuget-add-source#examples)
* Clone the [repo](https://github.com/microsoft/wdkmetadata.git)
* Run a [full build](#Full-builds)

## Namespaces

See https://github.com/microsoft/win32metadata/blob/main/CONTRIBUTING.md#Namespaces.

## Enums

See https://github.com/microsoft/win32metadata/blob/main/CONTRIBUTING.md#Enums.

## Constants

See https://github.com/microsoft/win32metadata/blob/main/CONTRIBUTING.md#Constants.

## Attributes

See https://github.com/microsoft/win32metadata/blob/main/CONTRIBUTING.md#Attributes.

## Validating changes

### Full builds

Run `./DoAll.ps1 -Clean` in [PowerShell 7](https://aka.ms/powershell-release?tag=stable) to run a full build, then inspect the reported winmd diff to ensure all changes were intentional. A full build can take 25-30 minutes.

If CI builds pass but local builds of the same commit fail with cryptic error messages, clearing the local NuGet cache with `dotnet nuget locals -c all` often helps.

### Incremental builds

Run `./DoAll.ps1` in [PowerShell 7](https://aka.ms/powershell-release?tag=stable) to run an incremental build, then inspect the reported winmd diff to ensure all changes were intentional. `./DoAll.ps1` without `-Clean` will recognize what files have changed and build only the necessary components required for those changes.

Note that stale artifacts on your system may sometimes result in cryptic errors when attempting incremental builds. If you do encounter cryptic errors during incremental builds that you suspect are the result of previously built changes, reset your system state by running a clean build with `./DoAll.ps1 -Clean`.

### Comparing against the last release

A list of accumulated changes since the last release is kept at [ChangesSinceLastRelease.txt](scripts/ChangesSinceLastRelease.txt). New changes are reported by `./scripts/TestWinmdBinary.ps1` which is called during both full and incremental builds if you follow the steps above.

When validating changes, it's important to evaluate the diffs to ensure all changes are intentional. Common patterns to expect in the diffs include:

* APIs were added to the baseline
* APIs were removed from the baseline
* APIs were moved to different namespaces

Additionally, it is useful to load the winmd in [ILSpy](https://github.com/icsharpcode/ILSpy) and navigate through the APIs as another means to identify additional changes that may be required to achieve the desired end result. You may notice that two related APIs are in different namespaces or that a type that an API depends on was not moved as you would have expected. If that happens, search the repo for the API or its header file to identify where it may be being mapped to another namespace.

Once all the changes are validated, update the list of known changes since the last release by following the steps reported in the build output. When a new release is made, the list of changes in [ChangesSinceLastRelease.txt](scripts/ChangesSinceLastRelease.txt) will get reset and will start accumulating again until the next release.

## Releasing

The main branch must have a clean build to publish a new release. Run the [release pipeline](https://microsoft.visualstudio.com/Dart/_build?definitionId=97650) to publish new packages to nuget.org and create a new draft release on GitHub autopopulated with the list of resolved issues. Once the packages are live on nuget.org, publish the GitHub release.

After a release is published, run [Set-LastReleaseVersion.ps1](scripts/Set-LastReleaseVersion.ps1) with the metadata package version published to nuget.org, and run [Set-MajorVersion.ps1](scripts/Set-MajorVersion.ps1) to increment the version number in the build for the next release.

To update the version of Microsoft.Windows.WinmdGenerator, run [Set-WinmdGeneratorVersion.ps1](scripts/Set-WinmdGeneratorVersion.ps1) with the WinmdGenerator package version published to nuget.org.