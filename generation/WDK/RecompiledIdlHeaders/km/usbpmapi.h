/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    UsbPmApi.w

Abstract:

    The USB Policy Manager API.

Environment:

    User-mode and Kernel mode.

--*/

#pragma once

#if(NTDDI_VERSION >= NTDDI_WIN10_RS5)

EXTERN_C_START

#pragma warning(push)
#pragma warning(disable:4201) // nonstandard extension used : nameless struct/union
#include <pshpack1.h>

#include "UsbCTypes.h"

#define  USBPMAPI_VERSION_1     1

DECLARE_HANDLE(USBPM_CLIENT);
DECLARE_HANDLE(USBPM_HUB);
DECLARE_HANDLE(USBPM_CONNECTOR);

typedef enum _USBPM_ACCESS_TYPE
{
    UsbPmAccessQuery = 1,
    UsbPmAccessAssignConnectorPowerLevel = 2,
    UsbPmAccessAll = (UsbPmAccessQuery | UsbPmAccessAssignConnectorPowerLevel)
} USBPM_ACCESS_TYPE, *PUSBPM_ACCESS_TYPE;

typedef enum _USBPM_EVENT_TYPE
{
    UsbPmEventPolicyManagerArrival = 0,
    UsbPmEventPolicyManagerRemoval = 1,
    UsbPmEventHubArrival = 2,
    UsbPmEventHubRemoval = 3,
    UsbPmEventConnectorStateChange = 4
} USBPM_EVENT_TYPE;

typedef struct _USBPM_EVENT_CALLBACK_PARAMS
{
    USBPM_EVENT_TYPE EventType;

    union {

        struct {
            ULONG AccessGranted;
        } PolicyManagerArrival;

        struct {
            USBPM_HUB HubHandle;
        } HubArrivalRemoval;

        struct {
            USBPM_CONNECTOR ConnectorHandle;
        } ConnectorStateChange;

    } EventData;

    PVOID Context;

} USBPM_EVENT_CALLBACK_PARAMS, *PUSBPM_EVENT_CALLBACK_PARAMS;

typedef struct _USBPM_HUB_PROPERTIES
{
    USBPM_HUB ParentHubHandle;
    USBPM_HUB HubHandle;
    ULONG ConnectorCount;
} USBPM_HUB_PROPERTIES, *PUSBPM_HUB_PROPERTIES;

VOID
FORCEINLINE
USBPM_HUB_PROPERTIES_INIT(
    _Out_ PUSBPM_HUB_PROPERTIES Properties
    )
{
    RtlZeroMemory(Properties, sizeof(*Properties));
}

typedef struct _USBPM_HUB_CONNECTOR_HANDLES
{
    USBPM_HUB HubHandle;
    ULONG ConnectorCount;
    USBPM_CONNECTOR *ConnectorHandles;
} USBPM_HUB_CONNECTOR_HANDLES, *PUSBPM_HUB_CONNECTOR_HANDLES;

VOID
FORCEINLINE
USBPM_HUB_CONNECTOR_HANDLES_INIT(
    _Out_ PUSBPM_HUB_CONNECTOR_HANDLES HubConnectorHandles,
    _In_ ULONG ConnectorCount,
    _Out_writes_all_(ConnectorCount)
        USBPM_CONNECTOR *ConnectorHandlesBuffer
    )
{
    RtlZeroMemory(HubConnectorHandles, sizeof(*HubConnectorHandles));
    HubConnectorHandles->ConnectorCount = ConnectorCount;
    HubConnectorHandles->ConnectorHandles = ConnectorHandlesBuffer;
    RtlZeroMemory(ConnectorHandlesBuffer, sizeof(USBPM_CONNECTOR) * ConnectorCount);
}

typedef struct _USBPM_CONNECTOR_PROPERTIES
{
    USBPM_CONNECTOR ConnectorHandle;
    USBPM_HUB ParentHubHandle;
    ULONG64 ConnectorId;
    ULONG SupportedTypeCOperatingModes; // Bitwise-OR of USBC_OPERATING_MODE
    ULONG SupportedTypeCSourceCurrentAdvertisements;  // Bitwise-OR of USBC_CURRENT
    BOOLEAN IsTypeCAudioAccessorySupported;
    BOOLEAN IsPdSupported;
    ULONG SupportedPowerRoles;    // Bitwise-OR of USBC_POWER_ROLE
} USBPM_CONNECTOR_PROPERTIES, *PUSBPM_CONNECTOR_PROPERTIES;

VOID
FORCEINLINE
USBPM_CONNECTOR_PROPERTIES_INIT (
    _Out_ PUSBPM_CONNECTOR_PROPERTIES Properties
    )
{
    RtlZeroMemory(Properties, sizeof(*Properties));
}

#define USBPM_MAX_CAPS_COUNT 7

typedef struct _USBPM_CONNECTOR_STATE
{
    USBPM_CONNECTOR ConnectorHandle;
    ULONG ChangeToken;
    BOOLEAN Attached;
    ULONG AttachCount;
    USBC_PARTNER Partner;
    USBC_CURRENT CurrentAdvertisement;
    USBC_PD_CONN_STATE PdConnState;
    USBC_PD_REQUEST_DATA_OBJECT Rdo;
    USBC_DATA_ROLE DataRole;
    USBC_POWER_ROLE PowerRole;
    UINT8 SourceCapsCount;
    USBC_PD_POWER_DATA_OBJECT SourceCaps[USBPM_MAX_CAPS_COUNT];
    UINT8 SinkCapsCount;
    USBC_PD_POWER_DATA_OBJECT SinkCaps[USBPM_MAX_CAPS_COUNT];
    UINT8 PartnerSourceCapsCount;
    USBC_PD_POWER_DATA_OBJECT PartnerSourceCaps[USBPM_MAX_CAPS_COUNT];
    ULONG PdAlternateModesEnteredCount;
} USBPM_CONNECTOR_STATE, *PUSBPM_CONNECTOR_STATE;

VOID
FORCEINLINE
USBPM_CONNECTOR_STATE_INIT (
    _Out_ PUSBPM_CONNECTOR_STATE ConnectorState
    )
{
    RtlZeroMemory(ConnectorState, sizeof(*ConnectorState));
}

typedef
_Function_class_(EVT_USBPM_CONNECTOR_CHANGE)
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
EVT_USBPM_EVENT_CALLBACK(
    _In_ PUSBPM_EVENT_CALLBACK_PARAMS Params
);

typedef EVT_USBPM_EVENT_CALLBACK *PFN_USBPM_EVENT_CALLBACK;

typedef struct _USBPM_CLIENT_CONFIG_EXTRA_INFO
{
#ifdef _KERNEL_MODE
    ULONG Size;
    PDEVICE_OBJECT WdmDeviceObject;
#endif
} USBPM_CLIENT_CONFIG_EXTRA_INFO, *PUSBPM_CLIENT_CONFIG_EXTRA_INFO;

#ifdef _KERNEL_MODE
VOID
FORCEINLINE
USBPM_CLIENT_CONFIG_EXTRA_INFO_INIT(
    _Out_ PUSBPM_CLIENT_CONFIG_EXTRA_INFO ExtraInfo,
    _In_ PDEVICE_OBJECT WdmDeviceObject
    )
{
    RtlZeroMemory(ExtraInfo, sizeof(*ExtraInfo));

    ExtraInfo->WdmDeviceObject = WdmDeviceObject;
}
#endif

typedef struct _USBPM_CLIENT_CONFIG
{
    ULONG Version;
    ULONG AccessDesired;    // bitwise-OR'ed of USBPM_ACCESS_TYPE values.
    PFN_USBPM_EVENT_CALLBACK EventCallback;
    PVOID Context;
    PUSBPM_CLIENT_CONFIG_EXTRA_INFO ExtraInfo;
} USBPM_CLIENT_CONFIG, *PUSBPM_CLIENT_CONFIG;

VOID
FORCEINLINE
USBPM_CLIENT_CONFIG_INIT(
    _Out_ PUSBPM_CLIENT_CONFIG ClientConfig,
    _In_ ULONG AccessDesired,
    _In_ PFN_USBPM_EVENT_CALLBACK EventCallback
#ifdef _KERNEL_MODE
    ,_In_ PUSBPM_CLIENT_CONFIG_EXTRA_INFO ExtraInfo
#endif
    )
{
    RtlZeroMemory(ClientConfig, sizeof(*ClientConfig));

    ClientConfig->Version = USBPMAPI_VERSION_1;
    ClientConfig->AccessDesired = AccessDesired;
    ClientConfig->EventCallback = EventCallback;
    ClientConfig->Context = NULL;
#ifdef _KERNEL_MODE
    ClientConfig->ExtraInfo = ExtraInfo;
#endif
}

typedef enum _USBPM_ASSIGN_POWER_LEVEL_PARAMS_FORMAT
{
    UsbPmAssignPowerLevelParamsFormatInvalid = 0,
    UsbPmAssignPowerLevelParamsFormatUcsi = 1,
    UsbPmAssignPowerLevelParamsFormatRdo = 2
} USBPM_ASSIGN_POWER_LEVEL_PARAMS_FORMAT, *PUSBPM_ASSIGN_POWER_LEVEL_PARAMS_FORMAT;

typedef struct _USBPM_ASSIGN_CONNECTOR_POWER_LEVEL_PARAMS
{
    USBC_POWER_ROLE PowerRole;
    USBPM_ASSIGN_POWER_LEVEL_PARAMS_FORMAT Format;

    union
    {
        struct
        {
            UINT8 MaximumPdPowerIn500mW;
            USBC_UCSI_SET_POWER_LEVEL_C_CURRENT MaximumTypeCCurrent;
        } Ucsi;

        struct
        {
            USBC_PD_REQUEST_DATA_OBJECT	Rdo;
        } Rdo;
    };
} USBPM_ASSIGN_CONNECTOR_POWER_LEVEL_PARAMS, *PUSBPM_ASSIGN_CONNECTOR_POWER_LEVEL_PARAMS;

VOID
FORCEINLINE
USBPM_ASSIGN_CONNECTOR_POWER_LEVEL_PARAMS_INIT (
    _Out_ PUSBPM_ASSIGN_CONNECTOR_POWER_LEVEL_PARAMS Params,
    _In_ USBC_POWER_ROLE PowerRole,
    _In_ USBPM_ASSIGN_POWER_LEVEL_PARAMS_FORMAT Format
    )
{
    RtlZeroMemory(Params, sizeof(*Params));

    Params->PowerRole = PowerRole;
    Params->Format = Format;
}

_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
UsbPm_Register (
    _In_ PUSBPM_CLIENT_CONFIG ClientConfig,
    _Out_ USBPM_CLIENT *ClientHandle
);

_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
UsbPm_Deregister (
    _In_ USBPM_CLIENT ClientHandle
);

_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
UsbPm_RetrieveHubProperties(
    _In_ USBPM_CLIENT ClientHandle,
    _In_ USBPM_HUB HubHandle,
    _Out_ PUSBPM_HUB_PROPERTIES HubProperties
);

_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
UsbPm_RetrieveHubConnectorHandles(
    _In_ USBPM_CLIENT ClientHandle,
    _In_ USBPM_HUB HubHandle,
    _Out_ PUSBPM_HUB_CONNECTOR_HANDLES HubConnectorHandles
);

_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
UsbPm_RetrieveConnectorProperties(
    _In_ USBPM_CLIENT ClientHandle,
    _In_ USBPM_CONNECTOR ConnectorHandle,
    _Out_ PUSBPM_CONNECTOR_PROPERTIES ConnectorProperties
);

_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
UsbPm_RetrieveConnectorState(
    _In_ USBPM_CLIENT ClientHandle,
    _In_ USBPM_CONNECTOR ConnectorHandle,
    _Out_ PUSBPM_CONNECTOR_STATE ConnectorState
);

_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
UsbPm_AssignConnectorPowerLevel(
    _In_ USBPM_CLIENT ClientHandle,
    _In_ USBPM_CONNECTOR ConnectorHandle,
    _In_ PUSBPM_ASSIGN_CONNECTOR_POWER_LEVEL_PARAMS Params
); 

#pragma warning(pop)
#include <poppack.h>

EXTERN_C_END

//
// WPP tracing for enums
//
// begin_wpp config
//
// CUSTOM_TYPE(USBPM_ACCESS_TYPE, ItemEnum(_USBPM_ACCESS_TYPE));
// CUSTOM_TYPE(USBPM_EVENT_TYPE, ItemEnum(_USBPM_EVENT_TYPE));
// CUSTOM_TYPE(USBPM_ASSIGN_POWER_LEVEL_PARAMS_FORMAT, ItemEnum(_USBPM_ASSIGN_POWER_LEVEL_PARAMS_FORMAT));
//
// end_wpp
//

#endif // NTDDI_VERSION
