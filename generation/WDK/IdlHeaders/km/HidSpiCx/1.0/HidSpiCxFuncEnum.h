/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

_WdfVersionBuild_

Module Name: HidspicxFuncEnum.h

Abstract:
    Generated an enum of all WDF API functions

Environment:
    kernel mode only

    Warning: manual changes to this file will be lost.
--*/

#ifndef _HIDSPICXFUNCENUM_H_
#define _HIDSPICXFUNCENUM_H_

extern PHIDSPICX_DRIVER_GLOBALS HidspicxDriverGlobals;

typedef enum _HIDSPICXFUNCENUM {

    HidSpiCxDeviceInitConfigTableIndex = 0,
    HidSpiCxDeviceConfigureTableIndex = 1,
    HidSpiCxNotifyDeviceResetTableIndex = 2,
    HidspicxFunctionTableNumEntries = 3,
} HIDSPICXFUNCENUM;

#endif // _HIDSPICXFUNCENUM_H_

