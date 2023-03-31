/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

_WdfVersionBuild_

Module Name:

    wdfworkitem.h

Abstract:

    This is the Windows Driver Framework work item DDIs

Revision History:


--*/

#ifndef _WDFWORKITEM_1_9_H_
#define _WDFWORKITEM_1_9_H_



#if (NTDDI_VERSION >= NTDDI_WIN2K)



//
// This is the function that gets called back into the driver
// when the WorkItem fires.
//
typedef
_Function_class_(EVT_WDF_WORKITEM)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
EVT_WDF_WORKITEM(
    _In_
    WDFWORKITEM WorkItem
    );

typedef EVT_WDF_WORKITEM *PFN_WDF_WORKITEM;

typedef struct _WDF_WORKITEM_CONFIG {

    ULONG Size;

    PFN_WDF_WORKITEM EvtWorkItemFunc;

    //
    // If this is TRUE, the workitem will automatically serialize
    // with the event callback handlers of its Parent Object.
    //
    // Parent Object's callback constraints should be compatible
    // with the work item (PASSIVE_LEVEL), or the request will fail.
    //
    BOOLEAN AutomaticSerialization;

} WDF_WORKITEM_CONFIG, *PWDF_WORKITEM_CONFIG;


VOID
FORCEINLINE
WDF_WORKITEM_CONFIG_INIT(
    _Out_ PWDF_WORKITEM_CONFIG Config,
    _In_ PFN_WDF_WORKITEM     EvtWorkItemFunc
    )
{
    RtlZeroMemory(Config, sizeof(WDF_WORKITEM_CONFIG));
    Config->Size = sizeof(WDF_WORKITEM_CONFIG);
    Config->EvtWorkItemFunc = EvtWorkItemFunc;

    Config->AutomaticSerialization = TRUE;
}


//
// WDF Function: WdfWorkItemCreate
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFWORKITEMCREATE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    PWDF_WORKITEM_CONFIG Config,
    _In_
    PWDF_OBJECT_ATTRIBUTES Attributes,
    _Out_
    WDFWORKITEM* WorkItem
    );

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FORCEINLINE
WdfWorkItemCreate(
    _In_
    PWDF_WORKITEM_CONFIG Config,
    _In_
    PWDF_OBJECT_ATTRIBUTES Attributes,
    _Out_
    WDFWORKITEM* WorkItem
    )
{
    return ((PFN_WDFWORKITEMCREATE) WdfFunctions[WdfWorkItemCreateTableIndex])(WdfDriverGlobals, Config, Attributes, WorkItem);
}

//
// WDF Function: WdfWorkItemEnqueue
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_WDFWORKITEMENQUEUE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFWORKITEM WorkItem
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
WdfWorkItemEnqueue(
    _In_
    WDFWORKITEM WorkItem
    )
{
    ((PFN_WDFWORKITEMENQUEUE) WdfFunctions[WdfWorkItemEnqueueTableIndex])(WdfDriverGlobals, WorkItem);
}

//
// WDF Function: WdfWorkItemGetParentObject
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
WDFOBJECT
(*PFN_WDFWORKITEMGETPARENTOBJECT)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFWORKITEM WorkItem
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
WDFOBJECT
FORCEINLINE
WdfWorkItemGetParentObject(
    _In_
    WDFWORKITEM WorkItem
    )
{
    return ((PFN_WDFWORKITEMGETPARENTOBJECT) WdfFunctions[WdfWorkItemGetParentObjectTableIndex])(WdfDriverGlobals, WorkItem);
}

//
// WDF Function: WdfWorkItemFlush
//
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
VOID
(*PFN_WDFWORKITEMFLUSH)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFWORKITEM WorkItem
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
FORCEINLINE
WdfWorkItemFlush(
    _In_
    WDFWORKITEM WorkItem
    )
{
    ((PFN_WDFWORKITEMFLUSH) WdfFunctions[WdfWorkItemFlushTableIndex])(WdfDriverGlobals, WorkItem);
}



#endif // (NTDDI_VERSION >= NTDDI_WIN2K)


#endif // _WDFWORKITEM_1_9_H_
