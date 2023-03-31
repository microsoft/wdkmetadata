/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

_WdfVersionBuild_

Module Name:

    WdfDmaEnabler.h

Abstract:

    WDF DMA Enabler support

Environment:

    Kernel mode only.

Notes:

Revision History:

--*/

#ifndef _WDFDMAENABLER_1_9_H_
#define _WDFDMAENABLER_1_9_H_



#if (NTDDI_VERSION >= NTDDI_WIN2K)

typedef enum _WDF_DMA_PROFILE {
    WdfDmaProfileInvalid = 0,
    WdfDmaProfilePacket,
    WdfDmaProfileScatterGather,
    WdfDmaProfilePacket64,
    WdfDmaProfileScatterGather64,
    WdfDmaProfileScatterGatherDuplex,
    WdfDmaProfileScatterGather64Duplex,
} WDF_DMA_PROFILE;

typedef enum _WDF_DMA_DIRECTION {
    WdfDmaDirectionReadFromDevice = FALSE,
    WdfDmaDirectionWriteToDevice = TRUE,
} WDF_DMA_DIRECTION;



//
// DMA power event callbacks
//
typedef
_Function_class_(EVT_WDF_DMA_ENABLER_FILL)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_WDF_DMA_ENABLER_FILL(
    _In_
    WDFDMAENABLER DmaEnabler
    );

typedef EVT_WDF_DMA_ENABLER_FILL *PFN_WDF_DMA_ENABLER_FILL;

typedef
_Function_class_(EVT_WDF_DMA_ENABLER_FLUSH)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_WDF_DMA_ENABLER_FLUSH(
    _In_
    WDFDMAENABLER DmaEnabler
    );

typedef EVT_WDF_DMA_ENABLER_FLUSH *PFN_WDF_DMA_ENABLER_FLUSH;

typedef
_Function_class_(EVT_WDF_DMA_ENABLER_ENABLE)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_WDF_DMA_ENABLER_ENABLE(
    _In_
    WDFDMAENABLER DmaEnabler
    );

typedef EVT_WDF_DMA_ENABLER_ENABLE *PFN_WDF_DMA_ENABLER_ENABLE;

typedef
_Function_class_(EVT_WDF_DMA_ENABLER_DISABLE)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_WDF_DMA_ENABLER_DISABLE(
    _In_
    WDFDMAENABLER DmaEnabler
    );

typedef EVT_WDF_DMA_ENABLER_DISABLE *PFN_WDF_DMA_ENABLER_DISABLE;

typedef
_Function_class_(EVT_WDF_DMA_ENABLER_SELFMANAGED_IO_START)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_WDF_DMA_ENABLER_SELFMANAGED_IO_START(
    _In_
    WDFDMAENABLER DmaEnabler
    );

typedef EVT_WDF_DMA_ENABLER_SELFMANAGED_IO_START *PFN_WDF_DMA_ENABLER_SELFMANAGED_IO_START;

typedef
_Function_class_(EVT_WDF_DMA_ENABLER_SELFMANAGED_IO_STOP)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_WDF_DMA_ENABLER_SELFMANAGED_IO_STOP(
    _In_
    WDFDMAENABLER DmaEnabler
    );

typedef EVT_WDF_DMA_ENABLER_SELFMANAGED_IO_STOP *PFN_WDF_DMA_ENABLER_SELFMANAGED_IO_STOP;


#define  WDF_DMA_ENABLER_UNLIMITED_FRAGMENTS ((ULONG) -1)

typedef struct _WDF_DMA_ENABLER_CONFIG {
    //
    // Size of this structure in bytes
    //
    ULONG                Size;

    //
    // One of the above WDF_DMA_PROFILES
    //
    WDF_DMA_PROFILE      Profile;

    //
    // Maximum DMA Transfer handled in bytes.
    //
    size_t               MaximumLength;

    //
    // The various DMA PnP/Power event callbacks
    //
    PFN_WDF_DMA_ENABLER_FILL                  EvtDmaEnablerFill;
    PFN_WDF_DMA_ENABLER_FLUSH                 EvtDmaEnablerFlush;
    PFN_WDF_DMA_ENABLER_DISABLE               EvtDmaEnablerDisable;
    PFN_WDF_DMA_ENABLER_ENABLE                EvtDmaEnablerEnable;
    PFN_WDF_DMA_ENABLER_SELFMANAGED_IO_START  EvtDmaEnablerSelfManagedIoStart;
    PFN_WDF_DMA_ENABLER_SELFMANAGED_IO_STOP   EvtDmaEnablerSelfManagedIoStop;

} WDF_DMA_ENABLER_CONFIG, *PWDF_DMA_ENABLER_CONFIG;

VOID
FORCEINLINE
WDF_DMA_ENABLER_CONFIG_INIT(
    _Out_ PWDF_DMA_ENABLER_CONFIG Config,
    _In_  WDF_DMA_PROFILE    Profile,
    _In_  size_t             MaximumLength
    )
{
    RtlZeroMemory(Config, sizeof(WDF_DMA_ENABLER_CONFIG));

    Config->Size = sizeof(WDF_DMA_ENABLER_CONFIG);
    Config->Profile = Profile;
    Config->MaximumLength = MaximumLength;
}

//
// WDF Function: WdfDmaEnablerCreate
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFDMAENABLERCREATE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    PWDF_DMA_ENABLER_CONFIG Config,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES Attributes,
    _Out_
    WDFDMAENABLER* DmaEnablerHandle
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
WdfDmaEnablerCreate(
    _In_
    WDFDEVICE Device,
    _In_
    PWDF_DMA_ENABLER_CONFIG Config,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES Attributes,
    _Out_
    WDFDMAENABLER* DmaEnablerHandle
    )
{
    return ((PFN_WDFDMAENABLERCREATE) WdfFunctions[WdfDmaEnablerCreateTableIndex])(WdfDriverGlobals, Device, Config, Attributes, DmaEnablerHandle);
}

//
// WDF Function: WdfDmaEnablerGetMaximumLength
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
size_t
(*PFN_WDFDMAENABLERGETMAXIMUMLENGTH)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDMAENABLER DmaEnabler
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
size_t
FORCEINLINE
WdfDmaEnablerGetMaximumLength(
    _In_
    WDFDMAENABLER DmaEnabler
    )
{
    return ((PFN_WDFDMAENABLERGETMAXIMUMLENGTH) WdfFunctions[WdfDmaEnablerGetMaximumLengthTableIndex])(WdfDriverGlobals, DmaEnabler);
}

//
// WDF Function: WdfDmaEnablerGetMaximumScatterGatherElements
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
size_t
(*PFN_WDFDMAENABLERGETMAXIMUMSCATTERGATHERELEMENTS)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDMAENABLER DmaEnabler
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
size_t
FORCEINLINE
WdfDmaEnablerGetMaximumScatterGatherElements(
    _In_
    WDFDMAENABLER DmaEnabler
    )
{
    return ((PFN_WDFDMAENABLERGETMAXIMUMSCATTERGATHERELEMENTS) WdfFunctions[WdfDmaEnablerGetMaximumScatterGatherElementsTableIndex])(WdfDriverGlobals, DmaEnabler);
}

//
// WDF Function: WdfDmaEnablerSetMaximumScatterGatherElements
//
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
VOID
(*PFN_WDFDMAENABLERSETMAXIMUMSCATTERGATHERELEMENTS)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDMAENABLER DmaEnabler,
    _In_
    _When_(MaximumFragments == 0, __drv_reportError(MaximumFragments cannot be zero))
    size_t MaximumFragments
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
FORCEINLINE
WdfDmaEnablerSetMaximumScatterGatherElements(
    _In_
    WDFDMAENABLER DmaEnabler,
    _In_
    _When_(MaximumFragments == 0, __drv_reportError(MaximumFragments cannot be zero))
    size_t MaximumFragments
    )
{
    ((PFN_WDFDMAENABLERSETMAXIMUMSCATTERGATHERELEMENTS) WdfFunctions[WdfDmaEnablerSetMaximumScatterGatherElementsTableIndex])(WdfDriverGlobals, DmaEnabler, MaximumFragments);
}

//
// WDF Function: WdfDmaEnablerGetFragmentLength
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
size_t
(*PFN_WDFDMAENABLERGETFRAGMENTLENGTH)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDMAENABLER DmaEnabler,
    _In_
    WDF_DMA_DIRECTION DmaDirection
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
size_t
FORCEINLINE
WdfDmaEnablerGetFragmentLength(
    _In_
    WDFDMAENABLER DmaEnabler,
    _In_
    WDF_DMA_DIRECTION DmaDirection
    )
{
    return ((PFN_WDFDMAENABLERGETFRAGMENTLENGTH) WdfFunctions[WdfDmaEnablerGetFragmentLengthTableIndex])(WdfDriverGlobals, DmaEnabler, DmaDirection);
}

//
// WDF Function: WdfDmaEnablerWdmGetDmaAdapter
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
PDMA_ADAPTER
(*PFN_WDFDMAENABLERWDMGETDMAADAPTER)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDMAENABLER DmaEnabler,
    _In_
    WDF_DMA_DIRECTION DmaDirection
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
PDMA_ADAPTER
FORCEINLINE
WdfDmaEnablerWdmGetDmaAdapter(
    _In_
    WDFDMAENABLER DmaEnabler,
    _In_
    WDF_DMA_DIRECTION DmaDirection
    )
{
    return ((PFN_WDFDMAENABLERWDMGETDMAADAPTER) WdfFunctions[WdfDmaEnablerWdmGetDmaAdapterTableIndex])(WdfDriverGlobals, DmaEnabler, DmaDirection);
}



#endif // (NTDDI_VERSION >= NTDDI_WIN2K)


#endif // _WDFDMAENABLER_1_9_H_
