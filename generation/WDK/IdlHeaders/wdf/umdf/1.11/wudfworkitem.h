/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

    wudfworkitem.h

Abstract:

    This is the C header for driver framework workitem object

Revision History:


--*/

#ifndef _WUDFWORKITEM_H_
#define _WUDFWORKITEM_H_

//
// This is the function that gets called back into the driver
// when the WorkItem fires.
//

typedef
VOID
WUDF_WORKITEM_FUNCTION(
    _In_
    IWDFWorkItem* pWorkItem
    );

typedef WUDF_WORKITEM_FUNCTION *PFN_WUDF_WORKITEM;

typedef struct _WUDF_WORKITEM_CONFIG {

    ULONG Size;

    PFN_WUDF_WORKITEM OnWorkItemFunc;

    //
    // If this is TRUE, the workitem will automatically serialize
    // with the event callback handlers of its Parent Object.
    //
    BOOLEAN AutomaticSerialization;

} WUDF_WORKITEM_CONFIG, *PWUDF_WORKITEM_CONFIG;

VOID
FORCEINLINE
WUDF_WORKITEM_CONFIG_INIT(
    _Out_ PWUDF_WORKITEM_CONFIG pConfig,
    _In_ PFN_WUDF_WORKITEM     OnWorkItemFunc
    )
{
    RtlZeroMemory(pConfig, sizeof(WUDF_WORKITEM_CONFIG));
    pConfig->Size = sizeof(WUDF_WORKITEM_CONFIG);
    pConfig->OnWorkItemFunc = OnWorkItemFunc;

    pConfig->AutomaticSerialization = TRUE;
}


#endif // _WUDFWORKITEM_H_
