/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

 SidebandAudio.h

Abstract:

    This module defines the types, constants, and functions that are
    exposed to device drivers that interact with the Windows Sideband
    Audio Drivers.

--*/

#pragma once

//
// SIDEBANDAUDIO_DEVICE_DESCRIPTOR
//
//  Describes the Container ID and number of endpoints on the device.
//
typedef struct _SIDEBANDAUDIO_DEVICE_DESCRIPTOR
{
    // Number of Audio endpoints on the devices that can be sidebanded
    // This excludes the feedback endpoints
    ULONG               NumberOfEndpoints;
}SIDEBANDAUDIO_DEVICE_DESCRIPTOR, *PSIDEBANDAUDIO_DEVICE_DESCRIPTOR;

typedef struct _SIDEBANDAUDIO_ENDPOINT_CAPABILITIES
{
    BOOL    Volume;
    BOOL    Mute;
    BOOL    Sidetone;
    BOOL    Feedback;
}SIDEBANDAUDIO_ENDPOINT_CAPABILITIES;


//
// SIDEBANDAUDIO_ENDPOINT_DESCRIPTOR
//
// Describes the characteristics of the audio endpoint
// driver. This information does not change while the interface is enabled
// but can change while disabled.
//
// ----------------------------------------------------------
typedef struct _SIDEBANDAUDIO_ENDPOINT_DESCRIPTOR
{
    // Size of Descriptor including storage for UNICODE_STRING and any additional data
    ULONG                                   CbSize;

    // Pnp Container ID for connected device
    GUID                                    ContainerId;

    // KSPIN_DESCRIPTOR.Category to indicate form factor e.g. KSNODETYPE_HEADSET_MICROPHONE
    GUID                                    Category;

    // Indicates render/capture
    KSPIN_DATAFLOW                          Direction;

    // Capabilities of the endpoint like (mute, volume, sidetone, etc.)
    SIDEBANDAUDIO_ENDPOINT_CAPABILITIES     Capabilities;

    // Storage for friendly name is attached after descriptor and is
    // included in cbSize
    UNICODE_STRING                          FriendlyName;

    // Size of data returned by IOCTL_SBAUD_GET_VOLUMEPROPERTYVALUES
    ULONG                                   VolumePropertyValuesSize;

    // Size of data returned by IOCTL_SBAUD_GET_SIDETONE_VOLUMEPROPERTYVALUES
    ULONG                                   SidetoneVolumePropertyValueSize;

    // Size of data returned by IOCTL_SBAUD_GET_MUTEPROPERTYVALUES
    ULONG                                   MutePropertyValuesSize;

}SIDEBANDAUDIO_ENDPOINT_DESCRIPTOR, *PSIDEBANDAUDIO_ENDPOINT_DESCRIPTOR;

#if (NTDDI_VERSION >= NTDDI_WIN10_FE)
//
// SIDEBANDAUDIO_ENDPOINT_DESCRIPTOR2
//
// The second version of the SIDEBANDAUDIO_ENDPOINT_DESCRIPTOR struct.
// This version allows the controller driver to provide custom device properties to
// add to the audio device's interface.
//
// ----------------------------------------------------------
typedef struct _SIDEBANDAUDIO_ENDPOINT_DESCRIPTOR2
{
    // Start of _SIDEBANDAUDIO_ENDPOINT_DESCRIPTOR

    // Size of Descriptor including storage for UNICODE_STRING and any additional data
    ULONG                                   CbSize;

    // Pnp Container ID for connected device
    GUID                                    ContainerId;

    // KSPIN_DESCRIPTOR.Category to indicate form factor e.g. KSNODETYPE_HEADSET_MICROPHONE
    GUID                                    Category;

    // Indicates render/capture
    KSPIN_DATAFLOW                          Direction;

    // Capabilities of the endpoint like (mute, volume, sidetone, etc.)
    SIDEBANDAUDIO_ENDPOINT_CAPABILITIES     Capabilities;

    // Storage for friendly name is attached after descriptor and is
    // included in cbSize
    UNICODE_STRING                          FriendlyName;

    // Size of data returned by IOCTL_SBAUD_GET_VOLUMEPROPERTYVALUES
    ULONG                                   VolumePropertyValuesSize;

    // Size of data returned by IOCTL_SBAUD_GET_SIDETONE_VOLUMEPROPERTYVALUES
    ULONG                                   SidetoneVolumePropertyValueSize;

    // Size of data returned by IOCTL_SBAUD_GET_MUTEPROPERTYVALUES
    ULONG                                   MutePropertyValuesSize;

    // End of _SIDEBANDAUDIO_ENDPOINT_DESCRIPTOR

    // Number of device properties that shall be added to the audio filter factory interface.
    ULONG                                   FilterInterfacePropertyCount;

    DEVPROPERTY*                            FilterInterfaceProperties;
}SIDEBANDAUDIO_ENDPOINT_DESCRIPTOR2, *PSIDEBANDAUDIO_ENDPOINT_DESCRIPTOR2;
#endif // (NTDDI_VERSION >= NTDDI_WIN10_FE)

//
// SIDEBANDAUDIO_VOLUME_PARAMS
//
// Describes the endpoint index and volume value
//
// ----------------------------------------------------------
typedef struct _SIDEBANDAUDIO_VOLUME_PARAMS
{
    // 0 based index indicating the Endpoint on device
    ULONG   EpIndex;

    // Indicates whether IOCTL current value is requested
    // or IRP should complete upon next change in value
    BOOL    Immediate;

    LONG    Channel;

    LONG    Value;
}SIDEBANDAUDIO_VOLUME_PARAMS, *PSIDEBANDAUDIO_VOLUME_PARAMS;


//
// SIDEBANDAUDIO_MUTE_PARAMS
//
// Describes the endpoint index and mute value
//
// ----------------------------------------------------------
typedef struct _SIDEBANDAUDIO_MUTE_PARAMS
{
    // 0 based index indicating the Endpoint on device
    ULONG   EpIndex;

    // Indicates whether IOCTL current value is requested
    // or IRP should complete upon next change in value
    BOOL    Immediate;

    LONG    Channel;

    BOOL    Value;
}SIDEBANDAUDIO_MUTE_PARAMS, *PSIDEBANDAUDIO_MUTE_PARAMS;


//
// SIDEBANDAUDIO_STREAM_STATUS_PARAMS
//
// Describes the endpoint index and Device Error NTSTATUS
//
// ----------------------------------------------------------
typedef struct _SIDEBANDAUDIO_STREAM_STATUS_PARAMS
{
    // 0 based index indicating the Endpoint on device
    ULONG       EpIndex;

    // Indicates whether IOCTL current value is requested
    // or IRP should complete upon next change in value
    BOOL        Immediate;

    // Indicates status of stream including cause of any failure
    NTSTATUS    Status;
}SIDEBANDAUDIO_STREAM_STATUS_PARAMS, *PSIDEBANDAUDIO_STREAM_STATUS_PARAMS;


//
// SIDEBANDAUDIO_CONNECTION_PARAMS
//
// Describes the endpoint index and Connection value
//
// ----------------------------------------------------------
typedef struct _SIDEBANDAUDIO_CONNECTION_PARAMS
{
    // 0 based index indicating the Endpoint on device
    ULONG   EpIndex;

    // Indicates whether IOCTL current value is requested
    // or IRP should complete upon next change in value
    BOOL    Immediate;

    // Indicates whether the endpoint is connected or not
    // Could reflect jack states or wireless connection
    BOOL    Connected;
}SIDEBANDAUDIO_CONNECTION_PARAMS, *PSIDEBANDAUDIO_CONNECTION_PARAMS;

//
// SIDEBANDAUDIO_SUPPORTED_FORMATS
//
//  Describes the formats supported by the Audio Endpoint.
//
//
typedef struct _SIDEBANDAUDIO_SUPPORTED_FORMATS
{
    // Size of structure including storage for Formats Array allocated
    // after the struct
    ULONG               CbSize;

    // 0 based index indicating the Endpoint on device
    ULONG               EpIndex;

    // Number of KSDATAFORMAT structures
    ULONG               NumFormats;

    // Array of pointers of KSDATAFORMAT
    PKSDATAFORMAT       *Formats;
}SIDEBANDAUDIO_SUPPORTED_FORMATS, *PSIDEBANDAUDIO_SUPPORTED_FORMATS;

//
// Sideband Audio parameters Set
// Microsoft Sideband standard Set of Parameters
// {BF34616B-8265-4D70-ADB2-91B350CCD5D2}
DEFINE_GUID(SIDEBANDAUDIO_PARAMS_SET_STANDARD,
    0xbf34616b, 0x8265, 0x4d70, 0xad, 0xb2, 0x91, 0xb3, 0x50, 0xcc, 0xd5, 0xd2);

//
// Parameters defined for SIDEBANDAUDIO_PARAMS_SET_STANDARD
// Microsoft Type IDs
//
typedef enum _SIDEBANDAUDIO_PARAMS_MSFT_TYPE_ID
{
    SBAUD_PARAMS_TYPE_RESERVED

}SIDEBANDAUDIO_PARAMS_MSFT_TYPE_ID;

//
// SIDEBANDAUDIO_IO_PARAM_HEADER
//
// Describes the size and type of parameter
//
typedef union
{
    struct
    {
        // Parameter Set
        // This could be Microsoft Standard set or IHV defined
        GUID                ParamSet;

        // Type of parameter
        ULONG               TypeId;

        // Size in bytes of Parameter
        // In case of IOCTL_SBAUD_GET_SIOPxxx Size will indicate
        // size of any extra input parameter
        ULONG               Size;
    };
    LONGLONG Alignment;
}SIDEBANDAUDIO_IO_PARAM_HEADER, *PSIDEBANDAUDIO_IO_PARAM_HEADER;

//
// SIDEBANDAUDIO_SIOP_REQUEST_PARAM
//
// Describes the variable I/O parameter
//
// ----------------------------------------------------------
typedef union
{
    struct
    {
        // 0 based index indicating the Endpoint on device
        ULONG                           EpIndex;

        SIDEBANDAUDIO_IO_PARAM_HEADER   RequestedSiop;
    };
    LONGLONG Alignment;
}SIDEBANDAUDIO_SIOP_REQUEST_PARAM, *PSIDEBANDAUDIO_SIOP_REQUEST_PARAM;

//
// SIDEBANDAUDIO_STREAM_OPEN_PARAMS
//
// Describes the variable I/O parameters for IOCTLs
//
// ----------------------------------------------------------
typedef union
{
    struct
    {
        // 0 based index indicating the Endpoint on device
        ULONG                           EpIndex;

        // Stream Format KSDATAFORMAT
        PKSDATAFORMAT                   Format;

        // Number of Input parameters
        ULONG                           SiopCount;
    };
    LONGLONG Alignment;
}SIDEBANDAUDIO_STREAM_OPEN_PARAMS, *PSIDEBANDAUDIO_STREAM_OPEN_PARAMS;

//
// SIDEBANDAUDIO_SIDETONE_DESCRIPTOR
//
//  Describes mute and volume components of the sidetone topology
//
//
typedef struct _SIDEBANDAUDIO_SIDETONE_DESCRIPTOR
{
    LONG                Volume;
    BOOL                Mute;
}SIDEBANDAUDIO_SIDETONE_DESCRIPTOR, *PSIDEBANDAUDIO_SIDETONE_DESCRIPTOR;


//
// SIDEBANDAUDIO_SIDETONE_PARAMS
//
// Describes the endpoint index and sidetone value
//
// ----------------------------------------------------------
typedef struct _SIDEBANDAUDIO_SIDETONE_PARAMS
{
    // 0 based index indicating the Endpoint on device
    ULONG                               EpIndex;

    // Indicates whether IOCTL current value is requested
    // or IRP should complete upon next change in value
    BOOL                                Immediate;

    // Sidetone Volume and Mute per channel
    // Set as ULONG(-1) if channel specific sidetone values
    // are not required
    LONG                                Channel;

    SIDEBANDAUDIO_SIDETONE_DESCRIPTOR   Sidetone;
}SIDEBANDAUDIO_SIDETONE_PARAMS, *PSIDEBANDAUDIO_SIDETONE_PARAMS;

//
// SIDEBANDAUDIO_DEVICE_ERROR
//
//  Describes error reported on the Device
//
//
typedef struct _SIDEBANDAUDIO_DEVICE_ERROR
{
    // 0 based index indicating the Endpoint on device
    ULONG               EpIndex;

    // Indicates whether IOCTL current value is requested
    // or IRP should complete upon next change in value
    BOOL                Immediate;

    NTSTATUS            Status;
}SIDEBANDAUDIO_DEVICE_ERROR, *PSIDEBANDAUDIO_DEVICE_ERROR;

// IOCTL_SBAUD_SET_DEVICE_CLAIMED parameters
// (IN) BOOL  - TRUE indicates device was claimed by client
//            - FALSE indicates device was not claimed and should be inband.

//
// The control codes used by an audio driver when cooperating with the
// Audio class drivers to operate a Sideband connection.
//
#define SIDEBANDAUDIO_IOCTL(_index_) \
    CTL_CODE (FILE_DEVICE_UNKNOWN, _index_, METHOD_NEITHER, FILE_ANY_ACCESS)

#define IOCTL_SBAUD_GET_DEVICE_DESCRIPTOR                   SIDEBANDAUDIO_IOCTL (1)
#define IOCTL_SBAUD_GET_ERROR_STATUS_UPDATE                 SIDEBANDAUDIO_IOCTL (2)
#define IOCTL_SBAUD_GET_ENDPOINT_DESCRIPTOR                 SIDEBANDAUDIO_IOCTL (3)
#define IOCTL_SBAUD_GET_CONNECTION_STATUS_UPDATE            SIDEBANDAUDIO_IOCTL (4)
#define IOCTL_SBAUD_GET_VOLUMEPROPERTYVALUES                SIDEBANDAUDIO_IOCTL (5)
#define IOCTL_SBAUD_SET_VOLUME                              SIDEBANDAUDIO_IOCTL (6)
#define IOCTL_SBAUD_GET_VOLUME_STATUS_UPDATE                SIDEBANDAUDIO_IOCTL (7)
#define IOCTL_SBAUD_GET_MUTEPROPERTYVALUES                  SIDEBANDAUDIO_IOCTL (8)
#define IOCTL_SBAUD_SET_MUTE                                SIDEBANDAUDIO_IOCTL (9)
#define IOCTL_SBAUD_GET_MUTE_STATUS_UPDATE                  SIDEBANDAUDIO_IOCTL (10)
#define IOCTL_SBAUD_GET_SIDETONE_VOLUMEPROPERTYVALUES       SIDEBANDAUDIO_IOCTL (11)
#define IOCTL_SBAUD_GET_SIDETONE_STATUS_UPDATE              SIDEBANDAUDIO_IOCTL (12)
#define IOCTL_SBAUD_SET_SIDETONE_PROPERTY                   SIDEBANDAUDIO_IOCTL (13)
#define IOCTL_SBAUD_STREAM_OPEN                             SIDEBANDAUDIO_IOCTL (14)
#define IOCTL_SBAUD_STREAM_CLOSE                            SIDEBANDAUDIO_IOCTL (15)
#define IOCTL_SBAUD_STREAM_START                            SIDEBANDAUDIO_IOCTL (16)
#define IOCTL_SBAUD_STREAM_SUSPEND                          SIDEBANDAUDIO_IOCTL (17)
#define IOCTL_SBAUD_GET_STREAM_STATUS_UPDATE                SIDEBANDAUDIO_IOCTL (18)
#define IOCTL_SBAUD_GET_SUPPORTED_FORMATS                   SIDEBANDAUDIO_IOCTL (19)
#define IOCTL_SBAUD_GET_SIOP                                SIDEBANDAUDIO_IOCTL (20)
#define IOCTL_SBAUD_GET_SIOP_UPDATE                         SIDEBANDAUDIO_IOCTL (21)
#define IOCTL_SBAUD_SET_SIOP                                SIDEBANDAUDIO_IOCTL (23)
#define IOCTL_SBAUD_SET_DEVICE_CLAIMED                      SIDEBANDAUDIO_IOCTL (24)

#if (NTDDI_VERSION >= NTDDI_WIN10_FE)
#define IOCTL_SBAUD_GET_ENDPOINT_DESCRIPTOR2                SIDEBANDAUDIO_IOCTL (25)
#endif // (NTDDI_VERSION >= NTDDI_WIN10_FE)
