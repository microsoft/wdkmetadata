/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

_WdfVersionBuild_

Module Name: SpbTraceEnums.h

Abstract:
    Generated trace enums

Environment:
    kernel mode only

--*/

#ifndef _SPBTRACEENUMS_H_
#define _SPBTRACEENUMS_H_

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
// CUSTOM_TYPE(SPB_REQUEST_TYPE, ItemEnum(_SPB_REQUEST_TYPE));
// CUSTOM_TYPE(SPB_REQUEST_SEQUENCE_POSITION, ItemEnum(_SPB_REQUEST_SEQUENCE_POSITION));
// end_wpp

WDF_EXTERN_C_END

#endif // _SPBTRACEENUMS_H_

