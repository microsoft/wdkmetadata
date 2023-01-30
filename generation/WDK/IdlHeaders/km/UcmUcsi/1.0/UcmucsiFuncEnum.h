/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

_WdfVersionBuild_

Module Name: UcmucsiFuncEnum.h

Abstract:
    Generated an enum of all WDF API functions

Environment:
    kernel mode only

    Warning: manual changes to this file will be lost.
--*/

#ifndef _UCMUCSIFUNCENUM_H_
#define _UCMUCSIFUNCENUM_H_

extern PUCMUCSI_DRIVER_GLOBALS UcmucsiDriverGlobals;

typedef enum _UCMUCSIFUNCENUM {

    UcmUcsiDeviceInitInitializeTableIndex = 0,
    UcmUcsiDeviceInitializeTableIndex = 1,
    UcmUcsiConnectorCollectionCreateTableIndex = 2,
    UcmUcsiConnectorCollectionAddConnectorTableIndex = 3,
    UcmUcsiPpmCreateTableIndex = 4,
    UcmUcsiPpmSetUcsiCommandRequestQueueTableIndex = 5,
    UcmUcsiPpmStartTableIndex = 6,
    UcmUcsiPpmStopTableIndex = 7,
    UcmUcsiPpmNotificationTableIndex = 8,
    UcmucsiFunctionTableNumEntries = 9,
} UCMUCSIFUNCENUM;

#endif // _UCMUCSIFUNCENUM_H_

