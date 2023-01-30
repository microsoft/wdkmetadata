/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

 A2DPSidebandAudio.h

Abstract:

    This module defines the types, constants, and functions that are
    exposed to device drivers that interact with the Windows A2DP Audio
    Driver.

--*/

#pragma once

//
// The interface class GUID for A2DP SIDEBAND AUDIO bypass
//
// {F3B1362F-C9F4-4DD1-9D55-E02038A129FB}
//
DEFINE_GUID (GUID_DEVINTERFACE_A2DP_SIDEBAND_AUDIO,
    0xf3b1362f, 0xc9f4, 0x4dd1, 0x9d, 0x55, 0xe0, 0x20, 0x38, 0xa1, 0x29, 0xfb);

//
// GUID_SIDEBANDAUDIO_A2DP_SUPPORT_INTERFACE
// Published by the audio driver to indicate that it is configured for Bluetooth A2DP sideband streaming.
// 
// {2BC51EE4-07AF-49CF-B04B-FB3F1C26AADC}
DEFINE_GUID(GUID_SIDEBANDAUDIO_A2DP_SUPPORT_INTERFACE, 0x2bc51ee4, 0x7af, 0x49cf, 0xb0, 0x4b, 0xfb, 0x3f, 0x1c, 0x26, 0xaa, 0xdc);

//
// Microsoft A2DP Audio Sideband Set of Parameters
// {8FE0297F-3AE6-4384-ACE3-87589E571B9C}
DEFINE_GUID(SIDEBANDAUDIO_PARAMS_SET_A2DP,
    0x8fe0297f, 0x3ae6, 0x4384, 0xac, 0xe3, 0x87, 0x58, 0x9e, 0x57, 0x1b, 0x9c);


//
// SIDEBANDAUDIO_PARAMS_A2DP
//
//  Identifies the SIDEBANDAUDIO_PARAMS_SET_A2DP parameter
//
typedef enum _SIDEBANDAUDIO_PARAMS_A2DP
{
    // Supported codecs information
    //
    // The value is a sequence of Media Codec Capabilities fields as defined in table 8.52, section
    // 8.21.5 of AVDTP 1.3. Also, see A2DP 1.3.1 section 4.2.5 and section 4.7.2 for additional
    // information.
    SIDEBANDAUDIO_PARAM_A2DP_CODECS = 1,

    // Configured codec information
    //
    // The value is a single Media Codec Capabilities field as defined in table 8.52, section
    // 8.21.5 of AVDTP 1.3. Also, see A2DP 1.3.1 section 4.2.5 and section 4.7.2 for additional
    //information.
    SIDEANDAUDIO_PARAM_A2DP_CONFIGURED_CODEC = 2,

} SIDEBANDAUDIO_PARAMS_A2DP;

//
// Base GUID for Vendor-defined A2DP Sideband Set of Parameters
//
// The audio driver sets the 32 bit Data1 element to a Vendor ID. The upper 16
// bits shall be set to 0. The lower 16 bit shall be set to a valid Company ID
// as defined in Bluetooth Assigned Numbers.
// See https://www.bluetooth.com/specifications/assigned-numbers/company-identifiers
//
// {xxxxxxxx-FE37-468B-AF72-411C0E5A3FFC}
DEFINE_GUID(SIDEBAND_PARAMS_SET_A2DP_VENDOR_BASE,
    0x00000000, 0xfe37, 0x468b, 0xaf, 0x72, 0x41, 0x1c, 0xe, 0x5a, 0x3f, 0xfc);

//
// Macros to get/set the Vendor ID from the VENDOR PARAMS SET derived from SIDEBAND_PARAMS_SET_A2DP_VENDOR_BASE
//
#define VENDOR_ID_MASK 0x0000FFFF
#define GET_VENDOR_ID_FROM_PARAMSET(paramSet) ((paramSet).Data1 & VENDOR_ID_MASK)
#define SET_VENDOR_ID_TO_PARAMSET(paramSet, vendorId) ((paramSet).Data1 = ((vendorId) & VENDOR_ID_MASK))
