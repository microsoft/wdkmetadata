/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

    wudfdevice.h

Abstract:

    This is the C header for driver framework Device object

Revision History:


--*/

#ifndef _WUDFDEVICE_H_
#define _WUDFDEVICE_H_

VOID
FORCEINLINE
WUDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_INIT(
    _Out_ PWUDF_DEVICE_POWER_POLICY_IDLE_SETTINGS Settings,
    _In_ WDF_POWER_POLICY_S0_IDLE_CAPABILITIES IdleCaps
    )
{
    RtlZeroMemory(Settings, sizeof(WUDF_DEVICE_POWER_POLICY_IDLE_SETTINGS));

    Settings->Size = sizeof(WUDF_DEVICE_POWER_POLICY_IDLE_SETTINGS);

    Settings->IdleTimeout = IdleTimeoutDefaultValue;
    Settings->UserControlOfIdleSettings = IdleAllowUserControl;
    Settings->Enabled = WdfUseDefault;
    Settings->PowerUpIdleDeviceOnSystemWake = WdfUseDefault;
    Settings->ExcludeD3Cold = WdfUseDefault;

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

#endif // _WUDFDEVICE_H_
