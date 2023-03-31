/*++

Copyright (c) 2020 Microsoft Corporation

Module Name:

    prminterface.h

Abstract:

    This file contains the interfaces required for PRM support.

Author:

    Yinghan Yang (yinghany) 18-Feb-2020

Environment:

    Kernel Mode

Revision History:

--*/


#pragma once

#pragma warning( push )
#pragma warning( disable : 4115 ) /* nonstandard extension used : named type definition in parens */
#pragma warning( disable : 4201 ) /* nonstandard extension used : nameless struct/union */
#pragma warning( disable : 4214 ) /* nonstandard extension used : bit field types other then int */

typedef
_Function_class_(PRM_HANDLER_ROUTINE)
NTSTATUS
PRM_HANDLER_ROUTINE (
    _In_ PVOID ParameterBuffer,
    _In_ PVOID ContextBuffer
    );

typedef PRM_HANDLER_ROUTINE *PPRM_HANDLER_ROUTINE;

typedef
_Function_class_(PRM_INVOKE_HANDLER)
_IRQL_requires_max_(HIGH_LEVEL)
NTSTATUS
PRM_INVOKE_HANDLER (
    _In_ LPGUID HandlerGuid,
    _In_ PVOID ParameterBuffer,
    _In_ ULONG Reserved,
    _Out_ PULONG64 EfiStatus
    );

typedef PRM_INVOKE_HANDLER *PPRM_INVOKE_HANDLER;

typedef
_Function_class_(PRM_QUERY_HANDLER)
_IRQL_requires_max_(HIGH_LEVEL)
NTSTATUS
PRM_QUERY_HANDLER (
    _In_ LPGUID HandlerGuid,
    _Out_ PBOOLEAN Found
    );

typedef PRM_QUERY_HANDLER *PPRM_QUERY_HANDLER;

typedef
_Function_class_(PRM_LOCK_MODULE)
_IRQL_requires_max_(HIGH_LEVEL)
NTSTATUS
PRM_LOCK_MODULE (
    _In_ LPGUID HandlerGuid
    );

typedef PRM_LOCK_MODULE *PPRM_LOCK_MODULE;

typedef
_Function_class_(PRM_UNLOCK_MODULE)
_IRQL_requires_max_(HIGH_LEVEL)
NTSTATUS
PRM_UNLOCK_MODULE (
    _In_ LPGUID HandlerGuid
    );

typedef PRM_UNLOCK_MODULE *PPRM_UNLOCK_MODULE;

typedef struct _PRM_DRIVER_INTERFACE_STANDARD {

    //
    // Generic interface header
    //

     USHORT Size;
     USHORT Version;
     PVOID Context;
     PINTERFACE_REFERENCE    InterfaceReference;
     PINTERFACE_DEREFERENCE  InterfaceDereference;
     PPRM_INVOKE_HANDLER InvokeHandler;
     PPRM_QUERY_HANDLER QueryHandler;
     PPRM_LOCK_MODULE LockModule;
     PPRM_UNLOCK_MODULE UnlockModule;

} PRM_DRIVER_INTERFACE_STANDARD, *PPRM_DRIVER_INTERFACE_STANDARD;


// {d37ca3d8-07cd-450d-8893-1d292112405e}
DEFINE_GUID(
    GUID_PRM_DEVICE,
    0xd37ca3d8, 0x07cd, 0x450d, 0x88, 0x93, 0x1d, 0x29, 0x21, 0x12, 0x40, 0x5e);

#define PRM_INTERFACE_STANDARD_VERSION 0x1

// {0d8ac963-4e72-4889-80c1-abc86d909af0}
DEFINE_GUID(
    GUID_PRM_DRIVER_INTERFACE_STANDARD,
    0x0d8ac963, 0x4e72, 0x4889, 0x80, 0xc1, 0xab, 0xc8, 0x6d, 0x90, 0x9a, 0xf0);


#pragma warning( pop )
