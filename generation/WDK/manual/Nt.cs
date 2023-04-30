using System;
using System.Runtime.InteropServices;

using Windows.Win32.Foundation;
using Windows.Win32.Foundation.Metadata;
using Windows.Win32.System.IO;

// Manually define Nt APIs from winternl.h in the SDK since that file is not included here.

namespace Windows.Wdk.Storage.FileSystem
{
    public static unsafe partial class Apis
    {
        [DllImport("ntdll.dll", CallingConvention = CallingConvention.StdCall, ExactSpelling = true)]
        [return: NativeTypeName("NTSTATUS")]
        public static extern int NtCancelIoFileEx([NativeTypeName("HANDLE")] [CppAttributeList("Name=SAL_name; p1=\"_In_\"; p2=\"\"; p3=\"2\"^Name=SAL_begin^Name=SAL_pre^Name=SAL_notref^Name=SAL_null; p1=__no^Name=SAL_pre^Name=SAL_valid^Name=SAL_pre^Name=SAL_notref^Name=SAL_deref^Name=SAL_notref^Name=SAL_access; p1=0x1^Name=SAL_end")] IntPtr FileHandle, [NativeTypeName("PIO_STATUS_BLOCK")] [CppAttributeList("Name=SAL_name; p1=\"_In_opt_\"; p2=\"\"; p3=\"2\"^Name=SAL_begin^Name=SAL_pre^Name=SAL_notref^Name=SAL_null; p1=__maybe^Name=SAL_pre^Name=SAL_valid^Name=SAL_name; p1=\"_Deref_pre_readonly_\"; p2=\"\"; p3=\"1.1\"^Name=SAL_begin^Name=SAL_pre^Name=SAL_notref^Name=SAL_deref^Name=SAL_notref^Name=SAL_access; p1=0x1^Name=SAL_end^Name=SAL_end")] IO_STATUS_BLOCK* IoRequestToCancel, [NativeTypeName("PIO_STATUS_BLOCK")] [CppAttributeList("Name=SAL_name; p1=\"_Out_\"; p2=\"\"; p3=\"2\"^Name=SAL_begin^Name=SAL_pre^Name=SAL_notref^Name=SAL_null; p1=__no^Name=SAL_pre^Name=SAL_notref^Name=SAL_writableTo; p1=elementCount(1)^Name=SAL_post^Name=SAL_valid^Name=SAL_end")] IO_STATUS_BLOCK* IoStatusBlock);
    }
}

namespace Windows.Wdk.System.Registry
{
    public static unsafe partial class Apis
    {
        [DllImport("ntdll.dll", CallingConvention = CallingConvention.StdCall, ExactSpelling = true)]
        [return:NativeTypeName("NTSTATUS")]
        public static extern int NtNotifyChangeMultipleKeys([NativeTypeName("HANDLE")][In]IntPtr MasterKeyHandle, [NativeTypeName("ULONG")][In,Optional]uint Count, [NativeTypeName("OBJECT_ATTRIBUTES[]")][NativeArrayInfo(CountParamIndex = 1),In,Optional]OBJECT_ATTRIBUTES* SubordinateObjects, [NativeTypeName("HANDLE")][In,Optional]IntPtr Event, [NativeTypeName("PIO_APC_ROUTINE")][In,Optional]IntPtr ApcRoutine, [NativeTypeName("PVOID")][In,Optional]void* ApcContext, [NativeTypeName("PIO_STATUS_BLOCK")][Out]IO_STATUS_BLOCK* IoStatusBlock, [NativeTypeName("ULONG")][In]uint CompletionFilter, [NativeTypeName("BOOLEAN")][In]byte WatchTree, [NativeTypeName("PVOID")][MemorySize(BytesParamIndex = 10),Out,Optional]void* Buffer, [NativeTypeName("ULONG")][In]uint BufferSize, [NativeTypeName("BOOLEAN")][In]byte Asynchronous);

        [DllImport("ntdll.dll", CallingConvention = CallingConvention.StdCall, ExactSpelling = true)]
        [return:NativeTypeName("NTSTATUS")]
        public static extern int NtQueryMultipleValueKey([NativeTypeName("HANDLE")][In]IntPtr KeyHandle, [NativeTypeName("PKEY_VALUE_ENTRY")][NativeArrayInfo(CountParamIndex = 2),In,Out]KEY_VALUE_ENTRY* ValueEntries, [NativeTypeName("ULONG")][In]uint EntryCount, [NativeTypeName("PVOID")][MemorySize(BytesParamIndex = 4),Out]void* ValueBuffer, [NativeTypeName("PULONG")][In,Out]uint* BufferLength, [NativeTypeName("PULONG")][Out,Optional]uint* RequiredBufferLength);

        [DllImport("ntdll.dll", CallingConvention = CallingConvention.StdCall, ExactSpelling = true)]
        [return:NativeTypeName("NTSTATUS")]
        public static extern int NtRenameKey([NativeTypeName("HANDLE")][In]IntPtr KeyHandle, [NativeTypeName("PUNICODE_STRING")][In]UNICODE_STRING* NewName);

        [DllImport("ntdll.dll", CallingConvention = CallingConvention.StdCall, ExactSpelling = true)]
        [return:NativeTypeName("NTSTATUS")]
        public static extern int NtSetInformationKey([NativeTypeName("HANDLE")][In]IntPtr KeyHandle, [In]KEY_SET_INFORMATION_CLASS KeySetInformationClass, [NativeTypeName("PVOID")][MemorySize(BytesParamIndex = 3),In]void* KeySetInformation, [NativeTypeName("ULONG")][In]uint KeySetInformationLength);
    }
}

namespace Windows.Wdk.System.SystemInformation
{
    public static unsafe partial class Apis
    {
        [DllImport("ntdll.dll", CallingConvention = CallingConvention.StdCall, ExactSpelling = true)]
        [return:NativeTypeName("NTSTATUS")]
        public static extern int NtQuerySystemInformation(SYSTEM_INFORMATION_CLASS SystemInformationClass, [NativeTypeName("PVOID")]void* SystemInformation, [NativeTypeName("ULONG")]uint SystemInformationLength, [NativeTypeName("PULONG")]uint* ReturnLength);

        [DllImport("ntdll.dll", CallingConvention = CallingConvention.StdCall, ExactSpelling = true)]
        [return:NativeTypeName("NTSTATUS")]
        public static extern int NtQuerySystemTime([NativeTypeName("PLARGE_INTEGER")]long* SystemTime);

        [DllImport("ntdll.dll", CallingConvention = CallingConvention.StdCall, ExactSpelling = true)]
        [return:NativeTypeName("NTSTATUS")]
        public static extern int NtQueryTimerResolution([NativeTypeName("PULONG")][Out]uint* MaximumTime, [NativeTypeName("PULONG")][Out]uint* MinimumTime, [NativeTypeName("PULONG")][Out]uint* CurrentTime);
    }

    public enum SYSTEM_INFORMATION_CLASS : int
    {
        SystemBasicInformation = 0,
        SystemPerformanceInformation = 2,
        SystemTimeOfDayInformation = 3,
        SystemProcessInformation = 5,
        SystemProcessorPerformanceInformation = 8,
        SystemInterruptInformation = 23,
        SystemExceptionInformation = 33,
        SystemRegistryQuotaInformation = 37,
        SystemLookasideInformation = 45,
        SystemCodeIntegrityInformation = 103,
        SystemPolicyInformation = 134
    }
}

namespace Windows.Wdk.System.Threading
{
    public static unsafe partial class Apis
    {
        [DllImport("ntdll.dll", CallingConvention = CallingConvention.StdCall, ExactSpelling = true)]
        [return:NativeTypeName("NTSTATUS")]
        public static extern int NtQueryInformationProcess([NativeTypeName("HANDLE")]IntPtr ProcessHandle, PROCESSINFOCLASS ProcessInformationClass, [NativeTypeName("PVOID")]void* ProcessInformation, [NativeTypeName("ULONG")]uint ProcessInformationLength, [NativeTypeName("PULONG")]uint* ReturnLength);

        [DllImport("ntdll.dll", CallingConvention = CallingConvention.StdCall, ExactSpelling = true)]
        [return:NativeTypeName("NTSTATUS")]
        public static extern int NtQueryInformationThread([NativeTypeName("HANDLE")]IntPtr ThreadHandle, THREADINFOCLASS ThreadInformationClass, [NativeTypeName("PVOID")]void* ThreadInformation, [NativeTypeName("ULONG")]uint ThreadInformationLength, [NativeTypeName("PULONG")]uint* ReturnLength);

        [DllImport("ntdll.dll", CallingConvention = CallingConvention.StdCall, ExactSpelling = true)]
        [return:NativeTypeName("NTSTATUS")]
        public static extern int NtSetInformationThread([NativeTypeName("HANDLE")][In]IntPtr ThreadHandle, [In]THREADINFOCLASS ThreadInformationClass, [NativeTypeName("PVOID")][MemorySize(BytesParamIndex = 3),In]void* ThreadInformation, [NativeTypeName("ULONG")][In]uint ThreadInformationLength);
        
        [DllImport("ntdll.dll", CallingConvention = CallingConvention.StdCall, ExactSpelling = true)]
        [return:NativeTypeName("NTSTATUS")]
        public static extern int NtWaitForSingleObject([NativeTypeName("HANDLE")]IntPtr Handle, [NativeTypeName("BOOLEAN")]byte Alertable, [NativeTypeName("PLARGE_INTEGER")]long* Timeout);
    }
}