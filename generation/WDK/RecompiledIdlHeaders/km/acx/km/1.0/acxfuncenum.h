/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

_WdfVersionBuild_

Module Name: AcxFuncEnum.h

Abstract:
    Generated an enum of all WDF API functions

Environment:
    kernel mode only

    Warning: manual changes to this file will be lost.
--*/

#ifndef _ACXFUNCENUM_H_
#define _ACXFUNCENUM_H_

extern PACX_DRIVER_GLOBALS AcxDriverGlobals;


//
//
// The first version of the framework that added the support
// for client version to be higher than the framework version
//
#define ACX_FIRST_VERSION_SUPPORTING_CLIENT_VERSION_HIGHER_THAN_FRAMEWORK 0

//
// The function count from the first framework which added the support.
// Any function with index less than the count is always available
//
#define ACX_ALWAYS_AVAILABLE_FUNCTION_COUNT  210

//
// Validate ACX_MINIMUM_VERSION_REQUIRED falls into the correct range
//
#if defined(ACX_MINIMUM_VERSION_REQUIRED)

    #if ACX_MINIMUM_VERSION_REQUIRED > ACX_VERSION_MINOR
    #error ACX_MINIMUM_VERSION_REQUIRED > ACX_VERSION_MINOR
    #endif

#endif


//
// All functions/structures are always available in following two cases:
//
//  1) Building framework itself (which defines ACX_EVERYTHING_ALWAYS_AVAILABLE)
//
//  2) Traditional client drivers who are not aware of the new feature
//     "client version can be higher than framework's" and thus implies
//     ACX_VERSION_MINOR == ACX_MINIMUM_VERSION_REQUIRED
//
#if defined(ACX_MINIMUM_VERSION_REQUIRED) && (ACX_VERSION_MINOR == ACX_MINIMUM_VERSION_REQUIRED)

    #if !defined(ACX_EVERYTHING_ALWAYS_AVAILABLE)
    #define ACX_EVERYTHING_ALWAYS_AVAILABLE
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
extern BOOLEAN AcxClientVersionHigherThanFramework;

//
// private:
//
// Only valid when AcxClientVersionHigherThanFramework is TRUE.
//
// Hold the count of usable functions from the framework. Used by IS_FUNCTION_AVAILABLE
// to determine whether a function is available on the platform.
//
extern ULONG   AcxFunctionCount;

//
// private:
//
// Only valid when AcxClientVersionHigherThanFramework is TRUE.
//
// Hold the count of usable structures from the framework. Used by IS_FIELD_AVAILABLE
// to determine whether a field in a structure is available on the platform.
//
extern ULONG   AcxStructureCount;
extern WDF_STRUCT_INFO AcxStructures;


//
// private:
//
// Only valid when AcxClientVersionHigherThanFramework is TRUE.
//
// Hold the name of the Framework Extension.
//
extern PCWSTR  AcxFrameworkExtensionName;


#ifndef ACX_STUB

    #ifndef ACX_VERSION_MAJOR
    #error  ACX_VERSION_MAJOR is not defined
    #endif

    //
    // "Version Minor(Target version)" controls which version of public header files to include
    //
    #ifndef ACX_VERSION_MINOR
    #error  ACX_VERSION_MINOR is not defined
    #endif

    //
    // "Version Minor (Minimum Required)" controls the oldest version of framework to load the driver
    //
    #ifndef ACX_MINIMUM_VERSION_REQUIRED
    #define ACX_MINIMUM_VERSION_REQUIRED ACX_VERSION_MINOR
    #endif

    __declspec(selectany)
    ULONG AcxMinimumVersionRequired = ACX_MINIMUM_VERSION_REQUIRED;

#else

    //
    // Implemented in client driver code
    //
    extern ULONG AcxMinimumVersionRequired;

#endif

//
// BOOLEAN
// ACX_IS_FUNCTION_AVAILABLE(
//     FunctionName
//     );
//
#define ACX_IS_FUNCTION_AVAILABLE(FunctionName)                                \
(                                                                              \
    (FunctionName ## TableIndex < ACX_ALWAYS_AVAILABLE_FUNCTION_COUNT)         \
    ||                                                                         \
    (!AcxClientVersionHigherThanFramework)                                     \
    ||                                                                         \
    (FunctionName ## TableIndex < AcxFunctionCount)                            \
)

//
// BOOLEAN
// ACX_IS_STRUCTURE_AVAILABLE(
//     StructName
//     );
//
#define ACX_IS_STRUCTURE_AVAILABLE(StructName)                                 \
(                                                                              \
    (!AcxClientVersionHigherThanFramework)                                     \
    ||                                                                         \
    (INDEX_ ## StructName < AcxStructureCount)                                 \
)

//
// BOOLEAN
// ACX_IS_FIELD_AVAILABLE(
//     StructName,
//     FieldName
//     );
//
#define ACX_IS_FIELD_AVAILABLE(StructName, FieldName)                          \
(                                                                              \
    (!AcxClientVersionHigherThanFramework)                                     \
    ||                                                                         \
    (                                                                          \
        (INDEX_ ## StructName < AcxStructureCount)                             \
        &&                                                                     \
        (FIELD_OFFSET(StructName, FieldName) < AcxStructures[INDEX_ ## StructName])\
    )                                                                          \
)

//
// ULONG
// ACX_STRUCTURE_SIZE(
//     StructName
//     );
//
// NOTE: if it returns (-1), the structure is not available on the
//       current framework (and should not be used).
//
#if defined(ACX_EVERYTHING_ALWAYS_AVAILABLE)

#define ACX_STRUCTURE_SIZE(StructName)  (ULONG)sizeof(StructName)

#else

#define ACX_STRUCTURE_SIZE(StructName)                                         \
(ULONG)                                                                        \
(                                                                              \
    AcxClientVersionHigherThanFramework                                        \
        ? (                                                                    \
            (INDEX_ ## StructName < AcxStructureCount)                         \
            ? AcxStructures[INDEX_ ## StructName]                              \
            : (size_t)(-1)                                                     \
          )                                                                    \
        : sizeof(StructName)                                                   \
)

#endif // ACX_STRUCTURE_SIZE

typedef enum _ACXFUNCENUM {

    AcxCircuitInitAllocateTableIndex = 0,
    AcxCircuitInitFreeTableIndex = 1,
    AcxCircuitInitSetComponentIdTableIndex = 2,
    AcxCircuitInitAssignComponentUriTableIndex = 3,
    AcxCircuitInitAssignNameTableIndex = 4,
    AcxCircuitInitAssignCategoriesTableIndex = 5,
    AcxCircuitInitSetCircuitTypeTableIndex = 6,
    AcxCircuitInitAssignPropertiesTableIndex = 7,
    AcxCircuitInitAssignMethodsTableIndex = 8,
    AcxCircuitInitSetAcxCircuitPnpPowerCallbacksTableIndex = 9,
    AcxCircuitInitSetAcxCircuitCompositeCallbacksTableIndex = 10,
    AcxCircuitInitAssignAcxRequestPreprocessCallbackTableIndex = 11,
    AcxCircuitInitAssignAcxCreateStreamCallbackTableIndex = 12,
    AcxCircuitInitDisableDefaultStreamBridgeHandlingTableIndex = 13,
    AcxCircuitCreateTableIndex = 14,
    AcxCircuitAddEventsTableIndex = 15,
    AcxCircuitAddElementsTableIndex = 16,
    AcxCircuitGetElementByIdTableIndex = 17,
    AcxCircuitAddConnectionsTableIndex = 18,
    AcxCircuitAddPhysicalConnectionsTableIndex = 19,
    AcxCircuitAddPinsTableIndex = 20,
    AcxCircuitGetPinByIdTableIndex = 21,
    AcxCircuitGetWdfDeviceTableIndex = 22,
    AcxCircuitDispatchAcxRequestTableIndex = 23,
    AcxCircuitStopIoActualTableIndex = 24,
    AcxCircuitResumeIoActualTableIndex = 25,
    AcxFactoryCircuitInitAllocateTableIndex = 26,
    AcxFactoryCircuitInitFreeTableIndex = 27,
    AcxFactoryCircuitInitSetComponentIdTableIndex = 28,
    AcxFactoryCircuitInitAssignComponentUriTableIndex = 29,
    AcxFactoryCircuitInitAssignNameTableIndex = 30,
    AcxFactoryCircuitInitAssignCategoriesTableIndex = 31,
    AcxFactoryCircuitInitAssignPropertiesTableIndex = 32,
    AcxFactoryCircuitInitAssignMethodsTableIndex = 33,
    AcxFactoryCircuitInitSetOperationCallbacksTableIndex = 34,
    AcxFactoryCircuitInitSetAcxCircuitPnpPowerCallbacksTableIndex = 35,
    AcxFactoryCircuitInitAssignAcxRequestPreprocessCallbackTableIndex = 36,
    AcxFactoryCircuitCreateTableIndex = 37,
    AcxFactoryCircuitAddElementsTableIndex = 38,
    AcxDataFormatCreateTableIndex = 39,
    AcxDataFormatGetMajorFormatTableIndex = 40,
    AcxDataFormatGetSubFormatTableIndex = 41,
    AcxDataFormatGetSpecifierTableIndex = 42,
    AcxDataFormatGetChannelsCountTableIndex = 43,
    AcxDataFormatGetChannelMaskTableIndex = 44,
    AcxDataFormatGetSampleSizeTableIndex = 45,
    AcxDataFormatGetBitsPerSampleTableIndex = 46,
    AcxDataFormatGetValidBitsPerSampleTableIndex = 47,
    AcxDataFormatGetSamplesPerBlockTableIndex = 48,
    AcxDataFormatGetBlockAlignTableIndex = 49,
    AcxDataFormatGetSampleRateTableIndex = 50,
    AcxDataFormatGetAverageBytesPerSecTableIndex = 51,
    AcxDataFormatGetEncodedSamplesPerSecTableIndex = 52,
    AcxDataFormatGetEncodedChannelCountTableIndex = 53,
    AcxDataFormatGetEncodedAverageBytesPerSecTableIndex = 54,
    AcxDataFormatGetKsDataFormatTableIndex = 55,
    AcxDataFormatGetWaveFormatExTableIndex = 56,
    AcxDataFormatGetWaveFormatExtensibleTableIndex = 57,
    AcxDataFormatGetWaveFormatExtensibleIec61937TableIndex = 58,
    AcxDataFormatIsEqualTableIndex = 59,
    AcxDataFormatListCreateTableIndex = 60,
    AcxDataFormatListAddDataFormatTableIndex = 61,
    AcxDataFormatListRemoveDataFormatTableIndex = 62,
    AcxDataFormatListAssignDefaultDataFormatTableIndex = 63,
    AcxDataFormatListRetrieveDefaultDataFormatTableIndex = 64,
    AcxDataFormatListBeginIterationTableIndex = 65,
    AcxDataFormatListRetrieveNextFormatTableIndex = 66,
    AcxDataFormatListEndIterationTableIndex = 67,
    AcxDeviceInitInitializeTableIndex = 68,
    AcxDeviceInitializeTableIndex = 69,
    AcxDeviceAddCircuitTableIndex = 70,
    AcxDeviceRemoveCircuitTableIndex = 71,
    AcxDeviceDetachCircuitTableIndex = 72,
    AcxDeviceAddCircuitDeviceTableIndex = 73,
    AcxDeviceRemoveCircuitDeviceTableIndex = 74,
    AcxDeviceAddFactoryCircuitTableIndex = 75,
    AcxDeviceRemoveFactoryCircuitTableIndex = 76,
    AcxDeviceGetCurrentDxExitLatencyTableIndex = 77,
    AcxDriverInitializeTableIndex = 78,
    AcxDriverIsVersionAvailableTableIndex = 79,
    AcxElementCreateTableIndex = 80,
    AcxElementAddEventsTableIndex = 81,
    AcxElementGetIdTableIndex = 82,
    AcxElementGetContainerTableIndex = 83,
    AcxMuteCreateTableIndex = 84,
    AcxMuteChangeStateNotificationTableIndex = 85,
    AcxVolumeCreateTableIndex = 86,
    AcxVolumeChangeLevelNotificationTableIndex = 87,
    AcxPeakMeterCreateTableIndex = 88,
    AcxAudioEngineCreateTableIndex = 89,
    AcxAudioEngineGetDeviceFormatListTableIndex = 90,
    AcxStreamAudioEngineCreateTableIndex = 91,
    AcxStreamAudioEngineGetStreamTableIndex = 92,
    AcxKeywordSpotterCreateTableIndex = 93,
    AcxAudioModuleCreateTableIndex = 94,
    AcxEventCreateTableIndex = 95,
    AcxEventAddEventDataTableIndex = 96,
    AcxEventGenerateEventTableIndex = 97,
    AcxPnpEventCreateTableIndex = 98,
    AcxPnpEventGenerateEventTableIndex = 99,
    AcxGetManagerTableIndex = 100,
    AcxManagerAddCompositeTemplateTableIndex = 101,
    AcxManagerRemoveCompositeTemplateTableIndex = 102,
    AcxCompositeTemplateCreateTableIndex = 103,
    AcxCompositeTemplateAssignCircuitsTableIndex = 104,
    AcxCompositeTemplateSetCoreCircuitTableIndex = 105,
    AcxCircuitTemplateCreateTableIndex = 106,
    AcxObjectBagCreateTableIndex = 107,
    AcxObjectBagOpenTableIndex = 108,
    AcxObjectBagAddI1TableIndex = 109,
    AcxObjectBagAddUI1TableIndex = 110,
    AcxObjectBagAddI2TableIndex = 111,
    AcxObjectBagAddUI2TableIndex = 112,
    AcxObjectBagAddI4TableIndex = 113,
    AcxObjectBagAddUI4TableIndex = 114,
    AcxObjectBagAddI8TableIndex = 115,
    AcxObjectBagAddUI8TableIndex = 116,
    AcxObjectBagAddSizeTTableIndex = 117,
    AcxObjectBagAddGuidTableIndex = 118,
    AcxObjectBagAddStringTableIndex = 119,
    AcxObjectBagAddMultiStringTableIndex = 120,
    AcxObjectBagAddUnicodeStringTableIndex = 121,
    AcxObjectBagAddBlobTableIndex = 122,
    AcxObjectBagRetrieveI1TableIndex = 123,
    AcxObjectBagRetrieveUI1TableIndex = 124,
    AcxObjectBagRetrieveI2TableIndex = 125,
    AcxObjectBagRetrieveUI2TableIndex = 126,
    AcxObjectBagRetrieveI4TableIndex = 127,
    AcxObjectBagRetrieveUI4TableIndex = 128,
    AcxObjectBagRetrieveI8TableIndex = 129,
    AcxObjectBagRetrieveUI8TableIndex = 130,
    AcxObjectBagRetrieveSizeTTableIndex = 131,
    AcxObjectBagRetrieveGuidTableIndex = 132,
    AcxObjectBagRetrieveStringTableIndex = 133,
    AcxObjectBagRetrieveMultiStringTableIndex = 134,
    AcxObjectBagRetrieveUnicodeStringTableIndex = 135,
    AcxObjectBagRetrieveBlobTableIndex = 136,
    AcxPinCreateTableIndex = 137,
    AcxPinAddEventsTableIndex = 138,
    AcxPinAddJacksTableIndex = 139,
    AcxPinRetrieveModeDataFormatListTableIndex = 140,
    AcxPinAssignModeDataFormatListTableIndex = 141,
    AcxPinGetRawDataFormatListTableIndex = 142,
    AcxPinNotifyDataFormatChangeTableIndex = 143,
    AcxPinAddStreamBridgesTableIndex = 144,
    AcxPinRemoveStreamBridgesTableIndex = 145,
    AcxPinGetCircuitTableIndex = 146,
    AcxPinGetTypeTableIndex = 147,
    AcxPinGetIdTableIndex = 148,
    AcxJackCreateTableIndex = 149,
    AcxJackChangeStateNotificationTableIndex = 150,
    AcxMicArrayGeometryCreateTableIndex = 151,
    AcxMicArrayGeometryAddMicrophoneCoordinatesTableIndex = 152,
    AcxRequestGetParametersTableIndex = 153,
    AcxStreamInitAssignPropertiesTableIndex = 154,
    AcxStreamInitAssignMethodsTableIndex = 155,
    AcxStreamInitAssignAcxRequestPreprocessCallbackTableIndex = 156,
    AcxStreamInitAssignAcxStreamCallbacksTableIndex = 157,
    AcxStreamInitAssignAcxRtStreamCallbacksTableIndex = 158,
    AcxStreamInitSetAcxRtStreamSupportsNotificationsTableIndex = 159,
    AcxStreamCreateTableIndex = 160,
    AcxStreamAddEventsTableIndex = 161,
    AcxStreamAddElementsTableIndex = 162,
    AcxStreamGetElementByIdTableIndex = 163,
    AcxStreamAddConnectionsTableIndex = 164,
    AcxStreamGetCircuitTableIndex = 165,
    AcxStreamDispatchAcxRequestTableIndex = 166,
    AcxStreamStopIoActualTableIndex = 167,
    AcxStreamResumeIoActualTableIndex = 168,
    AcxRtStreamCreateTableIndex = 169,
    AcxRtStreamNotifyPacketCompleteTableIndex = 170,
    AcxDrmAddContentHandlersTableIndex = 171,
    AcxDrmCreateContentMixedTableIndex = 172,
    AcxDrmDestroyContentTableIndex = 173,
    AcxDrmForwardContentToDeviceObjectTableIndex = 174,
    AcxDrmRetrieveContentRightsTableIndex = 175,
    AcxStreamBridgeCreateTableIndex = 176,
    AcxStreamBridgeAddStreamTableIndex = 177,
    AcxStreamBridgeRemoveStreamTableIndex = 178,
    AcxStreamBridgeGetTargetStreamTableIndex = 179,
    AcxTargetCircuitCreateTableIndex = 180,
    AcxTargetCircuitGetWdfIoTargetTableIndex = 181,
    AcxTargetCircuitGetPinsCountTableIndex = 182,
    AcxTargetCircuitGetTargetPinTableIndex = 183,
    AcxTargetCircuitGetElementsCountTableIndex = 184,
    AcxTargetCircuitGetTargetElementTableIndex = 185,
    AcxTargetCircuitFormatRequestForPropertyTableIndex = 186,
    AcxTargetCircuitFormatRequestForMethodTableIndex = 187,
    AcxTargetPinGetIdTableIndex = 188,
    AcxTargetPinGetWdfIoTargetTableIndex = 189,
    AcxTargetPinRetrieveModeDataFormatListTableIndex = 190,
    AcxTargetPinFormatRequestForPropertyTableIndex = 191,
    AcxTargetPinFormatRequestForMethodTableIndex = 192,
    AcxTargetElementGetIdTableIndex = 193,
    AcxTargetElementGetTypeTableIndex = 194,
    AcxTargetElementGetNameTagTableIndex = 195,
    AcxTargetElementGetWdfIoTargetTableIndex = 196,
    AcxTargetElementFormatRequestForPropertyTableIndex = 197,
    AcxTargetElementFormatRequestForMethodTableIndex = 198,
    AcxTargetStreamCreateTableIndex = 199,
    AcxTargetStreamGetWdfIoTargetTableIndex = 200,
    AcxTargetStreamGetElementsCountTableIndex = 201,
    AcxTargetStreamGetTargetElementTableIndex = 202,
    AcxTargetStreamAssignDrmContentIdTableIndex = 203,
    AcxTargetStreamFormatRequestForPropertyTableIndex = 204,
    AcxTargetStreamFormatRequestForMethodTableIndex = 205,
    AcxTargetFactoryCircuitCreateTableIndex = 206,
    AcxTargetFactoryCircuitGetWdfIoTargetTableIndex = 207,
    AcxTargetFactoryCircuitFormatRequestForPropertyTableIndex = 208,
    AcxTargetFactoryCircuitFormatRequestForMethodTableIndex = 209,
    AcxFunctionTableNumEntries = 210,
} ACXFUNCENUM;

typedef enum _ACXSTRUCTENUM {

    INDEX_ACX_AUDIOENGINE_CALLBACKS                    = 0,
    INDEX_ACX_AUDIOENGINE_CONFIG                       = 1,
    INDEX_ACX_AUDIOMODULE_CALLBACKS                    = 2,
    INDEX_ACX_AUDIOMODULE_CONFIG                       = 3,
    INDEX_ACX_AUDIOMODULE_DESCRIPTOR                   = 4,
    INDEX_ACX_CIRCUIT_COMPOSITE_CALLBACKS              = 5,
    INDEX_ACX_CIRCUIT_PNPPOWER_CALLBACKS               = 6,
    INDEX_ACX_CIRCUIT_TEMPLATE_CONFIG                  = 7,
    INDEX_ACX_COMPOSITE_TEMPLATE_CONFIG                = 8,
    INDEX_ACX_CONNECTION                               = 9,
    INDEX_ACX_DATAFORMAT_CONFIG                        = 10,
    INDEX_ACX_DATAFORMAT_LIST_CONFIG                   = 11,
    INDEX_ACX_DATAFORMAT_LIST_ITERATOR                 = 12,
    INDEX_ACX_DEVICE_CONFIG                            = 13,
    INDEX_ACX_DEVICEINIT_CONFIG                        = 14,
    INDEX_ACX_DRIVER_CONFIG                            = 15,
    INDEX_ACX_DRIVER_GLOBALS                           = 16,
    INDEX_ACX_DRIVER_VERSION_AVAILABLE_PARAMS          = 17,
    INDEX_ACX_ELEMENT_CONFIG                           = 18,
    INDEX_ACX_EVENT_CALLBACKS                          = 19,
    INDEX_ACX_EVENT_CONFIG                             = 20,
    INDEX_ACX_EVENT_ITEM                               = 21,
    INDEX_ACX_FACTORY_CIRCUIT_ADD_CIRCUIT              = 22,
    INDEX_ACX_FACTORY_CIRCUIT_OPERATION_CALLBACKS      = 23,
    INDEX_ACX_FACTORY_CIRCUIT_PNPPOWER_CALLBACKS       = 24,
    INDEX_ACX_FACTORY_CIRCUIT_REMOVE_CIRCUIT           = 25,
    INDEX_ACX_INTERLEAVED_AUDIO_FORMAT_INFORMATION     = 26,
    INDEX_ACX_JACK_CALLBACKS                           = 27,
    INDEX_ACX_JACK_CONFIG                              = 28,
    INDEX_ACX_JACK_DESCRIPTION                         = 29,
    INDEX_ACX_JACK_SINK_INFORMATION                    = 30,
    INDEX_ACX_KEYWORDSPOTTER_CALLBACKS                 = 31,
    INDEX_ACX_KEYWORDSPOTTER_CONFIG                    = 32,
    INDEX_ACX_METHOD_ITEM                              = 33,
    INDEX_ACX_MIC_ARRAY_GEOMETRY                       = 34,
    INDEX_ACX_MICARRAYGEOMETRY_CONFIG                  = 35,
    INDEX_ACX_MICROPHONE_CONFIG                        = 36,
    INDEX_ACX_MICROPHONE_COORDINATES                   = 37,
    INDEX_ACX_MUTE_CALLBACKS                           = 38,
    INDEX_ACX_MUTE_CONFIG                              = 39,
    INDEX_ACX_OBJECTBAG_CONFIG                         = 40,
    INDEX_ACX_PEAKMETER_CALLBACKS                      = 41,
    INDEX_ACX_PEAKMETER_CONFIG                         = 42,
    INDEX_ACX_PHYSICAL_CONNECTION                      = 43,
    INDEX_ACX_PIN_CALLBACKS                            = 44,
    INDEX_ACX_PIN_CONFIG                               = 45,
    INDEX_ACX_PNPEVENT_CONFIG                          = 46,
    INDEX_ACX_PROPERTY_ITEM                            = 47,
    INDEX_ACX_REQUEST_PARAMETERS                       = 48,
    INDEX_ACX_RT_STREAM_CALLBACKS                      = 49,
    INDEX_ACX_RTPACKET                                 = 50,
    INDEX_ACX_STREAM_BRIDGE_CONFIG                     = 51,
    INDEX_ACX_STREAM_CALLBACKS                         = 52,
    INDEX_ACX_STREAMAUDIOENGINE_CALLBACKS              = 53,
    INDEX_ACX_STREAMAUDIOENGINE_CONFIG                 = 54,
    INDEX_ACX_TARGET_CIRCUIT_CONFIG                    = 55,
    INDEX_ACX_TARGET_FACTORY_CIRCUIT_CONFIG            = 56,
    INDEX_ACX_TARGET_STREAM_CONFIG                     = 57,
    INDEX_ACX_VOLUME_CALLBACKS                         = 58,
    INDEX_ACX_VOLUME_CONFIG                            = 59,
    INDEX_ACXDRMFORWARD                                = 60,
    INDEX_ACXDRMRIGHTS                                 = 61,
    ACX_STRUCTURE_TABLE_NUM_ENTRIES                    = 62,
} ACXSTRUCTENUM;

#define Acx_STRUCTURE_TABLE_NUM_ENTRIES ACX_STRUCTURE_TABLE_NUM_ENTRIES

#endif // _ACXFUNCENUM_H_

