/*++ 

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    wudfddi_hwaccess.h

Abstract:

    This module contains UMDF hardware access related macros and function
    declarations. 

Revision History:

--*/

#if !defined (___WUDFDDI_HWACCESS_H___)
#define ___WUDFDDI_HWACCESS_H___

#ifdef __cplusplus
extern "C" {
#endif

#define WDF_NO_BUFFER          (NULL)
#define WDF_ZERO_BUFFER_COUNT  (0)
#define WDF_UNUSED_VALUE       (0)

//
// Functions for HwAccess 
//
//
// Read Register functions
//
UCHAR
FORCEINLINE
READ_REGISTER_UCHAR(
    _In_ IWDFDevice3* pDevice,
    _In_ _Notliteral_ PUCHAR Register
    )
{
    return (UCHAR) pDevice->ReadFromHardware(
                        WdfDeviceHwAccessTargetTypeRegister, 
                        WdfDeviceHwAccessTargetSizeUchar, 
                        Register, 
                        WDF_NO_BUFFER,
                        WDF_ZERO_BUFFER_COUNT 
                        );
}

USHORT
FORCEINLINE
READ_REGISTER_USHORT(
    _In_ IWDFDevice3* pDevice,
    _In_ _Notliteral_ PUSHORT Register
    )
{
    return (USHORT) pDevice->ReadFromHardware(
                        WdfDeviceHwAccessTargetTypeRegister, 
                        WdfDeviceHwAccessTargetSizeUshort, 
                        Register, 
                        WDF_NO_BUFFER,
                        WDF_ZERO_BUFFER_COUNT 
                        );
}

ULONG
FORCEINLINE
READ_REGISTER_ULONG(
    _In_ IWDFDevice3* pDevice,
    _In_ _Notliteral_ PULONG Register
    )
{
    return (ULONG) pDevice->ReadFromHardware(
                        WdfDeviceHwAccessTargetTypeRegister, 
                        WdfDeviceHwAccessTargetSizeUlong, 
                        Register, 
                        WDF_NO_BUFFER,
                        WDF_ZERO_BUFFER_COUNT 
                        );
}

#if defined(_WIN64)

ULONG64
FORCEINLINE
READ_REGISTER_ULONG64(
    _In_ IWDFDevice3* pDevice,
    _In_ _Notliteral_ PULONG64 Register
    )
{
    return (ULONG64) pDevice->ReadFromHardware(
                        WdfDeviceHwAccessTargetTypeRegister, 
                        WdfDeviceHwAccessTargetSizeUlong64, 
                        Register, 
                        WDF_NO_BUFFER,
                        WDF_ZERO_BUFFER_COUNT 
                        );
}

#endif

VOID
FORCEINLINE
READ_REGISTER_BUFFER_UCHAR(
    _In_ IWDFDevice3* pDevice,
    _In_ _Notliteral_ PUCHAR Register,
    _Out_writes_all_(Count) PUCHAR Buffer,
    _In_ ULONG Count
    )
{
    pDevice->ReadFromHardware(
                        WdfDeviceHwAccessTargetTypeRegisterBuffer, 
                        WdfDeviceHwAccessTargetSizeUchar, 
                        Register, 
                        Buffer,
                        Count 
                        );
}

VOID
FORCEINLINE
READ_REGISTER_BUFFER_USHORT(
    _In_ IWDFDevice3* pDevice,
    _In_ _Notliteral_ PUSHORT Register,
    _Out_writes_all_(Count) PUSHORT Buffer,
    _In_ ULONG Count
    )
{
    pDevice->ReadFromHardware(
                        WdfDeviceHwAccessTargetTypeRegisterBuffer, 
                        WdfDeviceHwAccessTargetSizeUshort, 
                        Register, 
                        Buffer,
                        Count 
                        );
}

VOID
FORCEINLINE
READ_REGISTER_BUFFER_ULONG(
    _In_ IWDFDevice3* pDevice,
    _In_ _Notliteral_ PULONG Register,
    _Out_writes_all_(Count) PULONG Buffer,
    _In_ ULONG Count
    )
{
    pDevice->ReadFromHardware(
                        WdfDeviceHwAccessTargetTypeRegisterBuffer, 
                        WdfDeviceHwAccessTargetSizeUlong, 
                        Register, 
                        Buffer,
                        Count 
                        );
}

#if defined(_WIN64)

VOID
FORCEINLINE
READ_REGISTER_BUFFER_ULONG64(
    _In_ IWDFDevice3* pDevice,
    _In_ _Notliteral_ PULONG64 Register,
    _Out_writes_all_(Count) PULONG64 Buffer,
    _In_ ULONG Count
    )
{
    pDevice->ReadFromHardware(
                        WdfDeviceHwAccessTargetTypeRegisterBuffer, 
                        WdfDeviceHwAccessTargetSizeUlong64, 
                        Register, 
                        Buffer,
                        Count 
                        );
}

#endif

//
// Write register functions
//
VOID
FORCEINLINE
WRITE_REGISTER_UCHAR(
    _In_ IWDFDevice3* pDevice,
    _In_ _Notliteral_ PUCHAR Register,
    _In_ UCHAR Value
    )
{
    pDevice->WriteToHardware(
                        WdfDeviceHwAccessTargetTypeRegister, 
                        WdfDeviceHwAccessTargetSizeUchar, 
                        Register,
                        Value,
                        WDF_NO_BUFFER, 
                        WDF_ZERO_BUFFER_COUNT
                        );
}

VOID
FORCEINLINE
WRITE_REGISTER_USHORT(
    _In_ IWDFDevice3* pDevice,
    _In_ _Notliteral_ PUSHORT Register,
    _In_ USHORT Value
    )
{
    pDevice->WriteToHardware(
                        WdfDeviceHwAccessTargetTypeRegister, 
                        WdfDeviceHwAccessTargetSizeUshort, 
                        Register,
                        Value,
                        WDF_NO_BUFFER, 
                        WDF_ZERO_BUFFER_COUNT
                        );
}

VOID
FORCEINLINE
WRITE_REGISTER_ULONG(
    _In_ IWDFDevice3* pDevice,
    _In_ _Notliteral_ PULONG Register,
    _In_ ULONG Value
    )
{
    pDevice->WriteToHardware(
                        WdfDeviceHwAccessTargetTypeRegister, 
                        WdfDeviceHwAccessTargetSizeUlong, 
                        Register,
                        Value,
                        WDF_NO_BUFFER, 
                        WDF_ZERO_BUFFER_COUNT
                        );
}

#if defined(_WIN64)

VOID
FORCEINLINE
WRITE_REGISTER_ULONG64(
    _In_ IWDFDevice3* pDevice,
    _In_ _Notliteral_ PULONG64 Register,
    _In_ ULONG64 Value
    )
{
    pDevice->WriteToHardware(
                        WdfDeviceHwAccessTargetTypeRegister, 
                        WdfDeviceHwAccessTargetSizeUlong64, 
                        Register,
                        Value,
                        WDF_NO_BUFFER, 
                        WDF_ZERO_BUFFER_COUNT
                        );
}

#endif

VOID
FORCEINLINE
WRITE_REGISTER_BUFFER_UCHAR(
    _In_ IWDFDevice3* pDevice,
    _In_ _Notliteral_ PUCHAR Register,
    _In_reads_(Count) PUCHAR Buffer,
    _In_ ULONG Count
    )
{
    pDevice->WriteToHardware(
                        WdfDeviceHwAccessTargetTypeRegisterBuffer, 
                        WdfDeviceHwAccessTargetSizeUchar, 
                        Register,
                        WDF_UNUSED_VALUE,
                        Buffer, 
                        Count
                        );
}

VOID
FORCEINLINE
WRITE_REGISTER_BUFFER_USHORT(
    _In_ IWDFDevice3* pDevice,
    _In_ _Notliteral_ PUSHORT Register,
    _In_reads_(Count) PUSHORT Buffer,
    _In_ ULONG Count
    )
{
    pDevice->WriteToHardware(
                        WdfDeviceHwAccessTargetTypeRegisterBuffer, 
                        WdfDeviceHwAccessTargetSizeUshort, 
                        Register,
                        WDF_UNUSED_VALUE,
                        Buffer, 
                        Count
                        );
}

VOID
FORCEINLINE
WRITE_REGISTER_BUFFER_ULONG(
    _In_ IWDFDevice3* pDevice,
    _In_ _Notliteral_ PULONG Register,
    _In_reads_(Count) PULONG Buffer,
    _In_ ULONG Count
    )
{
    pDevice->WriteToHardware(
                        WdfDeviceHwAccessTargetTypeRegisterBuffer, 
                        WdfDeviceHwAccessTargetSizeUlong, 
                        Register,
                        WDF_UNUSED_VALUE,
                        Buffer, 
                        Count
                        );
}

#if defined(_WIN64)

VOID
FORCEINLINE
WRITE_REGISTER_BUFFER_ULONG64(
    _In_ IWDFDevice3* pDevice,
    _In_ _Notliteral_ PULONG64 Register,
    _In_reads_(Count) PULONG64 Buffer,
    _In_ ULONG Count
    )
{
    pDevice->WriteToHardware(
                        WdfDeviceHwAccessTargetTypeRegisterBuffer, 
                        WdfDeviceHwAccessTargetSizeUlong64, 
                        Register,
                        WDF_UNUSED_VALUE,
                        Buffer, 
                        Count
                        );
}

#endif

//
//
// Read Port functions
//
UCHAR
FORCEINLINE
READ_PORT_UCHAR(
    _In_ IWDFDevice3* pDevice,
    _In_ _Notliteral_ PUCHAR Port
    )
{
    return (UCHAR) pDevice->ReadFromHardware(
                        WdfDeviceHwAccessTargetTypePort, 
                        WdfDeviceHwAccessTargetSizeUchar, 
                        Port, 
                        WDF_NO_BUFFER,
                        WDF_ZERO_BUFFER_COUNT 
                        );
}

USHORT
FORCEINLINE
READ_PORT_USHORT(
    _In_ IWDFDevice3* pDevice,
    _In_ _Notliteral_ PUSHORT Port
    )
{
    return (USHORT) pDevice->ReadFromHardware(
                        WdfDeviceHwAccessTargetTypePort, 
                        WdfDeviceHwAccessTargetSizeUshort, 
                        Port, 
                        WDF_NO_BUFFER,
                        WDF_ZERO_BUFFER_COUNT 
                        );
}

ULONG
FORCEINLINE
READ_PORT_ULONG(
    _In_ IWDFDevice3* pDevice,
    _In_ _Notliteral_ PULONG Port
    )
{
    return (ULONG) pDevice->ReadFromHardware(
                        WdfDeviceHwAccessTargetTypePort, 
                        WdfDeviceHwAccessTargetSizeUlong, 
                        Port, 
                        WDF_NO_BUFFER,
                        WDF_ZERO_BUFFER_COUNT 
                        );
}

VOID
FORCEINLINE
READ_PORT_BUFFER_UCHAR(
    _In_ IWDFDevice3* pDevice,
    _In_ _Notliteral_ PUCHAR Port,
    _Out_writes_all_(Count) PUCHAR Buffer,
    _In_ ULONG Count
    )
{
    pDevice->ReadFromHardware(
                        WdfDeviceHwAccessTargetTypePortBuffer, 
                        WdfDeviceHwAccessTargetSizeUchar, 
                        Port, 
                        Buffer,
                        Count 
                        );
}

VOID
FORCEINLINE
READ_PORT_BUFFER_USHORT(
    _In_ IWDFDevice3* pDevice,
    _In_ _Notliteral_ PUSHORT Port,
    _Out_writes_all_(Count) PUSHORT Buffer,
    _In_ ULONG Count
    )
{
    pDevice->ReadFromHardware(
                        WdfDeviceHwAccessTargetTypePortBuffer, 
                        WdfDeviceHwAccessTargetSizeUshort, 
                        Port, 
                        Buffer,
                        Count 
                        );
}

VOID
FORCEINLINE
READ_PORT_BUFFER_ULONG(
    _In_ IWDFDevice3* pDevice,
    _In_ _Notliteral_ PULONG Port,
    _Out_writes_all_(Count) PULONG Buffer,
    _In_ ULONG Count
    )
{
    pDevice->ReadFromHardware(
                        WdfDeviceHwAccessTargetTypePortBuffer, 
                        WdfDeviceHwAccessTargetSizeUlong, 
                        Port, 
                        Buffer,
                        Count 
                        );
}

//
// Write port functions
//
VOID
FORCEINLINE
WRITE_PORT_UCHAR(
    _In_ IWDFDevice3* pDevice,
    _In_ _Notliteral_ PUCHAR Port,
    _In_ UCHAR Value
    )
{
    pDevice->WriteToHardware(
                        WdfDeviceHwAccessTargetTypePort, 
                        WdfDeviceHwAccessTargetSizeUchar, 
                        Port,
                        Value,
                        WDF_NO_BUFFER, 
                        WDF_ZERO_BUFFER_COUNT
                        );
}

VOID
FORCEINLINE
WRITE_PORT_USHORT(
    _In_ IWDFDevice3* pDevice,
    _In_ _Notliteral_ PUSHORT Port,
    _In_ USHORT Value
    )
{
    pDevice->WriteToHardware(
                        WdfDeviceHwAccessTargetTypePort, 
                        WdfDeviceHwAccessTargetSizeUshort, 
                        Port,
                        Value,
                        WDF_NO_BUFFER, 
                        WDF_ZERO_BUFFER_COUNT
                        );
}

VOID
FORCEINLINE
WRITE_PORT_ULONG(
    _In_ IWDFDevice3* pDevice,
    _In_ _Notliteral_ PULONG Port,
    _In_ ULONG Value
    )
{
    pDevice->WriteToHardware(
                        WdfDeviceHwAccessTargetTypePort, 
                        WdfDeviceHwAccessTargetSizeUlong, 
                        Port,
                        Value,
                        WDF_NO_BUFFER, 
                        WDF_ZERO_BUFFER_COUNT
                        );
}

VOID
FORCEINLINE
WRITE_PORT_BUFFER_UCHAR(
    _In_ IWDFDevice3* pDevice,
    _In_ _Notliteral_ PUCHAR Port,
    _In_reads_(Count) PUCHAR Buffer,
    _In_ ULONG Count
    )
{
    pDevice->WriteToHardware(
                        WdfDeviceHwAccessTargetTypePortBuffer, 
                        WdfDeviceHwAccessTargetSizeUchar, 
                        Port,
                        WDF_UNUSED_VALUE,
                        Buffer, 
                        Count
                        );
}

VOID
FORCEINLINE
WRITE_PORT_BUFFER_USHORT(
    _In_ IWDFDevice3* pDevice,
    _In_ _Notliteral_ PUSHORT Port,
    _In_reads_(Count) PUSHORT Buffer,
    _In_ ULONG Count
    )
{
    pDevice->WriteToHardware(
                        WdfDeviceHwAccessTargetTypePortBuffer, 
                        WdfDeviceHwAccessTargetSizeUshort, 
                        Port,
                        WDF_UNUSED_VALUE,
                        Buffer, 
                        Count
                        );
}

VOID
FORCEINLINE
WRITE_PORT_BUFFER_ULONG(
    _In_ IWDFDevice3* pDevice,
    _In_ _Notliteral_ PULONG Port,
    _In_reads_(Count) PULONG Buffer,
    _In_ ULONG Count
    )
{
    pDevice->WriteToHardware(
                        WdfDeviceHwAccessTargetTypePortBuffer, 
                        WdfDeviceHwAccessTargetSizeUlong, 
                        Port,
                        WDF_UNUSED_VALUE,
                        Buffer, 
                        Count
                        );
}

#ifdef __cplusplus
}
#endif

#endif // ___WUDFDDI_HWACCESS_H___

