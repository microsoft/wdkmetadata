/*++ BUILD Version: 0010    // Increment this if a change has global effects

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    wudfwdm.h

Abstract:

    This module defines the WDM types, constants, and functions available
    to User Mode Driver Framework (UMDF) device drivers.

Revision History:

--*/

#if !defined (___WUDFWDM_H___)
#define ___WUDFWDM_H___
#include <specstrings.h>

//
// NTSTATUS
//

typedef _Return_type_success_(return >= 0) LONG NTSTATUS;
/*lint -save -e624 */  // Don't complain about different typedefs.
typedef NTSTATUS *PNTSTATUS;
/*lint -restore */  // Resume checking for different typedefs.

#if _WIN32_WINNT >= 0x0600
typedef CONST NTSTATUS *PCNTSTATUS;
#endif // _WIN32_WINNT >= 0x0600

//
//  Status values are 32 bit values layed out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-------------------------+-------------------------------+
//  |Sev|C|       Facility          |               Code            |
//  +---+-+-------------------------+-------------------------------+
//
//  where
//
//      Sev - is the severity code
//
//          00 - Success
//          01 - Informational
//          10 - Warning
//          11 - Error
//
//      C - is the Customer code flag
//
//      Facility - is the facility code
//
//      Code - is the facility's status code
//

//
// Generic test for success on any status value (non-negative numbers
// indicate success).
//

#define NT_SUCCESS(Status) (((NTSTATUS)(Status)) >= 0)

//
// Generic test for information on any status value.
//

#ifdef _PREFAST_
#define NT_INFORMATION(Status) (((NTSTATUS)(Status)) >= (long)0x40000000)
#else
#define NT_INFORMATION(Status) ((((ULONG)(Status)) >> 30) == 1)
#endif

//
// Generic test for warning on any status value.
//

#ifdef _PREFAST_
#define NT_WARNING(Status) (((NTSTATUS)(Status) < (long)0xc0000000))
#else
#define NT_WARNING(Status) ((((ULONG)(Status)) >> 30) == 2)
#endif

//
// Generic test for error on any status value.
//

#ifdef _PREFAST_
#define NT_ERROR(Status) (((NTSTATUS)(Status)) >= (unsigned long)0xc0000000)
#else
#define NT_ERROR(Status) ((((ULONG)(Status)) >> 30) == 3)
#endif




//
// Physical address.
//

typedef LARGE_INTEGER PHYSICAL_ADDRESS, *PPHYSICAL_ADDRESS;



//
// Interrupt Request Level (IRQL)
//

typedef UCHAR KIRQL;

typedef KIRQL *PKIRQL;





//
// Interrupt modes.
//

typedef enum _KINTERRUPT_MODE {
    LevelSensitive,
    Latched
} KINTERRUPT_MODE;


typedef enum _MEMORY_CACHING_TYPE_ORIG {
    MmFrameBufferCached = 2
} MEMORY_CACHING_TYPE_ORIG;

typedef enum _MEMORY_CACHING_TYPE {
    MmNonCached = FALSE,
    MmCached = TRUE,
    MmWriteCombined = MmFrameBufferCached,
    MmHardwareCoherentCached,
    MmNonCachedUnordered,       // IA64
    MmUSWCCached,
    MmMaximumCacheType
} MEMORY_CACHING_TYPE;


//
// Legacy thread affinity.
//

typedef ULONG_PTR KAFFINITY;
typedef KAFFINITY *PKAFFINITY;


#if !defined (NT_INCLUDED)

//
// Define the I/O bus interface types.
//

typedef enum _INTERFACE_TYPE {
    InterfaceTypeUndefined = -1,
    Internal,
    Isa,
    Eisa,
    MicroChannel,
    TurboChannel,
    PCIBus,
    VMEBus,
    NuBus,
    PCMCIABus,
    CBus,
    MPIBus,
    MPSABus,
    ProcessorInternal,
    InternalPowerBus,
    PNPISABus,
    PNPBus,
    Vmcs,
    ACPIBus,
    MaximumInterfaceType
}INTERFACE_TYPE, *PINTERFACE_TYPE;


//
// Define Interface reference/dereference routines for
//  Interfaces exported by IRP_MN_QUERY_INTERFACE
//

typedef VOID (*PINTERFACE_REFERENCE)(PVOID Context);
typedef VOID (*PINTERFACE_DEREFERENCE)(PVOID Context);


//
// Resource List definitions
//



//
// Defines the Type in the RESOURCE_DESCRIPTOR
//
// NOTE:  For all CM_RESOURCE_TYPE values, there must be a
// corresponding ResType value in the 32-bit ConfigMgr headerfile
// (cfgmgr32.h).  Values in the range [0x6,0x80) use the same values
// as their ConfigMgr counterparts.  CM_RESOURCE_TYPE values with
// the high bit set (i.e., in the range [0x80,0xFF]), are
// non-arbitrated resources.  These correspond to the same values
// in cfgmgr32.h that have their high bit set (however, since
// cfgmgr32.h uses 16 bits for ResType values, these values are in
// the range [0x8000,0x807F).  Note that ConfigMgr ResType values
// cannot be in the range [0x8080,0xFFFF), because they would not
// be able to map into CM_RESOURCE_TYPE values.  (0xFFFF itself is
// a special value, because it maps to CmResourceTypeDeviceSpecific.)
//

typedef int CM_RESOURCE_TYPE;

// CmResourceTypeNull is reserved

#define CmResourceTypeNull                0   // ResType_All or ResType_None (0x0000)
#define CmResourceTypePort                1   // ResType_IO (0x0002)
#define CmResourceTypeInterrupt           2   // ResType_IRQ (0x0004)
#define CmResourceTypeMemory              3   // ResType_Mem (0x0001)
#define CmResourceTypeDma                 4   // ResType_DMA (0x0003)
#define CmResourceTypeDeviceSpecific      5   // ResType_ClassSpecific (0xFFFF)
#define CmResourceTypeBusNumber           6   // ResType_BusNumber (0x0006)
#define CmResourceTypeMemoryLarge         7   // ResType_MemLarge (0x0007)
#define CmResourceTypeNonArbitrated     128   // Not arbitrated if 0x80 bit set
#define CmResourceTypeConfigData        128   // ResType_Reserved (0x8000)
#define CmResourceTypeDevicePrivate     129   // ResType_DevicePrivate (0x8001)
#define CmResourceTypePcCardConfig      130   // ResType_PcCardConfig (0x8002)
#define CmResourceTypeMfCardConfig      131   // ResType_MfCardConfig (0x8003)
#define CmResourceTypeConnection        132   // ResType_Connection (0x8004)

//
// Defines the ShareDisposition in the RESOURCE_DESCRIPTOR
//

typedef enum _CM_SHARE_DISPOSITION {
    CmResourceShareUndetermined = 0,    // Reserved
    CmResourceShareDeviceExclusive,
    CmResourceShareDriverExclusive,
    CmResourceShareShared
} CM_SHARE_DISPOSITION;

//
// Define the bit masks for Flags when type is CmResourceTypeInterrupt
//

#define CM_RESOURCE_INTERRUPT_LEVEL_SENSITIVE           0x00
#define CM_RESOURCE_INTERRUPT_LATCHED                   0x01
#define CM_RESOURCE_INTERRUPT_MESSAGE                   0x02
#define CM_RESOURCE_INTERRUPT_POLICY_INCLUDED           0x04
#define CM_RESOURCE_INTERRUPT_SECONDARY_INTERRUPT       0x10
#define CM_RESOURCE_INTERRUPT_WAKE_HINT                 0x20

//
// A bitmask defining the bits in a resource or requirements descriptor
// flags field that corresponds to the latch mode or a level triggered
// interrupt.
//

#define CM_RESOURCE_INTERRUPT_LEVEL_LATCHED_BITS 0x0001

//
// Define the token value used for an interrupt vector to mean that the vector
// is message signaled.  This value is used in the MaximumVector field.
//

#define CM_RESOURCE_INTERRUPT_MESSAGE_TOKEN   ((ULONG)-2)

//
// Define the bit masks for Flags when type is CmResourceTypeMemory
// or CmResourceTypeMemoryLarge
//

#define CM_RESOURCE_MEMORY_READ_WRITE                       0x0000
#define CM_RESOURCE_MEMORY_READ_ONLY                        0x0001
#define CM_RESOURCE_MEMORY_WRITE_ONLY                       0x0002
#define CM_RESOURCE_MEMORY_WRITEABILITY_MASK                0x0003
#define CM_RESOURCE_MEMORY_PREFETCHABLE                     0x0004

#define CM_RESOURCE_MEMORY_COMBINEDWRITE                    0x0008
#define CM_RESOURCE_MEMORY_24                               0x0010
#define CM_RESOURCE_MEMORY_CACHEABLE                        0x0020
#define CM_RESOURCE_MEMORY_WINDOW_DECODE                    0x0040
#define CM_RESOURCE_MEMORY_BAR                              0x0080

#define CM_RESOURCE_MEMORY_COMPAT_FOR_INACCESSIBLE_RANGE    0x0100

//
// Define the bit masks exclusive to type CmResourceTypeMemoryLarge.
//

#define CM_RESOURCE_MEMORY_LARGE                            0x0E00
#define CM_RESOURCE_MEMORY_LARGE_40                         0x0200
#define CM_RESOURCE_MEMORY_LARGE_48                         0x0400
#define CM_RESOURCE_MEMORY_LARGE_64                         0x0800

//
// Define limits for large memory resources
//

#define CM_RESOURCE_MEMORY_LARGE_40_MAXLEN          0x000000FFFFFFFF00
#define CM_RESOURCE_MEMORY_LARGE_48_MAXLEN          0x0000FFFFFFFF0000
#define CM_RESOURCE_MEMORY_LARGE_64_MAXLEN          0xFFFFFFFF00000000

//
// Define the bit masks for Flags when type is CmResourceTypePort
//

#define CM_RESOURCE_PORT_MEMORY                             0x0000
#define CM_RESOURCE_PORT_IO                                 0x0001
#define CM_RESOURCE_PORT_10_BIT_DECODE                      0x0004
#define CM_RESOURCE_PORT_12_BIT_DECODE                      0x0008
#define CM_RESOURCE_PORT_16_BIT_DECODE                      0x0010
#define CM_RESOURCE_PORT_POSITIVE_DECODE                    0x0020
#define CM_RESOURCE_PORT_PASSIVE_DECODE                     0x0040
#define CM_RESOURCE_PORT_WINDOW_DECODE                      0x0080
#define CM_RESOURCE_PORT_BAR                                0x0100

//
// Define the bit masks for Flags when type is CmResourceTypeDma
//

#define CM_RESOURCE_DMA_8                   0x0000
#define CM_RESOURCE_DMA_16                  0x0001
#define CM_RESOURCE_DMA_32                  0x0002
#define CM_RESOURCE_DMA_8_AND_16            0x0004
#define CM_RESOURCE_DMA_BUS_MASTER          0x0008
#define CM_RESOURCE_DMA_TYPE_A              0x0010
#define CM_RESOURCE_DMA_TYPE_B              0x0020
#define CM_RESOURCE_DMA_TYPE_F              0x0040
#define CM_RESOURCE_DMA_V3                  0x0080

//
// Define the different types of DMA transfer width values.
//

#define DMAV3_TRANFER_WIDTH_8               0x00
#define DMAV3_TRANFER_WIDTH_16              0x01
#define DMAV3_TRANFER_WIDTH_32              0x02
#define DMAV3_TRANFER_WIDTH_64              0x03
#define DMAV3_TRANFER_WIDTH_128             0x04
#define DMAV3_TRANFER_WIDTH_256             0x05

//
// Define the Class and Type values for CmResourceTypeConnection
//

#define CM_RESOURCE_CONNECTION_CLASS_GPIO          0x01
#define CM_RESOURCE_CONNECTION_CLASS_SERIAL        0x02


#define CM_RESOURCE_CONNECTION_TYPE_GPIO_IO        0x02
#define CM_RESOURCE_CONNECTION_TYPE_SERIAL_I2C     0x01
#define CM_RESOURCE_CONNECTION_TYPE_SERIAL_SPI     0x02
#define CM_RESOURCE_CONNECTION_TYPE_SERIAL_UART    0x03



//
// This structure defines one type of resource used by a driver.
//
// There can only be *1* DeviceSpecificData block. It must be located at
// the end of all resource descriptors in a full descriptor block.
//

//
// Make sure alignment is made properly by compiler; otherwise move
// flags back to the top of the structure (common to all members of the
// union).
//


#include "pshpack4.h"
typedef struct _CM_PARTIAL_RESOURCE_DESCRIPTOR {
    UCHAR Type;
    UCHAR ShareDisposition;
    USHORT Flags;
    union {

        //
        // Range of resources, inclusive.  These are physical, bus relative.
        // It is known that Port and Memory below have the exact same layout
        // as Generic.
        //

        struct {
            PHYSICAL_ADDRESS Start;
            ULONG Length;
        } Generic;

        //
        
        // Range of port numbers, inclusive. These are physical, bus
        // relative. The value should be the same as the one passed to
        // HalTranslateBusAddress().
        
        //

        struct {
            PHYSICAL_ADDRESS Start;
            ULONG Length;
        } Port;

        //
        
        // IRQL and vector. Should be same values as were passed to
        // HalGetInterruptVector().
        
        //

        struct {
#if defined(NT_PROCESSOR_GROUPS)
            USHORT Level;
            USHORT Group;
#else
            ULONG Level;
#endif
            ULONG Vector;
            KAFFINITY Affinity;
        } Interrupt;

        //
        // Values for message signaled interrupts are distinct in the
        // raw and translated cases.
        //

        struct {
            union {
               struct {
#if defined(NT_PROCESSOR_GROUPS)
                   USHORT Group;
#else
                   USHORT Reserved;
#endif
                   USHORT MessageCount;
                   ULONG Vector;
                   KAFFINITY Affinity;
               } Raw;

               struct {
#if defined(NT_PROCESSOR_GROUPS)
                   USHORT Level;
                   USHORT Group;
#else
                   ULONG Level;
#endif
                   ULONG Vector;
                   KAFFINITY Affinity;
               } Translated;
            } DUMMYUNIONNAME;
        } MessageInterrupt;

        //
        // Range of memory addresses, inclusive. These are physical, bus
        // relative. The value should be the same as the one passed to
        // HalTranslateBusAddress().
        //

        struct {
            PHYSICAL_ADDRESS Start;    // 64 bit physical addresses.
            ULONG Length;
        } Memory;

        //
        // Physical DMA channel.
        //

        struct {
            ULONG Channel;
            ULONG Port;
            ULONG Reserved1;
        } Dma;

        struct {
            ULONG Channel;
            ULONG RequestLine;
            UCHAR TransferWidth;
            UCHAR Reserved1;
            UCHAR Reserved2;
            UCHAR Reserved3;
        } DmaV3;

        //
        // Device driver private data, usually used to help it figure
        // what the resource assignments decisions that were made.
        //

        struct {
            ULONG Data[3];
        } DevicePrivate;

        //
        // Bus Number information.
        //

        struct {
            ULONG Start;
            ULONG Length;
            ULONG Reserved;
        } BusNumber;

        //
        // Device Specific information defined by the driver.
        // The DataSize field indicates the size of the data in bytes. The
        // data is located immediately after the DeviceSpecificData field in
        // the structure.
        //

        struct {
            ULONG DataSize;
            ULONG Reserved1;
            ULONG Reserved2;
        } DeviceSpecificData;

        // The following structures provide support for memory-mapped
        // IO resources greater than MAXULONG
        struct {
            PHYSICAL_ADDRESS Start;
            ULONG Length40;
        } Memory40;

        struct {
            PHYSICAL_ADDRESS Start;
            ULONG Length48;
        } Memory48;

        struct {
            PHYSICAL_ADDRESS Start;
            ULONG Length64;
        } Memory64;

        struct {
            UCHAR Class;
            UCHAR Type;
            UCHAR Reserved1;
            UCHAR Reserved2;
            ULONG IdLowPart;
            ULONG IdHighPart;
        } Connection;

    } u;
} CM_PARTIAL_RESOURCE_DESCRIPTOR, *PCM_PARTIAL_RESOURCE_DESCRIPTOR;
#include "poppack.h"

//
// A Partial Resource List is what can be found in the ARC firmware
// or will be generated by ntdetect.com.
// The configuration manager will transform this structure into a Full
// resource descriptor when it is about to store it in the regsitry.
//
// Note: There must a be a convention to the order of fields of same type,
// (defined on a device by device basis) so that the fields can make sense
// to a driver (i.e. when multiple memory ranges are necessary).
//

typedef struct _CM_PARTIAL_RESOURCE_LIST {
    USHORT Version;
    USHORT Revision;
    ULONG Count;
    CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];
} CM_PARTIAL_RESOURCE_LIST, *PCM_PARTIAL_RESOURCE_LIST;

//
// A Full Resource Descriptor is what can be found in the registry.
// This is what will be returned to a driver when it queries the registry
// to get device information; it will be stored under a key in the hardware
// description tree.
//
// Note: There must a be a convention to the order of fields of same type,
// (defined on a device by device basis) so that the fields can make sense
// to a driver (i.e. when multiple memory ranges are necessary).
//

typedef struct _CM_FULL_RESOURCE_DESCRIPTOR {
    INTERFACE_TYPE InterfaceType; // unused for WDM
    ULONG BusNumber; // unused for WDM
    CM_PARTIAL_RESOURCE_LIST PartialResourceList;
} CM_FULL_RESOURCE_DESCRIPTOR, *PCM_FULL_RESOURCE_DESCRIPTOR;

//
// The Resource list is what will be stored by the drivers into the
// resource map via the IO API.
//

typedef struct _CM_RESOURCE_LIST {
    ULONG Count;
    CM_FULL_RESOURCE_DESCRIPTOR List[1];
} CM_RESOURCE_LIST, *PCM_RESOURCE_LIST;


#endif // !defined (NT_INCLUDED)
#endif // ___WUDFWDM_H___
