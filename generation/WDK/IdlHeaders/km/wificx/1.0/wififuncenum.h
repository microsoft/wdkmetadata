/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

_WdfVersionBuild_

Module Name: WifiFuncEnum.h

Abstract:
    Generated an enum of all WDF API functions

Environment:
    kernel mode only

    Warning: manual changes to this file will be lost.
--*/

#ifndef _WIFIFUNCENUM_H_
#define _WIFIFUNCENUM_H_

extern PWIFI_DRIVER_GLOBALS WifiDriverGlobals;

typedef enum _WIFIFUNCENUM {

    WifiDeviceInitConfigTableIndex = 0,
    WifiDeviceGetOsWdiVersionTableIndex = 1,
    WifiDeviceSetDeviceCapabilitiesTableIndex = 2,
    WifiDeviceSetStationCapabilitiesTableIndex = 3,
    WifiDeviceSetWiFiDirectCapabilitiesTableIndex = 4,
    WifiDeviceSetBandCapabilitiesTableIndex = 5,
    WifiDeviceSetPhyCapabilitiesTableIndex = 6,
    WifiDeviceInitializeTableIndex = 7,
    WifiDeviceReceiveIndicationTableIndex = 8,
    WifiAdapterInitializeTableIndex = 9,
    WifiRequestGetInOutBufferTableIndex = 10,
    WifiRequestGetMessageIdTableIndex = 11,
    WifiRequestSetBytesNeededTableIndex = 12,
    WifiRequestCompleteTableIndex = 13,
    WifiAdapterPowerOffloadSetRsnRekeyCapabilitiesTableIndex = 14,
    WifiAdapterSetWakeCapabilitiesTableIndex = 15,
    WifiAdapterReportWakeReasonTableIndex = 16,
    WifiDirectDeviceCreateTableIndex = 17,
    WifiDirectDeviceInitializeTableIndex = 18,
    WifiAdapterGetPortIdTableIndex = 19,
    WifiAdapterInitGetTypeTableIndex = 20,
    WifiAdapterGetTypeTableIndex = 21,
    WifiDirectDeviceGetPortIdTableIndex = 22,
    WifiAdapterInitAddTxDemuxTableIndex = 23,
    WifiTxQueueGetDemuxPeerAddressTableIndex = 24,
    WifiTxQueueGetDemuxWmmInfoTableIndex = 25,
    WifiAdapterAddPeerTableIndex = 26,
    WifiAdapterRemovePeerTableIndex = 27,
    WifiPowerOffloadGetTypeTableIndex = 28,
    WifiPowerOffloadGetAdapterTableIndex = 29,
    WifiPowerOffloadGet80211RSNRekeyParametersTableIndex = 30,
    WifiDeviceGetPowerOffloadListTableIndex = 31,
    WifiPowerOffloadListGetCountTableIndex = 32,
    WifiPowerOffloadListGetElementTableIndex = 33,
    WifiWakeSourceGetTypeTableIndex = 34,
    WifiWakeSourceGetAdapterTableIndex = 35,
    WifiDeviceGetWakeSourceListTableIndex = 36,
    WifiWakeSourceListGetCountTableIndex = 37,
    WifiWakeSourceListGetElementTableIndex = 38,
    WifiFunctionTableNumEntries = 39,
} WIFIFUNCENUM;

#endif // _WIFIFUNCENUM_H_

