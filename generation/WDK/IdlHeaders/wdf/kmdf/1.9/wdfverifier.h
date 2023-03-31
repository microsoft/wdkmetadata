/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

_WdfVersionBuild_

Module Name:

    wdfverifier.h

Abstract:

    This module contains Driver Frameworks Verifier definitions

Environment:

    kernel mode only

Revision History:


--*/

#ifndef _WDFVERIFIER_1_9_H_
#define _WDFVERIFIER_1_9_H_



#if (NTDDI_VERSION >= NTDDI_WIN2K)



//
// WDF Function: WdfVerifierDbgBreakPoint
//
typedef
WDFAPI
VOID
(*PFN_WDFVERIFIERDBGBREAKPOINT)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals
    );

VOID
FORCEINLINE
WdfVerifierDbgBreakPoint(
    )
{
    ((PFN_WDFVERIFIERDBGBREAKPOINT) WdfFunctions[WdfVerifierDbgBreakPointTableIndex])(WdfDriverGlobals);
}

//
// WDF Function: WdfVerifierKeBugCheck
//
typedef
WDFAPI
VOID
(*PFN_WDFVERIFIERKEBUGCHECK)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    ULONG BugCheckCode,
    _In_
    ULONG_PTR BugCheckParameter1,
    _In_
    ULONG_PTR BugCheckParameter2,
    _In_
    ULONG_PTR BugCheckParameter3,
    _In_
    ULONG_PTR BugCheckParameter4
    );

VOID
FORCEINLINE
WdfVerifierKeBugCheck(
    _In_
    ULONG BugCheckCode,
    _In_
    ULONG_PTR BugCheckParameter1,
    _In_
    ULONG_PTR BugCheckParameter2,
    _In_
    ULONG_PTR BugCheckParameter3,
    _In_
    ULONG_PTR BugCheckParameter4
    )
{
    ((PFN_WDFVERIFIERKEBUGCHECK) WdfFunctions[WdfVerifierKeBugCheckTableIndex])(WdfDriverGlobals, BugCheckCode, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}



#endif // (NTDDI_VERSION >= NTDDI_WIN2K)


#endif // _WDFVERIFIER_1_9_H_
