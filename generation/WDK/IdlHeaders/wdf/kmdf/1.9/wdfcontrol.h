/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

_WdfVersionBuild_

Module Name:

    wdfcontrol.h

Abstract:

    Defines functions for controller and creating a "controller" NT4 style
    WDFDEVICE handle.

Environment:

    kernel mode only

Revision History:

--*/

#ifndef _WDFCONTROL_1_9_H_
#define _WDFCONTROL_1_9_H_



#if (NTDDI_VERSION >= NTDDI_WIN2K)

typedef
_Function_class_(EVT_WDF_DEVICE_SHUTDOWN_NOTIFICATION)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
EVT_WDF_DEVICE_SHUTDOWN_NOTIFICATION(
    _In_
    WDFDEVICE Device
    );

typedef EVT_WDF_DEVICE_SHUTDOWN_NOTIFICATION *PFN_WDF_DEVICE_SHUTDOWN_NOTIFICATION;

typedef enum _WDF_DEVICE_SHUTDOWN_FLAGS {
    WdfDeviceShutdown = 0x01,
    WdfDeviceLastChanceShutdown = 0x02,
} WDF_DEVICE_SHUTDOWN_FLAGS;



//
// WDF Function: WdfControlDeviceInitAllocate
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
PWDFDEVICE_INIT
(*PFN_WDFCONTROLDEVICEINITALLOCATE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDRIVER Driver,
    _In_
    CONST UNICODE_STRING* SDDLString
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
PWDFDEVICE_INIT
FORCEINLINE
WdfControlDeviceInitAllocate(
    _In_
    WDFDRIVER Driver,
    _In_
    CONST UNICODE_STRING* SDDLString
    )
{
    return ((PFN_WDFCONTROLDEVICEINITALLOCATE) WdfFunctions[WdfControlDeviceInitAllocateTableIndex])(WdfDriverGlobals, Driver, SDDLString);
}

//
// WDF Function: WdfControlDeviceInitSetShutdownNotification
//
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
VOID
(*PFN_WDFCONTROLDEVICEINITSETSHUTDOWNNOTIFICATION)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    PWDFDEVICE_INIT DeviceInit,
    _In_
    PFN_WDF_DEVICE_SHUTDOWN_NOTIFICATION Notification,
    _In_
    UCHAR Flags
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
FORCEINLINE
WdfControlDeviceInitSetShutdownNotification(
    _In_
    PWDFDEVICE_INIT DeviceInit,
    _In_
    PFN_WDF_DEVICE_SHUTDOWN_NOTIFICATION Notification,
    _In_
    UCHAR Flags
    )
{
    ((PFN_WDFCONTROLDEVICEINITSETSHUTDOWNNOTIFICATION) WdfFunctions[WdfControlDeviceInitSetShutdownNotificationTableIndex])(WdfDriverGlobals, DeviceInit, Notification, Flags);
}

//
// WDF Function: WdfControlFinishInitializing
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_WDFCONTROLFINISHINITIALIZING)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
WdfControlFinishInitializing(
    _In_
    WDFDEVICE Device
    )
{
    ((PFN_WDFCONTROLFINISHINITIALIZING) WdfFunctions[WdfControlFinishInitializingTableIndex])(WdfDriverGlobals, Device);
}



#endif // (NTDDI_VERSION >= NTDDI_WIN2K)


#endif // _WDFCONTROL_1_9_H_
