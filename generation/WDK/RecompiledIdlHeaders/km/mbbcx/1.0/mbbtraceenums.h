/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

_WdfVersionBuild_

Module Name: MbbTraceEnums.h

Abstract:
    Generated trace enums

Environment:
    kernel mode only

--*/

#ifndef _MBBTRACEENUMS_H_
#define _MBBTRACEENUMS_H_

#ifndef WDF_EXTERN_C
  #ifdef __cplusplus
    #define WDF_EXTERN_C       extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END   }
  #else
    #define WDF_EXTERN_C
    #define WDF_EXTERN_C_START
    #define WDF_EXTERN_C_END
  #endif
#endif

WDF_EXTERN_C_START

// begin_wpp config
// CUSTOM_TYPE(MBB_MBIM_VERSION, ItemEnum(_MBB_MBIM_VERSION));
// CUSTOM_TYPE(MBB_MBIM_EXTENDED_VERSION, ItemEnum(_MBB_MBIM_EXTENDED_VERSION));
// CUSTOM_TYPE(MBB_WAKE_REASON_TYPE, ItemEnum(_MBB_WAKE_REASON_TYPE));
// end_wpp

WDF_EXTERN_C_END

#endif // _MBBTRACEENUMS_H_

