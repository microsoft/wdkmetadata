/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

_WdfVersionBuild_

Module Name: IddFuncEnum.h

Abstract:
    Generated an enum of all WDF API functions

Environment:
    kernel mode only

    Warning: manual changes to this file will be lost.
--*/

#ifndef _IDDFUNCENUM_H_
#define _IDDFUNCENUM_H_

extern PIDD_DRIVER_GLOBALS IddDriverGlobals;


//
//
// The first version of the framework that added the support
// for client version to be higher than the framework version
//
#define IDD_FIRST_VERSION_SUPPORTING_CLIENT_VERSION_HIGHER_THAN_FRAMEWORK 3

//
// The function count from the first framework which added the support.
// Any function with index less than the count is always available
//
#define IDD_ALWAYS_AVAILABLE_FUNCTION_COUNT  23

//
// Validate IDDCX_MINIMUM_VERSION_REQUIRED falls into the correct range
//
#if defined(IDDCX_MINIMUM_VERSION_REQUIRED)

    #if IDDCX_MINIMUM_VERSION_REQUIRED < IDD_FIRST_VERSION_SUPPORTING_CLIENT_VERSION_HIGHER_THAN_FRAMEWORK
    #error IDDCX_MINIMUM_VERSION_REQUIRED < 3
    #endif

    #if IDDCX_MINIMUM_VERSION_REQUIRED > IDDCX_VERSION_MINOR
    #error IDDCX_MINIMUM_VERSION_REQUIRED > IDDCX_VERSION_MINOR
    #endif

#endif


//
// All functions/structures are always available in following two cases:
//
//  1) Building framework itself (which defines IDD_EVERYTHING_ALWAYS_AVAILABLE)
//
//  2) Traditional client drivers who are not aware of the new feature
//     "client version can be higher than framework's" and thus implies
//     IDDCX_VERSION_MINOR == IDDCX_MINIMUM_VERSION_REQUIRED
//
#if defined(IDDCX_MINIMUM_VERSION_REQUIRED) && (IDDCX_VERSION_MINOR == IDDCX_MINIMUM_VERSION_REQUIRED)

    #if !defined(IDD_EVERYTHING_ALWAYS_AVAILABLE)
    #define IDD_EVERYTHING_ALWAYS_AVAILABLE
    #endif

#endif


//
// private:
//
// TRUE - the client driver's target version is higher than the current framework version.
//     IS_FUNCTION_AVAILABLE() will compare function index agains function count to determine
//     whether the function is usable on the platform. The same for IS_FIELD_AVAILABLE().
//
// FALSE - the client driver is running on a new framework. All functions/Structures
//     from the target framework are always available
//
extern BOOLEAN IddClientVersionHigherThanFramework;

//
// private:
//
// Only valid when IddClientVersionHigherThanFramework is TRUE.
//
// Hold the count of usable functions from the framework. Used by IS_FUNCTION_AVAILABLE
// to determine whether a function is available on the platform.
//
extern ULONG   IddFunctionCount;

//
// private:
//
// Only valid when IddClientVersionHigherThanFramework is TRUE.
//
// Hold the count of usable structures from the framework. Used by IS_FIELD_AVAILABLE
// to determine whether a field in a structure is available on the platform.
//
extern ULONG   IddStructureCount;
extern WDF_STRUCT_INFO IddStructures;


//
// private:
//
// Only valid when IddClientVersionHigherThanFramework is TRUE.
//
// Hold the name of the Framework Extension.
//
extern PCWSTR  IddFrameworkExtensionName;


#ifndef IDD_STUB

    #ifndef IDDCX_VERSION_MAJOR
    #error  IDDCX_VERSION_MAJOR is not defined
    #endif

    //
    // "Version Minor(Target version)" controls which version of public header files to include
    //
    #ifndef IDDCX_VERSION_MINOR
    #error  IDDCX_VERSION_MINOR is not defined
    #endif

    //
    // "Version Minor (Minimum Required)" controls the oldest version of framework to load the driver
    //
    #ifndef IDDCX_MINIMUM_VERSION_REQUIRED
    #define IDDCX_MINIMUM_VERSION_REQUIRED IDDCX_VERSION_MINOR
    #endif

    __declspec(selectany)
    ULONG IddMinimumVersionRequired = IDDCX_MINIMUM_VERSION_REQUIRED;

#else

    //
    // Implemented in client driver code
    //
    extern ULONG IddMinimumVersionRequired;

#endif

//
// BOOLEAN
// IDD_IS_FUNCTION_AVAILABLE(
//     FunctionName
//     );
//
#define IDD_IS_FUNCTION_AVAILABLE(FunctionName)                                \
(                                                                              \
    (FunctionName ## TableIndex < IDD_ALWAYS_AVAILABLE_FUNCTION_COUNT)         \
    ||                                                                         \
    (!IddClientVersionHigherThanFramework)                                     \
    ||                                                                         \
    (FunctionName ## TableIndex < IddFunctionCount)                            \
)

//
// BOOLEAN
// IDD_IS_STRUCTURE_AVAILABLE(
//     StructName
//     );
//
#define IDD_IS_STRUCTURE_AVAILABLE(StructName)                                 \
(                                                                              \
    (!IddClientVersionHigherThanFramework)                                     \
    ||                                                                         \
    (INDEX_ ## StructName < IddStructureCount)                                 \
)

//
// BOOLEAN
// IDD_IS_FIELD_AVAILABLE(
//     StructName,
//     FieldName
//     );
//
#define IDD_IS_FIELD_AVAILABLE(StructName, FieldName)                          \
(                                                                              \
    (!IddClientVersionHigherThanFramework)                                     \
    ||                                                                         \
    (                                                                          \
        (INDEX_ ## StructName < IddStructureCount)                             \
        &&                                                                     \
        (FIELD_OFFSET(StructName, FieldName) < IddStructures[INDEX_ ## StructName])\
    )                                                                          \
)

//
// ULONG
// IDD_STRUCTURE_SIZE(
//     StructName
//     );
//
// NOTE: if it returns (-1), the structure is not available on the
//       current framework (and should not be used).
//
#if defined(IDD_EVERYTHING_ALWAYS_AVAILABLE)

#define IDD_STRUCTURE_SIZE(StructName)  (ULONG)sizeof(StructName)

#else

#define IDD_STRUCTURE_SIZE(StructName)                                         \
(ULONG)                                                                        \
(                                                                              \
    IddClientVersionHigherThanFramework                                        \
        ? (                                                                    \
            (INDEX_ ## StructName < IddStructureCount)                         \
            ? IddStructures[INDEX_ ## StructName]                              \
            : (size_t)(-1)                                                     \
          )                                                                    \
        : sizeof(StructName)                                                   \
)

#endif // IDD_STRUCTURE_SIZE

typedef enum _IDDFUNCENUM {

    IddCxDeviceInitConfigTableIndex = 0,
    IddCxDeviceInitializeTableIndex = 1,
    IddCxAdapterInitAsyncTableIndex = 2,
    IddCxMonitorCreateTableIndex = 3,
    IddCxMonitorArrivalTableIndex = 4,
    IddCxMonitorDepartureTableIndex = 5,
    IddCxMonitorUpdateModesTableIndex = 6,
    IddCxAdapterUpdateMaxDisplayPipelineRateTableIndex = 7,
    IddCxMonitorSetupHardwareCursorTableIndex = 8,
    IddCxMonitorQueryHardwareCursorTableIndex = 9,
    IddCxSwapChainSetDeviceTableIndex = 10,
    IddCxSwapChainReleaseAndAcquireBufferTableIndex = 11,
    IddCxSwapChainGetDirtyRectsTableIndex = 12,
    IddCxSwapChainGetMoveRegionsTableIndex = 13,
    IddCxSwapChainFinishedProcessingFrameTableIndex = 14,
    IddCxSwapChainReportFrameStatisticsTableIndex = 15,
    IddCxDeviceInitOpmModeTableIndex = 16,
    IddCxMonitorOpmSetMftContextTableIndex = 17,
    IddCxSwapChainGetFrameLatencyTableIndex = 18,
    IddCxGetVersionTableIndex = 19,
    IddCxReportCriticalErrorTableIndex = 20,
    IddCxMonitorSetSrmListTableIndex = 21,
    IddCxMonitorGetSrmListVersionTableIndex = 22,
    IddFunctionTableNumEntries = 23,
} IDDFUNCENUM;

typedef enum _IDDSTRUCTENUM {

    INDEX_IDARG_IN_ADAPTER_INIT                        = 0,
    INDEX_IDARG_IN_ADAPTER_INIT_FINISHED               = 1,
    INDEX_IDARG_IN_COMMITMODES                         = 2,
    INDEX_IDARG_IN_GETDEFAULTDESCRIPTIONMODES          = 3,
    INDEX_IDARG_IN_GETDIRTYRECTS                       = 4,
    INDEX_IDARG_IN_GETMOVEREGIONS                      = 5,
    INDEX_IDARG_IN_GETSRMLISTVERSION                   = 6,
    INDEX_IDARG_IN_I2C_RECEIVE                         = 7,
    INDEX_IDARG_IN_I2C_TRANSMIT                        = 8,
    INDEX_IDARG_IN_MAXDISPLAYPIPELINERATE              = 9,
    INDEX_IDARG_IN_MONITORCREATE                       = 10,
    INDEX_IDARG_IN_OPM_CONFIGURE_PROTECTED_OUTPUT      = 11,
    INDEX_IDARG_IN_OPM_CREATE_PROTECTED_OUTPUT         = 12,
    INDEX_IDARG_IN_OPM_GET_CERTIFICATE                 = 13,
    INDEX_IDARG_IN_OPM_GET_CERTIFICATE_SIZE            = 14,
    INDEX_IDARG_IN_OPM_GET_INFOMATION                  = 15,
    INDEX_IDARG_IN_OPM_MODE                            = 16,
    INDEX_IDARG_IN_OPM_SET_MFT_CONTEXT                 = 17,
    INDEX_IDARG_IN_OPM_SET_SIGNING_KEY_AND_SEQUENCE_NUMBERS = 18,
    INDEX_IDARG_IN_PARSEMONITORDESCRIPTION             = 19,
    INDEX_IDARG_IN_QUERY_HWCURSOR                      = 20,
    INDEX_IDARG_IN_QUERYTARGETMODES                    = 21,
    INDEX_IDARG_IN_REPORTCRITICALERROR                 = 22,
    INDEX_IDARG_IN_REPORTFRAMESTATISTICS               = 23,
    INDEX_IDARG_IN_SET_GAMMARAMP                       = 24,
    INDEX_IDARG_IN_SETSRMLIST                          = 25,
    INDEX_IDARG_IN_SETSWAPCHAIN                        = 26,
    INDEX_IDARG_IN_SETUP_HWCURSOR                      = 27,
    INDEX_IDARG_IN_SWAPCHAINSETDEVICE                  = 28,
    INDEX_IDARG_IN_UPDATEMODES                         = 29,
    INDEX_IDARG_OUT_ADAPTER_INIT                       = 30,
    INDEX_IDARG_OUT_FRAME_LATENCY_HINT                 = 31,
    INDEX_IDARG_OUT_GETDEFAULTDESCRIPTIONMODES         = 32,
    INDEX_IDARG_OUT_GETDIRTYRECTS                      = 33,
    INDEX_IDARG_OUT_GETMOVEREGIONS                     = 34,
    INDEX_IDARG_OUT_GETSRMLISTVERSION                  = 35,
    INDEX_IDARG_OUT_GETVERSION                         = 36,
    INDEX_IDARG_OUT_MONITORARRIVAL                     = 37,
    INDEX_IDARG_OUT_MONITORCREATE                      = 38,
    INDEX_IDARG_OUT_OPM_GET_CERTIFICATE_SIZE           = 39,
    INDEX_IDARG_OUT_OPM_GET_INFOMATION                 = 40,
    INDEX_IDARG_OUT_OPM_GET_RANDOM_NUMBER              = 41,
    INDEX_IDARG_OUT_PARSEMONITORDESCRIPTION            = 42,
    INDEX_IDARG_OUT_QUERY_HWCURSOR                     = 43,
    INDEX_IDARG_OUT_QUERYTARGETMODES                   = 44,
    INDEX_IDARG_OUT_RELEASEANDACQUIREBUFFER            = 45,
    INDEX_IDD_CX_CLIENT_CONFIG                         = 46,
    INDEX_IDD_DRIVER_GLOBALS                           = 47,
    INDEX_IDDCX_ADAPTER_CAPS                           = 48,
    INDEX_IDDCX_CURSOR_CAPS                            = 49,
    INDEX_IDDCX_CURSOR_SHAPE_INFO                      = 50,
    INDEX_IDDCX_ENDPOINT_DIAGNOSTIC_INFO               = 51,
    INDEX_IDDCX_ENDPOINT_VERSION                       = 52,
    INDEX_IDDCX_FRAME_STATISTICS                       = 53,
    INDEX_IDDCX_FRAME_STATISTICS_STEP                  = 54,
    INDEX_IDDCX_METADATA                               = 55,
    INDEX_IDDCX_MONITOR_DESCRIPTION                    = 56,
    INDEX_IDDCX_MONITOR_INFO                           = 57,
    INDEX_IDDCX_MONITOR_MODE                           = 58,
    INDEX_IDDCX_MOVEREGION                             = 59,
    INDEX_IDDCX_OPM_CONFIGURE_PARAMETERS               = 60,
    INDEX_IDDCX_OPM_ENCRYPTED_INITIALIZATION_PARAMETERS = 61,
    INDEX_IDDCX_OPM_GET_INFO_PARAMETERS                = 62,
    INDEX_IDDCX_OPM_GET_RANDOM_NUMBER                  = 63,
    INDEX_IDDCX_OPM_REQUESTED_INFORMATION              = 64,
    INDEX_IDDCX_PATH                                   = 65,
    INDEX_IDDCX_TARGET_MODE                            = 66,
    IDD_STRUCTURE_TABLE_NUM_ENTRIES                    = 67,
} IDDSTRUCTENUM;

#define Idd_STRUCTURE_TABLE_NUM_ENTRIES IDD_STRUCTURE_TABLE_NUM_ENTRIES

#endif // _IDDFUNCENUM_H_

