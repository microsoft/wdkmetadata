#include <ntdef.h>

#ifdef __cplusplus
extern "C" {
#endif

ULONG RtlIsDosDeviceName_U(
    _In_ PCWSTR DosFileName
);

NTSTATUS RtlDosPathNameToNtPathName_U_WithStatus(
    _In_ PCWSTR DosFileName,
    _Out_ PUNICODE_STRING NtFileName,
    _Deref_opt_out_opt_ PWSTR *FilePart,
    _Reserved_ PVOID Reserved
);

#ifdef __cplusplus
}
#endif
