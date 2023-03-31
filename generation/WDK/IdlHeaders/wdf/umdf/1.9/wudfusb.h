

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */

/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __wudfusb_h__
#define __wudfusb_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IWDFUsbTargetFactory_FWD_DEFINED__
#define __IWDFUsbTargetFactory_FWD_DEFINED__
typedef interface IWDFUsbTargetFactory IWDFUsbTargetFactory;
#endif 	/* __IWDFUsbTargetFactory_FWD_DEFINED__ */


#ifndef __IWDFUsbTargetDevice_FWD_DEFINED__
#define __IWDFUsbTargetDevice_FWD_DEFINED__
typedef interface IWDFUsbTargetDevice IWDFUsbTargetDevice;
#endif 	/* __IWDFUsbTargetDevice_FWD_DEFINED__ */


#ifndef __IWDFUsbInterface_FWD_DEFINED__
#define __IWDFUsbInterface_FWD_DEFINED__
typedef interface IWDFUsbInterface IWDFUsbInterface;
#endif 	/* __IWDFUsbInterface_FWD_DEFINED__ */


#ifndef __IUsbTargetPipeContinuousReaderCallbackReadComplete_FWD_DEFINED__
#define __IUsbTargetPipeContinuousReaderCallbackReadComplete_FWD_DEFINED__
typedef interface IUsbTargetPipeContinuousReaderCallbackReadComplete IUsbTargetPipeContinuousReaderCallbackReadComplete;
#endif 	/* __IUsbTargetPipeContinuousReaderCallbackReadComplete_FWD_DEFINED__ */


#ifndef __IUsbTargetPipeContinuousReaderCallbackReadersFailed_FWD_DEFINED__
#define __IUsbTargetPipeContinuousReaderCallbackReadersFailed_FWD_DEFINED__
typedef interface IUsbTargetPipeContinuousReaderCallbackReadersFailed IUsbTargetPipeContinuousReaderCallbackReadersFailed;
#endif 	/* __IUsbTargetPipeContinuousReaderCallbackReadersFailed_FWD_DEFINED__ */


#ifndef __IWDFUsbTargetPipe_FWD_DEFINED__
#define __IWDFUsbTargetPipe_FWD_DEFINED__
typedef interface IWDFUsbTargetPipe IWDFUsbTargetPipe;
#endif 	/* __IWDFUsbTargetPipe_FWD_DEFINED__ */


#ifndef __IWDFUsbTargetPipe2_FWD_DEFINED__
#define __IWDFUsbTargetPipe2_FWD_DEFINED__
typedef interface IWDFUsbTargetPipe2 IWDFUsbTargetPipe2;
#endif 	/* __IWDFUsbTargetPipe2_FWD_DEFINED__ */


#ifndef __IWDFUsbRequestCompletionParams_FWD_DEFINED__
#define __IWDFUsbRequestCompletionParams_FWD_DEFINED__
typedef interface IWDFUsbRequestCompletionParams IWDFUsbRequestCompletionParams;
#endif 	/* __IWDFUsbRequestCompletionParams_FWD_DEFINED__ */


#ifndef __WUDFUSB_FWD_DEFINED__
#define __WUDFUSB_FWD_DEFINED__

#ifdef __cplusplus
typedef class WUDFUSB WUDFUSB;
#else
typedef struct WUDFUSB WUDFUSB;
#endif /* __cplusplus */

#endif 	/* __WUDFUSB_FWD_DEFINED__ */


/* header files for imported files */
#include "wudfddi.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_wudfusb_0000_0000 */
/* [local] */ 

#define UMDF_DDI_VIEW UMDF_DDI_VIEW_PUBLIC
#ifdef MIDL_PASS
typedef PVOID WINUSB_INTERFACE_HANDLE;

typedef WINUSB_INTERFACE_HANDLE *PWINUSB_INTERFACE_HANDLE;

typedef PVOID PUSB_INTERFACE_DESCRIPTOR;

typedef PVOID PWINUSB_PIPE_INFORMATION;

typedef PVOID PWINUSB_SETUP_PACKET;

typedef ULONG USBD_PIPE_TYPE;

#else
#include <WinUsb.h>
#endif
typedef 
enum _WDF_USB_REQUEST_TYPE
    {	WdfUsbRequestTypeInvalid	= 0,
	WdfUsbRequestTypeNoFormat	= ( WdfUsbRequestTypeInvalid + 1 ) ,
	WdfUsbRequestTypeDeviceControlTransfer	= ( WdfUsbRequestTypeNoFormat + 1 ) ,
	WdfUsbRequestTypePipeWrite	= ( WdfUsbRequestTypeDeviceControlTransfer + 1 ) ,
	WdfUsbRequestTypePipeRead	= ( WdfUsbRequestTypePipeWrite + 1 ) 
    } 	WDF_USB_REQUEST_TYPE;

typedef enum _WDF_USB_REQUEST_TYPE *PWDF_USB_REQUEST_TYPE;











extern RPC_IF_HANDLE __MIDL_itf_wudfusb_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wudfusb_0000_0000_v0_0_s_ifspec;

#ifndef __IWDFUsbTargetFactory_INTERFACE_DEFINED__
#define __IWDFUsbTargetFactory_INTERFACE_DEFINED__

/* interface IWDFUsbTargetFactory */
/* [unique][local][object][uuid] */ 


EXTERN_C const IID IID_IWDFUsbTargetFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3f7becf9-3a65-4348-a4f3-339d5734a9c6")
    IWDFUsbTargetFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateUsbTargetDevice( 
            /* [annotation][out] */ 
            _Out_  IWDFUsbTargetDevice **ppDevice) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWDFUsbTargetFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFUsbTargetFactory * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFUsbTargetFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFUsbTargetFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateUsbTargetDevice )( 
            IWDFUsbTargetFactory * This,
            /* [annotation][out] */ 
            _Out_  IWDFUsbTargetDevice **ppDevice);
        
        END_INTERFACE
    } IWDFUsbTargetFactoryVtbl;

    interface IWDFUsbTargetFactory
    {
        CONST_VTBL struct IWDFUsbTargetFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFUsbTargetFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFUsbTargetFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFUsbTargetFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFUsbTargetFactory_CreateUsbTargetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> CreateUsbTargetDevice(This,ppDevice) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFUsbTargetFactory_INTERFACE_DEFINED__ */


#ifndef __IWDFUsbTargetDevice_INTERFACE_DEFINED__
#define __IWDFUsbTargetDevice_INTERFACE_DEFINED__

/* interface IWDFUsbTargetDevice */
/* [unique][local][object][uuid] */ 


EXTERN_C const IID IID_IWDFUsbTargetDevice;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4cd12e96-900a-44c3-a1b7-05b8954dab76")
    IWDFUsbTargetDevice : public IWDFIoTarget
    {
    public:
        virtual WINUSB_INTERFACE_HANDLE STDMETHODCALLTYPE GetWinUsbHandle( void) = 0;
        
        virtual UCHAR STDMETHODCALLTYPE GetNumInterfaces( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RetrieveUsbInterface( 
            /* [annotation][in] */ 
            _In_  UCHAR InterfaceIndex,
            /* [annotation][out] */ 
            _Out_  IWDFUsbInterface **ppUsbInterface) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FormatRequestForControlTransfer( 
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pRequest,
            /* [annotation][in] */ 
            _In_  PWINUSB_SETUP_PACKET SetupPacket,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFMemory *pMemory,
            /* [annotation][unique][in] */ 
            _In_opt_  PWDFMEMORY_OFFSET TransferOffset) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RetrieveDeviceInformation( 
            /* [annotation][in] */ 
            _In_  ULONG InformationType,
            /* [annotation][out][in] */ 
            _Inout_  ULONG *BufferLength,
            /* [annotation][out] */ 
            _Out_  PVOID Buffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RetrieveDescriptor( 
            /* [annotation][in] */ 
            _In_  UCHAR DescriptorType,
            /* [annotation][in] */ 
            _In_  UCHAR Index,
            /* [annotation][in] */ 
            _In_  USHORT LanguageID,
            /* [annotation][out][in] */ 
            _Inout_  ULONG *BufferLength,
            /* [annotation][out] */ 
            _Out_  PVOID Buffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RetrievePowerPolicy( 
            /* [annotation][in] */ 
            _In_  ULONG PolicyType,
            /* [annotation][out][in] */ 
            _Inout_  ULONG *ValueLength,
            /* [annotation][out] */ 
            _Out_  PVOID Value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPowerPolicy( 
            /* [annotation][in] */ 
            _In_  ULONG PolicyType,
            /* [annotation][in] */ 
            _In_  ULONG ValueLength,
            /* [annotation][in] */ 
            _In_  PVOID Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWDFUsbTargetDeviceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFUsbTargetDevice * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFUsbTargetDevice * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFUsbTargetDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteWdfObject )( 
            IWDFUsbTargetDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *AssignContext )( 
            IWDFUsbTargetDevice * This,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  IObjectCleanup *pCleanupCallback,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  void *pContext);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveContext )( 
            IWDFUsbTargetDevice * This,
            /* [annotation][out] */ 
            _Out_  void **ppvContext);
        
        void ( STDMETHODCALLTYPE *AcquireLock )( 
            IWDFUsbTargetDevice * This);
        
        void ( STDMETHODCALLTYPE *ReleaseLock )( 
            IWDFUsbTargetDevice * This);
        
        void ( STDMETHODCALLTYPE *GetTargetFile )( 
            IWDFUsbTargetDevice * This,
            /* [annotation][out] */ 
            _Out_  IWDFFile **ppWdfFile);
        
        void ( STDMETHODCALLTYPE *CancelSentRequestsForFile )( 
            IWDFUsbTargetDevice * This,
            /* [annotation][in] */ 
            _In_  IWDFFile *pFile);
        
        HRESULT ( STDMETHODCALLTYPE *FormatRequestForRead )( 
            IWDFUsbTargetDevice * This,
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pRequest,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFFile *pFile,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFMemory *pOutputMemory,
            /* [annotation][unique][in] */ 
            _In_opt_  PWDFMEMORY_OFFSET pOutputMemoryOffset,
            /* [annotation][unique][in] */ 
            _In_opt_  PLONGLONG DeviceOffset);
        
        HRESULT ( STDMETHODCALLTYPE *FormatRequestForWrite )( 
            IWDFUsbTargetDevice * This,
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pRequest,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFFile *pFile,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFMemory *pInputMemory,
            /* [annotation][unique][in] */ 
            _In_opt_  PWDFMEMORY_OFFSET pInputMemoryOffset,
            /* [annotation][unique][in] */ 
            _In_opt_  PLONGLONG DeviceOffset);
        
        HRESULT ( STDMETHODCALLTYPE *FormatRequestForIoctl )( 
            IWDFUsbTargetDevice * This,
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pRequest,
            /* [annotation][in] */ 
            _In_  ULONG IoctlCode,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFFile *pFile,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFMemory *pInputMemory,
            /* [annotation][unique][in] */ 
            _In_opt_  PWDFMEMORY_OFFSET pInputMemoryOffset,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFMemory *pOutputMemory,
            /* [annotation][unique][in] */ 
            _In_opt_  PWDFMEMORY_OFFSET pOutputMemoryOffset);
        
        WINUSB_INTERFACE_HANDLE ( STDMETHODCALLTYPE *GetWinUsbHandle )( 
            IWDFUsbTargetDevice * This);
        
        UCHAR ( STDMETHODCALLTYPE *GetNumInterfaces )( 
            IWDFUsbTargetDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveUsbInterface )( 
            IWDFUsbTargetDevice * This,
            /* [annotation][in] */ 
            _In_  UCHAR InterfaceIndex,
            /* [annotation][out] */ 
            _Out_  IWDFUsbInterface **ppUsbInterface);
        
        HRESULT ( STDMETHODCALLTYPE *FormatRequestForControlTransfer )( 
            IWDFUsbTargetDevice * This,
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pRequest,
            /* [annotation][in] */ 
            _In_  PWINUSB_SETUP_PACKET SetupPacket,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFMemory *pMemory,
            /* [annotation][unique][in] */ 
            _In_opt_  PWDFMEMORY_OFFSET TransferOffset);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveDeviceInformation )( 
            IWDFUsbTargetDevice * This,
            /* [annotation][in] */ 
            _In_  ULONG InformationType,
            /* [annotation][out][in] */ 
            _Inout_  ULONG *BufferLength,
            /* [annotation][out] */ 
            _Out_  PVOID Buffer);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveDescriptor )( 
            IWDFUsbTargetDevice * This,
            /* [annotation][in] */ 
            _In_  UCHAR DescriptorType,
            /* [annotation][in] */ 
            _In_  UCHAR Index,
            /* [annotation][in] */ 
            _In_  USHORT LanguageID,
            /* [annotation][out][in] */ 
            _Inout_  ULONG *BufferLength,
            /* [annotation][out] */ 
            _Out_  PVOID Buffer);
        
        HRESULT ( STDMETHODCALLTYPE *RetrievePowerPolicy )( 
            IWDFUsbTargetDevice * This,
            /* [annotation][in] */ 
            _In_  ULONG PolicyType,
            /* [annotation][out][in] */ 
            _Inout_  ULONG *ValueLength,
            /* [annotation][out] */ 
            _Out_  PVOID Value);
        
        HRESULT ( STDMETHODCALLTYPE *SetPowerPolicy )( 
            IWDFUsbTargetDevice * This,
            /* [annotation][in] */ 
            _In_  ULONG PolicyType,
            /* [annotation][in] */ 
            _In_  ULONG ValueLength,
            /* [annotation][in] */ 
            _In_  PVOID Value);
        
        END_INTERFACE
    } IWDFUsbTargetDeviceVtbl;

    interface IWDFUsbTargetDevice
    {
        CONST_VTBL struct IWDFUsbTargetDeviceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFUsbTargetDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFUsbTargetDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFUsbTargetDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFUsbTargetDevice_DeleteWdfObject(This)	\
    ( (This)->lpVtbl -> DeleteWdfObject(This) ) 

#define IWDFUsbTargetDevice_AssignContext(This,pCleanupCallback,pContext)	\
    ( (This)->lpVtbl -> AssignContext(This,pCleanupCallback,pContext) ) 

#define IWDFUsbTargetDevice_RetrieveContext(This,ppvContext)	\
    ( (This)->lpVtbl -> RetrieveContext(This,ppvContext) ) 

#define IWDFUsbTargetDevice_AcquireLock(This)	\
    ( (This)->lpVtbl -> AcquireLock(This) ) 

#define IWDFUsbTargetDevice_ReleaseLock(This)	\
    ( (This)->lpVtbl -> ReleaseLock(This) ) 


#define IWDFUsbTargetDevice_GetTargetFile(This,ppWdfFile)	\
    ( (This)->lpVtbl -> GetTargetFile(This,ppWdfFile) ) 

#define IWDFUsbTargetDevice_CancelSentRequestsForFile(This,pFile)	\
    ( (This)->lpVtbl -> CancelSentRequestsForFile(This,pFile) ) 

#define IWDFUsbTargetDevice_FormatRequestForRead(This,pRequest,pFile,pOutputMemory,pOutputMemoryOffset,DeviceOffset)	\
    ( (This)->lpVtbl -> FormatRequestForRead(This,pRequest,pFile,pOutputMemory,pOutputMemoryOffset,DeviceOffset) ) 

#define IWDFUsbTargetDevice_FormatRequestForWrite(This,pRequest,pFile,pInputMemory,pInputMemoryOffset,DeviceOffset)	\
    ( (This)->lpVtbl -> FormatRequestForWrite(This,pRequest,pFile,pInputMemory,pInputMemoryOffset,DeviceOffset) ) 

#define IWDFUsbTargetDevice_FormatRequestForIoctl(This,pRequest,IoctlCode,pFile,pInputMemory,pInputMemoryOffset,pOutputMemory,pOutputMemoryOffset)	\
    ( (This)->lpVtbl -> FormatRequestForIoctl(This,pRequest,IoctlCode,pFile,pInputMemory,pInputMemoryOffset,pOutputMemory,pOutputMemoryOffset) ) 


#define IWDFUsbTargetDevice_GetWinUsbHandle(This)	\
    ( (This)->lpVtbl -> GetWinUsbHandle(This) ) 

#define IWDFUsbTargetDevice_GetNumInterfaces(This)	\
    ( (This)->lpVtbl -> GetNumInterfaces(This) ) 

#define IWDFUsbTargetDevice_RetrieveUsbInterface(This,InterfaceIndex,ppUsbInterface)	\
    ( (This)->lpVtbl -> RetrieveUsbInterface(This,InterfaceIndex,ppUsbInterface) ) 

#define IWDFUsbTargetDevice_FormatRequestForControlTransfer(This,pRequest,SetupPacket,pMemory,TransferOffset)	\
    ( (This)->lpVtbl -> FormatRequestForControlTransfer(This,pRequest,SetupPacket,pMemory,TransferOffset) ) 

#define IWDFUsbTargetDevice_RetrieveDeviceInformation(This,InformationType,BufferLength,Buffer)	\
    ( (This)->lpVtbl -> RetrieveDeviceInformation(This,InformationType,BufferLength,Buffer) ) 

#define IWDFUsbTargetDevice_RetrieveDescriptor(This,DescriptorType,Index,LanguageID,BufferLength,Buffer)	\
    ( (This)->lpVtbl -> RetrieveDescriptor(This,DescriptorType,Index,LanguageID,BufferLength,Buffer) ) 

#define IWDFUsbTargetDevice_RetrievePowerPolicy(This,PolicyType,ValueLength,Value)	\
    ( (This)->lpVtbl -> RetrievePowerPolicy(This,PolicyType,ValueLength,Value) ) 

#define IWDFUsbTargetDevice_SetPowerPolicy(This,PolicyType,ValueLength,Value)	\
    ( (This)->lpVtbl -> SetPowerPolicy(This,PolicyType,ValueLength,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFUsbTargetDevice_INTERFACE_DEFINED__ */


#ifndef __IWDFUsbInterface_INTERFACE_DEFINED__
#define __IWDFUsbInterface_INTERFACE_DEFINED__

/* interface IWDFUsbInterface */
/* [unique][local][object][uuid] */ 


EXTERN_C const IID IID_IWDFUsbInterface;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a6714a4d-c764-498f-b6d2-032f10ca4e36")
    IWDFUsbInterface : public IWDFObject
    {
    public:
        virtual void STDMETHODCALLTYPE GetInterfaceDescriptor( 
            /* [annotation][out] */ 
            _Out_  PUSB_INTERFACE_DESCRIPTOR UsbAltInterfaceDescriptor) = 0;
        
        virtual UCHAR STDMETHODCALLTYPE GetInterfaceNumber( void) = 0;
        
        virtual UCHAR STDMETHODCALLTYPE GetNumEndPoints( void) = 0;
        
        virtual UCHAR STDMETHODCALLTYPE GetConfiguredSettingIndex( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SelectSetting( 
            /* [annotation][in] */ 
            _In_  UCHAR SettingNumber) = 0;
        
        virtual WINUSB_INTERFACE_HANDLE STDMETHODCALLTYPE GetWinUsbHandle( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RetrieveUsbPipeObject( 
            /* [annotation][in] */ 
            _In_  UCHAR PipeIndex,
            /* [annotation][out] */ 
            _Out_  IWDFUsbTargetPipe **ppPipe) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWDFUsbInterfaceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFUsbInterface * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFUsbInterface * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFUsbInterface * This);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteWdfObject )( 
            IWDFUsbInterface * This);
        
        HRESULT ( STDMETHODCALLTYPE *AssignContext )( 
            IWDFUsbInterface * This,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  IObjectCleanup *pCleanupCallback,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  void *pContext);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveContext )( 
            IWDFUsbInterface * This,
            /* [annotation][out] */ 
            _Out_  void **ppvContext);
        
        void ( STDMETHODCALLTYPE *AcquireLock )( 
            IWDFUsbInterface * This);
        
        void ( STDMETHODCALLTYPE *ReleaseLock )( 
            IWDFUsbInterface * This);
        
        void ( STDMETHODCALLTYPE *GetInterfaceDescriptor )( 
            IWDFUsbInterface * This,
            /* [annotation][out] */ 
            _Out_  PUSB_INTERFACE_DESCRIPTOR UsbAltInterfaceDescriptor);
        
        UCHAR ( STDMETHODCALLTYPE *GetInterfaceNumber )( 
            IWDFUsbInterface * This);
        
        UCHAR ( STDMETHODCALLTYPE *GetNumEndPoints )( 
            IWDFUsbInterface * This);
        
        UCHAR ( STDMETHODCALLTYPE *GetConfiguredSettingIndex )( 
            IWDFUsbInterface * This);
        
        HRESULT ( STDMETHODCALLTYPE *SelectSetting )( 
            IWDFUsbInterface * This,
            /* [annotation][in] */ 
            _In_  UCHAR SettingNumber);
        
        WINUSB_INTERFACE_HANDLE ( STDMETHODCALLTYPE *GetWinUsbHandle )( 
            IWDFUsbInterface * This);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveUsbPipeObject )( 
            IWDFUsbInterface * This,
            /* [annotation][in] */ 
            _In_  UCHAR PipeIndex,
            /* [annotation][out] */ 
            _Out_  IWDFUsbTargetPipe **ppPipe);
        
        END_INTERFACE
    } IWDFUsbInterfaceVtbl;

    interface IWDFUsbInterface
    {
        CONST_VTBL struct IWDFUsbInterfaceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFUsbInterface_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFUsbInterface_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFUsbInterface_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFUsbInterface_DeleteWdfObject(This)	\
    ( (This)->lpVtbl -> DeleteWdfObject(This) ) 

#define IWDFUsbInterface_AssignContext(This,pCleanupCallback,pContext)	\
    ( (This)->lpVtbl -> AssignContext(This,pCleanupCallback,pContext) ) 

#define IWDFUsbInterface_RetrieveContext(This,ppvContext)	\
    ( (This)->lpVtbl -> RetrieveContext(This,ppvContext) ) 

#define IWDFUsbInterface_AcquireLock(This)	\
    ( (This)->lpVtbl -> AcquireLock(This) ) 

#define IWDFUsbInterface_ReleaseLock(This)	\
    ( (This)->lpVtbl -> ReleaseLock(This) ) 


#define IWDFUsbInterface_GetInterfaceDescriptor(This,UsbAltInterfaceDescriptor)	\
    ( (This)->lpVtbl -> GetInterfaceDescriptor(This,UsbAltInterfaceDescriptor) ) 

#define IWDFUsbInterface_GetInterfaceNumber(This)	\
    ( (This)->lpVtbl -> GetInterfaceNumber(This) ) 

#define IWDFUsbInterface_GetNumEndPoints(This)	\
    ( (This)->lpVtbl -> GetNumEndPoints(This) ) 

#define IWDFUsbInterface_GetConfiguredSettingIndex(This)	\
    ( (This)->lpVtbl -> GetConfiguredSettingIndex(This) ) 

#define IWDFUsbInterface_SelectSetting(This,SettingNumber)	\
    ( (This)->lpVtbl -> SelectSetting(This,SettingNumber) ) 

#define IWDFUsbInterface_GetWinUsbHandle(This)	\
    ( (This)->lpVtbl -> GetWinUsbHandle(This) ) 

#define IWDFUsbInterface_RetrieveUsbPipeObject(This,PipeIndex,ppPipe)	\
    ( (This)->lpVtbl -> RetrieveUsbPipeObject(This,PipeIndex,ppPipe) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFUsbInterface_INTERFACE_DEFINED__ */


#ifndef __IUsbTargetPipeContinuousReaderCallbackReadComplete_INTERFACE_DEFINED__
#define __IUsbTargetPipeContinuousReaderCallbackReadComplete_INTERFACE_DEFINED__

/* interface IUsbTargetPipeContinuousReaderCallbackReadComplete */
/* [unique][local][object][uuid] */ 


EXTERN_C const IID IID_IUsbTargetPipeContinuousReaderCallbackReadComplete;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E44FC7CC-0037-45fe-B27C-3963FDF13997")
    IUsbTargetPipeContinuousReaderCallbackReadComplete : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE OnReaderCompletion( 
            /* [annotation][in] */ 
            _In_  IWDFUsbTargetPipe *pPipe,
            /* [annotation][in] */ 
            _In_  IWDFMemory *pMemory,
            /* [annotation][in] */ 
            _In_  SIZE_T NumBytesTransferred,
            /* [annotation][in] */ 
            _In_  PVOID Context) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUsbTargetPipeContinuousReaderCallbackReadCompleteVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUsbTargetPipeContinuousReaderCallbackReadComplete * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUsbTargetPipeContinuousReaderCallbackReadComplete * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUsbTargetPipeContinuousReaderCallbackReadComplete * This);
        
        void ( STDMETHODCALLTYPE *OnReaderCompletion )( 
            IUsbTargetPipeContinuousReaderCallbackReadComplete * This,
            /* [annotation][in] */ 
            _In_  IWDFUsbTargetPipe *pPipe,
            /* [annotation][in] */ 
            _In_  IWDFMemory *pMemory,
            /* [annotation][in] */ 
            _In_  SIZE_T NumBytesTransferred,
            /* [annotation][in] */ 
            _In_  PVOID Context);
        
        END_INTERFACE
    } IUsbTargetPipeContinuousReaderCallbackReadCompleteVtbl;

    interface IUsbTargetPipeContinuousReaderCallbackReadComplete
    {
        CONST_VTBL struct IUsbTargetPipeContinuousReaderCallbackReadCompleteVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUsbTargetPipeContinuousReaderCallbackReadComplete_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUsbTargetPipeContinuousReaderCallbackReadComplete_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUsbTargetPipeContinuousReaderCallbackReadComplete_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUsbTargetPipeContinuousReaderCallbackReadComplete_OnReaderCompletion(This,pPipe,pMemory,NumBytesTransferred,Context)	\
    ( (This)->lpVtbl -> OnReaderCompletion(This,pPipe,pMemory,NumBytesTransferred,Context) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUsbTargetPipeContinuousReaderCallbackReadComplete_INTERFACE_DEFINED__ */


#ifndef __IUsbTargetPipeContinuousReaderCallbackReadersFailed_INTERFACE_DEFINED__
#define __IUsbTargetPipeContinuousReaderCallbackReadersFailed_INTERFACE_DEFINED__

/* interface IUsbTargetPipeContinuousReaderCallbackReadersFailed */
/* [unique][local][object][uuid] */ 


EXTERN_C const IID IID_IUsbTargetPipeContinuousReaderCallbackReadersFailed;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4B891219-3C53-4a8c-8731-4E1B4BE0E233")
    IUsbTargetPipeContinuousReaderCallbackReadersFailed : public IUnknown
    {
    public:
        virtual BOOL STDMETHODCALLTYPE OnReaderFailure( 
            /* [annotation][in] */ 
            _In_  IWDFUsbTargetPipe *pPipe,
            /* [annotation][in] */ 
            _In_  HRESULT hrStatus) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUsbTargetPipeContinuousReaderCallbackReadersFailedVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUsbTargetPipeContinuousReaderCallbackReadersFailed * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUsbTargetPipeContinuousReaderCallbackReadersFailed * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUsbTargetPipeContinuousReaderCallbackReadersFailed * This);
        
        BOOL ( STDMETHODCALLTYPE *OnReaderFailure )( 
            IUsbTargetPipeContinuousReaderCallbackReadersFailed * This,
            /* [annotation][in] */ 
            _In_  IWDFUsbTargetPipe *pPipe,
            /* [annotation][in] */ 
            _In_  HRESULT hrStatus);
        
        END_INTERFACE
    } IUsbTargetPipeContinuousReaderCallbackReadersFailedVtbl;

    interface IUsbTargetPipeContinuousReaderCallbackReadersFailed
    {
        CONST_VTBL struct IUsbTargetPipeContinuousReaderCallbackReadersFailedVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUsbTargetPipeContinuousReaderCallbackReadersFailed_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUsbTargetPipeContinuousReaderCallbackReadersFailed_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUsbTargetPipeContinuousReaderCallbackReadersFailed_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUsbTargetPipeContinuousReaderCallbackReadersFailed_OnReaderFailure(This,pPipe,hrStatus)	\
    ( (This)->lpVtbl -> OnReaderFailure(This,pPipe,hrStatus) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUsbTargetPipeContinuousReaderCallbackReadersFailed_INTERFACE_DEFINED__ */


#ifndef __IWDFUsbTargetPipe_INTERFACE_DEFINED__
#define __IWDFUsbTargetPipe_INTERFACE_DEFINED__

/* interface IWDFUsbTargetPipe */
/* [unique][local][object][uuid] */ 


EXTERN_C const IID IID_IWDFUsbTargetPipe;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f373216e-8c42-4c5c-95b4-d2a40b99c0fa")
    IWDFUsbTargetPipe : public IWDFIoTarget
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Abort( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Flush( void) = 0;
        
        virtual void STDMETHODCALLTYPE GetInformation( 
            /* [annotation][out] */ 
            _Out_  PWINUSB_PIPE_INFORMATION pInfo) = 0;
        
        virtual BOOL STDMETHODCALLTYPE IsInEndPoint( void) = 0;
        
        virtual BOOL STDMETHODCALLTYPE IsOutEndPoint( void) = 0;
        
        virtual USBD_PIPE_TYPE STDMETHODCALLTYPE GetType( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RetrievePipePolicy( 
            /* [annotation][in] */ 
            _In_  ULONG PolicyType,
            /* [annotation][out][in] */ 
            _Inout_  ULONG *ValueLength,
            /* [annotation][out] */ 
            _Out_  PVOID Value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPipePolicy( 
            /* [annotation][in] */ 
            _In_  ULONG PolicyType,
            /* [annotation][in] */ 
            _In_  ULONG ValueLength,
            /* [annotation][in] */ 
            _In_  PVOID Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWDFUsbTargetPipeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFUsbTargetPipe * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFUsbTargetPipe * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFUsbTargetPipe * This);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteWdfObject )( 
            IWDFUsbTargetPipe * This);
        
        HRESULT ( STDMETHODCALLTYPE *AssignContext )( 
            IWDFUsbTargetPipe * This,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  IObjectCleanup *pCleanupCallback,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  void *pContext);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveContext )( 
            IWDFUsbTargetPipe * This,
            /* [annotation][out] */ 
            _Out_  void **ppvContext);
        
        void ( STDMETHODCALLTYPE *AcquireLock )( 
            IWDFUsbTargetPipe * This);
        
        void ( STDMETHODCALLTYPE *ReleaseLock )( 
            IWDFUsbTargetPipe * This);
        
        void ( STDMETHODCALLTYPE *GetTargetFile )( 
            IWDFUsbTargetPipe * This,
            /* [annotation][out] */ 
            _Out_  IWDFFile **ppWdfFile);
        
        void ( STDMETHODCALLTYPE *CancelSentRequestsForFile )( 
            IWDFUsbTargetPipe * This,
            /* [annotation][in] */ 
            _In_  IWDFFile *pFile);
        
        HRESULT ( STDMETHODCALLTYPE *FormatRequestForRead )( 
            IWDFUsbTargetPipe * This,
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pRequest,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFFile *pFile,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFMemory *pOutputMemory,
            /* [annotation][unique][in] */ 
            _In_opt_  PWDFMEMORY_OFFSET pOutputMemoryOffset,
            /* [annotation][unique][in] */ 
            _In_opt_  PLONGLONG DeviceOffset);
        
        HRESULT ( STDMETHODCALLTYPE *FormatRequestForWrite )( 
            IWDFUsbTargetPipe * This,
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pRequest,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFFile *pFile,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFMemory *pInputMemory,
            /* [annotation][unique][in] */ 
            _In_opt_  PWDFMEMORY_OFFSET pInputMemoryOffset,
            /* [annotation][unique][in] */ 
            _In_opt_  PLONGLONG DeviceOffset);
        
        HRESULT ( STDMETHODCALLTYPE *FormatRequestForIoctl )( 
            IWDFUsbTargetPipe * This,
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pRequest,
            /* [annotation][in] */ 
            _In_  ULONG IoctlCode,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFFile *pFile,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFMemory *pInputMemory,
            /* [annotation][unique][in] */ 
            _In_opt_  PWDFMEMORY_OFFSET pInputMemoryOffset,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFMemory *pOutputMemory,
            /* [annotation][unique][in] */ 
            _In_opt_  PWDFMEMORY_OFFSET pOutputMemoryOffset);
        
        HRESULT ( STDMETHODCALLTYPE *Abort )( 
            IWDFUsbTargetPipe * This);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IWDFUsbTargetPipe * This);
        
        HRESULT ( STDMETHODCALLTYPE *Flush )( 
            IWDFUsbTargetPipe * This);
        
        void ( STDMETHODCALLTYPE *GetInformation )( 
            IWDFUsbTargetPipe * This,
            /* [annotation][out] */ 
            _Out_  PWINUSB_PIPE_INFORMATION pInfo);
        
        BOOL ( STDMETHODCALLTYPE *IsInEndPoint )( 
            IWDFUsbTargetPipe * This);
        
        BOOL ( STDMETHODCALLTYPE *IsOutEndPoint )( 
            IWDFUsbTargetPipe * This);
        
        USBD_PIPE_TYPE ( STDMETHODCALLTYPE *GetType )( 
            IWDFUsbTargetPipe * This);
        
        HRESULT ( STDMETHODCALLTYPE *RetrievePipePolicy )( 
            IWDFUsbTargetPipe * This,
            /* [annotation][in] */ 
            _In_  ULONG PolicyType,
            /* [annotation][out][in] */ 
            _Inout_  ULONG *ValueLength,
            /* [annotation][out] */ 
            _Out_  PVOID Value);
        
        HRESULT ( STDMETHODCALLTYPE *SetPipePolicy )( 
            IWDFUsbTargetPipe * This,
            /* [annotation][in] */ 
            _In_  ULONG PolicyType,
            /* [annotation][in] */ 
            _In_  ULONG ValueLength,
            /* [annotation][in] */ 
            _In_  PVOID Value);
        
        END_INTERFACE
    } IWDFUsbTargetPipeVtbl;

    interface IWDFUsbTargetPipe
    {
        CONST_VTBL struct IWDFUsbTargetPipeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFUsbTargetPipe_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFUsbTargetPipe_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFUsbTargetPipe_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFUsbTargetPipe_DeleteWdfObject(This)	\
    ( (This)->lpVtbl -> DeleteWdfObject(This) ) 

#define IWDFUsbTargetPipe_AssignContext(This,pCleanupCallback,pContext)	\
    ( (This)->lpVtbl -> AssignContext(This,pCleanupCallback,pContext) ) 

#define IWDFUsbTargetPipe_RetrieveContext(This,ppvContext)	\
    ( (This)->lpVtbl -> RetrieveContext(This,ppvContext) ) 

#define IWDFUsbTargetPipe_AcquireLock(This)	\
    ( (This)->lpVtbl -> AcquireLock(This) ) 

#define IWDFUsbTargetPipe_ReleaseLock(This)	\
    ( (This)->lpVtbl -> ReleaseLock(This) ) 


#define IWDFUsbTargetPipe_GetTargetFile(This,ppWdfFile)	\
    ( (This)->lpVtbl -> GetTargetFile(This,ppWdfFile) ) 

#define IWDFUsbTargetPipe_CancelSentRequestsForFile(This,pFile)	\
    ( (This)->lpVtbl -> CancelSentRequestsForFile(This,pFile) ) 

#define IWDFUsbTargetPipe_FormatRequestForRead(This,pRequest,pFile,pOutputMemory,pOutputMemoryOffset,DeviceOffset)	\
    ( (This)->lpVtbl -> FormatRequestForRead(This,pRequest,pFile,pOutputMemory,pOutputMemoryOffset,DeviceOffset) ) 

#define IWDFUsbTargetPipe_FormatRequestForWrite(This,pRequest,pFile,pInputMemory,pInputMemoryOffset,DeviceOffset)	\
    ( (This)->lpVtbl -> FormatRequestForWrite(This,pRequest,pFile,pInputMemory,pInputMemoryOffset,DeviceOffset) ) 

#define IWDFUsbTargetPipe_FormatRequestForIoctl(This,pRequest,IoctlCode,pFile,pInputMemory,pInputMemoryOffset,pOutputMemory,pOutputMemoryOffset)	\
    ( (This)->lpVtbl -> FormatRequestForIoctl(This,pRequest,IoctlCode,pFile,pInputMemory,pInputMemoryOffset,pOutputMemory,pOutputMemoryOffset) ) 


#define IWDFUsbTargetPipe_Abort(This)	\
    ( (This)->lpVtbl -> Abort(This) ) 

#define IWDFUsbTargetPipe_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IWDFUsbTargetPipe_Flush(This)	\
    ( (This)->lpVtbl -> Flush(This) ) 

#define IWDFUsbTargetPipe_GetInformation(This,pInfo)	\
    ( (This)->lpVtbl -> GetInformation(This,pInfo) ) 

#define IWDFUsbTargetPipe_IsInEndPoint(This)	\
    ( (This)->lpVtbl -> IsInEndPoint(This) ) 

#define IWDFUsbTargetPipe_IsOutEndPoint(This)	\
    ( (This)->lpVtbl -> IsOutEndPoint(This) ) 

#define IWDFUsbTargetPipe_GetType(This)	\
    ( (This)->lpVtbl -> GetType(This) ) 

#define IWDFUsbTargetPipe_RetrievePipePolicy(This,PolicyType,ValueLength,Value)	\
    ( (This)->lpVtbl -> RetrievePipePolicy(This,PolicyType,ValueLength,Value) ) 

#define IWDFUsbTargetPipe_SetPipePolicy(This,PolicyType,ValueLength,Value)	\
    ( (This)->lpVtbl -> SetPipePolicy(This,PolicyType,ValueLength,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFUsbTargetPipe_INTERFACE_DEFINED__ */


#ifndef __IWDFUsbTargetPipe2_INTERFACE_DEFINED__
#define __IWDFUsbTargetPipe2_INTERFACE_DEFINED__

/* interface IWDFUsbTargetPipe2 */
/* [unique][local][object][uuid] */ 


EXTERN_C const IID IID_IWDFUsbTargetPipe2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8EFE1AB4-F4A2-42bb-9B2B-BBADA19D8B80")
    IWDFUsbTargetPipe2 : public IWDFUsbTargetPipe
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ConfigureContinuousReader( 
            /* [annotation][in] */ 
            _In_  SIZE_T TransferLength,
            /* [annotation][in] */ 
            _In_  SIZE_T HeaderLength,
            /* [annotation][in] */ 
            _In_  SIZE_T TrailerLength,
            /* [annotation][in] */ 
            _In_  UCHAR NumPendingReads,
            /* [annotation][unique][in] */ 
            _In_opt_  IUnknown *pMemoryCleanupCallbackInterface,
            /* [annotation][in] */ 
            _In_  IUsbTargetPipeContinuousReaderCallbackReadComplete *pOnCompletion,
            /* [annotation][unique][in] */ 
            _In_opt_  PVOID pCompletionContext,
            /* [annotation][unique][in] */ 
            _In_opt_  IUsbTargetPipeContinuousReaderCallbackReadersFailed *pOnFailure) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWDFUsbTargetPipe2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFUsbTargetPipe2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFUsbTargetPipe2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFUsbTargetPipe2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteWdfObject )( 
            IWDFUsbTargetPipe2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AssignContext )( 
            IWDFUsbTargetPipe2 * This,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  IObjectCleanup *pCleanupCallback,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  void *pContext);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveContext )( 
            IWDFUsbTargetPipe2 * This,
            /* [annotation][out] */ 
            _Out_  void **ppvContext);
        
        void ( STDMETHODCALLTYPE *AcquireLock )( 
            IWDFUsbTargetPipe2 * This);
        
        void ( STDMETHODCALLTYPE *ReleaseLock )( 
            IWDFUsbTargetPipe2 * This);
        
        void ( STDMETHODCALLTYPE *GetTargetFile )( 
            IWDFUsbTargetPipe2 * This,
            /* [annotation][out] */ 
            _Out_  IWDFFile **ppWdfFile);
        
        void ( STDMETHODCALLTYPE *CancelSentRequestsForFile )( 
            IWDFUsbTargetPipe2 * This,
            /* [annotation][in] */ 
            _In_  IWDFFile *pFile);
        
        HRESULT ( STDMETHODCALLTYPE *FormatRequestForRead )( 
            IWDFUsbTargetPipe2 * This,
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pRequest,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFFile *pFile,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFMemory *pOutputMemory,
            /* [annotation][unique][in] */ 
            _In_opt_  PWDFMEMORY_OFFSET pOutputMemoryOffset,
            /* [annotation][unique][in] */ 
            _In_opt_  PLONGLONG DeviceOffset);
        
        HRESULT ( STDMETHODCALLTYPE *FormatRequestForWrite )( 
            IWDFUsbTargetPipe2 * This,
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pRequest,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFFile *pFile,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFMemory *pInputMemory,
            /* [annotation][unique][in] */ 
            _In_opt_  PWDFMEMORY_OFFSET pInputMemoryOffset,
            /* [annotation][unique][in] */ 
            _In_opt_  PLONGLONG DeviceOffset);
        
        HRESULT ( STDMETHODCALLTYPE *FormatRequestForIoctl )( 
            IWDFUsbTargetPipe2 * This,
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pRequest,
            /* [annotation][in] */ 
            _In_  ULONG IoctlCode,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFFile *pFile,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFMemory *pInputMemory,
            /* [annotation][unique][in] */ 
            _In_opt_  PWDFMEMORY_OFFSET pInputMemoryOffset,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFMemory *pOutputMemory,
            /* [annotation][unique][in] */ 
            _In_opt_  PWDFMEMORY_OFFSET pOutputMemoryOffset);
        
        HRESULT ( STDMETHODCALLTYPE *Abort )( 
            IWDFUsbTargetPipe2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IWDFUsbTargetPipe2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Flush )( 
            IWDFUsbTargetPipe2 * This);
        
        void ( STDMETHODCALLTYPE *GetInformation )( 
            IWDFUsbTargetPipe2 * This,
            /* [annotation][out] */ 
            _Out_  PWINUSB_PIPE_INFORMATION pInfo);
        
        BOOL ( STDMETHODCALLTYPE *IsInEndPoint )( 
            IWDFUsbTargetPipe2 * This);
        
        BOOL ( STDMETHODCALLTYPE *IsOutEndPoint )( 
            IWDFUsbTargetPipe2 * This);
        
        USBD_PIPE_TYPE ( STDMETHODCALLTYPE *GetType )( 
            IWDFUsbTargetPipe2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *RetrievePipePolicy )( 
            IWDFUsbTargetPipe2 * This,
            /* [annotation][in] */ 
            _In_  ULONG PolicyType,
            /* [annotation][out][in] */ 
            _Inout_  ULONG *ValueLength,
            /* [annotation][out] */ 
            _Out_  PVOID Value);
        
        HRESULT ( STDMETHODCALLTYPE *SetPipePolicy )( 
            IWDFUsbTargetPipe2 * This,
            /* [annotation][in] */ 
            _In_  ULONG PolicyType,
            /* [annotation][in] */ 
            _In_  ULONG ValueLength,
            /* [annotation][in] */ 
            _In_  PVOID Value);
        
        HRESULT ( STDMETHODCALLTYPE *ConfigureContinuousReader )( 
            IWDFUsbTargetPipe2 * This,
            /* [annotation][in] */ 
            _In_  SIZE_T TransferLength,
            /* [annotation][in] */ 
            _In_  SIZE_T HeaderLength,
            /* [annotation][in] */ 
            _In_  SIZE_T TrailerLength,
            /* [annotation][in] */ 
            _In_  UCHAR NumPendingReads,
            /* [annotation][unique][in] */ 
            _In_opt_  IUnknown *pMemoryCleanupCallbackInterface,
            /* [annotation][in] */ 
            _In_  IUsbTargetPipeContinuousReaderCallbackReadComplete *pOnCompletion,
            /* [annotation][unique][in] */ 
            _In_opt_  PVOID pCompletionContext,
            /* [annotation][unique][in] */ 
            _In_opt_  IUsbTargetPipeContinuousReaderCallbackReadersFailed *pOnFailure);
        
        END_INTERFACE
    } IWDFUsbTargetPipe2Vtbl;

    interface IWDFUsbTargetPipe2
    {
        CONST_VTBL struct IWDFUsbTargetPipe2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFUsbTargetPipe2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFUsbTargetPipe2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFUsbTargetPipe2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFUsbTargetPipe2_DeleteWdfObject(This)	\
    ( (This)->lpVtbl -> DeleteWdfObject(This) ) 

#define IWDFUsbTargetPipe2_AssignContext(This,pCleanupCallback,pContext)	\
    ( (This)->lpVtbl -> AssignContext(This,pCleanupCallback,pContext) ) 

#define IWDFUsbTargetPipe2_RetrieveContext(This,ppvContext)	\
    ( (This)->lpVtbl -> RetrieveContext(This,ppvContext) ) 

#define IWDFUsbTargetPipe2_AcquireLock(This)	\
    ( (This)->lpVtbl -> AcquireLock(This) ) 

#define IWDFUsbTargetPipe2_ReleaseLock(This)	\
    ( (This)->lpVtbl -> ReleaseLock(This) ) 


#define IWDFUsbTargetPipe2_GetTargetFile(This,ppWdfFile)	\
    ( (This)->lpVtbl -> GetTargetFile(This,ppWdfFile) ) 

#define IWDFUsbTargetPipe2_CancelSentRequestsForFile(This,pFile)	\
    ( (This)->lpVtbl -> CancelSentRequestsForFile(This,pFile) ) 

#define IWDFUsbTargetPipe2_FormatRequestForRead(This,pRequest,pFile,pOutputMemory,pOutputMemoryOffset,DeviceOffset)	\
    ( (This)->lpVtbl -> FormatRequestForRead(This,pRequest,pFile,pOutputMemory,pOutputMemoryOffset,DeviceOffset) ) 

#define IWDFUsbTargetPipe2_FormatRequestForWrite(This,pRequest,pFile,pInputMemory,pInputMemoryOffset,DeviceOffset)	\
    ( (This)->lpVtbl -> FormatRequestForWrite(This,pRequest,pFile,pInputMemory,pInputMemoryOffset,DeviceOffset) ) 

#define IWDFUsbTargetPipe2_FormatRequestForIoctl(This,pRequest,IoctlCode,pFile,pInputMemory,pInputMemoryOffset,pOutputMemory,pOutputMemoryOffset)	\
    ( (This)->lpVtbl -> FormatRequestForIoctl(This,pRequest,IoctlCode,pFile,pInputMemory,pInputMemoryOffset,pOutputMemory,pOutputMemoryOffset) ) 


#define IWDFUsbTargetPipe2_Abort(This)	\
    ( (This)->lpVtbl -> Abort(This) ) 

#define IWDFUsbTargetPipe2_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IWDFUsbTargetPipe2_Flush(This)	\
    ( (This)->lpVtbl -> Flush(This) ) 

#define IWDFUsbTargetPipe2_GetInformation(This,pInfo)	\
    ( (This)->lpVtbl -> GetInformation(This,pInfo) ) 

#define IWDFUsbTargetPipe2_IsInEndPoint(This)	\
    ( (This)->lpVtbl -> IsInEndPoint(This) ) 

#define IWDFUsbTargetPipe2_IsOutEndPoint(This)	\
    ( (This)->lpVtbl -> IsOutEndPoint(This) ) 

#define IWDFUsbTargetPipe2_GetType(This)	\
    ( (This)->lpVtbl -> GetType(This) ) 

#define IWDFUsbTargetPipe2_RetrievePipePolicy(This,PolicyType,ValueLength,Value)	\
    ( (This)->lpVtbl -> RetrievePipePolicy(This,PolicyType,ValueLength,Value) ) 

#define IWDFUsbTargetPipe2_SetPipePolicy(This,PolicyType,ValueLength,Value)	\
    ( (This)->lpVtbl -> SetPipePolicy(This,PolicyType,ValueLength,Value) ) 


#define IWDFUsbTargetPipe2_ConfigureContinuousReader(This,TransferLength,HeaderLength,TrailerLength,NumPendingReads,pMemoryCleanupCallbackInterface,pOnCompletion,pCompletionContext,pOnFailure)	\
    ( (This)->lpVtbl -> ConfigureContinuousReader(This,TransferLength,HeaderLength,TrailerLength,NumPendingReads,pMemoryCleanupCallbackInterface,pOnCompletion,pCompletionContext,pOnFailure) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFUsbTargetPipe2_INTERFACE_DEFINED__ */


#ifndef __IWDFUsbRequestCompletionParams_INTERFACE_DEFINED__
#define __IWDFUsbRequestCompletionParams_INTERFACE_DEFINED__

/* interface IWDFUsbRequestCompletionParams */
/* [unique][local][object][uuid] */ 


EXTERN_C const IID IID_IWDFUsbRequestCompletionParams;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5cb1d859-f7ee-411e-9fa5-0159cc118324")
    IWDFUsbRequestCompletionParams : public IWDFRequestCompletionParams
    {
    public:
        virtual WDF_USB_REQUEST_TYPE STDMETHODCALLTYPE GetCompletedUsbRequestType( void) = 0;
        
        virtual void STDMETHODCALLTYPE GetDeviceControlTransferParameters( 
            /* [annotation][unique][out] */ 
            _Out_opt_  IWDFMemory **ppMemory,
            /* [annotation][unique][out] */ 
            _Out_opt_  ULONG *pLengthTransferred,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pOffset,
            /* [annotation][unique][out] */ 
            _Out_opt_  PWINUSB_SETUP_PACKET pSetupPacket) = 0;
        
        virtual void STDMETHODCALLTYPE GetPipeWriteParameters( 
            /* [annotation][unique][out] */ 
            _Out_opt_  IWDFMemory **ppWriteMemory,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pBytesWritten,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pWriteMemoryOffset) = 0;
        
        virtual void STDMETHODCALLTYPE GetPipeReadParameters( 
            /* [annotation][unique][out] */ 
            _Out_opt_  IWDFMemory **ppReadMemory,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pBytesRead,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pReadMemoryOffset) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWDFUsbRequestCompletionParamsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFUsbRequestCompletionParams * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFUsbRequestCompletionParams * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFUsbRequestCompletionParams * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCompletionStatus )( 
            IWDFUsbRequestCompletionParams * This);
        
        ULONG_PTR ( STDMETHODCALLTYPE *GetInformation )( 
            IWDFUsbRequestCompletionParams * This);
        
        WDF_REQUEST_TYPE ( STDMETHODCALLTYPE *GetCompletedRequestType )( 
            IWDFUsbRequestCompletionParams * This);
        
        WDF_USB_REQUEST_TYPE ( STDMETHODCALLTYPE *GetCompletedUsbRequestType )( 
            IWDFUsbRequestCompletionParams * This);
        
        void ( STDMETHODCALLTYPE *GetDeviceControlTransferParameters )( 
            IWDFUsbRequestCompletionParams * This,
            /* [annotation][unique][out] */ 
            _Out_opt_  IWDFMemory **ppMemory,
            /* [annotation][unique][out] */ 
            _Out_opt_  ULONG *pLengthTransferred,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pOffset,
            /* [annotation][unique][out] */ 
            _Out_opt_  PWINUSB_SETUP_PACKET pSetupPacket);
        
        void ( STDMETHODCALLTYPE *GetPipeWriteParameters )( 
            IWDFUsbRequestCompletionParams * This,
            /* [annotation][unique][out] */ 
            _Out_opt_  IWDFMemory **ppWriteMemory,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pBytesWritten,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pWriteMemoryOffset);
        
        void ( STDMETHODCALLTYPE *GetPipeReadParameters )( 
            IWDFUsbRequestCompletionParams * This,
            /* [annotation][unique][out] */ 
            _Out_opt_  IWDFMemory **ppReadMemory,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pBytesRead,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pReadMemoryOffset);
        
        END_INTERFACE
    } IWDFUsbRequestCompletionParamsVtbl;

    interface IWDFUsbRequestCompletionParams
    {
        CONST_VTBL struct IWDFUsbRequestCompletionParamsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFUsbRequestCompletionParams_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFUsbRequestCompletionParams_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFUsbRequestCompletionParams_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFUsbRequestCompletionParams_GetCompletionStatus(This)	\
    ( (This)->lpVtbl -> GetCompletionStatus(This) ) 

#define IWDFUsbRequestCompletionParams_GetInformation(This)	\
    ( (This)->lpVtbl -> GetInformation(This) ) 

#define IWDFUsbRequestCompletionParams_GetCompletedRequestType(This)	\
    ( (This)->lpVtbl -> GetCompletedRequestType(This) ) 


#define IWDFUsbRequestCompletionParams_GetCompletedUsbRequestType(This)	\
    ( (This)->lpVtbl -> GetCompletedUsbRequestType(This) ) 

#define IWDFUsbRequestCompletionParams_GetDeviceControlTransferParameters(This,ppMemory,pLengthTransferred,pOffset,pSetupPacket)	\
    ( (This)->lpVtbl -> GetDeviceControlTransferParameters(This,ppMemory,pLengthTransferred,pOffset,pSetupPacket) ) 

#define IWDFUsbRequestCompletionParams_GetPipeWriteParameters(This,ppWriteMemory,pBytesWritten,pWriteMemoryOffset)	\
    ( (This)->lpVtbl -> GetPipeWriteParameters(This,ppWriteMemory,pBytesWritten,pWriteMemoryOffset) ) 

#define IWDFUsbRequestCompletionParams_GetPipeReadParameters(This,ppReadMemory,pBytesRead,pReadMemoryOffset)	\
    ( (This)->lpVtbl -> GetPipeReadParameters(This,ppReadMemory,pBytesRead,pReadMemoryOffset) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFUsbRequestCompletionParams_INTERFACE_DEFINED__ */



#ifndef __WUDFUSBLib_LIBRARY_DEFINED__
#define __WUDFUSBLib_LIBRARY_DEFINED__

/* library WUDFUSBLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_WUDFUSBLib;

EXTERN_C const CLSID CLSID_WUDFUSB;

#ifdef __cplusplus

class DECLSPEC_UUID("831AC37F-E0C6-465f-858B-A63D35F277D7")
WUDFUSB;
#endif
#endif /* __WUDFUSBLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



