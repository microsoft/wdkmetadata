using System;
using Windows.Wdk.Foundation;
using Windows.Win32.Interop;

namespace Windows.Wdk.System.SystemServices;

public unsafe partial struct IO_DRIVER_CREATE_CONTEXT
{
    [NativeTypeName("CSHORT")]        public short Size;
    [NativeTypeName("struct _ECP_LIST *")]        public ECP_LIST* ExtraCreateParameter;
    [NativeTypeName("PVOID")]        public void* DeviceObjectHint;
    [NativeTypeName("PTXN_PARAMETER_BLOCK")]        public TXN_PARAMETER_BLOCK* TxnParameters;
    [NativeTypeName("PESILO")]        public EJOB* SiloContext;
}