/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

 BluetoothLEAudioStreaming.h

Abstract:

    This module defines the types needed for audio drivers to indicate support for Bluetooth LE Audio Streaming.

--*/

#pragma once

//
// {5C52FDB5-722A-4AB7-A342-70163B7E9B5C}
// ACX circuit component ID definition for LE Audio render endpoints
//
DEFINE_GUID(GUID_BLUETOOTH_LEAUDIO_RENDER_COMPONENT_ID, 0x5c52fdb5, 0x722a, 0x4ab7, 0xa3, 0x42, 0x70, 0x16, 0x3b, 0x7e, 0x9b, 0x5c);

//
// {1DFF2EE3-AE89-441C-BDE3-24F885C55DF8}
// ACX circuit component ID definition for LE audio capture endpoints
//
DEFINE_GUID(GUID_BLUETOOTH_LEAUDIO_CAPTURE_COMPONENT_ID, 0x1dff2ee3, 0xae89, 0x441c, 0xbd, 0xe3, 0x24, 0xf8, 0x85, 0xc5, 0x5d, 0xf8);