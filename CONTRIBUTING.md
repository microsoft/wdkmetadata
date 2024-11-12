# Contributing

See [https://github.com/microsoft/win32metadata/blob/main/CONTRIBUTING.md](https://github.com/microsoft/win32metadata/blob/main/CONTRIBUTING.md).

## Dependencies

WDK Metadata depends on the following:

* [WinmdGenerator](#winmdgenerator)

### WinmdGenerator

To update the WinmdGenerator dependency, run [Set-WinmdGeneratorVersion.ps1](scripts/Set-WinmdGeneratorVersion.ps1) with the WinmdGenerator package version published to nuget.org.

## Releasing
The main branch must have a clean build to publish a new release. Run the [release pipeline](https://github-private.visualstudio.com/microsoft/_build?definitionId=783) to publish new packages to nuget.org and create a new draft release on GitHub autopopulated with the list of resolved issues. Once the package is live on nuget.org, publish the GitHub release.

After a release is published, run [Set-LastReleaseVersion.ps1](scripts/Set-LastReleaseVersion.ps1) with the metadata package version published to nuget.org, and run [Set-MajorVersion.ps1](scripts/Set-MajorVersion.ps1) to increment the version number in the build for the next release.
