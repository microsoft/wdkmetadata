/*++

Copyright (C) Microsoft. All rights reserved.

Module Name:

    TrEEPaymentService.h

Abstract:

    This module contains definitions used by the OS to invoke Secure Payment Service 
    via a Trusted Execution Environment.    
    
Environment:

    User Mode
    Kernel Mode

--*/

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#if (NTDDI_VERSION >= NTDDI_WIN10)

#ifdef _MSC_VER
#pragma once
#endif //_MSC_VER

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

//
// Payment Service
// {AD0AB067-CDA2-4ecb-A105-B9D360B8CB69}
//
DEFINE_GUID(GUID_TREE_PAYMENT_SERVICE, 
0xad0ab067, 0xcda2, 0x4ecb, 0xa1, 0x5, 0xb9, 0xd3, 0x60, 0xb8, 0xcb, 0x69);

//
// Defines the expected value of the Secure Payment service major version
//

#define PAYMENT_SERVICE_MAJOR_VERSION              (1)

//
// Defines the minimum expected value of the Secure Payment service minor version
//

#define PAYMENT_SERVICE_MINOR_VERSION_MIN          (0)

//
// Sends a buffer to Secure Payment Service
//
// Input: Payment Service Specific Request Buffer
// Output: Payment Service Specific Response Buffer
//

#define PAYMENT_FUNCTION_SEND                 (0)
    
//
// Payment service command codes
//

#define PAYMENT_CMD_INTIAL_ENROLL             (0)
#define PAYMENT_CMD_SET_CDCVM                 (1)
#define PAYMENT_CMD_CLEAR_CDCVM               (2)
#define PAYMENT_CMD_BEGIN_FACTORY_RESET       (3)
#define PAYMENT_CMD_END_FACTORY_RESET         (4)
// Test command codes, but non-harmful
#define PAYMENT_CMD_GET_CDCVM                 (256)

//
// Payment service status codes
//
#define PAYMENT_ERROR_SUCCESS                 (0)
#define PAYMENT_ERROR_BIO_NO_MATCH            (-1)
#define PAYMENT_ERROR_BIO_BAD_MATCH           (-2)
#define PAYMENT_ERROR_BIO_STALE               (-3)
#define PAYMENT_ERROR_NOT_READY               (-4) 
#define PAYMENT_ERROR_CDVCM_BLOCKED           (-5) 
#define PAYMENT_ERROR_NOT_IMPLEMENTED         (-6)
#define PAYMENT_ERROR_LINK_FAILURE            (-7)
#define PAYMENT_ERROR_OTHER                   (-8)
#define PAYMENT_ERROR_VERIFICATION_MISMATCH   (-9)
#define PAYMENT_ERROR_HASH_FAILURE            (-10)
#define PAYMENT_ERROR_DECRYPT_FAILURE         (-11)
#define PAYMENT_ERROR_ENCRYPT_FAILURE         (-12)
#define PAYMENT_ERROR_CRS_NOT_FOUND           (-13)
#define PAYMENT_ERROR_CRS_NOT_SUPPORTED       (-14)
#define PAYMENT_ERROR_GENERATE_RANDOM_PIN     (-15)
#define PAYMENT_ERROR_STORAGE_FAILURE         (-16)

//
// These structures are consumed by components running in TrEE.
// So needs packing to match exact spec size.
//

#include <pshpack1.h>

//
// Various structures required for the Payment service Operation
//


//
// Input structure for PAYMENT_FUNCTION_SEND
// 

typedef struct _PAYMENT_SERVICE_IN {
    
    //
    // Command Id
    //
    
    UINT32 CmdId; 
    
    //
    // Number of milliseconds elapsed since the last valid authentication to set CDCVM 
    // flag
    //
    
    UINT64 ValidMatchDuration;

} PAYMENT_SERVICE_IN, *PPAYMENT_SERVICE_IN;

//
// Output structure for PAYMENT_FUNCTION_SEND
// 

typedef struct _PAYMENT_SERVICE_OUT {
    
    //
    // Status of the command operation
    //
    
    INT32 Status;
    
    //
    // Number of milliseconds that elapsed since the device has been boot up and 
    // authentication response has been sent
    //
    
    UINT64 BioMatchTime; 
    
    //
    // Number of milliseconds that elapsed since the device has been boot up and 
    // current TZ time. 
    //
    
    UINT64 CurrentTime; 

} PAYMENT_SERVICE_OUT, *PPAYMENT_SERVICE_OUT;

//
// Resume normal structure packing
//

#include <poppack.h>

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#endif // NTDDI_VERSION >= NTDDI_WIN10

#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
