/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

 SoundWireController.h

Abstract:

    This module defines the types, constants, functions and control codes that are
    used by device drivers to interact with a SoundWire Controller driver.

Environment:

    Kernel-mode.

--*/

#ifndef _SOUNDWIRECONTROLLER_H_
#define _SOUNDWIRECONTROLLER_H_

#define SDCA_AUDIO_ADDRESS_VER_1        (1)
#define SOUNDWIRE_INTERRUPTS_VER_1      (1)
#define SOUNDWIRE_NOTIFICATIONS_VER_1   (1)

#define SOUNDWIRE_CONTROLLER_VER_1      (1)
#define SOUNDWIRE_CONTROLLER_VER_2      (2)                 // Support for Commit Groups Added

#define MAX_NUM_DATAPORTS (15)

typedef enum _SOUNDWIRE_COMMAND_PRIORITY
{
    SoundWireCommandPriorityInvalid     = 0,                // Invalid priority
    SoundWireCommandPriorityNormal      = 1,                // Normal priority
    SoundWireCommandPriorityHigh        = 2,                // High priority
    SoundWireCommandPriorityCritical    = 3,                // Critical priority
} SOUNDWIRE_COMMAND_PRIORITY;

typedef enum _SOUNDWIRE_DUAL_RANK_ATTRIBUTE
{
    SoundWireDualRankAttributeCvr = 0,                      // Current Value Register
    SoundWireDualRankAttributeNvr = 1,                      // Next Value Register
} SOUNDWIRE_DUAL_RANK_ATTRIBUTE;

typedef struct _SDCA_AUDIO_ADDRESS
{
    ULONG                           Size;                   // Size of this struct
    UINT8                           Version;                // Version of this struct
    UINT8                           FunctionId;             // Sdca Audio Function Id
    UINT8                           EntityId;               // Sdca Entity Id
    UINT8                           ControlSelector;        // Sdca Control Selector
    UINT8                           ControlNumber;          // Sdca Control Number
    SOUNDWIRE_DUAL_RANK_ATTRIBUTE   DualRankAttribute;      // Current or Next Value
} SDCA_AUDIO_ADDRESS, *PSDCA_AUDIO_ADDRESS;

typedef struct _SDCA_AUDIO_CONTROL
{
    SDCA_AUDIO_ADDRESS          Address;                    // Sdca hierarchical address
    ULONG                       ValueSize;                  // Size (number of bytes) of Value
    LONGLONG                    Value;                      // Single of Multi-byte value (max 8 bytes) of an Sdca Control
    NTSTATUS                    Status;                     // Status of Read/Write operation
} SDCA_AUDIO_CONTROL, *PSDCA_AUDIO_CONTROL;

typedef struct _SDCA_AUDIO_CONTROLS
{
    ULONG                       Size;                       // Size of this struct including size of Control array
    SOUNDWIRE_COMMAND_PRIORITY  Priority;                   // Priority
    ULONG                       ControlCount;               // Count of Sdca Controls in Control array 
    _Field_size_(ControlCount)
    SDCA_AUDIO_CONTROL          Control[ANYSIZE_ARRAY];     // Array of Sdca Controls
} SDCA_AUDIO_CONTROLS, *PSDCA_AUDIO_CONTROLS;

typedef struct _SDCA_AUDIO_CONTROLS_2
{
    ULONG                       Size;                       // Size of this struct including size of Control array
    ULONG                       CommitGroupHandle;          // Commit Group Handle (optional)
    SOUNDWIRE_COMMAND_PRIORITY  Priority;                   // Priority
    ULONG                       ControlCount;               // Count of Sdca Controls in Control array 
    _Field_size_(ControlCount)
    SDCA_AUDIO_CONTROL          Control[ANYSIZE_ARRAY];     // Array of Sdca Controls
} SDCA_AUDIO_CONTROLS_2, *PSDCA_AUDIO_CONTROLS_2;

typedef struct _SOUNDWIRE_MEMORY
{
    ULONG                       Size;                       // Size of this struct including size of Buffer array
    SOUNDWIRE_COMMAND_PRIORITY  Priority;                   // Priority
    ULONG                       Address;                    // 32-bit Register Address
    ULONG                       BufferSize;                 // Size (number of Bytes) of Buffer
    _Field_size_(BufferSize)
    BYTE                        Buffer[ANYSIZE_ARRAY];      // Buffer containing 8-bit values
} SOUNDWIRE_MEMORY, *PSOUNDWIRE_MEMORY;

typedef struct _SOUNDWIRE_MEMORY_2
{
    ULONG                       Size;                       // Size of this struct including size of Buffer array
    ULONG                       CommitGroupHandle;          // Commit Group Handle (optional)
    SOUNDWIRE_COMMAND_PRIORITY  Priority;                   // Priority
    ULONG                       Address;                    // 32-bit Register Address
    ULONG                       BufferSize;                 // Size (number of Bytes) of Buffer
    _Field_size_(BufferSize)
    BYTE                        Buffer[ANYSIZE_ARRAY];      // Buffer containing 8-bit values
} SOUNDWIRE_MEMORY_2, *PSOUNDWIRE_MEMORY_2;

typedef struct _SOUNDWIRE_REGISTER
{
    ULONG                       Address;                    // 32-bit Register Address
    BYTE                        Value;                      // 8-bit Register Value
    BYTE                        Reserved1;                  // Reserved, must be set to zero
    BYTE                        Reserved2;                  // Reserved, must be set to zero
    BYTE                        Reserved3;                  // Reserved, must be set to zero
    NTSTATUS                    Status;                     // Status of Read/Write operation
} SOUNDWIRE_REGISTER, *PSOUNDWIRE_REGISTER;

typedef struct _SOUNDWIRE_REGISTERS
{
    ULONG                       Size;                       // Size of this struct including size of Register array
    SOUNDWIRE_COMMAND_PRIORITY  Priority;                   // Priority
    ULONG                       RegisterCount;              // Count of registers in Register array
    _Field_size_(RegisterCount)
    SOUNDWIRE_REGISTER          Register[ANYSIZE_ARRAY];    // Array of SoundWire registers
} SOUNDWIRE_REGISTERS, *PSOUNDWIRE_REGISTERS;

typedef struct _SOUNDWIRE_REGISTERS_2
{
    ULONG                       Size;                       // Size of this struct including size of Register array
    ULONG                       CommitGroupHandle;          // Commit Group Handle (optional)
    SOUNDWIRE_COMMAND_PRIORITY  Priority;                   // Priority
    ULONG                       RegisterCount;              // Count of registers in Register array
    _Field_size_(RegisterCount)
    SOUNDWIRE_REGISTER          Register[ANYSIZE_ARRAY];    // Array of SoundWire registers
} SOUNDWIRE_REGISTERS_2, *PSOUNDWIRE_REGISTERS_2;

typedef struct _SOUNDWIRE_INTERRUPTS
{
    ULONG                       Size;                                   // Size of this struct
    UINT8                       Version;                                // Version of this struct
    ULONG                       SCPInterrupts;                          // SCP interrupt registers
    UINT8                       DataPortInterrupts[MAX_NUM_DATAPORTS];  // Array of DataPort interrupt registers
} SOUNDWIRE_INTERRUPTS, *PSOUNDWIRE_INTERRUPTS;

/*++
Routine Description:
    Callback routine invoked by Controller driver when any masked interrupts
    are generated.

Arguments:
    Context         - Context provided by driver
    IntStats        - SoundWire interrupt status
    Size            - Size of struct pointed by IntStats parameter

Returns:
    NTSTATUS        - STATUS_SUCCESS if callback was processed successfully.
--*/
typedef NTSTATUS EVT_SOUNDWIRE_INTERRUPT_CALLBACK(
    _In_    PVOID                   Context,
    _In_    PSOUNDWIRE_INTERRUPTS   IntStats,
    _In_    ULONG                   Size
    );

typedef EVT_SOUNDWIRE_INTERRUPT_CALLBACK *PFNSOUNDWIRE_INTERRUPT_CALLBACK;

typedef struct _SOUNDWIRE_INTERRUPT_CALLBACK
{
    ULONG                                   Size;                   // Size of this struct
    PVOID                                   Context;                // Driver provided context
    PFNSOUNDWIRE_INTERRUPT_CALLBACK         EvtInterruptCallback;   // Interrupt callback routine
} SOUNDWIRE_INTERRUPT_CALLBACK, *PSOUNDWIRE_INTERRUPT_CALLBACK;

typedef enum _SOUNDWIRE_NOTIFICATION
{
    SoundWireNotificationInvalid = 0x00000000,              // Invalid notification
    SoundWireNotificationAttach  = 0x00000001,              // Peripheral attach notification
} SOUNDWIRE_NOTIFICATION;

typedef struct _SOUNDWIRE_NOTIFICATIONS
{
    ULONG                       Size;                       // Size of this struct
    UINT8                       Version;                    // Version of this struct
    ULONG                       Notifications;              // Bit mask of SoundWire notifications
} SOUNDWIRE_NOTIFICATIONS, *PSOUNDWIRE_NOTIFICATIONS;

/*++
Routine Description:
    Callback routine invoked by Controller driver when any masked notifications
    are generated.

Arguments:
    Context         - Context provided by driver
    Notifications   - SoundWire notifications
    Size            - Size of struct pointed by Notifications parameter

Returns:
    NTSTATUS        - STATUS_SUCCESS if callback was processed successfully.
--*/
typedef NTSTATUS EVT_SOUNDWIRE_NOTIFICATION_CALLBACK(
    _In_    PVOID                       Context,
    _In_    PSOUNDWIRE_NOTIFICATIONS    Notifications,
    _In_    ULONG                       Size
    );

typedef EVT_SOUNDWIRE_NOTIFICATION_CALLBACK *PFNSOUNDWIRE_NOTIFICATION_CALLBACK;

typedef struct _SOUNDWIRE_NOTIFICATION_CALLBACK
{
    ULONG                                   Size;                       // Size of this struct
    PVOID                                   Context;                    // Driver provided context
    PFNSOUNDWIRE_NOTIFICATION_CALLBACK      EvtNotificationCallback;    // Notification callback routine
} SOUNDWIRE_NOTIFICATION_CALLBACK, *PSOUNDWIRE_NOTIFICATION_CALLBACK;

typedef enum _SOUNDWIRE_PERIPHERAL_FLAGS
{
    SoundWirePeripheralFlagSubSystemIdPresent  = 0x00000001,            // SubSystem Id is present
    SoundWirePeripheralFlagControllerIdPresent = 0x00000002,            // Controller Id is present
    SoundWirePeripheralFlagLinkIdPresent       = 0x00000004,            // Link Id is present
    SoundWirePeripheralFlagPeripheralIdPresent = 0x00000008,            // Peripheral Id is present
} SOUNDWIRE_PERIPHERAL_FLAGS;

typedef struct _SOUNDWIRE_PERIPHERAL_INFORMATION
{
    ULONG                       Size;                       // Size of this struct
    ULONG                       Flags;                      // Bit mask indicating which flags are set
    ULONG                       SubSystemId;                // SubSystem Id
    UINT8                       ControllerId;               // Controller Id
    UINT8                       LinkId;                     // Link Id within a Controller
    UINT8                       PeripheralId;               // Manager assigned Peripheral Id
} SOUNDWIRE_PERIPHERAL_INFORMATION, *PSOUNDWIRE_PERIPHERAL_INFORMATION;

typedef enum _SOUNDWIRE_DATAPORT_TYPE
{
    SoundWireDataPortTypeInvalid    = 0,                    // Invalid DataPort type
    SoundWireDataPortTypeFull       = 1,                    // Full DataPort
    SoundWireDataPortTypeSimplified = 2,                    // Simplified DataPort 
    SoundWireDataPortTypeReduced    = 3,                    // Reduced DataPort
} SOUNDWIRE_DATAPORT_TYPE;

typedef enum _SOUNDWIRE_CHANNEL_PREPARE_TYPE
{
    SoundWireChannelPrepareTypeInvalid          = 0,        // Invalid Channel Prepare type
    SoundWireChannelPrepareTypeCpSm             = 1,        // Full Channel Prepare
    SoundWireChannelPrepareTypeSimplifiedCpSm   = 2,        // Simplified Channel Prepare
} SOUNDWIRE_CHANNEL_PREPARE_TYPE;

typedef enum _SOUNDWIRE_DATAPORT_MODE
{
    SoundWireDataPortModeInvalid            = 0x00000000,   // Invalid mode
    SoundWireDataPortModeIsochronous        = 0x00000001,   // Isochronous mode
    SoundWireDataPortModeTxControlled       = 0x00000002,   // Tx Controlled mode
    SoundWireDataPortModeRxControlled       = 0x00000004,   // Rx Controlled mode
    SoundWireDataPortModeFullAsynchronous   = 0x00000008,   // Asynchronous mode
} SOUNDWIRE_DATAPORT_MODE;

typedef enum _SOUNDWIRE_DATAPORT_DIRECTION
{
    SoundWireDataPortDirectionInvalid   = 0,                // Invalid direction
    SoundWireDataPortDirectionSink      = 1,                // Sink DataPort
    SoundWireDataPortDirectionSource    = 2,                // Source DataPort
} SOUNDWIRE_DATAPORT_DIRECTION;

typedef struct _SOUNDWIRE_DATAPORT_CONFIGURATION
{
    ULONG                       Size;                       // Size of this struct
    ULONG                       DataPortNumber;             // DataPort number
    ULONG                       EndpointId;                 // Endpoint Id
    ULONG                       Modes;                      // Bit mask of DataPort modes
    ULONG                       ChannelMask;                // DataPort channel mask
} SOUNDWIRE_DATAPORT_CONFIGURATION, *PSOUNDWIRE_DATAPORT_CONFIGURATION;

typedef struct SOUNDWIRE_DATAPORT_CAPABILITIES
{
    ULONG                            Size;                  // Size of this struct
    ULONG                            DataPortNumber;        // DataPort number
    ULONG                            EndpointId;            // Endpoint Id
    SOUNDWIRE_DATAPORT_TYPE          DataPortType;          // DataPort type
    SOUNDWIRE_CHANNEL_PREPARE_TYPE   ChannelPrepareType;    // Channel prepare type
    SOUNDWIRE_DATAPORT_DIRECTION     Direction;             // DataPort direction
} SOUNDWIRE_DATAPORT_CAPABILITIES, *PSOUNDWIRE_DATAPORT_CAPABILITIES;

typedef enum _SOUNDWIRE_TRIGGER_PURPOSE
{
    SoundWireTriggerPurposeInvalid      = 0,                // invalid purpose
    SoundWireTriggerPurposeUltrasound   = 1,                // ultrasound trigger
    SoundWireTriggerPurposeSpeech       = 2,                // speech onset trigger
    SoundWireTriggerPurposeVoice        = 3,                // voice detection trigger
} SOUNDWIRE_TRIGGER_PURPOSE;

typedef struct _SOUNDWIRE_TRIGGER_CONFIGURATION
{
    ULONG                           Size;                   // Size of this struct
    ULONG                           DataPortNumber;         // DataPort number
    ULONG                           EndpointId;             // Endpoint Id
    SOUNDWIRE_TRIGGER_PURPOSE       Purpose;                // voice, speech, ultrasound
} SOUNDWIRE_TRIGGER_CONFIGURATION, *PSOUNDWIRE_TRIGGER_CONFIGURATION;

typedef struct _SOUNDWIRE_DATAPORT_STARTSTOP
{
    ULONG Size;
    ULONG CommitGroupHandle;
    ULONG DataPortNumber;
} SOUNDWIRE_DATAPORT_STARTSTOP, *PSOUNDWIRE_DATAPORT_STARTSTOP;

//
// Control codes
//

#define SOUNDWIRE_IOCTL(_index_) \
    CTL_CODE (FILE_DEVICE_SOUNDWIRE, _index_, METHOD_NEITHER, FILE_ANY_ACCESS)

//
// Retrieve the SoundWire Controller Interface Version
//
// Required for SOUNDWIRE_CONTROLLER_VER_2 (Failure indicates VER_1)
//
// InputBuffer - NULL
// OutputBuffer - ULONG
//
#define IOCTL_SOUNDWIRE_GET_CONTROLLER_VERSION                               SOUNDWIRE_IOCTL (0)

//
// Returns information about peripheral
//
// Required for SOUNDWIRE_CONTROLLER_VER_1
// Required for SOUNDWIRE_CONTROLLER_VER_2
//
// InputBuffer - NULL
// OutputBuffer - SOUNDWIRE_PERIPHERAL_INFORMATION
//
#define IOCTL_SOUNDWIRE_GET_PERIPHERAL_INFORMATION                           SOUNDWIRE_IOCTL (1)

//
// Provides data port capabilities details.
//
// Required for SOUNDWIRE_CONTROLLER_VER_1
// Required for SOUNDWIRE_CONTROLLER_VER_2
//
// InputBuffer - SOUNDWIRE_DATAPORT_CAPABILITIES
// OutputBuffer - NULL
//
#define IOCTL_SOUNDWIRE_SET_DATAPORT_CAPABILITIES                            SOUNDWIRE_IOCTL (2)

//
// Writes variable-length value to the SDCA register address.
// Equivalent to calling IOCTL_SDCA_WRITE_AUDIO_CONTROLS_2 with CommitGroupHandle 0
//
// Required for SOUNDWIRE_CONTROLLER_VER_1
// Required for SOUNDWIRE_CONTROLLER_VER_2
//
// InputBuffer - SDCA_AUDIO_CONTROLS
// OutputBuffer - NULL
//
#define IOCTL_SDCA_WRITE_AUDIO_CONTROLS                                      SOUNDWIRE_IOCTL (3)

//
// Reads variable-length value from the SDCA register address.
//
// Required for SOUNDWIRE_CONTROLLER_VER_1
// Required for SOUNDWIRE_CONTROLLER_VER_2
//
// InputBuffer - SDCA_AUDIO_CONTROLS
// OutputBuffer - NULL
//
#define IOCTL_SDCA_READ_AUDIO_CONTROLS                                       SOUNDWIRE_IOCTL (4)

//
// Writes single byte to one or more registers.
// Equivalent to calling IOCTL_SDCA_WRITE_REGISTERS_2 with CommitGroupHandle 0
//
// Required for SOUNDWIRE_CONTROLLER_VER_1
// Required for SOUNDWIRE_CONTROLLER_VER_2
//
// InputBuffer - SOUNDWIRE_REGISTERS
// OutputBuffer - NULL
//
#define IOCTL_SOUNDWIRE_WRITE_REGISTERS                                      SOUNDWIRE_IOCTL (5)

//
// Reads single byte from one or more registers.
//
// Required for SOUNDWIRE_CONTROLLER_VER_1
// Required for SOUNDWIRE_CONTROLLER_VER_2
//
// InputBuffer - SOUNDWIRE_REGISTERS
// OutputBuffer - NULL
//
#define IOCTL_SOUNDWIRE_READ_REGISTERS                                       SOUNDWIRE_IOCTL (6)

//
// Writes one or more bytes to the registers starting from given address.
// Controller will use Bulk Register Access for applicable sizes when supported.
// Equivalent to calling IOCTL_SDCA_WRITE_MEMORY_2 with CommitGroupHandle 0
//
// Required for SOUNDWIRE_CONTROLLER_VER_1
// Required for SOUNDWIRE_CONTROLLER_VER_2
//
// InputBuffer - SOUNDWIRE_MEMORY
// OutputBuffer - NULL
//
#define IOCTL_SOUNDWIRE_WRITE_MEMORY                                         SOUNDWIRE_IOCTL (7)

//
// Reads one or more bytes from the registers starting from given address.
// Controller will use Bulk Register Access for applicable sizes when supported.
//
// Required for SOUNDWIRE_CONTROLLER_VER_1
// Required for SOUNDWIRE_CONTROLLER_VER_2
//
// InputBuffer - SOUNDWIRE_MEMORY
// OutputBuffer - NULL
//
#define IOCTL_SOUNDWIRE_READ_MEMORY                                          SOUNDWIRE_IOCTL (8)

//
// Enables or disables notifications.
//
// Required for SOUNDWIRE_CONTROLLER_VER_1
// Required for SOUNDWIRE_CONTROLLER_VER_2
//
// InputBuffer - SOUNDWIRE_NOTIFICATIONS
// OutputBuffer - NULL
//
#define IOCTL_SOUNDWIRE_MASK_NOTIFICATIONS                                   SOUNDWIRE_IOCTL (9)

//
// Registers notification callback routine.
//
// Required for SOUNDWIRE_CONTROLLER_VER_1
// Required for SOUNDWIRE_CONTROLLER_VER_2
//
// InputBuffer - SOUNDWIRE_NOTIFICATION_CALLBACK
// OutputBuffer - NULL
//
#define IOCTL_SOUNDWIRE_REGISTER_NOTIFICATION_CALLBACK                       SOUNDWIRE_IOCTL (10)

//
// Unregisters notification callback routine.
//
// Required for SOUNDWIRE_CONTROLLER_VER_1
// Required for SOUNDWIRE_CONTROLLER_VER_2
//
// InputBuffer - SOUNDWIRE_NOTIFICATION_CALLBACK
// OutputBuffer - NULL
//
#define IOCTL_SOUNDWIRE_UNREGISTER_NOTIFICATION_CALLBACK                     SOUNDWIRE_IOCTL (11)

//
// Enables or disables interrupts.
//
// Required for SOUNDWIRE_CONTROLLER_VER_1
// Required for SOUNDWIRE_CONTROLLER_VER_2
//
// InputBuffer - SOUNDWIRE_INTERRUPTS
// OutputBuffer - NULL
//
#define IOCTL_SOUNDWIRE_MASK_INTERRUPTS                                      SOUNDWIRE_IOCTL (12)

//
// Registers interrupt callback routine.
//
// Required for SOUNDWIRE_CONTROLLER_VER_1
// Required for SOUNDWIRE_CONTROLLER_VER_2
//
// InputBuffer - SOUNDWIRE_INTERRUPT_CALLBACK
// OutputBuffer - NULL
//
#define IOCTL_SOUNDWIRE_REGISTER_INTERRUPT_CALLBACK                          SOUNDWIRE_IOCTL (13)

//
// Unregisters interrupt callback routine.
//
// Required for SOUNDWIRE_CONTROLLER_VER_1
// Required for SOUNDWIRE_CONTROLLER_VER_2
//
// InputBuffer - SOUNDWIRE_INTERRUPT_CALLBACK
// OutputBuffer - NULL
//
#define IOCTL_SOUNDWIRE_UNREGISTER_INTERRUPT_CALLBACK                        SOUNDWIRE_IOCTL (14)

//
// Configures data port for streaming.
//
// Required for SOUNDWIRE_CONTROLLER_VER_1
// Required for SOUNDWIRE_CONTROLLER_VER_2
//
// InputBuffer - SOUNDWIRE_DATAPORT_CONFIGURATION
// OutputBuffer - NULL
//
#define IOCTL_SOUNDWIRE_PREPARE_DATAPORT                                     SOUNDWIRE_IOCTL (15)

//
// Deconfigures data port for streaming.
//
// Required for SOUNDWIRE_CONTROLLER_VER_1
// Required for SOUNDWIRE_CONTROLLER_VER_2
//
// InputBuffer - SOUNDWIRE_DATAPORT_CONFIGURATION
// OutputBuffer - NULL
//
#define IOCTL_SOUNDWIRE_DEPREPARE_DATAPORT                                   SOUNDWIRE_IOCTL (16)

//
// Starts data port for streaming.
// Equivalent to calling IOCTL_SOUNDWIRE_START_DATAPORT_2 with CommitGroupHandle 0
//
// Required for SOUNDWIRE_CONTROLLER_VER_1
// Required for SOUNDWIRE_CONTROLLER_VER_2
//
// InputBuffer - ULONG
// OutputBuffer - NULL
//
#define IOCTL_SOUNDWIRE_START_DATAPORT                                       SOUNDWIRE_IOCTL (17)

//
// Stops data port for streaming.
// Equivalent to calling IOCTL_SOUNDWIRE_STOP_DATAPORT_2 with CommitGroupHandle 0
//
// Required for SOUNDWIRE_CONTROLLER_VER_1
// Required for SOUNDWIRE_CONTROLLER_VER_2
//
// InputBuffer - ULONG
// OutputBuffer - NULL
//
#define IOCTL_SOUNDWIRE_STOP_DATAPORT                                        SOUNDWIRE_IOCTL (18)

// Writes variable-length value to the SDCA register address.
//
// Required for SOUNDWIRE_CONTROLLER_VER_2
//
// InputBuffer - SDCA_AUDIO_CONTROLS_2
// OutputBuffer - NULL
//
#define IOCTL_SDCA_WRITE_AUDIO_CONTROLS_2                                    SOUNDWIRE_IOCTL (19)

//
// Writes single byte to one or more registers.
//
// Required for SOUNDWIRE_CONTROLLER_VER_2
//
// InputBuffer - SOUNDWIRE_REGISTERS_2
// OutputBuffer - NULL
//
#define IOCTL_SOUNDWIRE_WRITE_REGISTERS_2                                    SOUNDWIRE_IOCTL (20)

//
// Writes one or more bytes to the registers starting from given address.
// Controller will use Bulk Register Access for applicable sizes when supported.
//
// Required for SOUNDWIRE_CONTROLLER_VER_2
//
// InputBuffer - SOUNDWIRE_MEMORY_2
// OutputBuffer - NULL
//
#define IOCTL_SOUNDWIRE_WRITE_MEMORY_2                                       SOUNDWIRE_IOCTL (21)

//
// Starts data port for streaming.
//
// Required for SOUNDWIRE_CONTROLLER_VER_2
//
// InputBuffer - SOUNDWIRE_DATAPORT_STARTSTOP
// OutputBuffer - NULL
//
#define IOCTL_SOUNDWIRE_START_DATAPORT_2                                     SOUNDWIRE_IOCTL (22)

//
// Stops data port for streaming.
//
// Required for SOUNDWIRE_CONTROLLER_VER_2
//
// InputBuffer - SOUNDWIRE_DATAPORT_STARTSTOP
// OutputBuffer - NULL
//
#define IOCTL_SOUNDWIRE_STOP_DATAPORT_2                                      SOUNDWIRE_IOCTL (23)

//
// Communicates trigger configuration for the data port
// InputBuffer - SOUNDWIRE_TRIGGER_CONFIGURATION
// OutputBuffer - NULL
//
#define IOCTL_SOUNDWIRE_PREPARE_TRIGGER                                      SOUNDWIRE_IOCTL (24)

//
// Communicates trigger configuration for the data port
// InputBuffer - SOUNDWIRE_TRIGGER_CONFIGURATION
// OutputBuffer - NULL
//
#define IOCTL_SOUNDWIRE_DEPREPARE_TRIGGER                                    SOUNDWIRE_IOCTL (25)

#endif // _SOUNDWIRECONTROLLER_H_
