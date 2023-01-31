# Overview

This repository produces metadata for the Windows Driver Kit (WDK) using the tooling provided by the [win32metadata](https://github.com/microsoft/win32metadata) project. The metadata is published to NuGet.org as the Microsoft.Windows.WDK.Win32Metadata NuGet package. This mirrors the Microsoft.Windows.SDK.Win32Metadata package that it depends on.

DISCLAIMER: wdkmetadata is EXPERIMENTAL and intended to provide a place for the community to build out rich metadata for the WDK to enable driver development in language projections like the [windows crate](https://github.com/microsoft/windows-rs) for Rust.

# Principles

* This repository is sponsored by Microsoft but will primarily be driven by outside collaborators and community contributions
* This repository will use public tooling provided by Microsoft.Windows.WinmdGenerator wherever possible
* This repository will aim to mirror [win32metadata](https://github.com/microsoft/win32metadata) in layout and development experience to provide a consistent contributor experience across the WDK and the SDK
* This repository will provide foundational metadata for native APIs that ship in the WDK and will not provide abstractions
* This repository does not change the license of the original WDK and SDK headers used to generate the metadata. Any such artifacts checked into this repository support metadata production only and do not imply a change of their original licenses.

# Repository Bootstrap

* [DONE] Clone the win32metadata repo
* [DONE] Remove win32metadata baggage (samples, scripts, sources, tests, etc.) and onboard to Microsoft.Windows.WinmdGenerator
* [DONE] Rename generation/SDK to generation/WDK and rename Windows.Win32.winmd to Microsoft.Windows.WDK.Win32Metadata.winmd
* [DONE] Manually copy WDK headers to [RecompiledIdlHeaders](generation/WDK/RecompiledIdlHeaders)
* [DONE] Create example API partition (https://github.com/microsoft/win32metadata/issues/509)
* Produce Microsoft.Windows.WDK.Win32Metadata NuGet package for Microsoft.Windows.WDK.Win32Metadata.winmd
* Port over full/incremental build support from [win32metadata](https://github.com/microsoft/win32metadata)
* Port over baseline diffing support from [win32metadata](https://github.com/microsoft/win32metadata)
* Port over CI and release pipelines from [win32metadata](https://github.com/microsoft/win32metadata)
* [DONE] Port over [header ingestion script](https://github.com/microsoft/win32metadata/blob/main/scripts/RecompileIdlFilesForScraping.ps1) from [win32metadata](https://github.com/microsoft/win32metadata) and include WDK headers
* Port over automatic import library detection to minimize changes to libMappings.rsp
* Onboard outside collaborators and community contributors

# Notes

* This repository needs both SDK headers and WDK headers since the WDK depends on the SDK. SDK headers are a snapshot of what was in the win32metadata repo when it was cloned. WDK headers for the matching SDK build were manually copied to generation/WDK/RecompiledIdlHeaders rather than recompiled with a [header ingestion script](https://github.com/microsoft/win32metadata/blob/main/scripts/RecompileIdlFilesForScraping.ps1). Need to port over that script and update it to include the WDK to properly ingest WDK headers. 
* scraper.settings.rsp remaps were imported from [win32metadata](https://github.com/microsoft/win32metadata) since types like _FILETIME need to be remapped in WDK headers as well
* scraper.header.txt will need to be updated to include namespaces for SDK types that WDK APIs reference