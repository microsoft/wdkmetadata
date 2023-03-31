/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

    wudfinterrupt.h

Abstract:

    This is the C header for driver framework Interrupt object

Revision History:


--*/

#ifndef _WUDFINTERRUPT_H_
#define _WUDFINTERRUPT_H_

// 
// Message Signaled Interrupts (MSI) information structure
// 
typedef enum _WDF_INTERRUPT_POLARITY {
    WdfInterruptPolarityUnknown = 0,
    WdfInterruptActiveHigh,
    WdfInterruptActiveLow,
} WDF_INTERRUPT_POLARITY, *PWDF_INTERRUPT_POLARITY;

typedef enum _WDF_INTERRUPT_POLICY {
    WdfIrqPolicyMachineDefault = 0,
    WdfIrqPolicyAllCloseProcessors,
    WdfIrqPolicyOneCloseProcessor,
    WdfIrqPolicyAllProcessorsInMachine,
    WdfIrqPolicySpecifiedProcessors,
    WdfIrqPolicySpreadMessagesAcrossAllProcessors,
} WDF_INTERRUPT_POLICY, *PWDF_INTERRUPT_POLICY;

typedef enum _WDF_INTERRUPT_PRIORITY {
    WdfIrqPriorityUndefined = 0,
    WdfIrqPriorityLow,
    WdfIrqPriorityNormal,
    WdfIrqPriorityHigh,
} WDF_INTERRUPT_PRIORITY, *PWDF_INTERRUPT_PRIORITY;

//
// This is the function that gets invoked when the hardware ISR occurs. 
//
typedef
BOOLEAN
_Function_class_(WUDF_INTERRUPT_ISR)
WUDF_INTERRUPT_ISR(
    _In_
    IWDFInterrupt* Interrupt,
    _In_
    ULONG MessageID,
    _In_
    ULONG Reserved
    );

typedef WUDF_INTERRUPT_ISR *PFN_WUDF_INTERRUPT_ISR;

//
// This is the function that gets called back into the driver
// to enable the interrupt in the hardware.  
//
typedef
_Function_class_(WUDF_INTERRUPT_ENABLE)
HRESULT
WUDF_INTERRUPT_ENABLE(
    _In_
    IWDFInterrupt* Interrupt,
    _In_
    IWDFDevice* AssociatedDevice
    );

typedef WUDF_INTERRUPT_ENABLE *PFN_WUDF_INTERRUPT_ENABLE;

//
// This is the function that gets called back into the driver
// to disable the interrupt in the hardware. 
//
typedef
_Function_class_(WUDF_INTERRUPT_DISABLE)
HRESULT
WUDF_INTERRUPT_DISABLE(
    _In_
    IWDFInterrupt* Interrupt,
    _In_
    IWDFDevice* AssociatedDevice
    );

typedef WUDF_INTERRUPT_DISABLE *PFN_WUDF_INTERRUPT_DISABLE;

//
// This is the function that gets called back into the driver
// to do post interrupt work. 
//
typedef
_Function_class_(WUDF_INTERRUPT_WORKITEM)
VOID
WUDF_INTERRUPT_WORKITEM(
    _In_
    IWDFInterrupt* Interrupt,
    _In_
    IWDFObject* AssociatedObject
    );

typedef WUDF_INTERRUPT_WORKITEM *PFN_WUDF_INTERRUPT_WORKITEM;

//
// UMDF Interrupt Configuration Structure
//
typedef struct _WUDF_INTERRUPT_CONFIG {
    ULONG Size;

    WDF_TRI_STATE ShareVector;

    //
    // Automatic Serialization of all the interrupt callbacks using UMDF's 
    // callback locking model.
    //
    BOOLEAN AutomaticSerialization;

    PFN_WUDF_INTERRUPT_ISR      OnInterruptIsr;
    PFN_WUDF_INTERRUPT_ENABLE   OnInterruptEnable;
    PFN_WUDF_INTERRUPT_DISABLE  OnInterruptDisable;
    PFN_WUDF_INTERRUPT_WORKITEM OnInterruptWorkItem;

    //
    // These fields are only used when interrupt is created in 
    // OnPrepareHardware callback.
    //
    PCM_PARTIAL_RESOURCE_DESCRIPTOR InterruptRaw;
    PCM_PARTIAL_RESOURCE_DESCRIPTOR InterruptTranslated;

} WUDF_INTERRUPT_CONFIG, *PWUDF_INTERRUPT_CONFIG;

VOID
FORCEINLINE
WUDF_INTERRUPT_CONFIG_INIT(
    _Out_ PWUDF_INTERRUPT_CONFIG Configuration,
    _In_ PFN_WUDF_INTERRUPT_ISR OnInterruptIsr,
    _In_opt_ PFN_WUDF_INTERRUPT_WORKITEM OnInterruptWorkItem
    )
{
    RtlZeroMemory(Configuration, sizeof(WUDF_INTERRUPT_CONFIG));

    Configuration->Size = sizeof(WUDF_INTERRUPT_CONFIG);

    Configuration->ShareVector = WdfUseDefault;

    Configuration->OnInterruptIsr = OnInterruptIsr;
    Configuration->OnInterruptWorkItem = OnInterruptWorkItem;
}

//
// Disable warning C4324: structure was padded due to DECLSPEC_ALIGN
// This padding is intentional and necessary.
#pragma warning(push)
#pragma warning(disable: 4324)

typedef struct _WDF_INTERRUPT_INFO {
    //
    // Size of this structure in bytes
    //
    ULONG                  Size;
    ULONG64                Reserved1;
    KAFFINITY              TargetProcessorSet;
    ULONG                  Reserved2;
    ULONG                  MessageNumber;
    ULONG                  Vector;
    KIRQL                  Irql;
    KINTERRUPT_MODE        Mode;
    WDF_INTERRUPT_POLARITY Polarity;
    BOOLEAN                MessageSignaled;
    UCHAR                  ShareDisposition; //CM_SHARE_DISPOSITION
    DECLSPEC_ALIGN(8) USHORT Group;

} WDF_INTERRUPT_INFO, *PWDF_INTERRUPT_INFO;

#pragma warning(pop)

VOID
FORCEINLINE
WDF_INTERRUPT_INFO_INIT(
    _Out_ PWDF_INTERRUPT_INFO InterruptInfo
    )
{
    RtlZeroMemory(InterruptInfo, sizeof(WDF_INTERRUPT_INFO));
    InterruptInfo->Size = sizeof(WDF_INTERRUPT_INFO);
}

//
// Interrupt Extended Policy Configuration Structure
//
typedef struct _WDF_INTERRUPT_EXTENDED_POLICY {
    //
    // Size of this structure in bytes
    //
    ULONG                   Size;
    WDF_INTERRUPT_POLICY    Policy;
    WDF_INTERRUPT_PRIORITY  Priority;
    GROUP_AFFINITY          TargetProcessorSetAndGroup;
    
} WDF_INTERRUPT_EXTENDED_POLICY, *PWDF_INTERRUPT_EXTENDED_POLICY;

VOID
FORCEINLINE
WDF_INTERRUPT_EXTENDED_POLICY_INIT(
    _Out_ PWDF_INTERRUPT_EXTENDED_POLICY ExtendedPolicy
    )
{
    RtlZeroMemory(ExtendedPolicy, sizeof(WDF_INTERRUPT_EXTENDED_POLICY));
    ExtendedPolicy->Size     = sizeof(WDF_INTERRUPT_EXTENDED_POLICY);
    ExtendedPolicy->Policy   = WdfIrqPolicyMachineDefault;
    ExtendedPolicy->Priority = WdfIrqPriorityUndefined;
}


#endif // _WUDFINTERRUPT_H_
