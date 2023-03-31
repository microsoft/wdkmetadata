//
//    Copyright (C) Microsoft.  All rights reserved.
//
#if !defined (___WUDFDDI_BASICTYPES_H___)
#define ___WUDFDDI_BASICTYPES_H___

//
//

//
//  Definitions of basic data types.  These match the SAL annotated
//  C++ types for strings.
//

#ifdef __midl 
typedef WCHAR *PWSTR;
typedef const WCHAR *PCWSTR;
#else
typedef _Null_terminated_ WCHAR *PWSTR;
typedef _Null_terminated_ const WCHAR *PCWSTR;
#endif // __midl

typedef DWORD REGSAM;
typedef ULONG ACCESS_MASK, *PACCESS_MASK;

#endif // ___WUDFDDI_BASICTYPES_H___

