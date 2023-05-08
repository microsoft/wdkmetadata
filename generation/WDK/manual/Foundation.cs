using System;
using System.Runtime.InteropServices;

using Windows.Win32.Foundation;
using Windows.Win32.Foundation.Metadata;

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
    public void* SecurityDescriptor;

    [NativeTypeName("PVOID")]
    [Const]
    public void* SecurityQualityOfService;
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
    public uint SecurityDescriptor;

    [NativeTypeName("ULONG")]
    [Const]
    public uint SecurityQualityOfService;
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
    public ulong SecurityDescriptor;

    [NativeTypeName("ULONG64")]
    [Const]
    public ulong SecurityQualityOfService;
}