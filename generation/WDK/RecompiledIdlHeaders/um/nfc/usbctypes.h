/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    UsbCTypes.h

Abstract:

    This file has the definitions of USB Type-C and PD structures and types defined
    in the speciciations.
    
    - Universal Serial Bus Type-C Cable and Connector Specification Revision 1.2
    - Universal Serial Bus Power Delivery Specification Revision 2.0
    - Universal Serial Bus Power Delivery Specification Revision 3.0 (only for PPS PDO/RDO) 
    - USB Type-C Connector System Software Interface [UCSI] Revision 1.0
    - USB Type-C Connector System Software Interface [UCSI] Revision 1.1

Environment:

    Kernel-mode & user-mode.

--*/

#pragma once

#if(NTDDI_VERSION >= NTDDI_WIN10_RS5)

#pragma warning(push)
#pragma warning(disable:4201) // nonstandard extension used : nameless struct/union
#include <pshpack1.h>

//
// Universal Serial Bus Power Delivery Specification Revision 2.0
// 6.2.1 Message Construction
// 6.2.1.2 Number of Data Objects
//
#define USBC_MAX_PDO_COUNT 7

//
// USB Type-C Connector System Software Interface [UCSI] Revision 1.0
// A.2. Parameter values
//     MAX_NUM_ALT_MODE
//
#define USBC_MAX_ALT_MODE_COUNT 0x80

typedef enum _USBC_PARTNER {
    UsbCPartnerInvalid = 0,
    UsbCPartnerUfp,
    UsbCPartnerDfp,
    UsbCPartnerPoweredCableNoUfp,
    UsbCPartnerPoweredCableWithUfp,
    UsbCPartnerAudioAccessory,
    UsbCPartnerDebugAccessory
} USBC_PARTNER;

typedef enum _USBC_TYPEC_OPERATING_MODE
{
    UsbCOperatingModeInvalid = 0x0,
    UsbCOperatingModeDfp = 0x1,
    UsbCOperatingModeUfp = 0x2,
    UsbCOperatingModeDrp = 0x4
} USBC_TYPEC_OPERATING_MODE;

typedef enum _USBC_CURRENT {
    UsbCCurrentInvalid = 0x0,
    UsbCCurrentDefaultUsb = 0x1,
    UsbCCurrent1500mA = 0x2,
    UsbCCurrent3000mA = 0x4,
} USBC_CURRENT;

typedef enum _USBC_POWER_ROLE {
    UsbCPowerRoleInvalid = 0x0,
    UsbCPowerRoleSink = 0x1,
    UsbCPowerRoleSource = 0x2,
} USBC_POWER_ROLE;

typedef enum _USBC_DATA_ROLE {
    UsbCDataRoleInvalid = 0,
    UsbCDataRoleDfp,
    UsbCDataRoleUfp,
} USBC_DATA_ROLE;

typedef enum _USBC_CHARGING_STATE {
    UsbCChargingStateInvalid = 0x0,
    UsbCChargingStateNotCharging,
    UsbCChargingStateNominalCharging,
    UsbCChargingStateSlowCharging,
    UsbCChargingStateTrickleCharging,
} USBC_CHARGING_STATE;

typedef enum _USBC_PD_CONN_STATE {
    UsbCPdConnStateInvalid = 0x0,
    UsbCPdConnStateNotSupported,
    UsbCPdConnStateNegotiationFailed,
    UsbCPdConnStateNegotiationSucceeded,
} USBC_PD_CONN_STATE;

//
// Universal Serial Bus Power Delivery Specification Revision 2.0
// 6.4.2 Request Message
//
// Universal Serial Bus Power Delivery Specification Revision 3.0
// 6.4.2 Request Message
//   Table 6-22 Programmable Request Data Object
//
typedef union _USBC_PD_REQUEST_DATA_OBJECT
{
    UINT32   U;

    struct {
        UINT32 Reserved1 : 28;
        UINT32 ObjectPosition : 3;
        UINT32 Reserved2 : 1;
    } Common;

    struct {
        UINT32 MaximumOperatingCurrentIn10mA : 10;
        UINT32 OperatingCurrentIn10mA : 10;
        UINT32 Reserved1 : 6;	// masking NoUsbSuspend and UsbCommunicationCapable
        UINT32 CapabilityMismatch : 1;
        UINT32 GiveBackFlag : 1;
        UINT32 ObjectPosition : 3;
        UINT32 Reserved2 : 1;
    } FixedAndVariableRdo;

    struct {
        UINT32 MaximumOperatingPowerIn250mW : 10;
        UINT32 OperatingPowerIn250mW : 10;
        UINT32 Reserved1 : 6;	// masking NoUsbSuspend and UsbCommunicationCapable
        UINT32 CapabilityMismatch : 1;
        UINT32 GiveBackFlag : 1;
        UINT32 ObjectPosition : 3;
        UINT32 Reserved2 : 1;
    } BatteryRdo;

    struct {
        UINT32 OperatingCurrentIn50mA : 7;
        UINT32 Reserved1 : 2;
        UINT32 OutputVoltageIn20mV : 11;
        UINT32 Reserved2 : 3;
        UINT32 UnchunkedExtendedMessagesSupported : 1;
        UINT32 Reserved3 : 2;   // masking NoUsbSuspend and UsbCommunicationCapable
        UINT32 CapabilityMismatch : 1;
        UINT32 Reserved4 : 1;
        UINT32 ObjectPosition : 3;
        UINT32 Reserved5 : 1;
    } ProgrammableRdo;

} USBC_PD_REQUEST_DATA_OBJECT, *PUSBC_PD_REQUEST_DATA_OBJECT;

//
// Universal Serial Bus Power Delivery Specification Revision 2.0
// 6.4.1 Capabilities Message
// 6.4.1.2.3 Source Fixed Supply Power Data Object
// 6.4.1.2.4 Variable Supply(non - Battery) Power Data Object
// 6.4.1.2.5 Battery Supply Power Data Object
//
// Universal Serial Bus Power Delivery Specification Revision 3.0
// 6.4.1.2.5 Programmable Power Supply Augmented Power Data Object
//
typedef union _USBC_PD_POWER_DATA_OBJECT
{
    UINT32   U;

    struct {
        UINT32 Reserved : 30;
        UINT32 Type : 2;
    } Common;

    struct {
        UINT32 MaximumCurrentIn10mA : 10;
        UINT32 VoltageIn50mV : 10;
        UINT32 PeakCurrent : 2;
        UINT32 Reserved1 : 3;
        UINT32 DataRoleSwap : 1;
        UINT32 UsbCommunicationCapable : 1;
        UINT32 ExternallyPowered : 1;
        UINT32 UsbSuspendSupported : 1;
        UINT32 DualRolePower : 1;
        UINT32 FixedSupply : 2;                 // USBC_PD_POWER_DATA_OBJECT_TYPE
    } FixedSupplyPdo;

    struct {
        UINT32 MaximumAllowablePowerIn250mW : 10;
        UINT32 MinimumVoltageIn50mV : 10;
        UINT32 MaximumVoltageIn50mV : 10;
        UINT32 Battery : 2;                     // USBC_PD_POWER_DATA_OBJECT_TYPE
    } BatterySupplyPdo;

    struct {
        UINT32 MaximumCurrentIn10mA : 10;
        UINT32 MinimumVoltageIn50mV : 10;
        UINT32 MaximumVoltageIn50mV : 10;
        UINT32 VariableSupportNonBattery : 2;   // USBC_PD_POWER_DATA_OBJECT_TYPE
    } VariableSupplyNonBatteryPdo;

    struct {
        UINT32 MaximumCurrentIn50mA : 7;
        UINT32 Reserved1 : 1;
        UINT32 MinimumVoltageIn100mV : 8;
        UINT32 Reserved2 : 1;
        UINT32 MaximumVoltageIn100mV : 8;
        UINT32 Reserved3 : 2;
        UINT32 PpsPowerLimited : 1;
        UINT32 AugmentedPowerDataObjectType : 2;// USBC_PD_AUGMENTED_POWER_DATA_OBJECT_TYPE
        UINT32 AugmentedPowerDataObject : 2;    // USBC_PD_POWER_DATA_OBJECT_TYPE
    } ProgrammablePowerSupplyApdo;              // for both source and sink

    struct {
        UINT32 OperationalCurrentIn10mA : 10;
        UINT32 VoltageIn50mV : 10;
        UINT32 Reserved : 5;
        UINT32 DataRoleSwap : 1;
        UINT32 UsbCommunicationCapable : 1;
        UINT32 ExternallyPowered : 1;
        UINT32 HigherCapability : 1;
        UINT32 DualRolePower : 1;
        UINT32 FixedSupply : 2;                 // USBC_PD_POWER_DATA_OBJECT_TYPE
    } FixedSupplyPdoSink;

    struct {
        UINT32 OperationalPowerIn250mW : 10;
        UINT32 MinimumVoltageIn50mV : 10;
        UINT32 MaximumVoltageIn50mV : 10;
        UINT32 Battery : 2;                     // USBC_PD_POWER_DATA_OBJECT_TYPE
    } BatterySupplyPdoSink;

    struct {
        UINT32 OperationalCurrentIn10mA : 10;
        UINT32 MinimumVoltageIn50mV : 10;
        UINT32 MaximumVoltageIn50mV : 10;
        UINT32 VariableSupportNonBattery : 2;   // USBC_PD_POWER_DATA_OBJECT_TYPE
    } VariableSupplyNonBatteryPdoSink;

} USBC_PD_POWER_DATA_OBJECT, *PUSBC_PD_POWER_DATA_OBJECT;

C_ASSERT(sizeof(USBC_PD_POWER_DATA_OBJECT) == 4);

//
// Universal Serial Bus Power Delivery Specification Revision 2.0
// 6.4.1 Capabilities Message
//   Table 6-4 Power Data Object
//
// Universal Serial Bus Power Delivery Specification Revision 3.0
// 6.4.1.2.5 Programmable Power Supply Augmented Power Data Object
//   Table 6-13 Programmable Power Supply APDO - Source
//
typedef enum _USBC_PD_POWER_DATA_OBJECT_TYPE
{
    UsbCPdPdoTypeFixedSupply = 0,
    UsbCPdPdoTypeBatterySupply = 1,
    UsbCPdPdoTypeVariableSupplyNonBattery = 2,
    UsbCPdPdoTypeAugmentedPowerDataObject = 3
} USBC_PD_POWER_DATA_OBJECT_TYPE;

typedef enum _USBC_PD_AUGMENTED_POWER_DATA_OBJECT_TYPE
{
    UsbCPdApdoTypeProgrammablePowerSupply = 0
} USBC_PD_AUGMENTED_POWER_DATA_OBJECT_TYPE;

USBC_PD_POWER_DATA_OBJECT_TYPE
FORCEINLINE
USBC_PD_POWER_DATA_OBJECT_GET_TYPE(
    _In_ PUSBC_PD_POWER_DATA_OBJECT Pdo
    )
{
    return (USBC_PD_POWER_DATA_OBJECT_TYPE)Pdo->Common.Type;
}

typedef struct _USBC_PD_ALTERNATE_MODE
{
    UINT16  SVID;
    UINT32  Mode;
} USBC_PD_ALTERNATE_MODE, *PUSBC_PD_ALTERNATE_MODE;


typedef enum _USBC_UCSI_SET_POWER_LEVEL_C_CURRENT
{
    UsbCUcsiSetPowerLevelCCurrentPpmDefault = 0,
    UsbCUcsiSetPowerLevelCCurrent3000mA = 1,
    UsbCUcsiSetPowerLevelCCurrent1500mA = 2,
    UsbCUcsiSetPowerLevelCCurrentDefaultUsb = 3
} USBC_UCSI_SET_POWER_LEVEL_C_CURRENT, *PUSBPM_UCSI_SET_POWER_LEVEL_C_CURRENT;

#pragma warning(pop)
#include <poppack.h>

// begin_wpp config
// CUSTOM_TYPE(USBC_PARTNER, ItemEnum(_USBC_PARTNER));
// CUSTOM_TYPE(USBC_CURRENT, ItemEnum(_USBC_CURRENT));
// CUSTOM_TYPE(USBC_POWER_ROLE, ItemEnum(_USBC_POWER_ROLE));
// CUSTOM_TYPE(USBC_DATA_ROLE, ItemEnum(_USBC_DATA_ROLE));
// CUSTOM_TYPE(USBC_CHARGING_STATE, ItemEnum(_USBC_CHARGING_STATE));
// CUSTOM_TYPE(USBC_PD_CONN_STATE, ItemEnum(_USBC_PD_CONN_STATE));
// CUSTOM_TYPE(USBC_UCSI_SET_POWER_LEVEL_C_CURRENT, ItemEnum(_USBC_UCSI_SET_POWER_LEVEL_C_CURRENT));
// end_wpp

#endif // NTDDI_VERSION
