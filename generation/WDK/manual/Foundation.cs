using System;
using System.Runtime.InteropServices;

using Windows.Win32.Foundation;
using Windows.Win32.Foundation.Metadata;
using Windows.Win32.Security;

namespace Windows.Wdk.Foundation;

public unsafe partial struct OBJECT_ATTRIBUTES
{
    [NativeTypeName("ULONG")]
    public uint Length;

    [NativeTypeName("HANDLE")]
    public IntPtr RootDirectory;

    [NativeTypeName("PUNICODE_STRING")]
    [Const]
    public UNICODE_STRING* ObjectName;

    [NativeTypeName("ULONG")]
    public uint Attributes;

    [NativeTypeName("PVOID")]
    [Const]
    public SECURITY_DESCRIPTOR SecurityDescriptor;

    [NativeTypeName("PVOID")]
    [Const]
    public SECURITY_QUALITY_OF_SERVICE SecurityQualityOfService;
}

public partial struct OBJECT_ATTRIBUTES32
{
    [NativeTypeName("ULONG")]
    public uint Length;

    [NativeTypeName("ULONG")]
    public uint RootDirectory;

    [NativeTypeName("ULONG")]
    public uint ObjectName;

    [NativeTypeName("ULONG")]
    public uint Attributes;

    [NativeTypeName("ULONG")]
    [Const]
    public SECURITY_DESCRIPTOR SecurityDescriptor;

    [NativeTypeName("ULONG")]
    [Const]
    public SECURITY_QUALITY_OF_SERVICE SecurityQualityOfService;
}

public partial struct OBJECT_ATTRIBUTES64
{
    [NativeTypeName("ULONG")]
    public uint Length;

    [NativeTypeName("ULONG64")]
    public ulong RootDirectory;

    [NativeTypeName("ULONG64")]
    public ulong ObjectName;

    [NativeTypeName("ULONG")]
    public uint Attributes;

    [NativeTypeName("ULONG64")]
    [Const]
    public SECURITY_DESCRIPTOR SecurityDescriptor;

    [NativeTypeName("ULONG64")]
    [Const]
    public SECURITY_QUALITY_OF_SERVICE SecurityQualityOfService;
}

public unsafe partial class Apis
{
    public const uint NTSTRSAFE_UNICODE_STRING_MAX_CCH = 32767;
}
