/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

_WdfVersionBuild_

Module Name:

    wdfminiport.h

Abstract:

    Interfaces for WDF usage in a miniport environment

Environment:

    kernel mode only

Revision History:

--*/

#ifndef _WDFMINIPORT_1_9_H_
#define _WDFMINIPORT_1_9_H_



#if (NTDDI_VERSION >= NTDDI_WIN2K)



//
// WDF Function: WdfDeviceMiniportCreate
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFDEVICEMINIPORTCREATE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDRIVER Driver,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES Attributes,
    _In_
    PDEVICE_OBJECT DeviceObject,
    _In_opt_
    PDEVICE_OBJECT AttachedDeviceObject,
    _In_opt_
    PDEVICE_OBJECT Pdo,
    _Out_
    WDFDEVICE* Device
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
WdfDeviceMiniportCreate(
    _In_
    WDFDRIVER Driver,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES Attributes,
    _In_
    PDEVICE_OBJECT DeviceObject,
    _In_opt_
    PDEVICE_OBJECT AttachedDeviceObject,
    _In_opt_
    PDEVICE_OBJECT Pdo,
    _Out_
    WDFDEVICE* Device
    )
{
    return ((PFN_WDFDEVICEMINIPORTCREATE) WdfFunctions[WdfDeviceMiniportCreateTableIndex])(WdfDriverGlobals, Driver, Attributes, DeviceObject, AttachedDeviceObject, Pdo, Device);
}

//
// WDF Function: WdfDriverMiniportUnload
//
typedef
WDFAPI
VOID
(*PFN_WDFDRIVERMINIPORTUNLOAD)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDRIVER Driver
    );

VOID
FORCEINLINE
WdfDriverMiniportUnload(
    _In_
    WDFDRIVER Driver
    )
{
    ((PFN_WDFDRIVERMINIPORTUNLOAD) WdfFunctions[WdfDriverMiniportUnloadTableIndex])(WdfDriverGlobals, Driver);
}



#endif // (NTDDI_VERSION >= NTDDI_WIN2K)


#endif // _WDFMINIPORT_1_9_H_
