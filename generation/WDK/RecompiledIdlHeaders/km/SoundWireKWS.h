//
// Copyright (c) Microsoft Corporation. All rights reserved.
//

#pragma once

//
// KSPROPERTYSETID_SdcaKws
//
#define STATIC_KSPROPERTYSETID_SdcaKws\
    0xe8e89106L, 0xe063, 0x4811, 0x82, 0x9a, 0x57, 0xbb, 0x2e, 0x57, 0xa1, 0x9c
DEFINE_GUIDSTRUCT("e8e89106-e063-4811-829a-57bb2e57a19c", KSPROPERTYSETID_SdcaKws);
#define KSPROPERTYSETID_SdcaKws DEFINE_GUIDNAMED(KSPROPERTYSETID_SdcaKws)

#ifndef ANYSIZE_ARRAY
#define ANYSIZE_ARRAY 1
#endif

typedef enum {
    KSPROPERTY_SDCAKWS_DEVICE_CAPABILITY = 1,   // get
    KSPROPERTY_SDCAKWS_VAD_CAPABILITY = 2,          // get
    KSPROPERTY_SDCAKWS_ACCESS_EVENTS = 3,           // set
    KSPROPERTY_SDCAKWS_PREPARE_VAD_STREAM = 4,      // set
    KSPROPERTY_SDCAKWS_CLEANUP_VAD_STREAM = 5,      // set
} KSPROPERTY_SDCAKWS;

typedef enum _DATA_PATHS
{
    SupportedDataPathsRawPCM = 0x1,
    SupportedDataPathsBufferedRaw = 0x2
} DATA_PATHS, * PDATA_PATHS;

typedef enum _HISTORY_BUFFER_MODES
{
    HistoryBufferModesFlowThrough = 0x1,
    HistoryBufferModesFastStream = 0x2,
    HistoryBufferModesRead = 0x4
} HISTORY_BUFFER_MODES, * PHISTORY_BUFFER_MODES;

typedef struct _CLOCK_DESCRIPTOR
{
    UINT8 EntityId;
    BOOLEAN ClockValidControlPresent;
    ULONG ClockValidInterruptPresent;
} CLOCK_DESCRIPTOR, * PCLOCK_DESCRIPTOR;

typedef struct _DEVICE_KWS_CAPABILITY_DESCRIPTOR
{
    ULONG DataPathsSupported; // bitmask of DATA_PATHS
    UINT8 ClockSelectorEntityId;
    CLOCK_DESCRIPTOR ClockDescriptorInternal;
    CLOCK_DESCRIPTOR ClockDescriptorExternal;
} DEVICE_KWS_CAPABILITY_DESCRIPTOR, * PDEVICE_KWS_CAPABILITY_DESCRIPTOR;

typedef struct _VAD_DESCRIPTOR
{
    ULONG DataPort;
    UINT8 SMPUEntityId;
    UINT8 VadInterruptPosition;
    ULONG SupportedHistoryBufferModes; // bitmask of HISTORY_BUFFER_MODES
    ULONG HistoryBufferPreamble;
    ULONG HistoryBufferPreambleOverFlow;
    ULONG HistoryBufferStart;
    ULONG HistoryBufferLength;
    ULONG HistoryBufferMessageOffsetAccessMode;
    ULONG HistoryBufferMessageOffsetDCValue;
    ULONG HistoryBufferMessageLengthAccessMode;
    ULONG HistoryBufferMessageLengthDCValue;
    ULONG FormatCount;
    WAVEFORMATEXTENSIBLE Format[ANYSIZE_ARRAY];
} VAD_DESCRIPTOR, * PVAD_DESCRIPTOR;

typedef struct _SDCA_KWS_NOTIFICATIONS
{
    KEVENT Suspend;
    KEVENT Resume;
} SDCA_KWS_NOTIFICATIONS, *PSDCA_KWS_NOTIFICATIONS;

typedef struct _SDCA_KWS_PREPARE_PARAMS
{
    ULONG EndpointId;
    WAVEFORMATEXTENSIBLE DetectionFormat;
} SDCA_KWS_PREPARE_PARAMS, *PSDCA_KWS_PREPARE_PARAMS;


