/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

_WdfVersionBuild_

Module Name: WifiTraceEnums.h

Abstract:
    Generated trace enums

Environment:
    kernel mode only

--*/

#ifndef _WIFITRACEENUMS_H_
#define _WIFITRACEENUMS_H_

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
// CUSTOM_TYPE(WIFI_WAKE_REASON_TYPE, ItemEnum(_WIFI_WAKE_REASON_TYPE));
// CUSTOM_TYPE(WIFI_ADAPTER_TX_DEMUX_TYPE, ItemEnum(_WIFI_ADAPTER_TX_DEMUX_TYPE));
// end_wpp

WDF_EXTERN_C_END

#endif // _WIFITRACEENUMS_H_

