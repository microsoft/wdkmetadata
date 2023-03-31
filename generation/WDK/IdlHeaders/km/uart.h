/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

    uart.h

Abstract:

    This header file declares the shared variable, function, and type
    definitions that are shared between the serial port hardware drivers and
    consumers of this library.

--*/

#pragma once

// ----------------------------------------------------------------- Data Types

typedef struct _CPPORT CPPORT, *PCPPORT;

typedef enum {
    UartSuccess,
    UartNoData,
    UartError,
    UartNotReady
} UART_STATUS, *PUART_STATUS;

/*++

Enumeration Description:

    This enumeration describes the status of a UART operation.

Values:

    UartSuccess - Status returned if the operation was successful, e.g. if data
        was available.

    UartNoData - Status returned if no data is available, but not due to error.

    UartError - Status returned on a UART error such as overrun, parity,
        framing, etc.

    UartNotReady - Status returned if the device is not ready.

--*/

typedef
BOOLEAN
(*UART_INITIALIZE_PORT) (
    _In_opt_ _Null_terminated_ PCHAR LoadOptions,
    _Inout_ PCPPORT Port,
    BOOLEAN MemoryMapped,
    UCHAR AccessSize,
    UCHAR BitWidth
    );

typedef
BOOLEAN
(*UART_SET_BAUD) (
    _Inout_ PCPPORT Port,
    ULONG Rate
    );

typedef
UART_STATUS
(*UART_GET_BYTE) (
    _Inout_ PCPPORT Port,
    _Out_ PUCHAR Byte
    );

typedef
UART_STATUS
(*UART_PUT_BYTE) (
    _Inout_ PCPPORT Port,
    UCHAR Byte,
    BOOLEAN BusyWait
    );

typedef
BOOLEAN
(*UART_RX_READY) (
    _Inout_ PCPPORT Port
    );

typedef
UART_STATUS
(*UART_SET_POWER_D0) (
    _In_ PCPPORT Port
    );

typedef
UART_STATUS
(*UART_SET_POWER_D3) (
    _In_ PCPPORT Port
    );

typedef struct _UART_HARDWARE_DRIVER {
    UART_INITIALIZE_PORT InitializePort;
    UART_SET_BAUD SetBaud;
    UART_GET_BYTE GetByte;
    UART_PUT_BYTE PutByte;
    UART_RX_READY RxReady;
    UART_SET_POWER_D0 SetPowerD0;
    UART_SET_POWER_D3 SetPowerD3;
} UART_HARDWARE_DRIVER, *PUART_HARDWARE_DRIVER;

/*++

Structure Description:

    This structure contains function pointers for interacting with a specific
    flavor of UART hardware. Generally, there should be one instance of this
    struct for each supported hardware device. The function pointers are not
    expected to change at runtime.

Fields:

    InitializePort - Supplies a function to initialize/reset the UART. This
        function must be called before calling any other driver functions.

    SetBaud - Supplies a function to change the baud rate of the UART.

    GetByte - Supplies a function to retrieve a byte of data from the device.

    PutByte - Supplies a function to transmit a byte of data to the device.

    RxReady - Supplies a function to check if there is data pending to be read
        from the UART.

    SetPowerD0 - Supplies a function to transition the UART to D0.

    SetPowerD3 - Supplies a function to transition the UART to D3.

--*/

typedef
UCHAR
(*UART_HARDWARE_READ_INDEXED_UCHAR) (
    _In_ PCPPORT Port,
    const UCHAR Index
    );

typedef
VOID
(*UART_HARDWARE_WRITE_INDEXED_UCHAR) (
    _In_ PCPPORT Port,
    const UCHAR Index,
    const UCHAR Value
    );

struct _CPPORT {
    PUCHAR Address;
    ULONG BaudRate;
    USHORT Flags;
    UCHAR ByteWidth;
    UART_HARDWARE_READ_INDEXED_UCHAR Read;
    UART_HARDWARE_WRITE_INDEXED_UCHAR Write;
};

/*++

Structure Description:

    This structure contains the mutable runtime state of a specific instance
    of a UART device.

Fields:

    Address - Supplies the base address of the UART's registers.

    BaudRate - Supplies the UART hardware's baud rate in bits per second.

    Flags - Supplies a bitmask of the port's internal flags.

    ByteWidth - Supplies the width of each of the UART hardware's registers as
        a number of bytes.

    Read - Supplies a pointer to the function used to read from a register on
        the UART hardware.

    Write - Supplies a pointer to the function used to write to a register on
        the UART hardware.

--*/

typedef
UCHAR
(*UART_HARDWARE_READ_UCHAR) (
    _In_ PUCHAR Address
    );

typedef
VOID
(*UART_HARDWARE_WRITE_UCHAR) (
    _Out_ PUCHAR Address,
    UCHAR Value
    );

typedef
USHORT
(*UART_HARDWARE_READ_USHORT) (
    _In_ PUSHORT Address
    );

typedef
VOID
(*UART_HARDWARE_WRITE_USHORT) (
    _Out_ PUSHORT Address,
    USHORT Value
    );

typedef
ULONG
(*UART_HARDWARE_READ_ULONG) (
    _In_ PULONG Address
    );

typedef
VOID
(*UART_HARDWARE_WRITE_ULONG) (
    _Out_ PULONG Address,
    ULONG Value
    );

typedef
ULONG64
(*UART_HARDWARE_READ_ULONG64) (
    _In_ PULONG64 Address
    );

typedef
VOID
(*UART_HARDWARE_WRITE_ULONG64) (
    _Out_ PULONG64 Address,
    ULONG64 Value
    );

typedef struct _UART_HARDWARE_ACCESS {
    UART_HARDWARE_READ_UCHAR ReadPort8;
    UART_HARDWARE_WRITE_UCHAR WritePort8;
    UART_HARDWARE_READ_USHORT ReadPort16;
    UART_HARDWARE_WRITE_USHORT WritePort16;
    UART_HARDWARE_READ_ULONG ReadPort32;
    UART_HARDWARE_WRITE_ULONG WritePort32;
    UART_HARDWARE_READ_UCHAR ReadRegister8;
    UART_HARDWARE_WRITE_UCHAR WriteRegister8;
    UART_HARDWARE_READ_USHORT ReadRegister16;
    UART_HARDWARE_WRITE_USHORT WriteRegister16;
    UART_HARDWARE_READ_ULONG ReadRegister32;
    UART_HARDWARE_WRITE_ULONG WriteRegister32;
    UART_HARDWARE_READ_ULONG64 ReadRegister64;
    UART_HARDWARE_WRITE_ULONG64 WriteRegister64;
} UART_HARDWARE_ACCESS, *PUART_HARDWARE_ACCESS;

// -------------------------------------------------------------------- Externs

//
// Please keep the visibility of the UART_HARDWARE_DRIVER externs consistent
// with the UartHardwareDrivers array in hardware.c.
//

#if defined(_X86_) || defined(_AMD64_)

extern UART_HARDWARE_DRIVER Legacy16550HardwareDriver;
extern UART_HARDWARE_DRIVER Uart16550HardwareDriver;
extern UART_HARDWARE_DRIVER SpiMax311HardwareDriver;
extern UART_HARDWARE_DRIVER MM16550HardwareDriver;
extern UART_HARDWARE_DRIVER IaLpssHardwareDriver;

#elif defined(_ARM_) || defined(_ARM64_)

extern UART_HARDWARE_DRIVER Uart16550HardwareDriver;
extern UART_HARDWARE_DRIVER PL011HardwareDriver;
extern UART_HARDWARE_DRIVER MSM8x60HardwareDriver;
extern UART_HARDWARE_DRIVER NvidiaHardwareDriver;
extern UART_HARDWARE_DRIVER OmapHardwareDriver;
extern UART_HARDWARE_DRIVER Apm88xxxxHardwareDriver;
extern UART_HARDWARE_DRIVER MSM8974HardwareDriver;
extern UART_HARDWARE_DRIVER Sam5250HardwareDriver;
extern UART_HARDWARE_DRIVER MX6HardwareDriver;
extern UART_HARDWARE_DRIVER SBSA32HardwareDriver;
extern UART_HARDWARE_DRIVER SBSAHardwareDriver;
extern UART_HARDWARE_DRIVER Bcm2835HardwareDriver;
extern UART_HARDWARE_DRIVER SDM845HardwareDriver;
extern UART_HARDWARE_DRIVER MM16550HardwareDriver;
extern UART_HARDWARE_DRIVER SDM845v2HardwareDriver;

#else

#error "Unknown Processor Architecture"

#endif

extern PUART_HARDWARE_DRIVER UartHardwareDrivers[];
extern ULONG UartHardwareDriverCount;

// ---------------------------------------------------------------- Definitions

//
// CPPORT Flags
//

#define PORT_DEFAULT_RATE   0x0001
#define PORT_RING_INDICATOR 0x0002
#define PORT_MODEM_CONTROL  0x0004
#define PORT_SAVED          0x0008
#define PORT_FORCE_32BIT_IO 0x0010
