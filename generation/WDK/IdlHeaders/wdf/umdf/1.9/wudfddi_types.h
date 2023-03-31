//
//    Copyright (C) Microsoft.  All rights reserved.
//
#if !defined (___WUDFDDI_TYPES_H___)
#define ___WUDFDDI_TYPES_H___

//
//

//
//  Definitions of basic data types.  These match the SAL annotated
//  C++ types for strings.
//
#if defined(__midl)
typedef WCHAR *PWSTR;
typedef const WCHAR *PCWSTR;
#else
typedef _Null_terminated_ WCHAR *PWSTR;
typedef _Null_terminated_ const WCHAR *PCWSTR;
#endif

typedef DWORD REGSAM;
typedef ULONG ACCESS_MASK, *PACCESS_MASK;

//
// Definition of version data structure.
//

typedef struct UMDF_VERSION_DATA
{
    ULONG MajorNumber;
    ULONG MinorNumber;
    ULONG ServiceNumber;
} UMDF_VERSION_DATA, *PUMDF_VERSION_DATA;

//
// Definitions of WUDF constants, enums, and data types
//

typedef enum _WDF_CALLBACK_CONSTRAINT
{
    None                = 0,
    WdfDeviceLevel      = 1,
    WdfLevelReserved    = 2,
    WdfLevelMaximum
}WDF_CALLBACK_CONSTRAINT;

typedef enum _WDF_IO_QUEUE_DISPATCH_TYPE
{
  WdfIoQueueDispatchSequential = 1,
  WdfIoQueueDispatchParallel   = 2,
  WdfIoQueueDispatchManual     = 3,
  WdfIoQueueDispatchMaximum
} WDF_IO_QUEUE_DISPATCH_TYPE;

typedef enum _WDF_IO_QUEUE_STATE
{
    WdfIoQueueAcceptRequests    = 0x01,
    WdfIoQueueDispatchRequests  = 0x02,
    WdfIoQueueNoRequests        = 0x04,
    WdfIoQueueDriverNoRequests  = 0x08,
    WdfIoQueuePnpHeld           = 0x10
} WDF_IO_QUEUE_STATE, *PWDF_IO_QUEUE_STATE;

typedef enum _WDF_REQUEST_TYPE
{
    WdfRequestUndefined        = 0,
    WdfRequestCreate           = 1,
    WdfRequestCleanup          = 2,
    WdfRequestRead             = 3,
    WdfRequestWrite            = 4,
    WdfRequestDeviceIoControl  = 5,
    WdfRequestClose            = 6,
    WdfRequestUsb              = 7,
    WdfRequestOther            = 8,
    WdfRequestInternalIoctl    = 9,
    WdfRequestTypeNoFormat     = 10,
    WdfRequestFlushBuffers     = 11,
    WdfRequestQueryInformation = 12,
    WdfRequestSetInformation   = 13,
    WdfRequestMaximum

} WDF_REQUEST_TYPE, *PWDF_REQUEST_TYPE;

typedef enum _WDF_REQUEST_STOP_ACTION_FLAGS {
    WdfRequestStopActionInvalid          = 0x00000000,
    WdfRequestStopActionSuspend          = 0x00000001,
    WdfRequestStopActionPurge            = 0x00000002,
    WdfRequestStopRequestCancelable      = 0x10000000
} WDF_REQUEST_STOP_ACTION_FLAGS;

typedef enum _WDF_REQUEST_SEND_OPTIONS_FLAGS {
    WDF_REQUEST_SEND_OPTION_TIMEOUT                      = 0x00000001,
    WDF_REQUEST_SEND_OPTION_SYNCHRONOUS                  = 0x00000002,
    WDF_REQUEST_SEND_OPTION_IGNORE_TARGET_STATE          = 0x00000004,
    WDF_REQUEST_SEND_OPTION_SEND_AND_FORGET              = 0x00000008,
    WDF_REQUEST_SEND_OPTION_IMPERSONATE_CLIENT           = 0x00010000,
    WDF_REQUEST_SEND_OPTION_IMPERSONATION_IGNORE_FAILURE = 0x00020000
} WDF_REQUEST_SEND_OPTIONS_FLAGS;


typedef enum _WDF_IO_TARGET_STATE
{
    WdfIoTargetStateUndefined       = 0,
    WdfIoTargetStarted              = 1,
    WdfIoTargetStopped              = 2,
    WdfIoTargetClosedForQueryRemove = 3,
    WdfIoTargetClosed               = 4,
    WdfIoTargetDeleted              = 5,
    WdfIoTargetStateMaximum
} WDF_IO_TARGET_STATE, *PWDF_IO_TARGET_STATE;

typedef enum _WDF_IO_TARGET_SENT_IO_ACTION
{
    WdfIoTargetSentIoUndefined          = 0,
    WdfIoTargetCancelSentIo             = 1,
    WdfIoTargetWaitForSentIoToComplete  = 2,
    WdfIoTargetLeaveSentIoPending       = 3,
    WdfIoTargetSentIoMaximum
} WDF_IO_TARGET_SENT_IO_ACTION;

typedef struct _WDFMEMORY_OFFSET
{
    ULONG_PTR  BufferOffset;
    ULONG_PTR  BufferLength;
} WDFMEMORY_OFFSET, *PWDFMEMORY_OFFSET;

typedef enum _WDF_PNP_STATE
{
    WdfPnpStateInvalid          = 0,
    WdfPnpStateDisabled         = 1,
    WdfPnpStateFailed           = 2,
    WdfPnpStateRemoved          = 3,
    WdfPnpStateResourcesChanged = 4,
    WdfPnpStateDontDisplayInUI  = 5,
    WdfPnpStateNotDisableable   = 6,
    WdfPnpStateMaximum
} WDF_PNP_STATE;

typedef enum _WDF_PNP_CAPABILITY
{
    WdfPnpCapInvalid            = 0,
    WdfPnpCapLockSupported      = 1,
    WdfPnpCapEjectSupported     = 2,
    WdfPnpCapRemovable          = 3,
    WdfPnpCapDockDevice         = 4,
    WdfPnpCapSurpriseRemovalOk  = 5,
    WdfPnpCapNoDisplayInUI      = 6,
    WdfPnpCapMaximum
} WDF_PNP_CAPABILITY;

typedef enum _WDF_POWER_DEVICE_STATE {
    WdfPowerDeviceInvalid               = 0,
    WdfPowerDeviceD0                    = 1,
    WdfPowerDeviceD1                    = 2,
    WdfPowerDeviceD2                    = 3,
    WdfPowerDeviceD3                    = 4,
    WdfPowerDeviceD3Final               = 5,
    WdfPowerDevicePrepareForHibernation = 6,
    WdfPowerDeviceMaximum
} WDF_POWER_DEVICE_STATE, *PWDF_POWER_DEVICE_STATE;

typedef enum _WDF_EVENT_TYPE
{
    WdfEventReserved   = 0,
    WdfEventBroadcast  = 1,
    WdfEventMaximum
} WDF_EVENT_TYPE;


typedef enum _WDF_PROPERTY_STORE_RETRIEVE_FLAGS
{
    WdfPropertyStoreNormal          = 0x00,
    WdfPropertyStoreCreateIfMissing = 0x01,
    WdfPropertyStoreCreateVolatile  = 0x02,

    WdfPropertyStoreRetrieveFlagsMask = WdfPropertyStoreNormal          |
                                        WdfPropertyStoreCreateIfMissing |
                                        WdfPropertyStoreCreateVolatile
} WDF_PROPERTY_STORE_RETRIEVE_FLAGS;

#define WDF_PROPERTY_STORE_HARDWARE_KEY_ROOT    ((PCWSTR) L"\\")
#define WDF_PROPERTY_STORE_HARDWARE_KEY_DEFAULT ((PCWSTR) NULL)


typedef enum _WDF_PROPERTY_STORE_ROOT_CLASS
{
    WdfPropertyStoreRootClassHardwareKey        = 0x00,
    WdfPropertyStoreRootClassSoftwareKey        = 0x01,
    WdfPropertyStoreRootClassDeviceInterfaceKey = 0x02,
    WdfPropertyStoreRootClassLegacyHardwareKey  = 0x03
} WDF_PROPERTY_STORE_ROOT_CLASS;

typedef enum _WDF_PROPERTY_STORE_DISPOSITION
{
    CreatedNewStore     = 0x01,
    OpenedExistingStore = 0x02
} WDF_PROPERTY_STORE_DISPOSITION;

typedef struct _WDF_PROPERTY_STORE_ROOT
{
    //
    // The length of this structure in bytes.  Used for version control
    //
    ULONG LengthCb;

    //
    // The class of property store to open. Depending on which value is used
    // here the driver may also need to provide a "qualifier" in the union
    // below. Note that SoftwareKey class does not require any qualifier.
    //
    WDF_PROPERTY_STORE_ROOT_CLASS RootClass;

    union
    {
        struct
        {
            //
            // This is the name of the service subkey to open. The default (if
            // the driver provides NULL) is the name of the calling service.
            // The driver may provide WDF_PROPERTY_STORE_HARDWARE_KEY_DEFAULT to
            // use the name of the current driver service as the ServiceName.
            // The driver may also provide WDF_PROPERTY_STORE_HARDWARE_KEY_ROOT
            // in order to open the root "Device Properties" key.  If the driver
            // specifies this value it must open the key for read access only.
            // The driver must not use WDF as the service name.
            //
            PCWSTR  ServiceName;
        } HardwareKey;

        struct
        {
            //
            // The interface GUID of the interface key to open. The driver must
            // have previously registered an interface with this GUID.
            //
            LPCGUID InterfaceGUID;

            //
            // The reference string (if any) for the device interface key to
            // open.  The driver must have previously registered an interface
            // with the GUID and reference string if provided.
            PCWSTR ReferenceString;
        } DeviceInterfaceKey;

        struct
        {
            //
            // This is the name of the entry under the device map to open.
            //
            PCWSTR  LegacyMapName;
        } LegacyHardwareKey;
    } Qualifier;
} WDF_PROPERTY_STORE_ROOT, *PWDF_PROPERTY_STORE_ROOT;

typedef enum _WDF_POWER_POLICY_S0_IDLE_CAPABILITIES {
    //
    // For internal use only
    //
    IdleCapsInvalid = 0,

    //
    // Device cannot wake itself from low power state when system is in S0
    //
    IdleCannotWakeFromS0,

    //
    // Device can wake itself from low power state when system is in S0
    //
    IdleCanWakeFromS0,

    //
    // Device is a USB device and supports USB selective suspend. Drivers for
    // USB devices must not specify IdleCanWakeFromS0
    //
    IdleUsbSelectiveSuspend,

} WDF_POWER_POLICY_S0_IDLE_CAPABILITIES;

typedef enum _WDF_POWER_POLICY_S0_IDLE_USER_CONTROL {
    //
    // For internal use only
    //
    IdleUserControlInvalid = 0,

    //
    // Users cannot control the device's idle behavior
    //
    IdleDoNotAllowUserControl,

    //
    // Users can control the device's idle behavior
    //
    IdleAllowUserControl,

} WDF_POWER_POLICY_S0_IDLE_USER_CONTROL;

typedef enum _WDF_POWER_POLICY_IDLE_TIMEOUT_CONSTANTS {
    IdleTimeoutDefaultConstant = 0,
} WDF_POWER_POLICY_IDLE_TIMEOUT_CONSTANTS;

typedef enum _WDF_POWER_POLICY_SX_WAKE_USER_CONTROL {
    //
    // For internal use only
    //
    WakeUserControlInvalid = 0,

    //
    // Users cannot control the device's ability to wake the system from a low
    // system power state
    //
    WakeDoNotAllowUserControl,

    //
    // Users can control the device's ability to wake the system from a low 
    // system power state
    //
    WakeAllowUserControl,

} WDF_POWER_POLICY_SX_WAKE_USER_CONTROL;

typedef enum _WDF_KPROCESSOR_MODE {
    WdfKProcessorModeInvalid,
    WdfKernelMode,
    WdfUserMode,
    WdfKProcessorModeMaximum
} WDF_KPROCESSOR_MODE, *PWDF_KPROCESSOR_MODE;

#define IdleTimeoutDefaultValue ((ULONG) IdleTimeoutDefaultConstant)

typedef enum _WDF_DEVICE_IO_BUFFER_RETRIEVAL {

    //
    // Defined invalid value.  Do not use.
    //

    WdfDeviceIoBufferRetrievalInvalid = 0x00,

    //
    // Copies buffers into the host as soon as requests 
    // arrive.  This is the mode pre 1.9 drivers run in, and is 
    // slower overall but is provided as an option here simply 
    // for completeness.
    //
    // 1.9 drivers should use deferred retrieval mode instead.
    //

    WdfDeviceIoBufferRetrievalCopyImmediately = 0x01,

    //
    // Brings buffers into the host when the first driver calls
    // Retrieve[Input|Output][Buffer|Memory].  Drivers must not
    // use IWDFIoRequest::Get[Input|Output][Buffer|Memory] or
    // they will hit a driver stop.  
    //
    // This is the preferred retrieval mode for UMDF 1.9 drivers
    // and later, and is require to enable any of the direct 
    // io types below.
    //

    WdfDeviceIoBufferRetrievalDeferred   = 0x02,

    //
    // Defined maximum value - do not use.
    //

    WdfDeviceIoBufferRetrievalMaximum

} WDF_DEVICE_IO_BUFFER_RETRIEVAL, *PWDF_DEVICE_IO_BUFFER_RETRIEVAL;

typedef enum _WDF_DEVICE_IO_TYPE {

    //
    // For internal use only.
    //

    WdfDeviceIoUndefined        = 0x00,

    //
    // Method neither I/O is unsupported in UMDF, 
    // but here to ensure the enum values match for KMDF and UMDF
    //

    WdfDeviceIoNeither          = 0x01,

    //
    // Buffered I/O - request buffers are copied from client 
    // into host.  Retrieval mode can be Compatible or Deferred
    //

    WdfDeviceIoBuffered         = 0x02,

    //
    // Direct I/O - request buffers are direct mapped into host
    // if possible.  Retrieval mode must be Deferred.
    //

    WdfDeviceIoDirect           = 0x03,

    //
    // Driver can handle buffered I/O or direct I/O.  Final 
    // transfer mode will depend on the IoTypePreference of all 
    // drivers in the stack.  Retrieval mode must be Deferred.
    //

    WdfDeviceIoBufferedOrDirect = 0x04,

    //
    // for internal use only
    //

    WdfDeviceIoMaximum


} WDF_DEVICE_IO_TYPE, *PWDF_DEVICE_IO_TYPE;

typedef enum _WDF_FILE_INFORMATION_CLASS {
    WdfFileInformationDirectory         = 1,
    WdfFileInformationFullDirectory,   // 2
    WdfFileInformationBothDirectory,   // 3
    WdfFileInformationBasic,           // 4
    WdfFileInformationStandard,        // 5
    WdfFileInformationInternal,        // 6
    WdfFileInformationEa,              // 7
    WdfFileInformationAccess,          // 8
    WdfFileInformationName,            // 9
    WdfFileInformationRename,          // 10
    WdfFileInformationLink,            // 11
    WdfFileInformationNames,           // 12
    WdfFileInformationDisposition,     // 13
    WdfFileInformationPosition,        // 14
    WdfFileInformationFullEa,          // 15
    WdfFileInformationMode,            // 16
    WdfFileInformationAlignment,       // 17
    WdfFileInformationAll,             // 18
    WdfFileInformationAllocation,      // 19
    WdfFileInformationEndOfFile,       // 20
    WdfFileInformationAlternateName,   // 21
    WdfFileInformationStream,          // 22
    WdfFileInformationPipe,            // 23
    WdfFileInformationPipeLocal,       // 24
    WdfFileInformationPipeRemote,      // 25
    WdfFileInformationMailslotQuery,   // 26
    WdfFileInformationMailslotSet,     // 27
    WdfFileInformationCompression,     // 28
    WdfFileInformationObjectId,        // 29
    WdfFileInformationCompletion,      // 30
    WdfFileInformationMoveCluster,     // 31
    WdfFileInformationQuota,           // 32
    WdfFileInformationReparsePoint,    // 33
    WdfFileInformationNetworkOpen,     // 34
    WdfFileInformationAttributeTag,    // 35
    WdfFileInformationTracking,        // 36
    WdfFileInformationIdBothDirectory, // 37
    WdfFileInformationIdFullDirectory, // 38
    WdfFileInformationValidDataLength, // 39
    WdfFileInformationShortName,       // 40
    WdfFileInformationIoCompletionNotification, // 41
    WdfFileInformationIoStatusBlockRange,       // 42
    WdfFileInformationIoPriorityHint,           // 43
    WdfFileInformationSfioReserve,              // 44
    WdfFileInformationSfioVolume,               // 45
    WdfFileInformationHardLink,                 // 46
    WdfFileInformationProcessIdsUsingFile,      // 47
    WdfFileInformationNormalizedName,           // 48
    WdfFileInformationNetworkPhysicalName,      // 49
    WdfFileInformationIdGlobalTxDirectory,      // 50
    WdfFileInformationIsRemoteDevice,           // 51
    WdfFileInformationAttributeCache,           // 52
    WdfFileInformationMaximum
} WDF_FILE_INFORMATION_CLASS, *PWDF_FILE_INFORMATION_CLASS;

//
// begin_wpp config
// CUSTOM_TYPE(WDF_REQUEST_TYPE, ItemEnum(_WDF_REQUEST_TYPE));
// end_wpp
//
// begin_wpp config
// CUSTOM_TYPE(WDF_IO_TARGET_STATE, ItemEnum(_WDF_IO_TARGET_STATE));
// end_wpp

#endif // ___WUDFDDI_TYPES_H___


