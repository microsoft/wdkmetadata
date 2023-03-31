/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

_WdfVersionBuild_

Module Name:

    wdfdevice.h

Abstract:


Environment:

    kernel mode only

Revision History:

--*/

#ifndef _WDFDEVICE_1_9_H_
#define _WDFDEVICE_1_9_H_



#if (NTDDI_VERSION >= NTDDI_WIN2K)


// begin_wpp enum
typedef enum _WDF_DEVICE_STATE_FLAGS {
    WdfDevStateNP = 0x8000,
} WDF_DEVICE_STATE_FLAGS;

// end_wpp

// begin_wpp enum
typedef enum _WDF_DEVICE_PNP_STATE {
    WdfDevStatePnpInvalid = 0x00,
    WdfDevStatePnpObjectCreated = 0x100,
    WdfDevStatePnpCheckForDevicePresence = 0x101,
    WdfDevStatePnpEjectFailed = 0x102,
    WdfDevStatePnpEjectHardware = 0x103,
    WdfDevStatePnpEjectedWaitingForRemove = 0x104,
    WdfDevStatePnpInit = 0x105,
    WdfDevStatePnpInitStarting = 0x106,
    WdfDevStatePnpInitSurpriseRemoved = 0x107,
    WdfDevStatePnpHardwareAvailable = 0x108,
    WdfDevStatePnpEnableInterfaces = 0x109,
    WdfDevStatePnpHardwareAvailablePowerPolicyFailed = 0x10A,
    WdfDevStatePnpQueryRemoveAskDriver = 0x10B,
    WdfDevStatePnpQueryRemovePending = 0x10C,
    WdfDevStatePnpQueryRemoveStaticCheck = 0x10D,
    WdfDevStatePnpQueriedRemoving = 0x10E,
    WdfDevStatePnpQueryStopAskDriver = 0x10F,
    WdfDevStatePnpQueryStopPending = 0x110,
    WdfDevStatePnpQueryStopStaticCheck = 0x111,
    WdfDevStatePnpQueryCanceled = 0x112,
    WdfDevStatePnpRemoved = 0x113,
    WdfDevStatePnpPdoRemoved = 0x114,
    WdfDevStatePnpRemovedPdoWait = 0x115,
    WdfDevStatePnpRemovedPdoSurpriseRemoved = 0x116,
    WdfDevStatePnpRemovingDisableInterfaces = 0x117,
    WdfDevStatePnpRestarting = 0x118,
    WdfDevStatePnpStarted = 0x119,
    WdfDevStatePnpStartedCancelStop = 0x11A,
    WdfDevStatePnpStartedCancelRemove = 0x11B,
    WdfDevStatePnpStartedRemoving = 0x11C,
    WdfDevStatePnpStartingFromStopped = 0x11D,
    WdfDevStatePnpStopped = 0x11E,
    WdfDevStatePnpStoppedWaitForStartCompletion = 0x11F,
    WdfDevStatePnpStartedStopping = 0x120,
    WdfDevStatePnpSurpriseRemove = 0x121,
    WdfDevStatePnpInitQueryRemove = 0x122,
    WdfDevStatePnpInitQueryRemoveCanceled = 0x123,
    WdfDevStatePnpFdoRemoved = 0x124,
    WdfDevStatePnpRemovedWaitForChildren = 0x125,
    WdfDevStatePnpQueriedSurpriseRemove = 0x126,
    WdfDevStatePnpSurpriseRemoveIoStarted = 0x127,
    WdfDevStatePnpFailedPowerDown = 0x128,
    WdfDevStatePnpFailedIoStarting = 0x129,
    WdfDevStatePnpFailedOwnHardware = 0x12A,
    WdfDevStatePnpFailed = 0x12B,
    WdfDevStatePnpFailedSurpriseRemoved = 0x12C,
    WdfDevStatePnpFailedStarted = 0x12D,
    WdfDevStatePnpFailedWaitForRemove = 0x12E,
    WdfDevStatePnpFailedInit = 0x12F,
    WdfDevStatePnpPdoInitFailed = 0x130,
    WdfDevStatePnpRestart = 0x131,
    WdfDevStatePnpRestartReleaseHardware = 0x132,
    WdfDevStatePnpRestartHardwareAvailable = 0x133,
    WdfDevStatePnpPdoRestart = 0x134,
    WdfDevStatePnpFinal = 0x135,
    WdfDevStatePnpRemovedChildrenRemoved = 0x136,
    WdfDevStatePnpQueryRemoveEnsureDeviceAwake = 0x137,
    WdfDevStatePnpQueryStopEnsureDeviceAwake = 0x138,
    WdfDevStatePnpNull = 0x139,
} WDF_DEVICE_PNP_STATE, *PWDF_DEVICE_PNP_STATE;

// end_wpp

// begin_wpp enum
typedef enum _WDF_DEVICE_POWER_STATE {
    WdfDevStatePowerInvalid = 0x00,
    WdfDevStatePowerObjectCreated = 0x300,
    WdfDevStatePowerCheckDeviceType = 0x301,
    WdfDevStatePowerCheckDeviceTypeNP = 0x302 | WdfDevStateNP,
    WdfDevStatePowerCheckParentState = 0x303,
    WdfDevStatePowerCheckParentStateNP = 0x304 | WdfDevStateNP,
    WdfDevStatePowerEnablingWakeAtBus = 0x305,
    WdfDevStatePowerEnablingWakeAtBusNP = 0x306 | WdfDevStateNP,
    WdfDevStatePowerD0 = 0x307,
    WdfDevStatePowerD0NP = 0x308 | WdfDevStateNP,
    WdfDevStatePowerD0BusWakeOwner = 0x309,
    WdfDevStatePowerD0BusWakeOwnerNP = 0x30A | WdfDevStateNP,
    WdfDevStatePowerD0ArmedForWake = 0x30B,
    WdfDevStatePowerD0ArmedForWakeNP = 0x30C | WdfDevStateNP,
    WdfDevStatePowerD0DisarmingWakeAtBus = 0x30D,
    WdfDevStatePowerD0DisarmingWakeAtBusNP = 0x30E | WdfDevStateNP,
    WdfDevStatePowerD0Starting = 0x30F,
    WdfDevStatePowerD0StartingConnectInterrupt = 0x310,
    WdfDevStatePowerD0StartingDmaEnable = 0x311,
    WdfDevStatePowerD0StartingStartSelfManagedIo = 0x312,
    WdfDevStatePowerDecideD0State = 0x313,
    WdfDevStatePowerGotoD3Stopped = 0x314,
    WdfDevStatePowerStopped = 0x315,
    WdfDevStatePowerStartingCheckDeviceType = 0x316,
    WdfDevStatePowerStartingChild = 0x317,
    WdfDevStatePowerDxDisablingWakeAtBus = 0x318,
    WdfDevStatePowerDxDisablingWakeAtBusNP = 0x319 | WdfDevStateNP,
    WdfDevStatePowerGotoDx = 0x31A,
    WdfDevStatePowerGotoDxNP = 0x31B | WdfDevStateNP,
    WdfDevStatePowerGotoDxIoStopped = 0x31C,
    WdfDevStatePowerGotoDxIoStoppedNP = 0x31D | WdfDevStateNP,
    WdfDevStatePowerGotoDxNPFailed = 0x31E | WdfDevStateNP,
    WdfDevStatePowerDx = 0x31F,
    WdfDevStatePowerDxNP = 0x320 | WdfDevStateNP,
    WdfDevStatePowerGotoDxArmedForWake = 0x321,
    WdfDevStatePowerGotoDxArmedForWakeNP = 0x322 | WdfDevStateNP,
    WdfDevStatePowerGotoDxIoStoppedArmedForWake = 0x323,
    WdfDevStatePowerGotoDxIoStoppedArmedForWakeNP = 0x324 | WdfDevStateNP,
    WdfDevStatePowerDxArmedForWake = 0x325,
    WdfDevStatePowerDxArmedForWakeNP = 0x326 | WdfDevStateNP,
    WdfDevStatePowerCheckParentStateArmedForWake = 0x327,
    WdfDevStatePowerCheckParentStateArmedForWakeNP = 0x328 | WdfDevStateNP,
    WdfDevStatePowerWaitForParentArmedForWake = 0x329,
    WdfDevStatePowerWaitForParentArmedForWakeNP = 0x32A | WdfDevStateNP,
    WdfDevStatePowerStartSelfManagedIo = 0x32B,
    WdfDevStatePowerStartSelfManagedIoNP = 0x32C | WdfDevStateNP,
    WdfDevStatePowerStartSelfManagedIoFailed = 0x32D,
    WdfDevStatePowerStartSelfManagedIoFailedNP = 0x32E | WdfDevStateNP,
    WdfDevStatePowerWaitForParent = 0x32F,
    WdfDevStatePowerWaitForParentNP = 0x330 | WdfDevStateNP,
    WdfDevStatePowerWakePending = 0x331,
    WdfDevStatePowerWakePendingNP = 0x332 | WdfDevStateNP,
    WdfDevStatePowerWaking = 0x333,
    WdfDevStatePowerWakingNP = 0x334 | WdfDevStateNP,
    WdfDevStatePowerWakingConnectInterrupt = 0x335,
    WdfDevStatePowerWakingConnectInterruptNP = 0x336 | WdfDevStateNP,
    WdfDevStatePowerWakingConnectInterruptFailed = 0x337,
    WdfDevStatePowerWakingConnectInterruptFailedNP = 0x338 | WdfDevStateNP,
    WdfDevStatePowerWakingDmaEnable = 0x339,
    WdfDevStatePowerWakingDmaEnableNP = 0x33A | WdfDevStateNP,
    WdfDevStatePowerWakingDmaEnableFailed = 0x33B,
    WdfDevStatePowerWakingDmaEnableFailedNP = 0x33C | WdfDevStateNP,
    WdfDevStatePowerReportPowerUpFailedDerefParent = 0x33D,
    WdfDevStatePowerReportPowerUpFailed = 0x33E,
    WdfDevStatePowerPowerFailedPowerDown = 0x33F,
    WdfDevStatePowerReportPowerDownFailed = 0x340,
    WdfDevStatePowerInitialConnectInterruptFailed = 0x341,
    WdfDevStatePowerInitialDmaEnableFailed = 0x342,
    WdfDevStatePowerInitialSelfManagedIoFailed = 0x343,
    WdfDevStatePowerInitialPowerUpFailedDerefParent = 0x344,
    WdfDevStatePowerInitialPowerUpFailed = 0x345,
    WdfDevStatePowerDxStoppedDisarmWake = 0x346,
    WdfDevStatePowerDxStoppedDisarmWakeNP = 0x347 | WdfDevStateNP,
    WdfDevStatePowerGotoDxStoppedDisableInterruptNP = 0x348 | WdfDevStateNP,
    WdfDevStatePowerGotoDxStopped = 0x349,
    WdfDevStatePowerDxStopped = 0x34A,
    WdfDevStatePowerGotoStopped = 0x34B,
    WdfDevStatePowerStoppedCompleteDx = 0x34C,
    WdfDevStatePowerDxStoppedDecideDxState = 0x34D,
    WdfDevStatePowerDxStoppedArmForWake = 0x34E,
    WdfDevStatePowerDxStoppedArmForWakeNP = 0x34F | WdfDevStateNP,
    WdfDevStatePowerFinalPowerDownFailed = 0x350,
    WdfDevStatePowerFinal = 0x351,
    WdfDevStatePowerNull = 0x352,
} WDF_DEVICE_POWER_STATE, *PWDF_DEVICE_POWER_STATE;

// end_wpp


// begin_wpp enum
typedef enum _WDF_DEVICE_POWER_POLICY_STATE {
    WdfDevStatePwrPolInvalid =  0x00,
    WdfDevStatePwrPolObjectCreated = 0x500,
    WdfDevStatePwrPolStarting = 0x501,
    WdfDevStatePwrPolStartingSucceeded = 0x502,
    WdfDevStatePwrPolStartingFailed = 0x503,
    WdfDevStatePwrPolStartingDecideS0Wake = 0x504,
    WdfDevStatePwrPolStartedIdleCapable = 0x505,
    WdfDevStatePwrPolTimerExpiredNoWake = 0x506,
    WdfDevStatePwrPolTimerExpiredNoWakeCompletePowerDown = 0x507,
    WdfDevStatePwrPolWaitingUnarmed = 0x508,
    WdfDevStatePwrPolWaitingUnarmedQueryIdle = 0x509,
    WdfDevStatePwrPolS0NoWakePowerUp = 0x50A,
    WdfDevStatePwrPolS0NoWakeCompletePowerUp = 0x50B,
    WdfDevStatePwrPolSystemSleepFromDeviceWaitingUnarmed = 0x50C,
    WdfDevStatePwrPolSystemSleepNeedWake = 0x50D,
    WdfDevStatePwrPolSystemSleepNeedWakeCompletePowerUp = 0x50E,
    WdfDevStatePwrPolSystemSleepPowerRequestFailed = 0x50F,
    WdfDevStatePwrPolCheckPowerPageable = 0x510,
    WdfDevStatePwrPolSleepingWakeWakeArrived = 0x511,
    WdfDevStatePwrPolSleepingWakeRevertArmWake = 0x512,
    WdfDevStatePwrPolSystemAsleepWakeArmed = 0x513,
    WdfDevStatePwrPolSystemWakeDeviceWakeEnabled = 0x514,
    WdfDevStatePwrPolSystemWakeDeviceWakeEnabledWakeCanceled = 0x515,
    WdfDevStatePwrPolSystemWakeDeviceWakeDisarm = 0x516,
    WdfDevStatePwrPolSystemWakeDeviceWakeTriggered = 0x517,
    WdfDevStatePwrPolSystemWakeDeviceWakeTriggeredS0 = 0x518,
    WdfDevStatePwrPolSystemWakeDeviceWokeDisarm = 0x519,
    WdfDevStatePwrPolSleepingWakeWakeArrivedNP =  0x51A | WdfDevStateNP,
    WdfDevStatePwrPolSleepingWakeRevertArmWakeNP =  0x51B | WdfDevStateNP,
    WdfDevStatePwrPolSleepingWakePowerDownFailed = 0x51C,
    WdfDevStatePwrPolSleepingWakePowerDownFailedWakeCanceled = 0x51D,
    WdfDevStatePwrPolSystemAsleepWakeArmedNP =  0x51E | WdfDevStateNP,
    WdfDevStatePwrPolSystemWakeDeviceWakeEnabledNP =  0x51F | WdfDevStateNP,
    WdfDevStatePwrPolSystemWakeDeviceWakeEnabledWakeCanceledNP =  0x520 | WdfDevStateNP,
    WdfDevStatePwrPolSystemWakeDeviceWakeDisarmNP =  0x521 | WdfDevStateNP,
    WdfDevStatePwrPolSystemWakeDeviceWakeTriggeredNP =  0x522 | WdfDevStateNP,
    WdfDevStatePwrPolSystemWakeDeviceWakeTriggeredS0NP =  0x523 | WdfDevStateNP,
    WdfDevStatePwrPolSystemWakeDeviceWokeDisarmNP =  0x524 | WdfDevStateNP,
    WdfDevStatePwrPolSystemWakeDeviceWakeCompletePowerUp = 0x525,
    WdfDevStatePwrPolSleeping = 0x526,
    WdfDevStatePwrPolSleepingNoWakePowerDown = 0x527,
    WdfDevStatePwrPolSleepingNoWakeCompletePowerDown = 0x528,
    WdfDevStatePwrPolSleepingNoWakeDxRequestFailed = 0x529,
    WdfDevStatePwrPolSleepingWakePowerDown = 0x52A,
    WdfDevStatePwrPolSleepingSendWake = 0x52B,
    WdfDevStatePwrPolSystemAsleepNoWake = 0x52C,
    WdfDevStatePwrPolSystemWakeDeviceWakeDisabled = 0x52D,
    WdfDevStatePwrPolSystemWakeDeviceToD0 = 0x52E,
    WdfDevStatePwrPolSystemWakeDeviceToD0CompletePowerUp = 0x52F,
    WdfDevStatePwrPolSystemWakeQueryIdle = 0x530,
    WdfDevStatePwrPolStartedWakeCapable = 0x531,
    WdfDevStatePwrPolTimerExpiredDecideUsbSS = 0x532,
    WdfDevStatePwrPolTimerExpiredWakeCapablePowerDown = 0x533,
    WdfDevStatePwrPolTimerExpiredWakeCapableSendWake = 0x534,
    WdfDevStatePwrPolTimerExpiredWakeCapableUsbSS = 0x535,
    WdfDevStatePwrPolTimerExpiredWakeCapableWakeArrived = 0x536,
    WdfDevStatePwrPolTimerExpiredWakeCapableCancelWake = 0x537,
    WdfDevStatePwrPolTimerExpiredWakeCapableWakeCanceled = 0x538,
    WdfDevStatePwrPolTimerExpiredWakeCapableCleanup = 0x539,
    WdfDevStatePwrPolTimerExpiredWakeCapableDxAllocFailed = 0x53A,
    WdfDevStatePwrPolTimerExpiredWakeCompletedPowerDown = 0x53B,
    WdfDevStatePwrPolTimerExpiredWakeCompletedPowerUp = 0x53C,
    WdfDevStatePwrPolWaitingArmedUsbSS = 0x53D,
    WdfDevStatePwrPolWaitingArmed = 0x53E,
    WdfDevStatePwrPolWaitingArmedQueryIdle = 0x53F,
    WdfDevStatePwrPolIoPresentArmed = 0x540,
    WdfDevStatePwrPolIoPresentArmedWakeCanceled = 0x541,
    WdfDevStatePwrPolS0WakeDisarm = 0x542,
    WdfDevStatePwrPolS0WakeCompletePowerUp = 0x543,
    WdfDevStatePwrPolTimerExpiredWakeSucceeded = 0x544,
    WdfDevStatePwrPolTimerExpiredWakeCompletedDisarm = 0x545,
    WdfDevStatePwrPolTimerExpiredWakeCapableWakeSucceeded = 0x546,
    WdfDevStatePwrPolTimerExpiredWakeCapableWakeFailed = 0x547,
    WdfDevStatePwrPolWakeFailedUsbSS = 0x548,
    WdfDevStatePwrPolTimerExpiredWakeCapablePowerDownFailedCancelWake = 0x549,
    WdfDevStatePwrPolTimerExpiredWakeCapablePowerDownFailedWakeCanceled = 0x54A,
    WdfDevStatePwrPolTimerExpiredWakeCapablePowerDownFailedUsbSS = 0x54B,
    WdfDevStatePwrPolCancelingWakeForSystemSleep = 0x54C,
    WdfDevStatePwrPolCancelingWakeForSystemSleepWakeCanceled = 0x54D,
    WdfDevStatePwrPolDisarmingWakeForSystemSleepCompletePowerUp = 0x54E,
    WdfDevStatePwrPolPowerUpForSystemSleepFailed = 0x54F,
    WdfDevStatePwrPolWokeFromS0UsbSS = 0x550,
    WdfDevStatePwrPolWokeFromS0 = 0x551,
    WdfDevStatePwrPolWokeFromS0NotifyDriver = 0x552,
    WdfDevStatePwrPolStoppingResetDevice = 0x553,
    WdfDevStatePwrPolStoppingResetDeviceCompletePowerUp = 0x554,
    WdfDevStatePwrPolStoppingResetDeviceFailed = 0x555,
    WdfDevStatePwrPolStoppingD0 = 0x556,
    WdfDevStatePwrPolStoppingD0Failed = 0x557,
    WdfDevStatePwrPolStoppingDisarmWake = 0x558,
    WdfDevStatePwrPolStoppingDisarmWakeCancelWake = 0x559,
    WdfDevStatePwrPolStoppingDisarmWakeWakeCanceled = 0x55A,
    WdfDevStatePwrPolStopping = 0x55B,
    WdfDevStatePwrPolStoppingFailed = 0x55C,
    WdfDevStatePwrPolStoppingSendStatus = 0x55D,
    WdfDevStatePwrPolStoppingCancelTimer = 0x55E,
    WdfDevStatePwrPolStoppingWaitForIdleTimeout = 0x55F,
    WdfDevStatePwrPolStoppingCancelUsbSS = 0x560,
    WdfDevStatePwrPolStoppingWaitForUsbSSCompletion = 0x561,
    WdfDevStatePwrPolStoppingCancelWake = 0x562,
    WdfDevStatePwrPolStopped = 0x563,
    WdfDevStatePwrPolCancelUsbSS = 0x564,
    WdfDevStatePwrPolStarted = 0x565,
    WdfDevStatePwrPolStartedCancelTimer = 0x566,
    WdfDevStatePwrPolStartedWaitForIdleTimeout = 0x567,
    WdfDevStatePwrPolStartedWakeCapableCancelTimerForSleep = 0x568,
    WdfDevStatePwrPolStartedWakeCapableWaitForIdleTimeout = 0x569,
    WdfDevStatePwrPolStartedWakeCapableSleepingUsbSS = 0x56A,
    WdfDevStatePwrPolStartedIdleCapableCancelTimerForSleep = 0x56B,
    WdfDevStatePwrPolStartedIdleCapableWaitForIdleTimeout = 0x56C,
    WdfDevStatePwrPolDeviceD0PowerRequestFailed = 0x56D,
    WdfDevStatePwrPolDevicePowerRequestFailed = 0x56E,
    WdfDevStatePwrPolGotoDx = 0x56F,
    WdfDevStatePwrPolGotoDxInDx = 0x570,
    WdfDevStatePwrPolDx = 0x571,
    WdfDevStatePwrPolGotoD0 = 0x572,
    WdfDevStatePwrPolGotoD0InD0 = 0x573,
    WdfDevStatePwrPolFinal = 0x574,
    WdfDevStatePwrPolSleepingPowerDownNotProcessed = 0x575,
    WdfDevStatePwrPolTimerExpiredWakeCapablePowerDownNotProcessed = 0x576,
    WdfDevStatePwrPolTimerExpiredNoWakePowerDownNotProcessed = 0x577,
    WdfDevStatePwrPolTimerExpiredNoWakePoweredDownDisableIdleTimer = 0x578,
    WdfDevStatePwrPolStoppingWaitingForImplicitPowerDown = 0x579,
    WdfDevStatePwrPolStoppingPoweringUp = 0x57A,
    WdfDevStatePwrPolStoppingPoweringDown = 0x57B,
    WdfDevStatePwrPolPowerUpForSystemSleepNotSeen = 0x57C,
    WdfDevStatePwrPolWaitingArmedStoppingCancelUsbSS = 0x57D,
    WdfDevStatePwrPolWaitingArmedWakeFailedCancelUsbSS = 0x57E,
    WdfDevStatePwrPolWaitingArmedIoPresentCancelUsbSS = 0x57F,
    WdfDevStatePwrPolWaitingArmedWakeSucceededCancelUsbSS = 0x580,
    WdfDevStatePwrPolCancelingUsbSSForSystemSleep = 0x581,
    WdfDevStatePwrPolStoppingD0CancelUsbSS = 0x582,
    WdfDevStatePwrPolNull = 0x583,
} WDF_DEVICE_POWER_POLICY_STATE, *PWDF_DEVICE_POWER_POLICY_STATE;

// end_wpp

typedef enum _WDF_STATE_NOTIFICATION_TYPE {
    StateNotificationInvalid =       0x0000,
    StateNotificationEnterState =       0x0001,
    StateNotificationPostProcessState = 0x0002,
    StateNotificationLeaveState =       0x0004,
    StateNotificationAllStates =       StateNotificationEnterState | StateNotificationPostProcessState | StateNotificationLeaveState,
} WDF_STATE_NOTIFICATION_TYPE;

typedef enum _WDF_POWER_POLICY_S0_IDLE_CAPABILITIES {
    IdleCapsInvalid = 0,
    IdleCannotWakeFromS0,
    IdleCanWakeFromS0,
    IdleUsbSelectiveSuspend,
} WDF_POWER_POLICY_S0_IDLE_CAPABILITIES;

typedef enum _WDF_POWER_POLICY_S0_IDLE_USER_CONTROL {
    IdleUserControlInvalid = 0,
    IdleDoNotAllowUserControl,
    IdleAllowUserControl,
} WDF_POWER_POLICY_S0_IDLE_USER_CONTROL;

typedef enum _WDF_POWER_POLICY_IDLE_TIMEOUT_CONSTANTS {
    IdleTimeoutDefaultConstant = 0,
} WDF_POWER_POLICY_IDLE_TIMEOUT_CONSTANTS;

typedef enum _WDF_POWER_POLICY_SX_WAKE_USER_CONTROL {
    WakeUserControlInvalid = 0,
    WakeDoNotAllowUserControl,
    WakeAllowUserControl,
} WDF_POWER_POLICY_SX_WAKE_USER_CONTROL;

typedef enum _WDF_POWER_DEVICE_STATE {
    WdfPowerDeviceInvalid = 0,
    WdfPowerDeviceD0,
    WdfPowerDeviceD1,
    WdfPowerDeviceD2,
    WdfPowerDeviceD3,
    WdfPowerDeviceD3Final,
    WdfPowerDevicePrepareForHibernation,
    WdfPowerDeviceMaximum,
} WDF_POWER_DEVICE_STATE, *PWDF_POWER_DEVICE_STATE;

typedef enum _WDF_SPECIAL_FILE_TYPE {
    WdfSpecialFileUndefined = 0,
    WdfSpecialFilePaging = 1,
    WdfSpecialFileHibernation,
    WdfSpecialFileDump,
    WdfSpecialFileMax,
} WDF_SPECIAL_FILE_TYPE, *PWDF_SPECIAL_FILE_TYPE;

typedef enum _WDF_DEVICE_IO_TYPE {
    WdfDeviceIoUndefined = 0,
    WdfDeviceIoNeither,
    WdfDeviceIoBuffered,
    WdfDeviceIoDirect,
} WDF_DEVICE_IO_TYPE, *PWDF_DEVICE_IO_TYPE;

typedef enum _WDF_FILEOBJECT_CLASS {
    WdfFileObjectInvalid = 0,
    WdfFileObjectNotRequired = 1,
    WdfFileObjectWdfCanUseFsContext = 2,
    WdfFileObjectWdfCanUseFsContext2 = 3,
    WdfFileObjectWdfCannotUseFsContexts = 4,
    WdfFileObjectCanBeOptional = 0x80000000,
} WDF_FILEOBJECT_CLASS, *PWDF_FILEOBJECT_CLASS;

typedef enum _WDF_DEVICE_FAILED_ACTION {
    WdfDeviceFailedUndefined = 0,
    WdfDeviceFailedAttemptRestart,
    WdfDeviceFailedNoRestart,
} WDF_DEVICE_FAILED_ACTION;



//
// If you do not want the auto inclusion of wdmsec.h, define
// WDF_DEVICE_NO_WDMSEC_H before including this file (or wdf.h)
//
#ifndef WDF_DEVICE_NO_WDMSEC_H
#include <wdmsec.h>
#endif // WDF_DEVICE_NO_WDMSEC_H

#define WDF_S0_IDLE_ENABLED_VALUE_NAME      L"IdleInWorkingState"
#define WDF_SX_WAKE_ENABLED_VALUE_NAME      L"WakeFromSleepState"
#define WDF_S0_IDLE_DEFAULT_VALUE_NAME      L"WdfDefaultIdleInWorkingState"
#define WDF_SX_WAKE_DEFAULT_VALUE_NAME      L"WdfDefaultWakeFromSleepState"
//
// Declare empty definitions so that they may be referenced by
// routines before they are defined.
//
typedef enum _WDF_REQUEST_TYPE WDF_REQUEST_TYPE;


typedef
_Function_class_(EVT_WDF_DEVICE_FILE_CREATE)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
EVT_WDF_DEVICE_FILE_CREATE(
    _In_
    WDFDEVICE Device,
    _In_
    WDFREQUEST Request,
    _In_
    WDFFILEOBJECT FileObject
    );

typedef EVT_WDF_DEVICE_FILE_CREATE *PFN_WDF_DEVICE_FILE_CREATE;

typedef
_Function_class_(EVT_WDF_FILE_CLOSE)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
EVT_WDF_FILE_CLOSE(
    _In_
    WDFFILEOBJECT FileObject
    );

typedef EVT_WDF_FILE_CLOSE *PFN_WDF_FILE_CLOSE;

typedef
_Function_class_(EVT_WDF_FILE_CLEANUP)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
EVT_WDF_FILE_CLEANUP(
    _In_
    WDFFILEOBJECT FileObject
    );

typedef EVT_WDF_FILE_CLEANUP *PFN_WDF_FILE_CLEANUP;

typedef struct _WDF_FILEOBJECT_CONFIG {
    //
    // Size of this structure in bytes
    //
    ULONG Size;

    //
    // Event callback for create requests
    //
    PFN_WDF_DEVICE_FILE_CREATE  EvtDeviceFileCreate;

    //
    // Event callback for close requests
    //
    PFN_WDF_FILE_CLOSE   EvtFileClose;

    //
    // Event callback for cleanup requests
    //
    PFN_WDF_FILE_CLEANUP EvtFileCleanup;

    //
    // If WdfTrue, create/cleanup/close file object related requests will be
    //      sent down the stack.
    //
    // If WdfFalse, create/cleanup/close will be completed at this location in
    //      the device stack.
    //
    // If WdfDefault, behavior depends on device type
    //      FDO, PDO, Control:  use the WdfFalse behavior
    //      Filter:  use the WdfTrue behavior
    //
    WDF_TRI_STATE AutoForwardCleanupClose;

    //
    // Specify whether framework should create WDFFILEOBJECT and also
    // whether it can FsContexts fields in the WDM fileobject to store
    // WDFFILEOBJECT so that it can avoid table look up and improve perf.
    //
    WDF_FILEOBJECT_CLASS FileObjectClass;

} WDF_FILEOBJECT_CONFIG, *PWDF_FILEOBJECT_CONFIG;

VOID
FORCEINLINE
WDF_FILEOBJECT_CONFIG_INIT(
    _Out_ PWDF_FILEOBJECT_CONFIG FileEventCallbacks,
    _In_opt_ PFN_WDF_DEVICE_FILE_CREATE EvtDeviceFileCreate,
    _In_opt_ PFN_WDF_FILE_CLOSE EvtFileClose,
    _In_opt_ PFN_WDF_FILE_CLEANUP EvtFileCleanup
    )
{
    FileEventCallbacks->Size = sizeof(WDF_FILEOBJECT_CONFIG);

    FileEventCallbacks->EvtDeviceFileCreate  = EvtDeviceFileCreate;
    FileEventCallbacks->EvtFileClose   = EvtFileClose;
    FileEventCallbacks->EvtFileCleanup = EvtFileCleanup;

    FileEventCallbacks->FileObjectClass = WdfFileObjectWdfCannotUseFsContexts;
    FileEventCallbacks->AutoForwardCleanupClose = WdfUseDefault;
}

typedef struct _WDF_DEVICE_PNP_NOTIFICATION_DATA {
    //
    // Type of data
    //
    WDF_STATE_NOTIFICATION_TYPE Type;

    union {
        struct {
            //
            // The current state that is about to be exited
            //
            WDF_DEVICE_PNP_STATE CurrentState;

            //
            // The new state that is about to be entered
            //
            WDF_DEVICE_PNP_STATE NewState;
        } EnterState;

        struct {
            //
            // The current state
            //
            WDF_DEVICE_PNP_STATE CurrentState;
        } PostProcessState;


        struct {
            //
            // The current state that is about to be exitted
            //
            WDF_DEVICE_PNP_STATE CurrentState;

            //
            // The state that is about to be entered
            //
            WDF_DEVICE_PNP_STATE NewState;
        } LeaveState;
    } Data;
} WDF_DEVICE_PNP_NOTIFICATION_DATA;

typedef const WDF_DEVICE_PNP_NOTIFICATION_DATA* PCWDF_DEVICE_PNP_NOTIFICATION_DATA;

typedef struct _WDF_DEVICE_POWER_NOTIFICATION_DATA {
    //
    // Type of data
    //
    WDF_STATE_NOTIFICATION_TYPE Type;

    union {
        struct {
            //
            // The current state that is about to be exitted
            //
            WDF_DEVICE_POWER_STATE CurrentState;

            //
            // The new state that is about to be entered
            //
            WDF_DEVICE_POWER_STATE NewState;
        } EnterState;

        struct {
            //
            // The current state
            //
            WDF_DEVICE_POWER_STATE CurrentState;
        } PostProcessState;


        struct {
            //
            // The current state that is about to be exitted
            //
            WDF_DEVICE_POWER_STATE CurrentState;

            //
            // The state that is about to be entered
            //
            WDF_DEVICE_POWER_STATE NewState;
        } LeaveState;
    } Data;
} WDF_DEVICE_POWER_NOTIFICATION_DATA;

typedef const WDF_DEVICE_POWER_NOTIFICATION_DATA* PCWDF_DEVICE_POWER_NOTIFICATION_DATA;

typedef struct _WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA {
    //
    // Type of data
    //
    WDF_STATE_NOTIFICATION_TYPE Type;

    union {
        struct {
            //
            // The current state that is about to be exitted
            //
            WDF_DEVICE_POWER_POLICY_STATE CurrentState;

            //
            // The new state that is about to be entered
            //
            WDF_DEVICE_POWER_POLICY_STATE NewState;
        } EnterState;

        struct {
            //
            // The current state
            //
            WDF_DEVICE_POWER_POLICY_STATE CurrentState;
        } PostProcessState;


        struct {
            //
            // The current state that is about to be exitted
            //
            WDF_DEVICE_POWER_POLICY_STATE CurrentState;

            //
            // The state that is about to be entered
            //
            WDF_DEVICE_POWER_POLICY_STATE NewState;
        } LeaveState;
    } Data;
} WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA;

typedef const WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA* PCWDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA;

typedef
_Function_class_(EVT_WDF_DEVICE_PNP_STATE_CHANGE_NOTIFICATION)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
EVT_WDF_DEVICE_PNP_STATE_CHANGE_NOTIFICATION(
    _In_
    WDFDEVICE Device,
    _In_
    PCWDF_DEVICE_PNP_NOTIFICATION_DATA NotificationData
    );

typedef EVT_WDF_DEVICE_PNP_STATE_CHANGE_NOTIFICATION *PFN_WDF_DEVICE_PNP_STATE_CHANGE_NOTIFICATION;

typedef
_Function_class_(EVT_WDF_DEVICE_POWER_STATE_CHANGE_NOTIFICATION)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
EVT_WDF_DEVICE_POWER_STATE_CHANGE_NOTIFICATION(
    _In_
    WDFDEVICE Device,
    _In_
    PCWDF_DEVICE_POWER_NOTIFICATION_DATA NotificationData
    );

typedef EVT_WDF_DEVICE_POWER_STATE_CHANGE_NOTIFICATION *PFN_WDF_DEVICE_POWER_STATE_CHANGE_NOTIFICATION;

typedef
_Function_class_(EVT_WDF_DEVICE_POWER_POLICY_STATE_CHANGE_NOTIFICATION)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
EVT_WDF_DEVICE_POWER_POLICY_STATE_CHANGE_NOTIFICATION(
    _In_
    WDFDEVICE Device,
    _In_
    PCWDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA NotificationData
    );

typedef EVT_WDF_DEVICE_POWER_POLICY_STATE_CHANGE_NOTIFICATION *PFN_WDF_DEVICE_POWER_POLICY_STATE_CHANGE_NOTIFICATION;

#define IdleTimeoutDefaultValue ((ULONG) IdleTimeoutDefaultConstant)

typedef
_Function_class_(EVT_WDF_DEVICE_D0_ENTRY)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_WDF_DEVICE_D0_ENTRY(
    _In_
    WDFDEVICE Device,
    _In_
    WDF_POWER_DEVICE_STATE PreviousState
    );

typedef EVT_WDF_DEVICE_D0_ENTRY *PFN_WDF_DEVICE_D0_ENTRY;

typedef
_Function_class_(EVT_WDF_DEVICE_D0_ENTRY_POST_INTERRUPTS_ENABLED)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_WDF_DEVICE_D0_ENTRY_POST_INTERRUPTS_ENABLED(
    _In_
    WDFDEVICE Device,
    _In_
    WDF_POWER_DEVICE_STATE PreviousState
    );

typedef EVT_WDF_DEVICE_D0_ENTRY_POST_INTERRUPTS_ENABLED *PFN_WDF_DEVICE_D0_ENTRY_POST_INTERRUPTS_ENABLED;

typedef
_Function_class_(EVT_WDF_DEVICE_D0_EXIT)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_WDF_DEVICE_D0_EXIT(
    _In_
    WDFDEVICE Device,
    _In_
    WDF_POWER_DEVICE_STATE TargetState
    );

typedef EVT_WDF_DEVICE_D0_EXIT *PFN_WDF_DEVICE_D0_EXIT;

typedef
_Function_class_(EVT_WDF_DEVICE_D0_EXIT_PRE_INTERRUPTS_DISABLED)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_WDF_DEVICE_D0_EXIT_PRE_INTERRUPTS_DISABLED(
    _In_
    WDFDEVICE Device,
    _In_
    WDF_POWER_DEVICE_STATE TargetState
    );

typedef EVT_WDF_DEVICE_D0_EXIT_PRE_INTERRUPTS_DISABLED *PFN_WDF_DEVICE_D0_EXIT_PRE_INTERRUPTS_DISABLED;

typedef
_Function_class_(EVT_WDF_DEVICE_PREPARE_HARDWARE)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_WDF_DEVICE_PREPARE_HARDWARE(
    _In_
    WDFDEVICE Device,
    _In_
    WDFCMRESLIST ResourcesRaw,
    _In_
    WDFCMRESLIST ResourcesTranslated
    );

typedef EVT_WDF_DEVICE_PREPARE_HARDWARE *PFN_WDF_DEVICE_PREPARE_HARDWARE;

typedef
_Function_class_(EVT_WDF_DEVICE_RELEASE_HARDWARE)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_WDF_DEVICE_RELEASE_HARDWARE(
    _In_
    WDFDEVICE Device,
    _In_
    WDFCMRESLIST ResourcesTranslated
    );

typedef EVT_WDF_DEVICE_RELEASE_HARDWARE *PFN_WDF_DEVICE_RELEASE_HARDWARE;

typedef
_Function_class_(EVT_WDF_DEVICE_SELF_MANAGED_IO_CLEANUP)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
EVT_WDF_DEVICE_SELF_MANAGED_IO_CLEANUP(
    _In_
    WDFDEVICE Device
    );

typedef EVT_WDF_DEVICE_SELF_MANAGED_IO_CLEANUP *PFN_WDF_DEVICE_SELF_MANAGED_IO_CLEANUP;

typedef
_Function_class_(EVT_WDF_DEVICE_SELF_MANAGED_IO_FLUSH)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
EVT_WDF_DEVICE_SELF_MANAGED_IO_FLUSH(
    _In_
    WDFDEVICE Device
    );

typedef EVT_WDF_DEVICE_SELF_MANAGED_IO_FLUSH *PFN_WDF_DEVICE_SELF_MANAGED_IO_FLUSH;

typedef
_Function_class_(EVT_WDF_DEVICE_SELF_MANAGED_IO_INIT)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_WDF_DEVICE_SELF_MANAGED_IO_INIT(
    _In_
    WDFDEVICE Device
    );

typedef EVT_WDF_DEVICE_SELF_MANAGED_IO_INIT *PFN_WDF_DEVICE_SELF_MANAGED_IO_INIT;

typedef
_Function_class_(EVT_WDF_DEVICE_SELF_MANAGED_IO_SUSPEND)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_WDF_DEVICE_SELF_MANAGED_IO_SUSPEND(
    _In_
    WDFDEVICE Device
    );

typedef EVT_WDF_DEVICE_SELF_MANAGED_IO_SUSPEND *PFN_WDF_DEVICE_SELF_MANAGED_IO_SUSPEND;

typedef
_Function_class_(EVT_WDF_DEVICE_SELF_MANAGED_IO_RESTART)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_WDF_DEVICE_SELF_MANAGED_IO_RESTART(
    _In_
    WDFDEVICE Device
    );

typedef EVT_WDF_DEVICE_SELF_MANAGED_IO_RESTART *PFN_WDF_DEVICE_SELF_MANAGED_IO_RESTART;

typedef
_Function_class_(EVT_WDF_DEVICE_QUERY_STOP)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_WDF_DEVICE_QUERY_STOP(
    _In_
    WDFDEVICE Device
    );

typedef EVT_WDF_DEVICE_QUERY_STOP *PFN_WDF_DEVICE_QUERY_STOP;

typedef
_Function_class_(EVT_WDF_DEVICE_QUERY_REMOVE)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_WDF_DEVICE_QUERY_REMOVE(
    _In_
    WDFDEVICE Device
    );

typedef EVT_WDF_DEVICE_QUERY_REMOVE *PFN_WDF_DEVICE_QUERY_REMOVE;

typedef
_Function_class_(EVT_WDF_DEVICE_SURPRISE_REMOVAL)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
EVT_WDF_DEVICE_SURPRISE_REMOVAL(
    _In_
    WDFDEVICE Device
    );

typedef EVT_WDF_DEVICE_SURPRISE_REMOVAL *PFN_WDF_DEVICE_SURPRISE_REMOVAL;

typedef
_Function_class_(EVT_WDF_DEVICE_USAGE_NOTIFICATION)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
EVT_WDF_DEVICE_USAGE_NOTIFICATION(
    _In_
    WDFDEVICE Device,
    _In_
    WDF_SPECIAL_FILE_TYPE NotificationType,
    _In_
    BOOLEAN IsInNotificationPath
    );

typedef EVT_WDF_DEVICE_USAGE_NOTIFICATION *PFN_WDF_DEVICE_USAGE_NOTIFICATION;

typedef
_Function_class_(EVT_WDF_DEVICE_RELATIONS_QUERY)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
EVT_WDF_DEVICE_RELATIONS_QUERY(
    _In_
    WDFDEVICE Device,
    _In_
    DEVICE_RELATION_TYPE RelationType
    );

typedef EVT_WDF_DEVICE_RELATIONS_QUERY *PFN_WDF_DEVICE_RELATIONS_QUERY;

typedef
_Function_class_(EVT_WDF_DEVICE_ARM_WAKE_FROM_S0)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_WDF_DEVICE_ARM_WAKE_FROM_S0(
    _In_
    WDFDEVICE Device
    );

typedef EVT_WDF_DEVICE_ARM_WAKE_FROM_S0 *PFN_WDF_DEVICE_ARM_WAKE_FROM_S0;

typedef
_Function_class_(EVT_WDF_DEVICE_ARM_WAKE_FROM_SX)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_WDF_DEVICE_ARM_WAKE_FROM_SX(
    _In_
    WDFDEVICE Device
    );

typedef EVT_WDF_DEVICE_ARM_WAKE_FROM_SX *PFN_WDF_DEVICE_ARM_WAKE_FROM_SX;

typedef
_Function_class_(EVT_WDF_DEVICE_ARM_WAKE_FROM_SX_WITH_REASON)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_WDF_DEVICE_ARM_WAKE_FROM_SX_WITH_REASON(
    _In_
    WDFDEVICE Device,
    _In_
    BOOLEAN DeviceWakeEnabled,
    _In_
    BOOLEAN ChildrenArmedForWake
    );

typedef EVT_WDF_DEVICE_ARM_WAKE_FROM_SX_WITH_REASON *PFN_WDF_DEVICE_ARM_WAKE_FROM_SX_WITH_REASON;

typedef
_Function_class_(EVT_WDF_DEVICE_DISARM_WAKE_FROM_S0)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
EVT_WDF_DEVICE_DISARM_WAKE_FROM_S0(
    _In_
    WDFDEVICE Device
    );

typedef EVT_WDF_DEVICE_DISARM_WAKE_FROM_S0 *PFN_WDF_DEVICE_DISARM_WAKE_FROM_S0;

typedef
_Function_class_(EVT_WDF_DEVICE_DISARM_WAKE_FROM_SX)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
EVT_WDF_DEVICE_DISARM_WAKE_FROM_SX(
    _In_
    WDFDEVICE Device
    );

typedef EVT_WDF_DEVICE_DISARM_WAKE_FROM_SX *PFN_WDF_DEVICE_DISARM_WAKE_FROM_SX;

typedef
_Function_class_(EVT_WDF_DEVICE_WAKE_FROM_S0_TRIGGERED)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
EVT_WDF_DEVICE_WAKE_FROM_S0_TRIGGERED(
    _In_
    WDFDEVICE Device
    );

typedef EVT_WDF_DEVICE_WAKE_FROM_S0_TRIGGERED *PFN_WDF_DEVICE_WAKE_FROM_S0_TRIGGERED;

typedef
_Function_class_(EVT_WDF_DEVICE_WAKE_FROM_SX_TRIGGERED)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
EVT_WDF_DEVICE_WAKE_FROM_SX_TRIGGERED(
    _In_
    WDFDEVICE Device
    );

typedef EVT_WDF_DEVICE_WAKE_FROM_SX_TRIGGERED *PFN_WDF_DEVICE_WAKE_FROM_SX_TRIGGERED;

typedef struct _WDF_PNPPOWER_EVENT_CALLBACKS {
    //
    // Size of this structure in bytes
    //
    ULONG Size;

    PFN_WDF_DEVICE_D0_ENTRY                 EvtDeviceD0Entry;
    PFN_WDF_DEVICE_D0_ENTRY_POST_INTERRUPTS_ENABLED EvtDeviceD0EntryPostInterruptsEnabled;
    PFN_WDF_DEVICE_D0_EXIT                  EvtDeviceD0Exit;
    PFN_WDF_DEVICE_D0_EXIT_PRE_INTERRUPTS_DISABLED EvtDeviceD0ExitPreInterruptsDisabled;
    PFN_WDF_DEVICE_PREPARE_HARDWARE         EvtDevicePrepareHardware;
    PFN_WDF_DEVICE_RELEASE_HARDWARE         EvtDeviceReleaseHardware;
    PFN_WDF_DEVICE_SELF_MANAGED_IO_CLEANUP  EvtDeviceSelfManagedIoCleanup;
    PFN_WDF_DEVICE_SELF_MANAGED_IO_FLUSH    EvtDeviceSelfManagedIoFlush;
    PFN_WDF_DEVICE_SELF_MANAGED_IO_INIT     EvtDeviceSelfManagedIoInit;
    PFN_WDF_DEVICE_SELF_MANAGED_IO_SUSPEND  EvtDeviceSelfManagedIoSuspend;
    PFN_WDF_DEVICE_SELF_MANAGED_IO_RESTART  EvtDeviceSelfManagedIoRestart;
    PFN_WDF_DEVICE_SURPRISE_REMOVAL         EvtDeviceSurpriseRemoval;
    PFN_WDF_DEVICE_QUERY_REMOVE             EvtDeviceQueryRemove;
    PFN_WDF_DEVICE_QUERY_STOP               EvtDeviceQueryStop;
    PFN_WDF_DEVICE_USAGE_NOTIFICATION       EvtDeviceUsageNotification;
    PFN_WDF_DEVICE_RELATIONS_QUERY          EvtDeviceRelationsQuery;
} WDF_PNPPOWER_EVENT_CALLBACKS, *PWDF_PNPPOWER_EVENT_CALLBACKS;

typedef struct _WDF_POWER_POLICY_EVENT_CALLBACKS {
    //
    // Size of this structure in bytes
    //
    ULONG Size;

    PFN_WDF_DEVICE_ARM_WAKE_FROM_S0         EvtDeviceArmWakeFromS0;
    PFN_WDF_DEVICE_DISARM_WAKE_FROM_S0      EvtDeviceDisarmWakeFromS0;
    PFN_WDF_DEVICE_WAKE_FROM_S0_TRIGGERED   EvtDeviceWakeFromS0Triggered;

    PFN_WDF_DEVICE_ARM_WAKE_FROM_SX         EvtDeviceArmWakeFromSx;
    PFN_WDF_DEVICE_DISARM_WAKE_FROM_SX      EvtDeviceDisarmWakeFromSx;
    PFN_WDF_DEVICE_WAKE_FROM_SX_TRIGGERED   EvtDeviceWakeFromSxTriggered;

    PFN_WDF_DEVICE_ARM_WAKE_FROM_SX_WITH_REASON EvtDeviceArmWakeFromSxWithReason;

} WDF_POWER_POLICY_EVENT_CALLBACKS, *PWDF_POWER_POLICY_EVENT_CALLBACKS;

VOID
FORCEINLINE
WDF_POWER_POLICY_EVENT_CALLBACKS_INIT(
    _Out_ PWDF_POWER_POLICY_EVENT_CALLBACKS Callbacks
    )
{
    RtlZeroMemory(Callbacks, sizeof(WDF_POWER_POLICY_EVENT_CALLBACKS));

    Callbacks->Size = sizeof(WDF_POWER_POLICY_EVENT_CALLBACKS);
}

VOID
FORCEINLINE
WDF_PNPPOWER_EVENT_CALLBACKS_INIT(
    _Out_ PWDF_PNPPOWER_EVENT_CALLBACKS Callbacks
    )
{
    RtlZeroMemory(Callbacks, sizeof(WDF_PNPPOWER_EVENT_CALLBACKS));
    Callbacks->Size = sizeof(WDF_PNPPOWER_EVENT_CALLBACKS);
}


ULONG
FORCEINLINE
WdfDevStateNormalize(
    _In_ ULONG State
    )
{
    return State & ~WdfDevStateNP;
}


BOOLEAN
FORCEINLINE
WdfDevStateIsNP(
    _In_ ULONG State
    )
{
    return (State & WdfDevStateNP) ? TRUE : FALSE;
}

typedef struct _WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS {
    //
    // Size of this structure in bytes
    //
    ULONG Size;

    //
    // Indicates whether the device can wake itself up while the machine is in
    // S0.
    //
    WDF_POWER_POLICY_S0_IDLE_CAPABILITIES IdleCaps;

    //
    // The low power state in which the device will be placed when it is idled
    // out while the machine is in S0.
    //
    DEVICE_POWER_STATE DxState;

    //
    // Amount of time the device must be idle before idling out.  Timeout is in
    // milliseconds.
    //
    ULONG IdleTimeout;

    //
    // Inidcates whether a user can control the idle policy of the device.
    // By default, a user is allowed to change the policy.
    //
    WDF_POWER_POLICY_S0_IDLE_USER_CONTROL UserControlOfIdleSettings;

    //
    // If WdfTrue, idling out while the machine is in S0 will be enabled.
    //
    // If WdfFalse, idling out will be disabled.
    //
    // If WdfUseDefault, the idling out will be enabled.  If
    // UserControlOfIdleSettings is set to IdleAllowUserControl, the user's
    // settings will override the default.
    //
    WDF_TRI_STATE Enabled;

    //
    // This field is applicable only when IdleCaps == IdleCannotWakeFromS0
    // If WdfTrue,device is powered up on System Wake even if device is idle 
    // If WdfFalse, device is not powered up on system wake if it is idle
    // If WdfUseDefault, the behavior is same as WdfFalse 
    // 
    WDF_TRI_STATE PowerUpIdleDeviceOnSystemWake;

} WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS, *PWDF_DEVICE_POWER_POLICY_IDLE_SETTINGS;

VOID
FORCEINLINE
WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_INIT(
    _Out_ PWDF_DEVICE_POWER_POLICY_IDLE_SETTINGS Settings,
    _In_ WDF_POWER_POLICY_S0_IDLE_CAPABILITIES IdleCaps
    )
{
    RtlZeroMemory(Settings, sizeof(WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS));

    Settings->Size = sizeof(WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS);

    Settings->IdleTimeout = IdleTimeoutDefaultValue;
    Settings->UserControlOfIdleSettings = IdleAllowUserControl;
    Settings->Enabled = WdfUseDefault;
    Settings->PowerUpIdleDeviceOnSystemWake = WdfUseDefault;

    Settings->IdleCaps = IdleCaps;

    switch (IdleCaps) {
    case IdleUsbSelectiveSuspend:
    case IdleCanWakeFromS0:
        Settings->DxState = PowerDeviceMaximum;
        break;

    case IdleCannotWakeFromS0:
        Settings->DxState = PowerDeviceD3;
        break;
    }
}

typedef struct _WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS {
    //
    // Size of this structure in bytes
    //
    ULONG Size;

    //
    // The low power state in which the device will be placed when it is armed
    // for wake from Sx.
    //
    DEVICE_POWER_STATE DxState;

    //
    // Inidcates whether a user can control the idle policy of the device.
    // By default, a user is allowed to change the policy.
    //
    WDF_POWER_POLICY_SX_WAKE_USER_CONTROL UserControlOfWakeSettings;

    //
    // If WdfTrue, arming the device for wake while the machine is in Sx is
    // enabled.
    //
    // If WdfFalse, arming the device for wake while the machine is in Sx is
    // disabled.
    //
    // If WdfUseDefault, arming will be enabled.  If UserControlOfWakeSettings
    // is set to WakeAllowUserControl, the user's settings will override the
    // default.
    //
    WDF_TRI_STATE Enabled;

    //
    // If set to TRUE, arming the parent device can depend on whether there
    // is atleast one child device armed for wake.
    //
    // If set to FALSE, arming of the parent device will be independent of
    // whether any of the child devices are armed for wake.
    //
    BOOLEAN ArmForWakeIfChildrenAreArmedForWake;

    //
    // Indicates that whenever the parent device completes the wake irp
    // successfully, the status needs to be also propagated to the child
    // devices.  This helps in tracking which devices were responsible for
    // waking the system.
    //
    BOOLEAN IndicateChildWakeOnParentWake;

} WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS, *PWDF_DEVICE_POWER_POLICY_WAKE_SETTINGS;

VOID
FORCEINLINE
WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_INIT(
    _Out_ PWDF_DEVICE_POWER_POLICY_WAKE_SETTINGS Settings
    )
{
    RtlZeroMemory(Settings, sizeof(WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS));

    Settings->Size = sizeof(WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS);

    Settings->Enabled = WdfUseDefault;
    Settings->DxState = PowerDeviceMaximum;
    Settings->UserControlOfWakeSettings = WakeAllowUserControl;
}

typedef struct _WDF_DEVICE_STATE {
    //
    // Size of this structure in bytes
    //
    ULONG Size;

    //
    // If set to WdfTrue, the device will be disabled
    //
    WDF_TRI_STATE Disabled;

    //
    // If set to WdfTrue, the device will not be displayed in device manager.
    // Once hidden, the device cannot be unhidden.
    //
    WDF_TRI_STATE DontDisplayInUI;

    //
    // If set to WdfTrue, the device is reporting itself as failed.  If set
    // in conjuction with ResourcesChanged to WdfTrue, the device will receive
    // a PnP stop and then a new PnP start device.
    //
    WDF_TRI_STATE Failed;

    //
    // If set to WdfTrue, the device cannot be subsequently disabled.
    //
    WDF_TRI_STATE NotDisableable;


    //
    // If set to WdfTrue, the device stack will be torn down.
    //
    WDF_TRI_STATE Removed;

    //
    // If set to WdfTrue, the device will be sent another PnP start.  If the
    // Failed field is set to WdfTrue as well, a PnP stop will be sent before
    // the start.
    //
    WDF_TRI_STATE ResourcesChanged;

} WDF_DEVICE_STATE, *PWDF_DEVICE_STATE;

VOID
FORCEINLINE
WDF_DEVICE_STATE_INIT(
    _Out_ PWDF_DEVICE_STATE PnpDeviceState
    )
{
    RtlZeroMemory(PnpDeviceState, sizeof(WDF_DEVICE_STATE));

    PnpDeviceState->Size = sizeof(WDF_DEVICE_STATE);

    //
    // Initializes all of the fields to the WdfUseDefault enum value
    //
    PnpDeviceState->Disabled = WdfUseDefault;
    PnpDeviceState->DontDisplayInUI = WdfUseDefault;
    PnpDeviceState->Failed = WdfUseDefault;
    PnpDeviceState->NotDisableable = WdfUseDefault;
    PnpDeviceState->Removed = WdfUseDefault;
    PnpDeviceState->ResourcesChanged = WdfUseDefault;
}

typedef struct _WDF_DEVICE_PNP_CAPABILITIES {
    //
    // Size of the structure in bytes
    //
    ULONG Size;

    //
    // NOTE: To mark a PDO as raw, call WdfPdoInitAssignRawDevice
    //

    WDF_TRI_STATE LockSupported;
    WDF_TRI_STATE EjectSupported;
    WDF_TRI_STATE Removable;
    WDF_TRI_STATE DockDevice;
    WDF_TRI_STATE UniqueID;
    WDF_TRI_STATE SilentInstall;
    WDF_TRI_STATE SurpriseRemovalOK;
    WDF_TRI_STATE HardwareDisabled;
    WDF_TRI_STATE NoDisplayInUI;

    //
    // Default values of -1 indicate not to set this value
    //
    ULONG Address;
    ULONG UINumber;

} WDF_DEVICE_PNP_CAPABILITIES, *PWDF_DEVICE_PNP_CAPABILITIES;

VOID
FORCEINLINE
WDF_DEVICE_PNP_CAPABILITIES_INIT(
    _Out_ PWDF_DEVICE_PNP_CAPABILITIES Caps
    )
{
    RtlZeroMemory(Caps, sizeof(WDF_DEVICE_PNP_CAPABILITIES));

    Caps->Size = sizeof(WDF_DEVICE_PNP_CAPABILITIES);

    Caps->LockSupported = WdfUseDefault;
    Caps->EjectSupported = WdfUseDefault;
    Caps->Removable = WdfUseDefault;
    Caps->DockDevice = WdfUseDefault;
    Caps->UniqueID = WdfUseDefault;
    Caps->SilentInstall = WdfUseDefault;
    Caps->SurpriseRemovalOK = WdfUseDefault;
    Caps->HardwareDisabled = WdfUseDefault;
    Caps->NoDisplayInUI = WdfUseDefault;

    Caps->Address = (ULONG) -1;
    Caps->UINumber = (ULONG) -1;
}

typedef struct _WDF_DEVICE_POWER_CAPABILITIES {
    //
    // Size of the structure in bytes
    //
    ULONG Size;

    WDF_TRI_STATE DeviceD1;
    WDF_TRI_STATE DeviceD2;

    WDF_TRI_STATE WakeFromD0;
    WDF_TRI_STATE WakeFromD1;
    WDF_TRI_STATE WakeFromD2;
    WDF_TRI_STATE WakeFromD3;

    //
    // Default value PowerDeviceMaximum indicates not to set this value
    //
    DEVICE_POWER_STATE DeviceState[PowerSystemMaximum];

    //
    // Default value PowerDeviceMaximum, PowerSystemMaximum indicates not to
    // set this value.
    //
    DEVICE_POWER_STATE DeviceWake;
    SYSTEM_POWER_STATE SystemWake;

    //
    // Default values of -1 indicate not to set this value
    //
    ULONG D1Latency;
    ULONG D2Latency;
    ULONG D3Latency;

    //
    // Ideal Dx state for the device to be put into when the machine moves into
    // Sx and the device is not armed for wake.  By default, the default will be
    // placed into D3.  If IdealDxStateForSx is lighter then
    // DeviceState[Sx], then DeviceState[Sx] will be used as the Dx state.
    //
    DEVICE_POWER_STATE IdealDxStateForSx;

} WDF_DEVICE_POWER_CAPABILITIES, *PWDF_DEVICE_POWER_CAPABILITIES;

VOID
FORCEINLINE
WDF_DEVICE_POWER_CAPABILITIES_INIT(
    _Out_ PWDF_DEVICE_POWER_CAPABILITIES Caps
    )
{
    ULONG i;

    RtlZeroMemory(Caps, sizeof(WDF_DEVICE_POWER_CAPABILITIES));

    Caps->Size = sizeof(WDF_DEVICE_POWER_CAPABILITIES);

    Caps->DeviceD1 = WdfUseDefault;
    Caps->DeviceD2 = WdfUseDefault;

    Caps->WakeFromD0 = WdfUseDefault;
    Caps->WakeFromD1 = WdfUseDefault;
    Caps->WakeFromD2 = WdfUseDefault;
    Caps->WakeFromD3 = WdfUseDefault;

    for (i = 0; i < sizeof(Caps->DeviceState)/sizeof(Caps->DeviceState[1]); i++) {
        Caps->DeviceState[i] = PowerDeviceMaximum;
    }

    Caps->DeviceWake = PowerDeviceMaximum;
    Caps->SystemWake = PowerSystemMaximum;

    Caps->D1Latency = (ULONG) -1;
    Caps->D2Latency = (ULONG) -1;
    Caps->D3Latency = (ULONG) -1;

    Caps->IdealDxStateForSx = PowerDeviceMaximum;
}

typedef
_Function_class_(EVT_WDFDEVICE_WDM_IRP_PREPROCESS)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
EVT_WDFDEVICE_WDM_IRP_PREPROCESS(
    _In_
    WDFDEVICE Device,
    _Inout_
    PIRP Irp
    );

typedef EVT_WDFDEVICE_WDM_IRP_PREPROCESS *PFN_WDFDEVICE_WDM_IRP_PREPROCESS;

//
// This is called to pre-process a request using METHOD_NEITHER
//
typedef
_Function_class_(EVT_WDF_IO_IN_CALLER_CONTEXT)
_IRQL_requires_same_
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_WDF_IO_IN_CALLER_CONTEXT(
    _In_
    WDFDEVICE Device,
    _In_
    WDFREQUEST Request
    );

typedef EVT_WDF_IO_IN_CALLER_CONTEXT *PFN_WDF_IO_IN_CALLER_CONTEXT;

//
// WDF Function: WdfDeviceGetDeviceState
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_WDFDEVICEGETDEVICESTATE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _Out_
    PWDF_DEVICE_STATE DeviceState
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
WdfDeviceGetDeviceState(
    _In_
    WDFDEVICE Device,
    _Out_
    PWDF_DEVICE_STATE DeviceState
    )
{
    ((PFN_WDFDEVICEGETDEVICESTATE) WdfFunctions[WdfDeviceGetDeviceStateTableIndex])(WdfDriverGlobals, Device, DeviceState);
}

//
// WDF Function: WdfDeviceSetDeviceState
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_WDFDEVICESETDEVICESTATE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    PWDF_DEVICE_STATE DeviceState
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
WdfDeviceSetDeviceState(
    _In_
    WDFDEVICE Device,
    _In_
    PWDF_DEVICE_STATE DeviceState
    )
{
    ((PFN_WDFDEVICESETDEVICESTATE) WdfFunctions[WdfDeviceSetDeviceStateTableIndex])(WdfDriverGlobals, Device, DeviceState);
}

//
// WDF Function: WdfWdmDeviceGetWdfDeviceHandle
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
WDFDEVICE
(*PFN_WDFWDMDEVICEGETWDFDEVICEHANDLE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    PDEVICE_OBJECT DeviceObject
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
WDFDEVICE
FORCEINLINE
WdfWdmDeviceGetWdfDeviceHandle(
    _In_
    PDEVICE_OBJECT DeviceObject
    )
{
    return ((PFN_WDFWDMDEVICEGETWDFDEVICEHANDLE) WdfFunctions[WdfWdmDeviceGetWdfDeviceHandleTableIndex])(WdfDriverGlobals, DeviceObject);
}

//
// WDF Function: WdfDeviceWdmGetDeviceObject
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
PDEVICE_OBJECT
(*PFN_WDFDEVICEWDMGETDEVICEOBJECT)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
PDEVICE_OBJECT
FORCEINLINE
WdfDeviceWdmGetDeviceObject(
    _In_
    WDFDEVICE Device
    )
{
    return ((PFN_WDFDEVICEWDMGETDEVICEOBJECT) WdfFunctions[WdfDeviceWdmGetDeviceObjectTableIndex])(WdfDriverGlobals, Device);
}

//
// WDF Function: WdfDeviceWdmGetAttachedDevice
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
PDEVICE_OBJECT
(*PFN_WDFDEVICEWDMGETATTACHEDDEVICE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
PDEVICE_OBJECT
FORCEINLINE
WdfDeviceWdmGetAttachedDevice(
    _In_
    WDFDEVICE Device
    )
{
    return ((PFN_WDFDEVICEWDMGETATTACHEDDEVICE) WdfFunctions[WdfDeviceWdmGetAttachedDeviceTableIndex])(WdfDriverGlobals, Device);
}

//
// WDF Function: WdfDeviceWdmGetPhysicalDevice
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
PDEVICE_OBJECT
(*PFN_WDFDEVICEWDMGETPHYSICALDEVICE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
PDEVICE_OBJECT
FORCEINLINE
WdfDeviceWdmGetPhysicalDevice(
    _In_
    WDFDEVICE Device
    )
{
    return ((PFN_WDFDEVICEWDMGETPHYSICALDEVICE) WdfFunctions[WdfDeviceWdmGetPhysicalDeviceTableIndex])(WdfDriverGlobals, Device);
}

//
// WDF Function: WdfDeviceWdmDispatchPreprocessedIrp
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFDEVICEWDMDISPATCHPREPROCESSEDIRP)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    PIRP Irp
    );

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FORCEINLINE
WdfDeviceWdmDispatchPreprocessedIrp(
    _In_
    WDFDEVICE Device,
    _In_
    PIRP Irp
    )
{
    return ((PFN_WDFDEVICEWDMDISPATCHPREPROCESSEDIRP) WdfFunctions[WdfDeviceWdmDispatchPreprocessedIrpTableIndex])(WdfDriverGlobals, Device, Irp);
}

//
// WDF Function: WdfDeviceAddDependentUsageDeviceObject
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFDEVICEADDDEPENDENTUSAGEDEVICEOBJECT)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    PDEVICE_OBJECT DependentDevice
    );

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FORCEINLINE
WdfDeviceAddDependentUsageDeviceObject(
    _In_
    WDFDEVICE Device,
    _In_
    PDEVICE_OBJECT DependentDevice
    )
{
    return ((PFN_WDFDEVICEADDDEPENDENTUSAGEDEVICEOBJECT) WdfFunctions[WdfDeviceAddDependentUsageDeviceObjectTableIndex])(WdfDriverGlobals, Device, DependentDevice);
}

//
// WDF Function: WdfDeviceRemoveDependentUsageDeviceObject
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_WDFDEVICEREMOVEDEPENDENTUSAGEDEVICEOBJECT)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    PDEVICE_OBJECT DependentDevice
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
WdfDeviceRemoveDependentUsageDeviceObject(
    _In_
    WDFDEVICE Device,
    _In_
    PDEVICE_OBJECT DependentDevice
    )
{
    ((PFN_WDFDEVICEREMOVEDEPENDENTUSAGEDEVICEOBJECT) WdfFunctions[WdfDeviceRemoveDependentUsageDeviceObjectTableIndex])(WdfDriverGlobals, Device, DependentDevice);
}

//
// WDF Function: WdfDeviceAddRemovalRelationsPhysicalDevice
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFDEVICEADDREMOVALRELATIONSPHYSICALDEVICE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    PDEVICE_OBJECT PhysicalDevice
    );

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FORCEINLINE
WdfDeviceAddRemovalRelationsPhysicalDevice(
    _In_
    WDFDEVICE Device,
    _In_
    PDEVICE_OBJECT PhysicalDevice
    )
{
    return ((PFN_WDFDEVICEADDREMOVALRELATIONSPHYSICALDEVICE) WdfFunctions[WdfDeviceAddRemovalRelationsPhysicalDeviceTableIndex])(WdfDriverGlobals, Device, PhysicalDevice);
}

//
// WDF Function: WdfDeviceRemoveRemovalRelationsPhysicalDevice
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_WDFDEVICEREMOVEREMOVALRELATIONSPHYSICALDEVICE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    PDEVICE_OBJECT PhysicalDevice
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
WdfDeviceRemoveRemovalRelationsPhysicalDevice(
    _In_
    WDFDEVICE Device,
    _In_
    PDEVICE_OBJECT PhysicalDevice
    )
{
    ((PFN_WDFDEVICEREMOVEREMOVALRELATIONSPHYSICALDEVICE) WdfFunctions[WdfDeviceRemoveRemovalRelationsPhysicalDeviceTableIndex])(WdfDriverGlobals, Device, PhysicalDevice);
}

//
// WDF Function: WdfDeviceClearRemovalRelationsDevices
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_WDFDEVICECLEARREMOVALRELATIONSDEVICES)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
WdfDeviceClearRemovalRelationsDevices(
    _In_
    WDFDEVICE Device
    )
{
    ((PFN_WDFDEVICECLEARREMOVALRELATIONSDEVICES) WdfFunctions[WdfDeviceClearRemovalRelationsDevicesTableIndex])(WdfDriverGlobals, Device);
}

//
// WDF Function: WdfDeviceGetDriver
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
WDFDRIVER
(*PFN_WDFDEVICEGETDRIVER)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
WDFDRIVER
FORCEINLINE
WdfDeviceGetDriver(
    _In_
    WDFDEVICE Device
    )
{
    return ((PFN_WDFDEVICEGETDRIVER) WdfFunctions[WdfDeviceGetDriverTableIndex])(WdfDriverGlobals, Device);
}

//
// WDF Function: WdfDeviceRetrieveDeviceName
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFDEVICERETRIEVEDEVICENAME)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    WDFSTRING String
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
WdfDeviceRetrieveDeviceName(
    _In_
    WDFDEVICE Device,
    _In_
    WDFSTRING String
    )
{
    return ((PFN_WDFDEVICERETRIEVEDEVICENAME) WdfFunctions[WdfDeviceRetrieveDeviceNameTableIndex])(WdfDriverGlobals, Device, String);
}

//
// WDF Function: WdfDeviceAssignMofResourceName
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFDEVICEASSIGNMOFRESOURCENAME)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    PCUNICODE_STRING MofResourceName
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
WdfDeviceAssignMofResourceName(
    _In_
    WDFDEVICE Device,
    _In_
    PCUNICODE_STRING MofResourceName
    )
{
    return ((PFN_WDFDEVICEASSIGNMOFRESOURCENAME) WdfFunctions[WdfDeviceAssignMofResourceNameTableIndex])(WdfDriverGlobals, Device, MofResourceName);
}

//
// WDF Function: WdfDeviceGetIoTarget
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
WDFIOTARGET
(*PFN_WDFDEVICEGETIOTARGET)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
WDFIOTARGET
FORCEINLINE
WdfDeviceGetIoTarget(
    _In_
    WDFDEVICE Device
    )
{
    return ((PFN_WDFDEVICEGETIOTARGET) WdfFunctions[WdfDeviceGetIoTargetTableIndex])(WdfDriverGlobals, Device);
}

//
// WDF Function: WdfDeviceGetDevicePnpState
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
WDF_DEVICE_PNP_STATE
(*PFN_WDFDEVICEGETDEVICEPNPSTATE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
WDF_DEVICE_PNP_STATE
FORCEINLINE
WdfDeviceGetDevicePnpState(
    _In_
    WDFDEVICE Device
    )
{
    return ((PFN_WDFDEVICEGETDEVICEPNPSTATE) WdfFunctions[WdfDeviceGetDevicePnpStateTableIndex])(WdfDriverGlobals, Device);
}

//
// WDF Function: WdfDeviceGetDevicePowerState
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
WDF_DEVICE_POWER_STATE
(*PFN_WDFDEVICEGETDEVICEPOWERSTATE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
WDF_DEVICE_POWER_STATE
FORCEINLINE
WdfDeviceGetDevicePowerState(
    _In_
    WDFDEVICE Device
    )
{
    return ((PFN_WDFDEVICEGETDEVICEPOWERSTATE) WdfFunctions[WdfDeviceGetDevicePowerStateTableIndex])(WdfDriverGlobals, Device);
}

//
// WDF Function: WdfDeviceGetDevicePowerPolicyState
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
WDF_DEVICE_POWER_POLICY_STATE
(*PFN_WDFDEVICEGETDEVICEPOWERPOLICYSTATE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
WDF_DEVICE_POWER_POLICY_STATE
FORCEINLINE
WdfDeviceGetDevicePowerPolicyState(
    _In_
    WDFDEVICE Device
    )
{
    return ((PFN_WDFDEVICEGETDEVICEPOWERPOLICYSTATE) WdfFunctions[WdfDeviceGetDevicePowerPolicyStateTableIndex])(WdfDriverGlobals, Device);
}

//
// WDF Function: WdfDeviceAssignS0IdleSettings
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFDEVICEASSIGNS0IDLESETTINGS)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    PWDF_DEVICE_POWER_POLICY_IDLE_SETTINGS Settings
    );

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FORCEINLINE
WdfDeviceAssignS0IdleSettings(
    _In_
    WDFDEVICE Device,
    _In_
    PWDF_DEVICE_POWER_POLICY_IDLE_SETTINGS Settings
    )
{
    return ((PFN_WDFDEVICEASSIGNS0IDLESETTINGS) WdfFunctions[WdfDeviceAssignS0IdleSettingsTableIndex])(WdfDriverGlobals, Device, Settings);
}

//
// WDF Function: WdfDeviceAssignSxWakeSettings
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFDEVICEASSIGNSXWAKESETTINGS)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    PWDF_DEVICE_POWER_POLICY_WAKE_SETTINGS Settings
    );

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FORCEINLINE
WdfDeviceAssignSxWakeSettings(
    _In_
    WDFDEVICE Device,
    _In_
    PWDF_DEVICE_POWER_POLICY_WAKE_SETTINGS Settings
    )
{
    return ((PFN_WDFDEVICEASSIGNSXWAKESETTINGS) WdfFunctions[WdfDeviceAssignSxWakeSettingsTableIndex])(WdfDriverGlobals, Device, Settings);
}

//
// WDF Function: WdfDeviceOpenRegistryKey
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFDEVICEOPENREGISTRYKEY)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    ULONG DeviceInstanceKeyType,
    _In_
    ACCESS_MASK DesiredAccess,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES KeyAttributes,
    _Out_
    WDFKEY* Key
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
WdfDeviceOpenRegistryKey(
    _In_
    WDFDEVICE Device,
    _In_
    ULONG DeviceInstanceKeyType,
    _In_
    ACCESS_MASK DesiredAccess,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES KeyAttributes,
    _Out_
    WDFKEY* Key
    )
{
    return ((PFN_WDFDEVICEOPENREGISTRYKEY) WdfFunctions[WdfDeviceOpenRegistryKeyTableIndex])(WdfDriverGlobals, Device, DeviceInstanceKeyType, DesiredAccess, KeyAttributes, Key);
}

//
// WDF Function: WdfDeviceSetSpecialFileSupport
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_WDFDEVICESETSPECIALFILESUPPORT)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    WDF_SPECIAL_FILE_TYPE FileType,
    _In_
    BOOLEAN FileTypeIsSupported
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
WdfDeviceSetSpecialFileSupport(
    _In_
    WDFDEVICE Device,
    _In_
    WDF_SPECIAL_FILE_TYPE FileType,
    _In_
    BOOLEAN FileTypeIsSupported
    )
{
    ((PFN_WDFDEVICESETSPECIALFILESUPPORT) WdfFunctions[WdfDeviceSetSpecialFileSupportTableIndex])(WdfDriverGlobals, Device, FileType, FileTypeIsSupported);
}

//
// WDF Function: WdfDeviceSetCharacteristics
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_WDFDEVICESETCHARACTERISTICS)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    ULONG DeviceCharacteristics
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
WdfDeviceSetCharacteristics(
    _In_
    WDFDEVICE Device,
    _In_
    ULONG DeviceCharacteristics
    )
{
    ((PFN_WDFDEVICESETCHARACTERISTICS) WdfFunctions[WdfDeviceSetCharacteristicsTableIndex])(WdfDriverGlobals, Device, DeviceCharacteristics);
}

//
// WDF Function: WdfDeviceGetCharacteristics
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
ULONG
(*PFN_WDFDEVICEGETCHARACTERISTICS)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
ULONG
FORCEINLINE
WdfDeviceGetCharacteristics(
    _In_
    WDFDEVICE Device
    )
{
    return ((PFN_WDFDEVICEGETCHARACTERISTICS) WdfFunctions[WdfDeviceGetCharacteristicsTableIndex])(WdfDriverGlobals, Device);
}

//
// WDF Function: WdfDeviceGetAlignmentRequirement
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
ULONG
(*PFN_WDFDEVICEGETALIGNMENTREQUIREMENT)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
ULONG
FORCEINLINE
WdfDeviceGetAlignmentRequirement(
    _In_
    WDFDEVICE Device
    )
{
    return ((PFN_WDFDEVICEGETALIGNMENTREQUIREMENT) WdfFunctions[WdfDeviceGetAlignmentRequirementTableIndex])(WdfDriverGlobals, Device);
}

//
// WDF Function: WdfDeviceSetAlignmentRequirement
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_WDFDEVICESETALIGNMENTREQUIREMENT)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    ULONG AlignmentRequirement
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
WdfDeviceSetAlignmentRequirement(
    _In_
    WDFDEVICE Device,
    _In_
    ULONG AlignmentRequirement
    )
{
    ((PFN_WDFDEVICESETALIGNMENTREQUIREMENT) WdfFunctions[WdfDeviceSetAlignmentRequirementTableIndex])(WdfDriverGlobals, Device, AlignmentRequirement);
}

//
// WDF Function: WdfDeviceInitFree
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_WDFDEVICEINITFREE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    PWDFDEVICE_INIT DeviceInit
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
WdfDeviceInitFree(
    _In_
    PWDFDEVICE_INIT DeviceInit
    )
{
    ((PFN_WDFDEVICEINITFREE) WdfFunctions[WdfDeviceInitFreeTableIndex])(WdfDriverGlobals, DeviceInit);
}

//
// WDF Function: WdfDeviceInitSetPnpPowerEventCallbacks
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_WDFDEVICEINITSETPNPPOWEREVENTCALLBACKS)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    PWDFDEVICE_INIT DeviceInit,
    _In_
    PWDF_PNPPOWER_EVENT_CALLBACKS PnpPowerEventCallbacks
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
WdfDeviceInitSetPnpPowerEventCallbacks(
    _In_
    PWDFDEVICE_INIT DeviceInit,
    _In_
    PWDF_PNPPOWER_EVENT_CALLBACKS PnpPowerEventCallbacks
    )
{
    ((PFN_WDFDEVICEINITSETPNPPOWEREVENTCALLBACKS) WdfFunctions[WdfDeviceInitSetPnpPowerEventCallbacksTableIndex])(WdfDriverGlobals, DeviceInit, PnpPowerEventCallbacks);
}

//
// WDF Function: WdfDeviceInitSetPowerPolicyEventCallbacks
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_WDFDEVICEINITSETPOWERPOLICYEVENTCALLBACKS)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    PWDFDEVICE_INIT DeviceInit,
    _In_
    PWDF_POWER_POLICY_EVENT_CALLBACKS PowerPolicyEventCallbacks
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
WdfDeviceInitSetPowerPolicyEventCallbacks(
    _In_
    PWDFDEVICE_INIT DeviceInit,
    _In_
    PWDF_POWER_POLICY_EVENT_CALLBACKS PowerPolicyEventCallbacks
    )
{
    ((PFN_WDFDEVICEINITSETPOWERPOLICYEVENTCALLBACKS) WdfFunctions[WdfDeviceInitSetPowerPolicyEventCallbacksTableIndex])(WdfDriverGlobals, DeviceInit, PowerPolicyEventCallbacks);
}

//
// WDF Function: WdfDeviceInitSetPowerPolicyOwnership
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_WDFDEVICEINITSETPOWERPOLICYOWNERSHIP)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    PWDFDEVICE_INIT DeviceInit,
    _In_
    BOOLEAN IsPowerPolicyOwner
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
WdfDeviceInitSetPowerPolicyOwnership(
    _In_
    PWDFDEVICE_INIT DeviceInit,
    _In_
    BOOLEAN IsPowerPolicyOwner
    )
{
    ((PFN_WDFDEVICEINITSETPOWERPOLICYOWNERSHIP) WdfFunctions[WdfDeviceInitSetPowerPolicyOwnershipTableIndex])(WdfDriverGlobals, DeviceInit, IsPowerPolicyOwner);
}

//
// WDF Function: WdfDeviceInitRegisterPnpStateChangeCallback
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFDEVICEINITREGISTERPNPSTATECHANGECALLBACK)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    PWDFDEVICE_INIT DeviceInit,
    _In_
    WDF_DEVICE_PNP_STATE PnpState,
    _In_
    PFN_WDF_DEVICE_PNP_STATE_CHANGE_NOTIFICATION EvtDevicePnpStateChange,
    _In_
    ULONG CallbackTypes
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
WdfDeviceInitRegisterPnpStateChangeCallback(
    _In_
    PWDFDEVICE_INIT DeviceInit,
    _In_
    WDF_DEVICE_PNP_STATE PnpState,
    _In_
    PFN_WDF_DEVICE_PNP_STATE_CHANGE_NOTIFICATION EvtDevicePnpStateChange,
    _In_
    ULONG CallbackTypes
    )
{
    return ((PFN_WDFDEVICEINITREGISTERPNPSTATECHANGECALLBACK) WdfFunctions[WdfDeviceInitRegisterPnpStateChangeCallbackTableIndex])(WdfDriverGlobals, DeviceInit, PnpState, EvtDevicePnpStateChange, CallbackTypes);
}

//
// WDF Function: WdfDeviceInitRegisterPowerStateChangeCallback
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFDEVICEINITREGISTERPOWERSTATECHANGECALLBACK)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    PWDFDEVICE_INIT DeviceInit,
    _In_
    WDF_DEVICE_POWER_STATE PowerState,
    _In_
    PFN_WDF_DEVICE_POWER_STATE_CHANGE_NOTIFICATION EvtDevicePowerStateChange,
    _In_
    ULONG CallbackTypes
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
WdfDeviceInitRegisterPowerStateChangeCallback(
    _In_
    PWDFDEVICE_INIT DeviceInit,
    _In_
    WDF_DEVICE_POWER_STATE PowerState,
    _In_
    PFN_WDF_DEVICE_POWER_STATE_CHANGE_NOTIFICATION EvtDevicePowerStateChange,
    _In_
    ULONG CallbackTypes
    )
{
    return ((PFN_WDFDEVICEINITREGISTERPOWERSTATECHANGECALLBACK) WdfFunctions[WdfDeviceInitRegisterPowerStateChangeCallbackTableIndex])(WdfDriverGlobals, DeviceInit, PowerState, EvtDevicePowerStateChange, CallbackTypes);
}

//
// WDF Function: WdfDeviceInitRegisterPowerPolicyStateChangeCallback
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFDEVICEINITREGISTERPOWERPOLICYSTATECHANGECALLBACK)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    PWDFDEVICE_INIT DeviceInit,
    _In_
    WDF_DEVICE_POWER_POLICY_STATE PowerPolicyState,
    _In_
    PFN_WDF_DEVICE_POWER_POLICY_STATE_CHANGE_NOTIFICATION EvtDevicePowerPolicyStateChange,
    _In_
    ULONG CallbackTypes
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
WdfDeviceInitRegisterPowerPolicyStateChangeCallback(
    _In_
    PWDFDEVICE_INIT DeviceInit,
    _In_
    WDF_DEVICE_POWER_POLICY_STATE PowerPolicyState,
    _In_
    PFN_WDF_DEVICE_POWER_POLICY_STATE_CHANGE_NOTIFICATION EvtDevicePowerPolicyStateChange,
    _In_
    ULONG CallbackTypes
    )
{
    return ((PFN_WDFDEVICEINITREGISTERPOWERPOLICYSTATECHANGECALLBACK) WdfFunctions[WdfDeviceInitRegisterPowerPolicyStateChangeCallbackTableIndex])(WdfDriverGlobals, DeviceInit, PowerPolicyState, EvtDevicePowerPolicyStateChange, CallbackTypes);
}

//
// WDF Function: WdfDeviceInitSetIoType
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_WDFDEVICEINITSETIOTYPE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    PWDFDEVICE_INIT DeviceInit,
    _In_
    WDF_DEVICE_IO_TYPE IoType
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
WdfDeviceInitSetIoType(
    _In_
    PWDFDEVICE_INIT DeviceInit,
    _In_
    WDF_DEVICE_IO_TYPE IoType
    )
{
    ((PFN_WDFDEVICEINITSETIOTYPE) WdfFunctions[WdfDeviceInitSetIoTypeTableIndex])(WdfDriverGlobals, DeviceInit, IoType);
}

//
// WDF Function: WdfDeviceInitSetExclusive
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_WDFDEVICEINITSETEXCLUSIVE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    PWDFDEVICE_INIT DeviceInit,
    _In_
    BOOLEAN IsExclusive
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
WdfDeviceInitSetExclusive(
    _In_
    PWDFDEVICE_INIT DeviceInit,
    _In_
    BOOLEAN IsExclusive
    )
{
    ((PFN_WDFDEVICEINITSETEXCLUSIVE) WdfFunctions[WdfDeviceInitSetExclusiveTableIndex])(WdfDriverGlobals, DeviceInit, IsExclusive);
}

//
// WDF Function: WdfDeviceInitSetPowerNotPageable
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_WDFDEVICEINITSETPOWERNOTPAGEABLE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    PWDFDEVICE_INIT DeviceInit
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
WdfDeviceInitSetPowerNotPageable(
    _In_
    PWDFDEVICE_INIT DeviceInit
    )
{
    ((PFN_WDFDEVICEINITSETPOWERNOTPAGEABLE) WdfFunctions[WdfDeviceInitSetPowerNotPageableTableIndex])(WdfDriverGlobals, DeviceInit);
}

//
// WDF Function: WdfDeviceInitSetPowerPageable
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_WDFDEVICEINITSETPOWERPAGEABLE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    PWDFDEVICE_INIT DeviceInit
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
WdfDeviceInitSetPowerPageable(
    _In_
    PWDFDEVICE_INIT DeviceInit
    )
{
    ((PFN_WDFDEVICEINITSETPOWERPAGEABLE) WdfFunctions[WdfDeviceInitSetPowerPageableTableIndex])(WdfDriverGlobals, DeviceInit);
}

//
// WDF Function: WdfDeviceInitSetPowerInrush
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_WDFDEVICEINITSETPOWERINRUSH)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    PWDFDEVICE_INIT DeviceInit
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
WdfDeviceInitSetPowerInrush(
    _In_
    PWDFDEVICE_INIT DeviceInit
    )
{
    ((PFN_WDFDEVICEINITSETPOWERINRUSH) WdfFunctions[WdfDeviceInitSetPowerInrushTableIndex])(WdfDriverGlobals, DeviceInit);
}

//
// WDF Function: WdfDeviceInitSetDeviceType
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_WDFDEVICEINITSETDEVICETYPE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    PWDFDEVICE_INIT DeviceInit,
    _In_
    DEVICE_TYPE DeviceType
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
WdfDeviceInitSetDeviceType(
    _In_
    PWDFDEVICE_INIT DeviceInit,
    _In_
    DEVICE_TYPE DeviceType
    )
{
    ((PFN_WDFDEVICEINITSETDEVICETYPE) WdfFunctions[WdfDeviceInitSetDeviceTypeTableIndex])(WdfDriverGlobals, DeviceInit, DeviceType);
}

//
// WDF Function: WdfDeviceInitAssignName
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFDEVICEINITASSIGNNAME)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    PWDFDEVICE_INIT DeviceInit,
    _In_opt_
    PCUNICODE_STRING DeviceName
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
WdfDeviceInitAssignName(
    _In_
    PWDFDEVICE_INIT DeviceInit,
    _In_opt_
    PCUNICODE_STRING DeviceName
    )
{
    return ((PFN_WDFDEVICEINITASSIGNNAME) WdfFunctions[WdfDeviceInitAssignNameTableIndex])(WdfDriverGlobals, DeviceInit, DeviceName);
}

//
// WDF Function: WdfDeviceInitAssignSDDLString
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFDEVICEINITASSIGNSDDLSTRING)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    PWDFDEVICE_INIT DeviceInit,
    _In_opt_
    PCUNICODE_STRING SDDLString
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
WdfDeviceInitAssignSDDLString(
    _In_
    PWDFDEVICE_INIT DeviceInit,
    _In_opt_
    PCUNICODE_STRING SDDLString
    )
{
    return ((PFN_WDFDEVICEINITASSIGNSDDLSTRING) WdfFunctions[WdfDeviceInitAssignSDDLStringTableIndex])(WdfDriverGlobals, DeviceInit, SDDLString);
}

//
// WDF Function: WdfDeviceInitSetDeviceClass
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_WDFDEVICEINITSETDEVICECLASS)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    PWDFDEVICE_INIT DeviceInit,
    _In_
    CONST GUID* DeviceClassGuid
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
WdfDeviceInitSetDeviceClass(
    _In_
    PWDFDEVICE_INIT DeviceInit,
    _In_
    CONST GUID* DeviceClassGuid
    )
{
    ((PFN_WDFDEVICEINITSETDEVICECLASS) WdfFunctions[WdfDeviceInitSetDeviceClassTableIndex])(WdfDriverGlobals, DeviceInit, DeviceClassGuid);
}

//
// WDF Function: WdfDeviceInitSetCharacteristics
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_WDFDEVICEINITSETCHARACTERISTICS)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    PWDFDEVICE_INIT DeviceInit,
    _In_
    ULONG DeviceCharacteristics,
    _In_
    BOOLEAN OrInValues
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
WdfDeviceInitSetCharacteristics(
    _In_
    PWDFDEVICE_INIT DeviceInit,
    _In_
    ULONG DeviceCharacteristics,
    _In_
    BOOLEAN OrInValues
    )
{
    ((PFN_WDFDEVICEINITSETCHARACTERISTICS) WdfFunctions[WdfDeviceInitSetCharacteristicsTableIndex])(WdfDriverGlobals, DeviceInit, DeviceCharacteristics, OrInValues);
}

//
// WDF Function: WdfDeviceInitSetFileObjectConfig
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_WDFDEVICEINITSETFILEOBJECTCONFIG)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    PWDFDEVICE_INIT DeviceInit,
    _In_
    PWDF_FILEOBJECT_CONFIG FileObjectConfig,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES FileObjectAttributes
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
WdfDeviceInitSetFileObjectConfig(
    _In_
    PWDFDEVICE_INIT DeviceInit,
    _In_
    PWDF_FILEOBJECT_CONFIG FileObjectConfig,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES FileObjectAttributes
    )
{
    ((PFN_WDFDEVICEINITSETFILEOBJECTCONFIG) WdfFunctions[WdfDeviceInitSetFileObjectConfigTableIndex])(WdfDriverGlobals, DeviceInit, FileObjectConfig, FileObjectAttributes);
}

//
// WDF Function: WdfDeviceInitSetRequestAttributes
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_WDFDEVICEINITSETREQUESTATTRIBUTES)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    PWDFDEVICE_INIT DeviceInit,
    _In_
    PWDF_OBJECT_ATTRIBUTES RequestAttributes
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
WdfDeviceInitSetRequestAttributes(
    _In_
    PWDFDEVICE_INIT DeviceInit,
    _In_
    PWDF_OBJECT_ATTRIBUTES RequestAttributes
    )
{
    ((PFN_WDFDEVICEINITSETREQUESTATTRIBUTES) WdfFunctions[WdfDeviceInitSetRequestAttributesTableIndex])(WdfDriverGlobals, DeviceInit, RequestAttributes);
}

//
// WDF Function: WdfDeviceInitAssignWdmIrpPreprocessCallback
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFDEVICEINITASSIGNWDMIRPPREPROCESSCALLBACK)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    PWDFDEVICE_INIT DeviceInit,
    _In_
    PFN_WDFDEVICE_WDM_IRP_PREPROCESS EvtDeviceWdmIrpPreprocess,
    _In_
    UCHAR MajorFunction,
    _When_(NumMinorFunctions > 0, _In_reads_bytes_(NumMinorFunctions))
    _When_(NumMinorFunctions == 0, _In_opt_)
    PUCHAR MinorFunctions,
    _In_
    ULONG NumMinorFunctions
    );

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FORCEINLINE
WdfDeviceInitAssignWdmIrpPreprocessCallback(
    _In_
    PWDFDEVICE_INIT DeviceInit,
    _In_
    PFN_WDFDEVICE_WDM_IRP_PREPROCESS EvtDeviceWdmIrpPreprocess,
    _In_
    UCHAR MajorFunction,
    _When_(NumMinorFunctions > 0, _In_reads_bytes_(NumMinorFunctions))
    _When_(NumMinorFunctions == 0, _In_opt_)
    PUCHAR MinorFunctions,
    _In_
    ULONG NumMinorFunctions
    )
{
    return ((PFN_WDFDEVICEINITASSIGNWDMIRPPREPROCESSCALLBACK) WdfFunctions[WdfDeviceInitAssignWdmIrpPreprocessCallbackTableIndex])(WdfDriverGlobals, DeviceInit, EvtDeviceWdmIrpPreprocess, MajorFunction, MinorFunctions, NumMinorFunctions);
}

//
// WDF Function: WdfDeviceInitSetIoInCallerContextCallback
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_WDFDEVICEINITSETIOINCALLERCONTEXTCALLBACK)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    PWDFDEVICE_INIT DeviceInit,
    _In_
    PFN_WDF_IO_IN_CALLER_CONTEXT EvtIoInCallerContext
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
WdfDeviceInitSetIoInCallerContextCallback(
    _In_
    PWDFDEVICE_INIT DeviceInit,
    _In_
    PFN_WDF_IO_IN_CALLER_CONTEXT EvtIoInCallerContext
    )
{
    ((PFN_WDFDEVICEINITSETIOINCALLERCONTEXTCALLBACK) WdfFunctions[WdfDeviceInitSetIoInCallerContextCallbackTableIndex])(WdfDriverGlobals, DeviceInit, EvtIoInCallerContext);
}

//
// WDF Function: WdfDeviceCreate
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFDEVICECREATE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _Inout_
    PWDFDEVICE_INIT* DeviceInit,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES DeviceAttributes,
    _Out_
    WDFDEVICE* Device
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
WdfDeviceCreate(
    _Inout_
    PWDFDEVICE_INIT* DeviceInit,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES DeviceAttributes,
    _Out_
    WDFDEVICE* Device
    )
{
    return ((PFN_WDFDEVICECREATE) WdfFunctions[WdfDeviceCreateTableIndex])(WdfDriverGlobals, DeviceInit, DeviceAttributes, Device);
}

//
// WDF Function: WdfDeviceSetStaticStopRemove
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_WDFDEVICESETSTATICSTOPREMOVE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    BOOLEAN Stoppable
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
WdfDeviceSetStaticStopRemove(
    _In_
    WDFDEVICE Device,
    _In_
    BOOLEAN Stoppable
    )
{
    ((PFN_WDFDEVICESETSTATICSTOPREMOVE) WdfFunctions[WdfDeviceSetStaticStopRemoveTableIndex])(WdfDriverGlobals, Device, Stoppable);
}

//
// WDF Function: WdfDeviceCreateDeviceInterface
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFDEVICECREATEDEVICEINTERFACE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    CONST GUID* InterfaceClassGUID,
    _In_opt_
    PCUNICODE_STRING ReferenceString
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
WdfDeviceCreateDeviceInterface(
    _In_
    WDFDEVICE Device,
    _In_
    CONST GUID* InterfaceClassGUID,
    _In_opt_
    PCUNICODE_STRING ReferenceString
    )
{
    return ((PFN_WDFDEVICECREATEDEVICEINTERFACE) WdfFunctions[WdfDeviceCreateDeviceInterfaceTableIndex])(WdfDriverGlobals, Device, InterfaceClassGUID, ReferenceString);
}

//
// WDF Function: WdfDeviceSetDeviceInterfaceState
//
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
VOID
(*PFN_WDFDEVICESETDEVICEINTERFACESTATE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    CONST GUID* InterfaceClassGUID,
    _In_opt_
    PCUNICODE_STRING ReferenceString,
    _In_
    BOOLEAN IsInterfaceEnabled
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
FORCEINLINE
WdfDeviceSetDeviceInterfaceState(
    _In_
    WDFDEVICE Device,
    _In_
    CONST GUID* InterfaceClassGUID,
    _In_opt_
    PCUNICODE_STRING ReferenceString,
    _In_
    BOOLEAN IsInterfaceEnabled
    )
{
    ((PFN_WDFDEVICESETDEVICEINTERFACESTATE) WdfFunctions[WdfDeviceSetDeviceInterfaceStateTableIndex])(WdfDriverGlobals, Device, InterfaceClassGUID, ReferenceString, IsInterfaceEnabled);
}

//
// WDF Function: WdfDeviceRetrieveDeviceInterfaceString
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFDEVICERETRIEVEDEVICEINTERFACESTRING)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    CONST GUID* InterfaceClassGUID,
    _In_opt_
    PCUNICODE_STRING ReferenceString,
    _In_
    WDFSTRING String
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
WdfDeviceRetrieveDeviceInterfaceString(
    _In_
    WDFDEVICE Device,
    _In_
    CONST GUID* InterfaceClassGUID,
    _In_opt_
    PCUNICODE_STRING ReferenceString,
    _In_
    WDFSTRING String
    )
{
    return ((PFN_WDFDEVICERETRIEVEDEVICEINTERFACESTRING) WdfFunctions[WdfDeviceRetrieveDeviceInterfaceStringTableIndex])(WdfDriverGlobals, Device, InterfaceClassGUID, ReferenceString, String);
}

//
// WDF Function: WdfDeviceCreateSymbolicLink
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFDEVICECREATESYMBOLICLINK)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    PCUNICODE_STRING SymbolicLinkName
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
WdfDeviceCreateSymbolicLink(
    _In_
    WDFDEVICE Device,
    _In_
    PCUNICODE_STRING SymbolicLinkName
    )
{
    return ((PFN_WDFDEVICECREATESYMBOLICLINK) WdfFunctions[WdfDeviceCreateSymbolicLinkTableIndex])(WdfDriverGlobals, Device, SymbolicLinkName);
}

//
// WDF Function: WdfDeviceQueryProperty
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFDEVICEQUERYPROPERTY)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    DEVICE_REGISTRY_PROPERTY DeviceProperty,
    _In_
    ULONG BufferLength,
    _Out_writes_bytes_all_(BufferLength)
    PVOID PropertyBuffer,
    _Out_
    PULONG ResultLength
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
WdfDeviceQueryProperty(
    _In_
    WDFDEVICE Device,
    _In_
    DEVICE_REGISTRY_PROPERTY DeviceProperty,
    _In_
    ULONG BufferLength,
    _Out_writes_bytes_all_(BufferLength)
    PVOID PropertyBuffer,
    _Out_
    PULONG ResultLength
    )
{
    return ((PFN_WDFDEVICEQUERYPROPERTY) WdfFunctions[WdfDeviceQueryPropertyTableIndex])(WdfDriverGlobals, Device, DeviceProperty, BufferLength, PropertyBuffer, ResultLength);
}

//
// WDF Function: WdfDeviceAllocAndQueryProperty
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFDEVICEALLOCANDQUERYPROPERTY)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    DEVICE_REGISTRY_PROPERTY DeviceProperty,
    _In_
    _Strict_type_match_
    POOL_TYPE PoolType,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES PropertyMemoryAttributes,
    _Out_
    WDFMEMORY* PropertyMemory
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
WdfDeviceAllocAndQueryProperty(
    _In_
    WDFDEVICE Device,
    _In_
    DEVICE_REGISTRY_PROPERTY DeviceProperty,
    _In_
    _Strict_type_match_
    POOL_TYPE PoolType,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES PropertyMemoryAttributes,
    _Out_
    WDFMEMORY* PropertyMemory
    )
{
    return ((PFN_WDFDEVICEALLOCANDQUERYPROPERTY) WdfFunctions[WdfDeviceAllocAndQueryPropertyTableIndex])(WdfDriverGlobals, Device, DeviceProperty, PoolType, PropertyMemoryAttributes, PropertyMemory);
}

//
// WDF Function: WdfDeviceSetPnpCapabilities
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_WDFDEVICESETPNPCAPABILITIES)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    PWDF_DEVICE_PNP_CAPABILITIES PnpCapabilities
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
WdfDeviceSetPnpCapabilities(
    _In_
    WDFDEVICE Device,
    _In_
    PWDF_DEVICE_PNP_CAPABILITIES PnpCapabilities
    )
{
    ((PFN_WDFDEVICESETPNPCAPABILITIES) WdfFunctions[WdfDeviceSetPnpCapabilitiesTableIndex])(WdfDriverGlobals, Device, PnpCapabilities);
}

//
// WDF Function: WdfDeviceSetPowerCapabilities
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_WDFDEVICESETPOWERCAPABILITIES)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    PWDF_DEVICE_POWER_CAPABILITIES PowerCapabilities
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
WdfDeviceSetPowerCapabilities(
    _In_
    WDFDEVICE Device,
    _In_
    PWDF_DEVICE_POWER_CAPABILITIES PowerCapabilities
    )
{
    ((PFN_WDFDEVICESETPOWERCAPABILITIES) WdfFunctions[WdfDeviceSetPowerCapabilitiesTableIndex])(WdfDriverGlobals, Device, PowerCapabilities);
}

//
// WDF Function: WdfDeviceSetBusInformationForChildren
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_WDFDEVICESETBUSINFORMATIONFORCHILDREN)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    PPNP_BUS_INFORMATION BusInformation
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
WdfDeviceSetBusInformationForChildren(
    _In_
    WDFDEVICE Device,
    _In_
    PPNP_BUS_INFORMATION BusInformation
    )
{
    ((PFN_WDFDEVICESETBUSINFORMATIONFORCHILDREN) WdfFunctions[WdfDeviceSetBusInformationForChildrenTableIndex])(WdfDriverGlobals, Device, BusInformation);
}

//
// WDF Function: WdfDeviceIndicateWakeStatus
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFDEVICEINDICATEWAKESTATUS)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    NTSTATUS WaitWakeStatus
    );

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FORCEINLINE
WdfDeviceIndicateWakeStatus(
    _In_
    WDFDEVICE Device,
    _In_
    NTSTATUS WaitWakeStatus
    )
{
    return ((PFN_WDFDEVICEINDICATEWAKESTATUS) WdfFunctions[WdfDeviceIndicateWakeStatusTableIndex])(WdfDriverGlobals, Device, WaitWakeStatus);
}

//
// WDF Function: WdfDeviceSetFailed
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_WDFDEVICESETFAILED)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    WDF_DEVICE_FAILED_ACTION FailedAction
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
WdfDeviceSetFailed(
    _In_
    WDFDEVICE Device,
    _In_
    WDF_DEVICE_FAILED_ACTION FailedAction
    )
{
    ((PFN_WDFDEVICESETFAILED) WdfFunctions[WdfDeviceSetFailedTableIndex])(WdfDriverGlobals, Device, FailedAction);
}

//
// WDF Function: WdfDeviceStopIdle
//
typedef
_Must_inspect_result_
_When_(WaitForD0 == 0, _IRQL_requires_max_(DISPATCH_LEVEL))
_When_(WaitForD0 != 0, _IRQL_requires_max_(PASSIVE_LEVEL))
WDFAPI
NTSTATUS
(*PFN_WDFDEVICESTOPIDLE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    BOOLEAN WaitForD0
    );

_Must_inspect_result_
_When_(WaitForD0 == 0, _IRQL_requires_max_(DISPATCH_LEVEL))
_When_(WaitForD0 != 0, _IRQL_requires_max_(PASSIVE_LEVEL))
NTSTATUS
FORCEINLINE
WdfDeviceStopIdle(
    _In_
    WDFDEVICE Device,
    _In_
    BOOLEAN WaitForD0
    )
{
    return ((PFN_WDFDEVICESTOPIDLE) WdfFunctions[WdfDeviceStopIdleTableIndex])(WdfDriverGlobals, Device, WaitForD0);
}

//
// WDF Function: WdfDeviceResumeIdle
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
VOID
(*PFN_WDFDEVICERESUMEIDLE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
WdfDeviceResumeIdle(
    _In_
    WDFDEVICE Device
    )
{
    ((PFN_WDFDEVICERESUMEIDLE) WdfFunctions[WdfDeviceResumeIdleTableIndex])(WdfDriverGlobals, Device);
}

//
// WDF Function: WdfDeviceGetFileObject
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
WDFFILEOBJECT
(*PFN_WDFDEVICEGETFILEOBJECT)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    PFILE_OBJECT FileObject
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
WDFFILEOBJECT
FORCEINLINE
WdfDeviceGetFileObject(
    _In_
    WDFDEVICE Device,
    _In_
    PFILE_OBJECT FileObject
    )
{
    return ((PFN_WDFDEVICEGETFILEOBJECT) WdfFunctions[WdfDeviceGetFileObjectTableIndex])(WdfDriverGlobals, Device, FileObject);
}

//
// WDF Function: WdfDeviceEnqueueRequest
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFDEVICEENQUEUEREQUEST)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    WDFREQUEST Request
    );

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FORCEINLINE
WdfDeviceEnqueueRequest(
    _In_
    WDFDEVICE Device,
    _In_
    WDFREQUEST Request
    )
{
    return ((PFN_WDFDEVICEENQUEUEREQUEST) WdfFunctions[WdfDeviceEnqueueRequestTableIndex])(WdfDriverGlobals, Device, Request);
}

//
// WDF Function: WdfDeviceGetDefaultQueue
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
WDFQUEUE
(*PFN_WDFDEVICEGETDEFAULTQUEUE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
WDFQUEUE
FORCEINLINE
WdfDeviceGetDefaultQueue(
    _In_
    WDFDEVICE Device
    )
{
    return ((PFN_WDFDEVICEGETDEFAULTQUEUE) WdfFunctions[WdfDeviceGetDefaultQueueTableIndex])(WdfDriverGlobals, Device);
}

//
// WDF Function: WdfDeviceConfigureRequestDispatching
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFDEVICECONFIGUREREQUESTDISPATCHING)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_
    WDFQUEUE Queue,
    _In_
    _Strict_type_match_
    WDF_REQUEST_TYPE RequestType
    );

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FORCEINLINE
WdfDeviceConfigureRequestDispatching(
    _In_
    WDFDEVICE Device,
    _In_
    WDFQUEUE Queue,
    _In_
    _Strict_type_match_
    WDF_REQUEST_TYPE RequestType
    )
{
    return ((PFN_WDFDEVICECONFIGUREREQUESTDISPATCHING) WdfFunctions[WdfDeviceConfigureRequestDispatchingTableIndex])(WdfDriverGlobals, Device, Queue, RequestType);
}

//
// WDF Function: WdfDeviceGetSystemPowerAction
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
POWER_ACTION
(*PFN_WDFDEVICEGETSYSTEMPOWERACTION)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
POWER_ACTION
FORCEINLINE
WdfDeviceGetSystemPowerAction(
    _In_
    WDFDEVICE Device
    )
{
    return ((PFN_WDFDEVICEGETSYSTEMPOWERACTION) WdfFunctions[WdfDeviceGetSystemPowerActionTableIndex])(WdfDriverGlobals, Device);
}



#endif // (NTDDI_VERSION >= NTDDI_WIN2K)


#endif // _WDFDEVICE_1_9_H_

