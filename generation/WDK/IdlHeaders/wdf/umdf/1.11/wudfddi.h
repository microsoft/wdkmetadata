

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0595 */
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
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

#ifndef __wudfddi_h__
#define __wudfddi_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IWDFObject_FWD_DEFINED__
#define __IWDFObject_FWD_DEFINED__
typedef interface IWDFObject IWDFObject;

#endif 	/* __IWDFObject_FWD_DEFINED__ */


#ifndef __IWDFDriver_FWD_DEFINED__
#define __IWDFDriver_FWD_DEFINED__
typedef interface IWDFDriver IWDFDriver;

#endif 	/* __IWDFDriver_FWD_DEFINED__ */


#ifndef __IWDFDeviceInitialize_FWD_DEFINED__
#define __IWDFDeviceInitialize_FWD_DEFINED__
typedef interface IWDFDeviceInitialize IWDFDeviceInitialize;

#endif 	/* __IWDFDeviceInitialize_FWD_DEFINED__ */


#ifndef __IWDFDeviceInitialize2_FWD_DEFINED__
#define __IWDFDeviceInitialize2_FWD_DEFINED__
typedef interface IWDFDeviceInitialize2 IWDFDeviceInitialize2;

#endif 	/* __IWDFDeviceInitialize2_FWD_DEFINED__ */


#ifndef __IWDFDevice_FWD_DEFINED__
#define __IWDFDevice_FWD_DEFINED__
typedef interface IWDFDevice IWDFDevice;

#endif 	/* __IWDFDevice_FWD_DEFINED__ */


#ifndef __IWDFDevice2_FWD_DEFINED__
#define __IWDFDevice2_FWD_DEFINED__
typedef interface IWDFDevice2 IWDFDevice2;

#endif 	/* __IWDFDevice2_FWD_DEFINED__ */


#ifndef __IWDFDevice3_FWD_DEFINED__
#define __IWDFDevice3_FWD_DEFINED__
typedef interface IWDFDevice3 IWDFDevice3;

#endif 	/* __IWDFDevice3_FWD_DEFINED__ */


#ifndef __IWDFNamedPropertyStore_FWD_DEFINED__
#define __IWDFNamedPropertyStore_FWD_DEFINED__
typedef interface IWDFNamedPropertyStore IWDFNamedPropertyStore;

#endif 	/* __IWDFNamedPropertyStore_FWD_DEFINED__ */


#ifndef __IWDFNamedPropertyStore2_FWD_DEFINED__
#define __IWDFNamedPropertyStore2_FWD_DEFINED__
typedef interface IWDFNamedPropertyStore2 IWDFNamedPropertyStore2;

#endif 	/* __IWDFNamedPropertyStore2_FWD_DEFINED__ */


#ifndef __IWDFIoQueue_FWD_DEFINED__
#define __IWDFIoQueue_FWD_DEFINED__
typedef interface IWDFIoQueue IWDFIoQueue;

#endif 	/* __IWDFIoQueue_FWD_DEFINED__ */


#ifndef __IWDFIoRequest_FWD_DEFINED__
#define __IWDFIoRequest_FWD_DEFINED__
typedef interface IWDFIoRequest IWDFIoRequest;

#endif 	/* __IWDFIoRequest_FWD_DEFINED__ */


#ifndef __IWDFIoRequest2_FWD_DEFINED__
#define __IWDFIoRequest2_FWD_DEFINED__
typedef interface IWDFIoRequest2 IWDFIoRequest2;

#endif 	/* __IWDFIoRequest2_FWD_DEFINED__ */


#ifndef __IWDFIoRequest3_FWD_DEFINED__
#define __IWDFIoRequest3_FWD_DEFINED__
typedef interface IWDFIoRequest3 IWDFIoRequest3;

#endif 	/* __IWDFIoRequest3_FWD_DEFINED__ */


#ifndef __IWDFRequestCompletionParams_FWD_DEFINED__
#define __IWDFRequestCompletionParams_FWD_DEFINED__
typedef interface IWDFRequestCompletionParams IWDFRequestCompletionParams;

#endif 	/* __IWDFRequestCompletionParams_FWD_DEFINED__ */


#ifndef __IWDFIoRequestCompletionParams_FWD_DEFINED__
#define __IWDFIoRequestCompletionParams_FWD_DEFINED__
typedef interface IWDFIoRequestCompletionParams IWDFIoRequestCompletionParams;

#endif 	/* __IWDFIoRequestCompletionParams_FWD_DEFINED__ */


#ifndef __IWDFFile_FWD_DEFINED__
#define __IWDFFile_FWD_DEFINED__
typedef interface IWDFFile IWDFFile;

#endif 	/* __IWDFFile_FWD_DEFINED__ */


#ifndef __IWDFFile2_FWD_DEFINED__
#define __IWDFFile2_FWD_DEFINED__
typedef interface IWDFFile2 IWDFFile2;

#endif 	/* __IWDFFile2_FWD_DEFINED__ */


#ifndef __IWDFFile3_FWD_DEFINED__
#define __IWDFFile3_FWD_DEFINED__
typedef interface IWDFFile3 IWDFFile3;

#endif 	/* __IWDFFile3_FWD_DEFINED__ */


#ifndef __IWDFDriverCreatedFile_FWD_DEFINED__
#define __IWDFDriverCreatedFile_FWD_DEFINED__
typedef interface IWDFDriverCreatedFile IWDFDriverCreatedFile;

#endif 	/* __IWDFDriverCreatedFile_FWD_DEFINED__ */


#ifndef __IWDFIoTarget_FWD_DEFINED__
#define __IWDFIoTarget_FWD_DEFINED__
typedef interface IWDFIoTarget IWDFIoTarget;

#endif 	/* __IWDFIoTarget_FWD_DEFINED__ */


#ifndef __IWDFIoTarget2_FWD_DEFINED__
#define __IWDFIoTarget2_FWD_DEFINED__
typedef interface IWDFIoTarget2 IWDFIoTarget2;

#endif 	/* __IWDFIoTarget2_FWD_DEFINED__ */


#ifndef __IWDFIoTargetStateManagement_FWD_DEFINED__
#define __IWDFIoTargetStateManagement_FWD_DEFINED__
typedef interface IWDFIoTargetStateManagement IWDFIoTargetStateManagement;

#endif 	/* __IWDFIoTargetStateManagement_FWD_DEFINED__ */


#ifndef __IWDFRemoteTarget_FWD_DEFINED__
#define __IWDFRemoteTarget_FWD_DEFINED__
typedef interface IWDFRemoteTarget IWDFRemoteTarget;

#endif 	/* __IWDFRemoteTarget_FWD_DEFINED__ */


#ifndef __IWDFFileHandleTargetFactory_FWD_DEFINED__
#define __IWDFFileHandleTargetFactory_FWD_DEFINED__
typedef interface IWDFFileHandleTargetFactory IWDFFileHandleTargetFactory;

#endif 	/* __IWDFFileHandleTargetFactory_FWD_DEFINED__ */


#ifndef __IWDFMemory_FWD_DEFINED__
#define __IWDFMemory_FWD_DEFINED__
typedef interface IWDFMemory IWDFMemory;

#endif 	/* __IWDFMemory_FWD_DEFINED__ */


#ifndef __IWDFRemoteInterfaceInitialize_FWD_DEFINED__
#define __IWDFRemoteInterfaceInitialize_FWD_DEFINED__
typedef interface IWDFRemoteInterfaceInitialize IWDFRemoteInterfaceInitialize;

#endif 	/* __IWDFRemoteInterfaceInitialize_FWD_DEFINED__ */


#ifndef __IWDFRemoteInterface_FWD_DEFINED__
#define __IWDFRemoteInterface_FWD_DEFINED__
typedef interface IWDFRemoteInterface IWDFRemoteInterface;

#endif 	/* __IWDFRemoteInterface_FWD_DEFINED__ */


#ifndef __IWDFPropertyStoreFactory_FWD_DEFINED__
#define __IWDFPropertyStoreFactory_FWD_DEFINED__
typedef interface IWDFPropertyStoreFactory IWDFPropertyStoreFactory;

#endif 	/* __IWDFPropertyStoreFactory_FWD_DEFINED__ */


#ifndef __IWDFUnifiedPropertyStore_FWD_DEFINED__
#define __IWDFUnifiedPropertyStore_FWD_DEFINED__
typedef interface IWDFUnifiedPropertyStore IWDFUnifiedPropertyStore;

#endif 	/* __IWDFUnifiedPropertyStore_FWD_DEFINED__ */


#ifndef __IWDFUnifiedPropertyStoreFactory_FWD_DEFINED__
#define __IWDFUnifiedPropertyStoreFactory_FWD_DEFINED__
typedef interface IWDFUnifiedPropertyStoreFactory IWDFUnifiedPropertyStoreFactory;

#endif 	/* __IWDFUnifiedPropertyStoreFactory_FWD_DEFINED__ */


#ifndef __IWDFCmResourceList_FWD_DEFINED__
#define __IWDFCmResourceList_FWD_DEFINED__
typedef interface IWDFCmResourceList IWDFCmResourceList;

#endif 	/* __IWDFCmResourceList_FWD_DEFINED__ */


#ifndef __IWDFInterrupt_FWD_DEFINED__
#define __IWDFInterrupt_FWD_DEFINED__
typedef interface IWDFInterrupt IWDFInterrupt;

#endif 	/* __IWDFInterrupt_FWD_DEFINED__ */


#ifndef __IWDFWorkItem_FWD_DEFINED__
#define __IWDFWorkItem_FWD_DEFINED__
typedef interface IWDFWorkItem IWDFWorkItem;

#endif 	/* __IWDFWorkItem_FWD_DEFINED__ */


#ifndef __IObjectCleanup_FWD_DEFINED__
#define __IObjectCleanup_FWD_DEFINED__
typedef interface IObjectCleanup IObjectCleanup;

#endif 	/* __IObjectCleanup_FWD_DEFINED__ */


#ifndef __IDriverEntry_FWD_DEFINED__
#define __IDriverEntry_FWD_DEFINED__
typedef interface IDriverEntry IDriverEntry;

#endif 	/* __IDriverEntry_FWD_DEFINED__ */


#ifndef __IPnpCallback_FWD_DEFINED__
#define __IPnpCallback_FWD_DEFINED__
typedef interface IPnpCallback IPnpCallback;

#endif 	/* __IPnpCallback_FWD_DEFINED__ */


#ifndef __IPnpCallbackSelfManagedIo_FWD_DEFINED__
#define __IPnpCallbackSelfManagedIo_FWD_DEFINED__
typedef interface IPnpCallbackSelfManagedIo IPnpCallbackSelfManagedIo;

#endif 	/* __IPnpCallbackSelfManagedIo_FWD_DEFINED__ */


#ifndef __IPnpCallbackHardware_FWD_DEFINED__
#define __IPnpCallbackHardware_FWD_DEFINED__
typedef interface IPnpCallbackHardware IPnpCallbackHardware;

#endif 	/* __IPnpCallbackHardware_FWD_DEFINED__ */


#ifndef __IPnpCallbackHardware2_FWD_DEFINED__
#define __IPnpCallbackHardware2_FWD_DEFINED__
typedef interface IPnpCallbackHardware2 IPnpCallbackHardware2;

#endif 	/* __IPnpCallbackHardware2_FWD_DEFINED__ */


#ifndef __IPowerPolicyCallbackWakeFromS0_FWD_DEFINED__
#define __IPowerPolicyCallbackWakeFromS0_FWD_DEFINED__
typedef interface IPowerPolicyCallbackWakeFromS0 IPowerPolicyCallbackWakeFromS0;

#endif 	/* __IPowerPolicyCallbackWakeFromS0_FWD_DEFINED__ */


#ifndef __IPowerPolicyCallbackWakeFromSx_FWD_DEFINED__
#define __IPowerPolicyCallbackWakeFromSx_FWD_DEFINED__
typedef interface IPowerPolicyCallbackWakeFromSx IPowerPolicyCallbackWakeFromSx;

#endif 	/* __IPowerPolicyCallbackWakeFromSx_FWD_DEFINED__ */


#ifndef __IQueueCallbackCreate_FWD_DEFINED__
#define __IQueueCallbackCreate_FWD_DEFINED__
typedef interface IQueueCallbackCreate IQueueCallbackCreate;

#endif 	/* __IQueueCallbackCreate_FWD_DEFINED__ */


#ifndef __IQueueCallbackRead_FWD_DEFINED__
#define __IQueueCallbackRead_FWD_DEFINED__
typedef interface IQueueCallbackRead IQueueCallbackRead;

#endif 	/* __IQueueCallbackRead_FWD_DEFINED__ */


#ifndef __IQueueCallbackWrite_FWD_DEFINED__
#define __IQueueCallbackWrite_FWD_DEFINED__
typedef interface IQueueCallbackWrite IQueueCallbackWrite;

#endif 	/* __IQueueCallbackWrite_FWD_DEFINED__ */


#ifndef __IQueueCallbackDeviceIoControl_FWD_DEFINED__
#define __IQueueCallbackDeviceIoControl_FWD_DEFINED__
typedef interface IQueueCallbackDeviceIoControl IQueueCallbackDeviceIoControl;

#endif 	/* __IQueueCallbackDeviceIoControl_FWD_DEFINED__ */


#ifndef __IQueueCallbackDefaultIoHandler_FWD_DEFINED__
#define __IQueueCallbackDefaultIoHandler_FWD_DEFINED__
typedef interface IQueueCallbackDefaultIoHandler IQueueCallbackDefaultIoHandler;

#endif 	/* __IQueueCallbackDefaultIoHandler_FWD_DEFINED__ */


#ifndef __IQueueCallbackStateChange_FWD_DEFINED__
#define __IQueueCallbackStateChange_FWD_DEFINED__
typedef interface IQueueCallbackStateChange IQueueCallbackStateChange;

#endif 	/* __IQueueCallbackStateChange_FWD_DEFINED__ */


#ifndef __IQueueCallbackIoStop_FWD_DEFINED__
#define __IQueueCallbackIoStop_FWD_DEFINED__
typedef interface IQueueCallbackIoStop IQueueCallbackIoStop;

#endif 	/* __IQueueCallbackIoStop_FWD_DEFINED__ */


#ifndef __IQueueCallbackIoResume_FWD_DEFINED__
#define __IQueueCallbackIoResume_FWD_DEFINED__
typedef interface IQueueCallbackIoResume IQueueCallbackIoResume;

#endif 	/* __IQueueCallbackIoResume_FWD_DEFINED__ */


#ifndef __IQueueCallbackIoCanceledOnQueue_FWD_DEFINED__
#define __IQueueCallbackIoCanceledOnQueue_FWD_DEFINED__
typedef interface IQueueCallbackIoCanceledOnQueue IQueueCallbackIoCanceledOnQueue;

#endif 	/* __IQueueCallbackIoCanceledOnQueue_FWD_DEFINED__ */


#ifndef __IRequestCallbackCancel_FWD_DEFINED__
#define __IRequestCallbackCancel_FWD_DEFINED__
typedef interface IRequestCallbackCancel IRequestCallbackCancel;

#endif 	/* __IRequestCallbackCancel_FWD_DEFINED__ */


#ifndef __IRequestCallbackRequestCompletion_FWD_DEFINED__
#define __IRequestCallbackRequestCompletion_FWD_DEFINED__
typedef interface IRequestCallbackRequestCompletion IRequestCallbackRequestCompletion;

#endif 	/* __IRequestCallbackRequestCompletion_FWD_DEFINED__ */


#ifndef __IFileCallbackCleanup_FWD_DEFINED__
#define __IFileCallbackCleanup_FWD_DEFINED__
typedef interface IFileCallbackCleanup IFileCallbackCleanup;

#endif 	/* __IFileCallbackCleanup_FWD_DEFINED__ */


#ifndef __IFileCallbackClose_FWD_DEFINED__
#define __IFileCallbackClose_FWD_DEFINED__
typedef interface IFileCallbackClose IFileCallbackClose;

#endif 	/* __IFileCallbackClose_FWD_DEFINED__ */


#ifndef __IImpersonateCallback_FWD_DEFINED__
#define __IImpersonateCallback_FWD_DEFINED__
typedef interface IImpersonateCallback IImpersonateCallback;

#endif 	/* __IImpersonateCallback_FWD_DEFINED__ */


#ifndef __IPnpCallbackRemoteInterfaceNotification_FWD_DEFINED__
#define __IPnpCallbackRemoteInterfaceNotification_FWD_DEFINED__
typedef interface IPnpCallbackRemoteInterfaceNotification IPnpCallbackRemoteInterfaceNotification;

#endif 	/* __IPnpCallbackRemoteInterfaceNotification_FWD_DEFINED__ */


#ifndef __IRemoteInterfaceCallbackRemoval_FWD_DEFINED__
#define __IRemoteInterfaceCallbackRemoval_FWD_DEFINED__
typedef interface IRemoteInterfaceCallbackRemoval IRemoteInterfaceCallbackRemoval;

#endif 	/* __IRemoteInterfaceCallbackRemoval_FWD_DEFINED__ */


#ifndef __IRemoteInterfaceCallbackEvent_FWD_DEFINED__
#define __IRemoteInterfaceCallbackEvent_FWD_DEFINED__
typedef interface IRemoteInterfaceCallbackEvent IRemoteInterfaceCallbackEvent;

#endif 	/* __IRemoteInterfaceCallbackEvent_FWD_DEFINED__ */


#ifndef __IRemoteTargetCallbackRemoval_FWD_DEFINED__
#define __IRemoteTargetCallbackRemoval_FWD_DEFINED__
typedef interface IRemoteTargetCallbackRemoval IRemoteTargetCallbackRemoval;

#endif 	/* __IRemoteTargetCallbackRemoval_FWD_DEFINED__ */


#ifndef __IPnpCallbackHardwareInterrupt_FWD_DEFINED__
#define __IPnpCallbackHardwareInterrupt_FWD_DEFINED__
typedef interface IPnpCallbackHardwareInterrupt IPnpCallbackHardwareInterrupt;

#endif 	/* __IPnpCallbackHardwareInterrupt_FWD_DEFINED__ */


#ifndef __WUDFDDI_FWD_DEFINED__
#define __WUDFDDI_FWD_DEFINED__

#ifdef __cplusplus
typedef class WUDFDDI WUDFDDI;
#else
typedef struct WUDFDDI WUDFDDI;
#endif /* __cplusplus */

#endif 	/* __WUDFDDI_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "wudfwdm.h"
#include "wudfddi_types.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_wudfddi_0000_0000 */
/* [local] */ 

#include <driverspecs.h>
__user_driver;
#ifdef MIDL_PASS
typedef 
enum _DEVICE_POWER_STATE
    {
        PowerDeviceUnspecified	= 0,
        PowerDeviceD0	= ( PowerDeviceUnspecified + 1 ) ,
        PowerDeviceD1	= ( PowerDeviceD0 + 1 ) ,
        PowerDeviceD2	= ( PowerDeviceD1 + 1 ) ,
        PowerDeviceD3	= ( PowerDeviceD2 + 1 ) ,
        PowerDeviceMaximum	= ( PowerDeviceD3 + 1 ) 
    } 	DEVICE_POWER_STATE;

typedef enum _DEVICE_POWER_STATE *PDEVICE_POWER_STATE;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_wudfddi_0000_0000_0001
    {
        PowerActionNone	= 0,
        PowerActionReserved	= ( PowerActionNone + 1 ) ,
        PowerActionSleep	= ( PowerActionReserved + 1 ) ,
        PowerActionHibernate	= ( PowerActionSleep + 1 ) ,
        PowerActionShutdown	= ( PowerActionHibernate + 1 ) ,
        PowerActionShutdownReset	= ( PowerActionShutdown + 1 ) ,
        PowerActionShutdownOff	= ( PowerActionShutdownReset + 1 ) ,
        PowerActionWarmEject	= ( PowerActionShutdownOff + 1 ) 
    } 	POWER_ACTION;

typedef enum __MIDL___MIDL_itf_wudfddi_0000_0000_0001 *PPOWER_ACTION;

#endif
#define UMDF_DDI_VIEW UMDF_DDI_VIEW_PUBLIC
#ifndef UMDF_DRIVER
#define UMDF_DRIVER
#endif
#if !(NO_UMDF_VERSION_EXPORT)

__declspec(dllexport)
__declspec(selectany)
UMDF_VERSION_DATA Microsoft_WDF_UMDF_Version = {1,
                                                11,
                                                0};

#endif
#ifdef MIDL_PASS
typedef 
enum _SECURITY_IMPERSONATION_LEVEL
    {
        SecurityAnonymous	= 0,
        SecurityIdentification	= ( SecurityAnonymous + 1 ) ,
        SecurityImpersonation	= ( SecurityIdentification + 1 ) ,
        SecurityDelegation	= ( SecurityImpersonation + 1 ) 
    } 	SECURITY_IMPERSONATION_LEVEL;

#endif
#ifdef MIDL_PASS
typedef void *DEVPROPKEY;

typedef void *DEVPROPTYPE;

#else
#include <devpropdef.h>
#endif
#ifndef STATUS_WDF_PAUSED
#define STATUS_WDF_PAUSED       ((NTSTATUS)0xC0200203L)
#endif
#ifndef STATUS_WDF_BUSY
#define STATUS_WDF_BUSY         ((NTSTATUS)0xC0200204L)
#endif
#include "wudfdevice.h" 
#include "wudfinterrupt.h" 
#include "wudfworkitem.h" 
#ifdef MIDL_PASS
typedef PVOID PCM_PARTIAL_RESOURCE_DESCRIPTOR;

typedef PVOID PWUDF_INTERRUPT_CONFIG;

typedef PVOID PWDF_INTERRUPT_INFO;

typedef PVOID PWDF_INTERRUPT_EXTENDED_POLICY;

typedef PVOID PFN_WUDF_WORKITEM;

typedef PVOID PWUDF_WORKITEM_CONFIG;

typedef 
enum _WDF_INTERRUPT_POLICY
    {
        WdfIrqPolicyMachineDefault	= 0,
        WdfIrqPolicyAllCloseProcessors	= ( WdfIrqPolicyMachineDefault + 1 ) ,
        WdfIrqPolicyOneCloseProcessor	= ( WdfIrqPolicyAllCloseProcessors + 1 ) ,
        WdfIrqPolicyAllProcessorsInMachine	= ( WdfIrqPolicyOneCloseProcessor + 1 ) ,
        WdfIrqPolicySpecifiedProcessors	= ( WdfIrqPolicyAllProcessorsInMachine + 1 ) ,
        WdfIrqPolicySpreadMessagesAcrossAllProcessors	= ( WdfIrqPolicySpecifiedProcessors + 1 ) 
    } 	WDF_INTERRUPT_POLICY;

typedef enum _WDF_INTERRUPT_POLICY *PWDF_INTERRUPT_POLICY;

typedef 
enum _WDF_INTERRUPT_PRIORITY
    {
        WdfIrqPriorityUndefined	= 0,
        WdfIrqPriorityLow	= ( WdfIrqPriorityUndefined + 1 ) ,
        WdfIrqPriorityNormal	= ( WdfIrqPriorityLow + 1 ) ,
        WdfIrqPriorityHigh	= ( WdfIrqPriorityNormal + 1 ) 
    } 	WDF_INTERRUPT_PRIORITY;

typedef enum _WDF_INTERRUPT_PRIORITY *PWDF_INTERRUPT_PRIORITY;

#endif




























































extern RPC_IF_HANDLE __MIDL_itf_wudfddi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wudfddi_0000_0000_v0_0_s_ifspec;

#ifndef __IWDFObject_INTERFACE_DEFINED__
#define __IWDFObject_INTERFACE_DEFINED__

/* interface IWDFObject */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWDFObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("64275C66-2E71-4060-B5F4-3A76DF96ED3C")
    IWDFObject : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE DeleteWdfObject( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AssignContext( 
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  IObjectCleanup *pCleanupCallback,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  void *pContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RetrieveContext( 
            /* [annotation][out] */ 
            _Out_  void **ppvContext) = 0;
        
        virtual void STDMETHODCALLTYPE AcquireLock( void) = 0;
        
        virtual void STDMETHODCALLTYPE ReleaseLock( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWDFObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteWdfObject )( 
            IWDFObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *AssignContext )( 
            IWDFObject * This,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  IObjectCleanup *pCleanupCallback,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  void *pContext);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveContext )( 
            IWDFObject * This,
            /* [annotation][out] */ 
            _Out_  void **ppvContext);
        
        void ( STDMETHODCALLTYPE *AcquireLock )( 
            IWDFObject * This);
        
        void ( STDMETHODCALLTYPE *ReleaseLock )( 
            IWDFObject * This);
        
        END_INTERFACE
    } IWDFObjectVtbl;

    interface IWDFObject
    {
        CONST_VTBL struct IWDFObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFObject_DeleteWdfObject(This)	\
    ( (This)->lpVtbl -> DeleteWdfObject(This) ) 

#define IWDFObject_AssignContext(This,pCleanupCallback,pContext)	\
    ( (This)->lpVtbl -> AssignContext(This,pCleanupCallback,pContext) ) 

#define IWDFObject_RetrieveContext(This,ppvContext)	\
    ( (This)->lpVtbl -> RetrieveContext(This,ppvContext) ) 

#define IWDFObject_AcquireLock(This)	\
    ( (This)->lpVtbl -> AcquireLock(This) ) 

#define IWDFObject_ReleaseLock(This)	\
    ( (This)->lpVtbl -> ReleaseLock(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFObject_INTERFACE_DEFINED__ */


#ifndef __IWDFDriver_INTERFACE_DEFINED__
#define __IWDFDriver_INTERFACE_DEFINED__

/* interface IWDFDriver */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWDFDriver;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AD368EBE-4139-43e3-A875-69B266A9139C")
    IWDFDriver : public IWDFObject
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateDevice( 
            /* [annotation][in] */ 
            _In_  IWDFDeviceInitialize *pDeviceInit,
            /* [annotation][unique][in] */ 
            _In_opt_  IUnknown *pCallbackInterface,
            /* [annotation][out] */ 
            _Out_  IWDFDevice **ppDevice) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateWdfObject( 
            /* [annotation][unique][in] */ 
            _In_opt_  IUnknown *pCallbackInterface,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFObject *pParentObject,
            /* [annotation][out] */ 
            _Out_  IWDFObject **ppWdfObject) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreatePreallocatedWdfMemory( 
            /* [annotation][size_is][in] */ 
            _In_reads_bytes_(BufferSize)  BYTE *pBuff,
            /* [annotation][in] */ 
            _In_  SIZE_T BufferSize,
            /* [annotation][unique][in] */ 
            _In_opt_  IUnknown *pCallbackInterface,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFObject *pParentObject,
            /* [annotation][out] */ 
            _Out_  IWDFMemory **ppWdfMemory) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateWdfMemory( 
            /* [annotation][in] */ 
            _In_  SIZE_T BufferSize,
            /* [annotation][unique][in] */ 
            _In_opt_  IUnknown *pCallbackInterface,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFObject *pParentObject,
            /* [annotation][out] */ 
            _Out_  IWDFMemory **ppWdfMemory) = 0;
        
        virtual BOOL STDMETHODCALLTYPE IsVersionAvailable( 
            /* [annotation][in] */ 
            _In_  UMDF_VERSION_DATA *pMinimumVersion) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RetrieveVersionString( 
            /* [annotation][unique][out][string] */ 
            _Out_writes_to_opt_(*pdwVersionLength, *pdwVersionLength)  PWSTR pVersion,
            /* [annotation][out][in] */ 
            _Inout_  DWORD *pdwVersionLength) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWDFDriverVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFDriver * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFDriver * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFDriver * This);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteWdfObject )( 
            IWDFDriver * This);
        
        HRESULT ( STDMETHODCALLTYPE *AssignContext )( 
            IWDFDriver * This,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  IObjectCleanup *pCleanupCallback,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  void *pContext);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveContext )( 
            IWDFDriver * This,
            /* [annotation][out] */ 
            _Out_  void **ppvContext);
        
        void ( STDMETHODCALLTYPE *AcquireLock )( 
            IWDFDriver * This);
        
        void ( STDMETHODCALLTYPE *ReleaseLock )( 
            IWDFDriver * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateDevice )( 
            IWDFDriver * This,
            /* [annotation][in] */ 
            _In_  IWDFDeviceInitialize *pDeviceInit,
            /* [annotation][unique][in] */ 
            _In_opt_  IUnknown *pCallbackInterface,
            /* [annotation][out] */ 
            _Out_  IWDFDevice **ppDevice);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWdfObject )( 
            IWDFDriver * This,
            /* [annotation][unique][in] */ 
            _In_opt_  IUnknown *pCallbackInterface,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFObject *pParentObject,
            /* [annotation][out] */ 
            _Out_  IWDFObject **ppWdfObject);
        
        HRESULT ( STDMETHODCALLTYPE *CreatePreallocatedWdfMemory )( 
            IWDFDriver * This,
            /* [annotation][size_is][in] */ 
            _In_reads_bytes_(BufferSize)  BYTE *pBuff,
            /* [annotation][in] */ 
            _In_  SIZE_T BufferSize,
            /* [annotation][unique][in] */ 
            _In_opt_  IUnknown *pCallbackInterface,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFObject *pParentObject,
            /* [annotation][out] */ 
            _Out_  IWDFMemory **ppWdfMemory);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWdfMemory )( 
            IWDFDriver * This,
            /* [annotation][in] */ 
            _In_  SIZE_T BufferSize,
            /* [annotation][unique][in] */ 
            _In_opt_  IUnknown *pCallbackInterface,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFObject *pParentObject,
            /* [annotation][out] */ 
            _Out_  IWDFMemory **ppWdfMemory);
        
        BOOL ( STDMETHODCALLTYPE *IsVersionAvailable )( 
            IWDFDriver * This,
            /* [annotation][in] */ 
            _In_  UMDF_VERSION_DATA *pMinimumVersion);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveVersionString )( 
            IWDFDriver * This,
            /* [annotation][unique][out][string] */ 
            _Out_writes_to_opt_(*pdwVersionLength, *pdwVersionLength)  PWSTR pVersion,
            /* [annotation][out][in] */ 
            _Inout_  DWORD *pdwVersionLength);
        
        END_INTERFACE
    } IWDFDriverVtbl;

    interface IWDFDriver
    {
        CONST_VTBL struct IWDFDriverVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFDriver_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFDriver_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFDriver_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFDriver_DeleteWdfObject(This)	\
    ( (This)->lpVtbl -> DeleteWdfObject(This) ) 

#define IWDFDriver_AssignContext(This,pCleanupCallback,pContext)	\
    ( (This)->lpVtbl -> AssignContext(This,pCleanupCallback,pContext) ) 

#define IWDFDriver_RetrieveContext(This,ppvContext)	\
    ( (This)->lpVtbl -> RetrieveContext(This,ppvContext) ) 

#define IWDFDriver_AcquireLock(This)	\
    ( (This)->lpVtbl -> AcquireLock(This) ) 

#define IWDFDriver_ReleaseLock(This)	\
    ( (This)->lpVtbl -> ReleaseLock(This) ) 


#define IWDFDriver_CreateDevice(This,pDeviceInit,pCallbackInterface,ppDevice)	\
    ( (This)->lpVtbl -> CreateDevice(This,pDeviceInit,pCallbackInterface,ppDevice) ) 

#define IWDFDriver_CreateWdfObject(This,pCallbackInterface,pParentObject,ppWdfObject)	\
    ( (This)->lpVtbl -> CreateWdfObject(This,pCallbackInterface,pParentObject,ppWdfObject) ) 

#define IWDFDriver_CreatePreallocatedWdfMemory(This,pBuff,BufferSize,pCallbackInterface,pParentObject,ppWdfMemory)	\
    ( (This)->lpVtbl -> CreatePreallocatedWdfMemory(This,pBuff,BufferSize,pCallbackInterface,pParentObject,ppWdfMemory) ) 

#define IWDFDriver_CreateWdfMemory(This,BufferSize,pCallbackInterface,pParentObject,ppWdfMemory)	\
    ( (This)->lpVtbl -> CreateWdfMemory(This,BufferSize,pCallbackInterface,pParentObject,ppWdfMemory) ) 

#define IWDFDriver_IsVersionAvailable(This,pMinimumVersion)	\
    ( (This)->lpVtbl -> IsVersionAvailable(This,pMinimumVersion) ) 

#define IWDFDriver_RetrieveVersionString(This,pVersion,pdwVersionLength)	\
    ( (This)->lpVtbl -> RetrieveVersionString(This,pVersion,pdwVersionLength) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFDriver_INTERFACE_DEFINED__ */


#ifndef __IWDFDeviceInitialize_INTERFACE_DEFINED__
#define __IWDFDeviceInitialize_INTERFACE_DEFINED__

/* interface IWDFDeviceInitialize */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWDFDeviceInitialize;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("74CC381C-0871-43c1-878B-3F7C9D16933D")
    IWDFDeviceInitialize : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE SetFilter( void) = 0;
        
        virtual void STDMETHODCALLTYPE SetLockingConstraint( 
            /* [annotation][in] */ 
            _In_  WDF_CALLBACK_CONSTRAINT LockType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RetrieveDevicePropertyStore( 
            /* [annotation][unique][in] */ 
            _In_opt_  PCWSTR pcwszServiceName,
            /* [annotation][in] */ 
            _In_  WDF_PROPERTY_STORE_RETRIEVE_FLAGS Flags,
            /* [annotation][out] */ 
            _Out_  IWDFNamedPropertyStore **ppPropStore,
            /* [annotation][unique][out] */ 
            _Out_opt_  WDF_PROPERTY_STORE_DISPOSITION *pDisposition) = 0;
        
        virtual void STDMETHODCALLTYPE SetPowerPolicyOwnership( 
            /* [annotation][in] */ 
            _In_  BOOL fTrue) = 0;
        
        virtual void STDMETHODCALLTYPE AutoForwardCreateCleanupClose( 
            /* [annotation][in] */ 
            _In_  WDF_TRI_STATE State) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RetrieveDeviceInstanceId( 
            /* [annotation][unique][out][string] */ 
            _Out_opt_  PWSTR Buffer,
            /* [annotation][out][in] */ 
            _Inout_  DWORD *pdwSizeInChars) = 0;
        
        virtual void STDMETHODCALLTYPE SetPnpCapability( 
            /* [annotation][in] */ 
            _In_  WDF_PNP_CAPABILITY Capability,
            /* [annotation][in] */ 
            _In_  WDF_TRI_STATE Value) = 0;
        
        virtual WDF_TRI_STATE STDMETHODCALLTYPE GetPnpCapability( 
            /* [annotation][in] */ 
            _In_  WDF_PNP_CAPABILITY Capability) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWDFDeviceInitializeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFDeviceInitialize * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFDeviceInitialize * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFDeviceInitialize * This);
        
        void ( STDMETHODCALLTYPE *SetFilter )( 
            IWDFDeviceInitialize * This);
        
        void ( STDMETHODCALLTYPE *SetLockingConstraint )( 
            IWDFDeviceInitialize * This,
            /* [annotation][in] */ 
            _In_  WDF_CALLBACK_CONSTRAINT LockType);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveDevicePropertyStore )( 
            IWDFDeviceInitialize * This,
            /* [annotation][unique][in] */ 
            _In_opt_  PCWSTR pcwszServiceName,
            /* [annotation][in] */ 
            _In_  WDF_PROPERTY_STORE_RETRIEVE_FLAGS Flags,
            /* [annotation][out] */ 
            _Out_  IWDFNamedPropertyStore **ppPropStore,
            /* [annotation][unique][out] */ 
            _Out_opt_  WDF_PROPERTY_STORE_DISPOSITION *pDisposition);
        
        void ( STDMETHODCALLTYPE *SetPowerPolicyOwnership )( 
            IWDFDeviceInitialize * This,
            /* [annotation][in] */ 
            _In_  BOOL fTrue);
        
        void ( STDMETHODCALLTYPE *AutoForwardCreateCleanupClose )( 
            IWDFDeviceInitialize * This,
            /* [annotation][in] */ 
            _In_  WDF_TRI_STATE State);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveDeviceInstanceId )( 
            IWDFDeviceInitialize * This,
            /* [annotation][unique][out][string] */ 
            _Out_opt_  PWSTR Buffer,
            /* [annotation][out][in] */ 
            _Inout_  DWORD *pdwSizeInChars);
        
        void ( STDMETHODCALLTYPE *SetPnpCapability )( 
            IWDFDeviceInitialize * This,
            /* [annotation][in] */ 
            _In_  WDF_PNP_CAPABILITY Capability,
            /* [annotation][in] */ 
            _In_  WDF_TRI_STATE Value);
        
        WDF_TRI_STATE ( STDMETHODCALLTYPE *GetPnpCapability )( 
            IWDFDeviceInitialize * This,
            /* [annotation][in] */ 
            _In_  WDF_PNP_CAPABILITY Capability);
        
        END_INTERFACE
    } IWDFDeviceInitializeVtbl;

    interface IWDFDeviceInitialize
    {
        CONST_VTBL struct IWDFDeviceInitializeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFDeviceInitialize_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFDeviceInitialize_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFDeviceInitialize_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFDeviceInitialize_SetFilter(This)	\
    ( (This)->lpVtbl -> SetFilter(This) ) 

#define IWDFDeviceInitialize_SetLockingConstraint(This,LockType)	\
    ( (This)->lpVtbl -> SetLockingConstraint(This,LockType) ) 

#define IWDFDeviceInitialize_RetrieveDevicePropertyStore(This,pcwszServiceName,Flags,ppPropStore,pDisposition)	\
    ( (This)->lpVtbl -> RetrieveDevicePropertyStore(This,pcwszServiceName,Flags,ppPropStore,pDisposition) ) 

#define IWDFDeviceInitialize_SetPowerPolicyOwnership(This,fTrue)	\
    ( (This)->lpVtbl -> SetPowerPolicyOwnership(This,fTrue) ) 

#define IWDFDeviceInitialize_AutoForwardCreateCleanupClose(This,State)	\
    ( (This)->lpVtbl -> AutoForwardCreateCleanupClose(This,State) ) 

#define IWDFDeviceInitialize_RetrieveDeviceInstanceId(This,Buffer,pdwSizeInChars)	\
    ( (This)->lpVtbl -> RetrieveDeviceInstanceId(This,Buffer,pdwSizeInChars) ) 

#define IWDFDeviceInitialize_SetPnpCapability(This,Capability,Value)	\
    ( (This)->lpVtbl -> SetPnpCapability(This,Capability,Value) ) 

#define IWDFDeviceInitialize_GetPnpCapability(This,Capability)	\
    ( (This)->lpVtbl -> GetPnpCapability(This,Capability) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFDeviceInitialize_INTERFACE_DEFINED__ */


#ifndef __IWDFDeviceInitialize2_INTERFACE_DEFINED__
#define __IWDFDeviceInitialize2_INTERFACE_DEFINED__

/* interface IWDFDeviceInitialize2 */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWDFDeviceInitialize2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("424c00ba-fcd0-4c52-bd4a-6c5d3ec0dfd9")
    IWDFDeviceInitialize2 : public IWDFDeviceInitialize
    {
    public:
        virtual void STDMETHODCALLTYPE SetIoTypePreference( 
            /* [annotation][in] */ 
            _In_  WDF_DEVICE_IO_BUFFER_RETRIEVAL RetrievalMode,
            /* [annotation][in] */ 
            _In_  WDF_DEVICE_IO_TYPE ReadWritePreference,
            /* [annotation][in] */ 
            _In_  WDF_DEVICE_IO_TYPE IoControlPreference) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWDFDeviceInitialize2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFDeviceInitialize2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFDeviceInitialize2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFDeviceInitialize2 * This);
        
        void ( STDMETHODCALLTYPE *SetFilter )( 
            IWDFDeviceInitialize2 * This);
        
        void ( STDMETHODCALLTYPE *SetLockingConstraint )( 
            IWDFDeviceInitialize2 * This,
            /* [annotation][in] */ 
            _In_  WDF_CALLBACK_CONSTRAINT LockType);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveDevicePropertyStore )( 
            IWDFDeviceInitialize2 * This,
            /* [annotation][unique][in] */ 
            _In_opt_  PCWSTR pcwszServiceName,
            /* [annotation][in] */ 
            _In_  WDF_PROPERTY_STORE_RETRIEVE_FLAGS Flags,
            /* [annotation][out] */ 
            _Out_  IWDFNamedPropertyStore **ppPropStore,
            /* [annotation][unique][out] */ 
            _Out_opt_  WDF_PROPERTY_STORE_DISPOSITION *pDisposition);
        
        void ( STDMETHODCALLTYPE *SetPowerPolicyOwnership )( 
            IWDFDeviceInitialize2 * This,
            /* [annotation][in] */ 
            _In_  BOOL fTrue);
        
        void ( STDMETHODCALLTYPE *AutoForwardCreateCleanupClose )( 
            IWDFDeviceInitialize2 * This,
            /* [annotation][in] */ 
            _In_  WDF_TRI_STATE State);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveDeviceInstanceId )( 
            IWDFDeviceInitialize2 * This,
            /* [annotation][unique][out][string] */ 
            _Out_opt_  PWSTR Buffer,
            /* [annotation][out][in] */ 
            _Inout_  DWORD *pdwSizeInChars);
        
        void ( STDMETHODCALLTYPE *SetPnpCapability )( 
            IWDFDeviceInitialize2 * This,
            /* [annotation][in] */ 
            _In_  WDF_PNP_CAPABILITY Capability,
            /* [annotation][in] */ 
            _In_  WDF_TRI_STATE Value);
        
        WDF_TRI_STATE ( STDMETHODCALLTYPE *GetPnpCapability )( 
            IWDFDeviceInitialize2 * This,
            /* [annotation][in] */ 
            _In_  WDF_PNP_CAPABILITY Capability);
        
        void ( STDMETHODCALLTYPE *SetIoTypePreference )( 
            IWDFDeviceInitialize2 * This,
            /* [annotation][in] */ 
            _In_  WDF_DEVICE_IO_BUFFER_RETRIEVAL RetrievalMode,
            /* [annotation][in] */ 
            _In_  WDF_DEVICE_IO_TYPE ReadWritePreference,
            /* [annotation][in] */ 
            _In_  WDF_DEVICE_IO_TYPE IoControlPreference);
        
        END_INTERFACE
    } IWDFDeviceInitialize2Vtbl;

    interface IWDFDeviceInitialize2
    {
        CONST_VTBL struct IWDFDeviceInitialize2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFDeviceInitialize2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFDeviceInitialize2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFDeviceInitialize2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFDeviceInitialize2_SetFilter(This)	\
    ( (This)->lpVtbl -> SetFilter(This) ) 

#define IWDFDeviceInitialize2_SetLockingConstraint(This,LockType)	\
    ( (This)->lpVtbl -> SetLockingConstraint(This,LockType) ) 

#define IWDFDeviceInitialize2_RetrieveDevicePropertyStore(This,pcwszServiceName,Flags,ppPropStore,pDisposition)	\
    ( (This)->lpVtbl -> RetrieveDevicePropertyStore(This,pcwszServiceName,Flags,ppPropStore,pDisposition) ) 

#define IWDFDeviceInitialize2_SetPowerPolicyOwnership(This,fTrue)	\
    ( (This)->lpVtbl -> SetPowerPolicyOwnership(This,fTrue) ) 

#define IWDFDeviceInitialize2_AutoForwardCreateCleanupClose(This,State)	\
    ( (This)->lpVtbl -> AutoForwardCreateCleanupClose(This,State) ) 

#define IWDFDeviceInitialize2_RetrieveDeviceInstanceId(This,Buffer,pdwSizeInChars)	\
    ( (This)->lpVtbl -> RetrieveDeviceInstanceId(This,Buffer,pdwSizeInChars) ) 

#define IWDFDeviceInitialize2_SetPnpCapability(This,Capability,Value)	\
    ( (This)->lpVtbl -> SetPnpCapability(This,Capability,Value) ) 

#define IWDFDeviceInitialize2_GetPnpCapability(This,Capability)	\
    ( (This)->lpVtbl -> GetPnpCapability(This,Capability) ) 


#define IWDFDeviceInitialize2_SetIoTypePreference(This,RetrievalMode,ReadWritePreference,IoControlPreference)	\
    ( (This)->lpVtbl -> SetIoTypePreference(This,RetrievalMode,ReadWritePreference,IoControlPreference) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFDeviceInitialize2_INTERFACE_DEFINED__ */


#ifndef __IWDFDevice_INTERFACE_DEFINED__
#define __IWDFDevice_INTERFACE_DEFINED__

/* interface IWDFDevice */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWDFDevice;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D657FE45-460A-49c3-8219-766AE8032A80")
    IWDFDevice : public IWDFObject
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RetrieveDevicePropertyStore( 
            /* [annotation][unique][in] */ 
            _In_opt_  PCWSTR pcwszServiceName,
            /* [annotation][in] */ 
            _In_  WDF_PROPERTY_STORE_RETRIEVE_FLAGS Flags,
            /* [annotation][out] */ 
            _Out_  IWDFNamedPropertyStore **ppPropStore,
            /* [annotation][unique][out] */ 
            _Out_opt_  WDF_PROPERTY_STORE_DISPOSITION *pDisposition) = 0;
        
        virtual void STDMETHODCALLTYPE GetDriver( 
            /* [annotation][out] */ 
            _Out_  IWDFDriver **ppWdfDriver) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RetrieveDeviceInstanceId( 
            /* [annotation][unique][out][string] */ 
            _Out_opt_  PWSTR Buffer,
            /* [annotation][out][in] */ 
            _Inout_  DWORD *pdwSizeInChars) = 0;
        
        virtual void STDMETHODCALLTYPE GetDefaultIoTarget( 
            /* [annotation][out] */ 
            _Out_  IWDFIoTarget **ppWdfIoTarget) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateWdfFile( 
            /* [annotation][string][unique][in] */ 
            _In_opt_  LPCWSTR pcwszFileName,
            /* [annotation][out] */ 
            _Out_  IWDFDriverCreatedFile **ppFile) = 0;
        
        virtual void STDMETHODCALLTYPE GetDefaultIoQueue( 
            /* [annotation][out] */ 
            _Out_  IWDFIoQueue **ppWdfIoQueue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateIoQueue( 
            /* [annotation][in] */ 
            _In_opt_  IUnknown *pCallbackInterface,
            /* [annotation][in] */ 
            _In_  BOOL bDefaultQueue,
            /* [annotation][in] */ 
            _In_  WDF_IO_QUEUE_DISPATCH_TYPE DispatchType,
            /* [annotation][in] */ 
            _In_  BOOL bPowerManaged,
            /* [annotation][in] */ 
            _In_  BOOL bAllowZeroLengthRequests,
            /* [annotation][out] */ 
            _Out_  IWDFIoQueue **ppIoQueue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateDeviceInterface( 
            /* [annotation][in] */ 
            _In_  LPCGUID pDeviceInterfaceGuid,
            /* [annotation][unique][string][in] */ 
            _In_opt_  PCWSTR pReferenceString) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AssignDeviceInterfaceState( 
            /* [annotation][in] */ 
            _In_  LPCGUID pDeviceInterfaceGuid,
            /* [annotation][unique][string][in] */ 
            _In_opt_  PCWSTR pReferenceString,
            /* [annotation][in] */ 
            _In_  BOOL Enable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RetrieveDeviceName( 
            /* [annotation][unique][out][string] */ 
            _Out_writes_to_opt_(*pdwDeviceNameLength, *pdwDeviceNameLength)  PWSTR pDeviceName,
            /* [annotation][out][in] */ 
            _Inout_  DWORD *pdwDeviceNameLength) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PostEvent( 
            /* [annotation][in] */ 
            _In_  REFGUID EventGuid,
            /* [annotation][in] */ 
            _In_  WDF_EVENT_TYPE EventType,
            /* [annotation][size_is][in] */ 
            _In_reads_bytes_(cbDataSize)  BYTE *pbData,
            /* [annotation][in] */ 
            _In_  DWORD cbDataSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ConfigureRequestDispatching( 
            /* [annotation][in] */ 
            _In_  IWDFIoQueue *pQueue,
            /* [annotation][in] */ 
            _In_  WDF_REQUEST_TYPE RequestType,
            /* [annotation][in] */ 
            _In_  BOOL Forward) = 0;
        
        virtual void STDMETHODCALLTYPE SetPnpState( 
            /* [annotation][in] */ 
            _In_  WDF_PNP_STATE State,
            /* [annotation][in] */ 
            _In_  WDF_TRI_STATE Value) = 0;
        
        virtual WDF_TRI_STATE STDMETHODCALLTYPE GetPnpState( 
            /* [annotation][in] */ 
            _In_  WDF_PNP_STATE State) = 0;
        
        virtual void STDMETHODCALLTYPE CommitPnpState( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateRequest( 
            /* [annotation][unique][in] */ 
            _In_opt_  IUnknown *pCallbackInterface,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFObject *pParentObject,
            /* [annotation][out] */ 
            _Out_  IWDFIoRequest **ppRequest) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateSymbolicLink( 
            /* [annotation][unique][string][in] */ 
            _In_  PCWSTR pSymbolicLink) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWDFDeviceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFDevice * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFDevice * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteWdfObject )( 
            IWDFDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *AssignContext )( 
            IWDFDevice * This,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  IObjectCleanup *pCleanupCallback,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  void *pContext);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveContext )( 
            IWDFDevice * This,
            /* [annotation][out] */ 
            _Out_  void **ppvContext);
        
        void ( STDMETHODCALLTYPE *AcquireLock )( 
            IWDFDevice * This);
        
        void ( STDMETHODCALLTYPE *ReleaseLock )( 
            IWDFDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveDevicePropertyStore )( 
            IWDFDevice * This,
            /* [annotation][unique][in] */ 
            _In_opt_  PCWSTR pcwszServiceName,
            /* [annotation][in] */ 
            _In_  WDF_PROPERTY_STORE_RETRIEVE_FLAGS Flags,
            /* [annotation][out] */ 
            _Out_  IWDFNamedPropertyStore **ppPropStore,
            /* [annotation][unique][out] */ 
            _Out_opt_  WDF_PROPERTY_STORE_DISPOSITION *pDisposition);
        
        void ( STDMETHODCALLTYPE *GetDriver )( 
            IWDFDevice * This,
            /* [annotation][out] */ 
            _Out_  IWDFDriver **ppWdfDriver);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveDeviceInstanceId )( 
            IWDFDevice * This,
            /* [annotation][unique][out][string] */ 
            _Out_opt_  PWSTR Buffer,
            /* [annotation][out][in] */ 
            _Inout_  DWORD *pdwSizeInChars);
        
        void ( STDMETHODCALLTYPE *GetDefaultIoTarget )( 
            IWDFDevice * This,
            /* [annotation][out] */ 
            _Out_  IWDFIoTarget **ppWdfIoTarget);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWdfFile )( 
            IWDFDevice * This,
            /* [annotation][string][unique][in] */ 
            _In_opt_  LPCWSTR pcwszFileName,
            /* [annotation][out] */ 
            _Out_  IWDFDriverCreatedFile **ppFile);
        
        void ( STDMETHODCALLTYPE *GetDefaultIoQueue )( 
            IWDFDevice * This,
            /* [annotation][out] */ 
            _Out_  IWDFIoQueue **ppWdfIoQueue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateIoQueue )( 
            IWDFDevice * This,
            /* [annotation][in] */ 
            _In_opt_  IUnknown *pCallbackInterface,
            /* [annotation][in] */ 
            _In_  BOOL bDefaultQueue,
            /* [annotation][in] */ 
            _In_  WDF_IO_QUEUE_DISPATCH_TYPE DispatchType,
            /* [annotation][in] */ 
            _In_  BOOL bPowerManaged,
            /* [annotation][in] */ 
            _In_  BOOL bAllowZeroLengthRequests,
            /* [annotation][out] */ 
            _Out_  IWDFIoQueue **ppIoQueue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateDeviceInterface )( 
            IWDFDevice * This,
            /* [annotation][in] */ 
            _In_  LPCGUID pDeviceInterfaceGuid,
            /* [annotation][unique][string][in] */ 
            _In_opt_  PCWSTR pReferenceString);
        
        HRESULT ( STDMETHODCALLTYPE *AssignDeviceInterfaceState )( 
            IWDFDevice * This,
            /* [annotation][in] */ 
            _In_  LPCGUID pDeviceInterfaceGuid,
            /* [annotation][unique][string][in] */ 
            _In_opt_  PCWSTR pReferenceString,
            /* [annotation][in] */ 
            _In_  BOOL Enable);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveDeviceName )( 
            IWDFDevice * This,
            /* [annotation][unique][out][string] */ 
            _Out_writes_to_opt_(*pdwDeviceNameLength, *pdwDeviceNameLength)  PWSTR pDeviceName,
            /* [annotation][out][in] */ 
            _Inout_  DWORD *pdwDeviceNameLength);
        
        HRESULT ( STDMETHODCALLTYPE *PostEvent )( 
            IWDFDevice * This,
            /* [annotation][in] */ 
            _In_  REFGUID EventGuid,
            /* [annotation][in] */ 
            _In_  WDF_EVENT_TYPE EventType,
            /* [annotation][size_is][in] */ 
            _In_reads_bytes_(cbDataSize)  BYTE *pbData,
            /* [annotation][in] */ 
            _In_  DWORD cbDataSize);
        
        HRESULT ( STDMETHODCALLTYPE *ConfigureRequestDispatching )( 
            IWDFDevice * This,
            /* [annotation][in] */ 
            _In_  IWDFIoQueue *pQueue,
            /* [annotation][in] */ 
            _In_  WDF_REQUEST_TYPE RequestType,
            /* [annotation][in] */ 
            _In_  BOOL Forward);
        
        void ( STDMETHODCALLTYPE *SetPnpState )( 
            IWDFDevice * This,
            /* [annotation][in] */ 
            _In_  WDF_PNP_STATE State,
            /* [annotation][in] */ 
            _In_  WDF_TRI_STATE Value);
        
        WDF_TRI_STATE ( STDMETHODCALLTYPE *GetPnpState )( 
            IWDFDevice * This,
            /* [annotation][in] */ 
            _In_  WDF_PNP_STATE State);
        
        void ( STDMETHODCALLTYPE *CommitPnpState )( 
            IWDFDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateRequest )( 
            IWDFDevice * This,
            /* [annotation][unique][in] */ 
            _In_opt_  IUnknown *pCallbackInterface,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFObject *pParentObject,
            /* [annotation][out] */ 
            _Out_  IWDFIoRequest **ppRequest);
        
        HRESULT ( STDMETHODCALLTYPE *CreateSymbolicLink )( 
            IWDFDevice * This,
            /* [annotation][unique][string][in] */ 
            _In_  PCWSTR pSymbolicLink);
        
        END_INTERFACE
    } IWDFDeviceVtbl;

    interface IWDFDevice
    {
        CONST_VTBL struct IWDFDeviceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFDevice_DeleteWdfObject(This)	\
    ( (This)->lpVtbl -> DeleteWdfObject(This) ) 

#define IWDFDevice_AssignContext(This,pCleanupCallback,pContext)	\
    ( (This)->lpVtbl -> AssignContext(This,pCleanupCallback,pContext) ) 

#define IWDFDevice_RetrieveContext(This,ppvContext)	\
    ( (This)->lpVtbl -> RetrieveContext(This,ppvContext) ) 

#define IWDFDevice_AcquireLock(This)	\
    ( (This)->lpVtbl -> AcquireLock(This) ) 

#define IWDFDevice_ReleaseLock(This)	\
    ( (This)->lpVtbl -> ReleaseLock(This) ) 


#define IWDFDevice_RetrieveDevicePropertyStore(This,pcwszServiceName,Flags,ppPropStore,pDisposition)	\
    ( (This)->lpVtbl -> RetrieveDevicePropertyStore(This,pcwszServiceName,Flags,ppPropStore,pDisposition) ) 

#define IWDFDevice_GetDriver(This,ppWdfDriver)	\
    ( (This)->lpVtbl -> GetDriver(This,ppWdfDriver) ) 

#define IWDFDevice_RetrieveDeviceInstanceId(This,Buffer,pdwSizeInChars)	\
    ( (This)->lpVtbl -> RetrieveDeviceInstanceId(This,Buffer,pdwSizeInChars) ) 

#define IWDFDevice_GetDefaultIoTarget(This,ppWdfIoTarget)	\
    ( (This)->lpVtbl -> GetDefaultIoTarget(This,ppWdfIoTarget) ) 

#define IWDFDevice_CreateWdfFile(This,pcwszFileName,ppFile)	\
    ( (This)->lpVtbl -> CreateWdfFile(This,pcwszFileName,ppFile) ) 

#define IWDFDevice_GetDefaultIoQueue(This,ppWdfIoQueue)	\
    ( (This)->lpVtbl -> GetDefaultIoQueue(This,ppWdfIoQueue) ) 

#define IWDFDevice_CreateIoQueue(This,pCallbackInterface,bDefaultQueue,DispatchType,bPowerManaged,bAllowZeroLengthRequests,ppIoQueue)	\
    ( (This)->lpVtbl -> CreateIoQueue(This,pCallbackInterface,bDefaultQueue,DispatchType,bPowerManaged,bAllowZeroLengthRequests,ppIoQueue) ) 

#define IWDFDevice_CreateDeviceInterface(This,pDeviceInterfaceGuid,pReferenceString)	\
    ( (This)->lpVtbl -> CreateDeviceInterface(This,pDeviceInterfaceGuid,pReferenceString) ) 

#define IWDFDevice_AssignDeviceInterfaceState(This,pDeviceInterfaceGuid,pReferenceString,Enable)	\
    ( (This)->lpVtbl -> AssignDeviceInterfaceState(This,pDeviceInterfaceGuid,pReferenceString,Enable) ) 

#define IWDFDevice_RetrieveDeviceName(This,pDeviceName,pdwDeviceNameLength)	\
    ( (This)->lpVtbl -> RetrieveDeviceName(This,pDeviceName,pdwDeviceNameLength) ) 

#define IWDFDevice_PostEvent(This,EventGuid,EventType,pbData,cbDataSize)	\
    ( (This)->lpVtbl -> PostEvent(This,EventGuid,EventType,pbData,cbDataSize) ) 

#define IWDFDevice_ConfigureRequestDispatching(This,pQueue,RequestType,Forward)	\
    ( (This)->lpVtbl -> ConfigureRequestDispatching(This,pQueue,RequestType,Forward) ) 

#define IWDFDevice_SetPnpState(This,State,Value)	\
    ( (This)->lpVtbl -> SetPnpState(This,State,Value) ) 

#define IWDFDevice_GetPnpState(This,State)	\
    ( (This)->lpVtbl -> GetPnpState(This,State) ) 

#define IWDFDevice_CommitPnpState(This)	\
    ( (This)->lpVtbl -> CommitPnpState(This) ) 

#define IWDFDevice_CreateRequest(This,pCallbackInterface,pParentObject,ppRequest)	\
    ( (This)->lpVtbl -> CreateRequest(This,pCallbackInterface,pParentObject,ppRequest) ) 

#define IWDFDevice_CreateSymbolicLink(This,pSymbolicLink)	\
    ( (This)->lpVtbl -> CreateSymbolicLink(This,pSymbolicLink) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFDevice_INTERFACE_DEFINED__ */


#ifndef __IWDFDevice2_INTERFACE_DEFINED__
#define __IWDFDevice2_INTERFACE_DEFINED__

/* interface IWDFDevice2 */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWDFDevice2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1B0D07B1-F596-4A76-99B3-B9492AD8DF9F")
    IWDFDevice2 : public IWDFDevice
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AssignS0IdleSettings( 
            /* [annotation][in] */ 
            _In_  WDF_POWER_POLICY_S0_IDLE_CAPABILITIES IdleCaps,
            /* [annotation][in] */ 
            _In_  DEVICE_POWER_STATE DxState,
            /* [annotation][in] */ 
            _In_  ULONG IdleTimeout,
            /* [annotation][in] */ 
            _In_  WDF_POWER_POLICY_S0_IDLE_USER_CONTROL UserControlOfIdleSettings,
            /* [annotation][in] */ 
            _In_  WDF_TRI_STATE Enabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StopIdle( 
            /* [annotation][in] */ 
            _In_  BOOL WaitForD0) = 0;
        
        virtual void STDMETHODCALLTYPE ResumeIdle( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateSymbolicLinkWithReferenceString( 
            /* [annotation][unique][string][in] */ 
            _In_  PCWSTR pSymbolicLink,
            /* [annotation][unique][string][in] */ 
            _In_opt_  PCWSTR pReferenceString) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterRemoteInterfaceNotification( 
            /* [annotation][in] */ 
            _In_  LPCGUID pDeviceInterfaceGuid,
            /* [annotation][in] */ 
            _In_  BOOL IncludeExistingInterfaces) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateRemoteInterface( 
            /* [annotation][in] */ 
            _In_  IWDFRemoteInterfaceInitialize *pRemoteInterfaceInit,
            /* [annotation][unique][in] */ 
            _In_opt_  IUnknown *pCallbackInterface,
            /* [annotation][out] */ 
            _Out_  IWDFRemoteInterface **ppRemoteInterface) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateRemoteTarget( 
            /* [annotation][unique][in] */ 
            _In_opt_  IUnknown *pCallbackInterface,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFObject *pParentObject,
            /* [annotation][out] */ 
            _Out_  IWDFRemoteTarget **ppRemoteTarget) = 0;
        
        virtual void STDMETHODCALLTYPE GetDeviceStackIoTypePreference( 
            /* [annotation][out] */ 
            _Out_  WDF_DEVICE_IO_TYPE *ReadWritePreference,
            /* [annotation][out] */ 
            _Out_  WDF_DEVICE_IO_TYPE *IoControlPreference) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AssignSxWakeSettings( 
            /* [annotation][in] */ 
            _In_  DEVICE_POWER_STATE DxState,
            /* [annotation][in] */ 
            _In_  WDF_POWER_POLICY_SX_WAKE_USER_CONTROL UserControlOfWakeSettings,
            /* [annotation][in] */ 
            _In_  WDF_TRI_STATE Enabled) = 0;
        
        virtual POWER_ACTION STDMETHODCALLTYPE GetSystemPowerAction( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWDFDevice2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFDevice2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFDevice2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFDevice2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteWdfObject )( 
            IWDFDevice2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AssignContext )( 
            IWDFDevice2 * This,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  IObjectCleanup *pCleanupCallback,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  void *pContext);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveContext )( 
            IWDFDevice2 * This,
            /* [annotation][out] */ 
            _Out_  void **ppvContext);
        
        void ( STDMETHODCALLTYPE *AcquireLock )( 
            IWDFDevice2 * This);
        
        void ( STDMETHODCALLTYPE *ReleaseLock )( 
            IWDFDevice2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveDevicePropertyStore )( 
            IWDFDevice2 * This,
            /* [annotation][unique][in] */ 
            _In_opt_  PCWSTR pcwszServiceName,
            /* [annotation][in] */ 
            _In_  WDF_PROPERTY_STORE_RETRIEVE_FLAGS Flags,
            /* [annotation][out] */ 
            _Out_  IWDFNamedPropertyStore **ppPropStore,
            /* [annotation][unique][out] */ 
            _Out_opt_  WDF_PROPERTY_STORE_DISPOSITION *pDisposition);
        
        void ( STDMETHODCALLTYPE *GetDriver )( 
            IWDFDevice2 * This,
            /* [annotation][out] */ 
            _Out_  IWDFDriver **ppWdfDriver);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveDeviceInstanceId )( 
            IWDFDevice2 * This,
            /* [annotation][unique][out][string] */ 
            _Out_opt_  PWSTR Buffer,
            /* [annotation][out][in] */ 
            _Inout_  DWORD *pdwSizeInChars);
        
        void ( STDMETHODCALLTYPE *GetDefaultIoTarget )( 
            IWDFDevice2 * This,
            /* [annotation][out] */ 
            _Out_  IWDFIoTarget **ppWdfIoTarget);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWdfFile )( 
            IWDFDevice2 * This,
            /* [annotation][string][unique][in] */ 
            _In_opt_  LPCWSTR pcwszFileName,
            /* [annotation][out] */ 
            _Out_  IWDFDriverCreatedFile **ppFile);
        
        void ( STDMETHODCALLTYPE *GetDefaultIoQueue )( 
            IWDFDevice2 * This,
            /* [annotation][out] */ 
            _Out_  IWDFIoQueue **ppWdfIoQueue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateIoQueue )( 
            IWDFDevice2 * This,
            /* [annotation][in] */ 
            _In_opt_  IUnknown *pCallbackInterface,
            /* [annotation][in] */ 
            _In_  BOOL bDefaultQueue,
            /* [annotation][in] */ 
            _In_  WDF_IO_QUEUE_DISPATCH_TYPE DispatchType,
            /* [annotation][in] */ 
            _In_  BOOL bPowerManaged,
            /* [annotation][in] */ 
            _In_  BOOL bAllowZeroLengthRequests,
            /* [annotation][out] */ 
            _Out_  IWDFIoQueue **ppIoQueue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateDeviceInterface )( 
            IWDFDevice2 * This,
            /* [annotation][in] */ 
            _In_  LPCGUID pDeviceInterfaceGuid,
            /* [annotation][unique][string][in] */ 
            _In_opt_  PCWSTR pReferenceString);
        
        HRESULT ( STDMETHODCALLTYPE *AssignDeviceInterfaceState )( 
            IWDFDevice2 * This,
            /* [annotation][in] */ 
            _In_  LPCGUID pDeviceInterfaceGuid,
            /* [annotation][unique][string][in] */ 
            _In_opt_  PCWSTR pReferenceString,
            /* [annotation][in] */ 
            _In_  BOOL Enable);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveDeviceName )( 
            IWDFDevice2 * This,
            /* [annotation][unique][out][string] */ 
            _Out_writes_to_opt_(*pdwDeviceNameLength, *pdwDeviceNameLength)  PWSTR pDeviceName,
            /* [annotation][out][in] */ 
            _Inout_  DWORD *pdwDeviceNameLength);
        
        HRESULT ( STDMETHODCALLTYPE *PostEvent )( 
            IWDFDevice2 * This,
            /* [annotation][in] */ 
            _In_  REFGUID EventGuid,
            /* [annotation][in] */ 
            _In_  WDF_EVENT_TYPE EventType,
            /* [annotation][size_is][in] */ 
            _In_reads_bytes_(cbDataSize)  BYTE *pbData,
            /* [annotation][in] */ 
            _In_  DWORD cbDataSize);
        
        HRESULT ( STDMETHODCALLTYPE *ConfigureRequestDispatching )( 
            IWDFDevice2 * This,
            /* [annotation][in] */ 
            _In_  IWDFIoQueue *pQueue,
            /* [annotation][in] */ 
            _In_  WDF_REQUEST_TYPE RequestType,
            /* [annotation][in] */ 
            _In_  BOOL Forward);
        
        void ( STDMETHODCALLTYPE *SetPnpState )( 
            IWDFDevice2 * This,
            /* [annotation][in] */ 
            _In_  WDF_PNP_STATE State,
            /* [annotation][in] */ 
            _In_  WDF_TRI_STATE Value);
        
        WDF_TRI_STATE ( STDMETHODCALLTYPE *GetPnpState )( 
            IWDFDevice2 * This,
            /* [annotation][in] */ 
            _In_  WDF_PNP_STATE State);
        
        void ( STDMETHODCALLTYPE *CommitPnpState )( 
            IWDFDevice2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateRequest )( 
            IWDFDevice2 * This,
            /* [annotation][unique][in] */ 
            _In_opt_  IUnknown *pCallbackInterface,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFObject *pParentObject,
            /* [annotation][out] */ 
            _Out_  IWDFIoRequest **ppRequest);
        
        HRESULT ( STDMETHODCALLTYPE *CreateSymbolicLink )( 
            IWDFDevice2 * This,
            /* [annotation][unique][string][in] */ 
            _In_  PCWSTR pSymbolicLink);
        
        HRESULT ( STDMETHODCALLTYPE *AssignS0IdleSettings )( 
            IWDFDevice2 * This,
            /* [annotation][in] */ 
            _In_  WDF_POWER_POLICY_S0_IDLE_CAPABILITIES IdleCaps,
            /* [annotation][in] */ 
            _In_  DEVICE_POWER_STATE DxState,
            /* [annotation][in] */ 
            _In_  ULONG IdleTimeout,
            /* [annotation][in] */ 
            _In_  WDF_POWER_POLICY_S0_IDLE_USER_CONTROL UserControlOfIdleSettings,
            /* [annotation][in] */ 
            _In_  WDF_TRI_STATE Enabled);
        
        HRESULT ( STDMETHODCALLTYPE *StopIdle )( 
            IWDFDevice2 * This,
            /* [annotation][in] */ 
            _In_  BOOL WaitForD0);
        
        void ( STDMETHODCALLTYPE *ResumeIdle )( 
            IWDFDevice2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateSymbolicLinkWithReferenceString )( 
            IWDFDevice2 * This,
            /* [annotation][unique][string][in] */ 
            _In_  PCWSTR pSymbolicLink,
            /* [annotation][unique][string][in] */ 
            _In_opt_  PCWSTR pReferenceString);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterRemoteInterfaceNotification )( 
            IWDFDevice2 * This,
            /* [annotation][in] */ 
            _In_  LPCGUID pDeviceInterfaceGuid,
            /* [annotation][in] */ 
            _In_  BOOL IncludeExistingInterfaces);
        
        HRESULT ( STDMETHODCALLTYPE *CreateRemoteInterface )( 
            IWDFDevice2 * This,
            /* [annotation][in] */ 
            _In_  IWDFRemoteInterfaceInitialize *pRemoteInterfaceInit,
            /* [annotation][unique][in] */ 
            _In_opt_  IUnknown *pCallbackInterface,
            /* [annotation][out] */ 
            _Out_  IWDFRemoteInterface **ppRemoteInterface);
        
        HRESULT ( STDMETHODCALLTYPE *CreateRemoteTarget )( 
            IWDFDevice2 * This,
            /* [annotation][unique][in] */ 
            _In_opt_  IUnknown *pCallbackInterface,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFObject *pParentObject,
            /* [annotation][out] */ 
            _Out_  IWDFRemoteTarget **ppRemoteTarget);
        
        void ( STDMETHODCALLTYPE *GetDeviceStackIoTypePreference )( 
            IWDFDevice2 * This,
            /* [annotation][out] */ 
            _Out_  WDF_DEVICE_IO_TYPE *ReadWritePreference,
            /* [annotation][out] */ 
            _Out_  WDF_DEVICE_IO_TYPE *IoControlPreference);
        
        HRESULT ( STDMETHODCALLTYPE *AssignSxWakeSettings )( 
            IWDFDevice2 * This,
            /* [annotation][in] */ 
            _In_  DEVICE_POWER_STATE DxState,
            /* [annotation][in] */ 
            _In_  WDF_POWER_POLICY_SX_WAKE_USER_CONTROL UserControlOfWakeSettings,
            /* [annotation][in] */ 
            _In_  WDF_TRI_STATE Enabled);
        
        POWER_ACTION ( STDMETHODCALLTYPE *GetSystemPowerAction )( 
            IWDFDevice2 * This);
        
        END_INTERFACE
    } IWDFDevice2Vtbl;

    interface IWDFDevice2
    {
        CONST_VTBL struct IWDFDevice2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFDevice2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFDevice2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFDevice2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFDevice2_DeleteWdfObject(This)	\
    ( (This)->lpVtbl -> DeleteWdfObject(This) ) 

#define IWDFDevice2_AssignContext(This,pCleanupCallback,pContext)	\
    ( (This)->lpVtbl -> AssignContext(This,pCleanupCallback,pContext) ) 

#define IWDFDevice2_RetrieveContext(This,ppvContext)	\
    ( (This)->lpVtbl -> RetrieveContext(This,ppvContext) ) 

#define IWDFDevice2_AcquireLock(This)	\
    ( (This)->lpVtbl -> AcquireLock(This) ) 

#define IWDFDevice2_ReleaseLock(This)	\
    ( (This)->lpVtbl -> ReleaseLock(This) ) 


#define IWDFDevice2_RetrieveDevicePropertyStore(This,pcwszServiceName,Flags,ppPropStore,pDisposition)	\
    ( (This)->lpVtbl -> RetrieveDevicePropertyStore(This,pcwszServiceName,Flags,ppPropStore,pDisposition) ) 

#define IWDFDevice2_GetDriver(This,ppWdfDriver)	\
    ( (This)->lpVtbl -> GetDriver(This,ppWdfDriver) ) 

#define IWDFDevice2_RetrieveDeviceInstanceId(This,Buffer,pdwSizeInChars)	\
    ( (This)->lpVtbl -> RetrieveDeviceInstanceId(This,Buffer,pdwSizeInChars) ) 

#define IWDFDevice2_GetDefaultIoTarget(This,ppWdfIoTarget)	\
    ( (This)->lpVtbl -> GetDefaultIoTarget(This,ppWdfIoTarget) ) 

#define IWDFDevice2_CreateWdfFile(This,pcwszFileName,ppFile)	\
    ( (This)->lpVtbl -> CreateWdfFile(This,pcwszFileName,ppFile) ) 

#define IWDFDevice2_GetDefaultIoQueue(This,ppWdfIoQueue)	\
    ( (This)->lpVtbl -> GetDefaultIoQueue(This,ppWdfIoQueue) ) 

#define IWDFDevice2_CreateIoQueue(This,pCallbackInterface,bDefaultQueue,DispatchType,bPowerManaged,bAllowZeroLengthRequests,ppIoQueue)	\
    ( (This)->lpVtbl -> CreateIoQueue(This,pCallbackInterface,bDefaultQueue,DispatchType,bPowerManaged,bAllowZeroLengthRequests,ppIoQueue) ) 

#define IWDFDevice2_CreateDeviceInterface(This,pDeviceInterfaceGuid,pReferenceString)	\
    ( (This)->lpVtbl -> CreateDeviceInterface(This,pDeviceInterfaceGuid,pReferenceString) ) 

#define IWDFDevice2_AssignDeviceInterfaceState(This,pDeviceInterfaceGuid,pReferenceString,Enable)	\
    ( (This)->lpVtbl -> AssignDeviceInterfaceState(This,pDeviceInterfaceGuid,pReferenceString,Enable) ) 

#define IWDFDevice2_RetrieveDeviceName(This,pDeviceName,pdwDeviceNameLength)	\
    ( (This)->lpVtbl -> RetrieveDeviceName(This,pDeviceName,pdwDeviceNameLength) ) 

#define IWDFDevice2_PostEvent(This,EventGuid,EventType,pbData,cbDataSize)	\
    ( (This)->lpVtbl -> PostEvent(This,EventGuid,EventType,pbData,cbDataSize) ) 

#define IWDFDevice2_ConfigureRequestDispatching(This,pQueue,RequestType,Forward)	\
    ( (This)->lpVtbl -> ConfigureRequestDispatching(This,pQueue,RequestType,Forward) ) 

#define IWDFDevice2_SetPnpState(This,State,Value)	\
    ( (This)->lpVtbl -> SetPnpState(This,State,Value) ) 

#define IWDFDevice2_GetPnpState(This,State)	\
    ( (This)->lpVtbl -> GetPnpState(This,State) ) 

#define IWDFDevice2_CommitPnpState(This)	\
    ( (This)->lpVtbl -> CommitPnpState(This) ) 

#define IWDFDevice2_CreateRequest(This,pCallbackInterface,pParentObject,ppRequest)	\
    ( (This)->lpVtbl -> CreateRequest(This,pCallbackInterface,pParentObject,ppRequest) ) 

#define IWDFDevice2_CreateSymbolicLink(This,pSymbolicLink)	\
    ( (This)->lpVtbl -> CreateSymbolicLink(This,pSymbolicLink) ) 


#define IWDFDevice2_AssignS0IdleSettings(This,IdleCaps,DxState,IdleTimeout,UserControlOfIdleSettings,Enabled)	\
    ( (This)->lpVtbl -> AssignS0IdleSettings(This,IdleCaps,DxState,IdleTimeout,UserControlOfIdleSettings,Enabled) ) 

#define IWDFDevice2_StopIdle(This,WaitForD0)	\
    ( (This)->lpVtbl -> StopIdle(This,WaitForD0) ) 

#define IWDFDevice2_ResumeIdle(This)	\
    ( (This)->lpVtbl -> ResumeIdle(This) ) 

#define IWDFDevice2_CreateSymbolicLinkWithReferenceString(This,pSymbolicLink,pReferenceString)	\
    ( (This)->lpVtbl -> CreateSymbolicLinkWithReferenceString(This,pSymbolicLink,pReferenceString) ) 

#define IWDFDevice2_RegisterRemoteInterfaceNotification(This,pDeviceInterfaceGuid,IncludeExistingInterfaces)	\
    ( (This)->lpVtbl -> RegisterRemoteInterfaceNotification(This,pDeviceInterfaceGuid,IncludeExistingInterfaces) ) 

#define IWDFDevice2_CreateRemoteInterface(This,pRemoteInterfaceInit,pCallbackInterface,ppRemoteInterface)	\
    ( (This)->lpVtbl -> CreateRemoteInterface(This,pRemoteInterfaceInit,pCallbackInterface,ppRemoteInterface) ) 

#define IWDFDevice2_CreateRemoteTarget(This,pCallbackInterface,pParentObject,ppRemoteTarget)	\
    ( (This)->lpVtbl -> CreateRemoteTarget(This,pCallbackInterface,pParentObject,ppRemoteTarget) ) 

#define IWDFDevice2_GetDeviceStackIoTypePreference(This,ReadWritePreference,IoControlPreference)	\
    ( (This)->lpVtbl -> GetDeviceStackIoTypePreference(This,ReadWritePreference,IoControlPreference) ) 

#define IWDFDevice2_AssignSxWakeSettings(This,DxState,UserControlOfWakeSettings,Enabled)	\
    ( (This)->lpVtbl -> AssignSxWakeSettings(This,DxState,UserControlOfWakeSettings,Enabled) ) 

#define IWDFDevice2_GetSystemPowerAction(This)	\
    ( (This)->lpVtbl -> GetSystemPowerAction(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFDevice2_INTERFACE_DEFINED__ */


#ifndef __IWDFDevice3_INTERFACE_DEFINED__
#define __IWDFDevice3_INTERFACE_DEFINED__

/* interface IWDFDevice3 */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWDFDevice3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("863D943A-C9CD-4655-A8D6-C84EF411CC0D")
    IWDFDevice3 : public IWDFDevice2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE MapIoSpace( 
            /* [annotation][in] */ 
            _In_  PHYSICAL_ADDRESS PhysicalAddress,
            /* [annotation][in] */ 
            _In_  SIZE_T NumberOfBytes,
            /* [annotation][in] */ 
            _In_  MEMORY_CACHING_TYPE CacheType,
            /* [annotation][out] */ 
            _Out_  void **pPseudoBaseAddress) = 0;
        
        virtual void STDMETHODCALLTYPE UnmapIoSpace( 
            /* [annotation][in] */ 
            _In_  void *PseudoBaseAddress,
            /* [annotation][in] */ 
            _In_  SIZE_T NumberOfBytes) = 0;
        
        virtual void *STDMETHODCALLTYPE GetHardwareRegisterMappedAddress( 
            /* [annotation][in] */ 
            _In_  void *PseudoBaseAddress) = 0;
        
        virtual SIZE_T STDMETHODCALLTYPE ReadFromHardware( 
            /* [annotation][in] */ 
            _In_  WDF_DEVICE_HWACCESS_TARGET_TYPE Type,
            /* [annotation][in] */ 
            _In_  WDF_DEVICE_HWACCESS_TARGET_SIZE Size,
            /* [annotation][in] */ 
            _In_  void *Address,
            /* [annotation][out] */ 
            _Out_writes_all_opt_(Count)  void *Buffer,
            /* [annotation][in] */ 
            _In_opt_  ULONG Count) = 0;
        
        virtual void STDMETHODCALLTYPE WriteToHardware( 
            /* [annotation][in] */ 
            _In_  WDF_DEVICE_HWACCESS_TARGET_TYPE Type,
            /* [annotation][in] */ 
            _In_  WDF_DEVICE_HWACCESS_TARGET_SIZE Size,
            /* [annotation][in] */ 
            _In_  void *Address,
            /* [annotation][in] */ 
            _In_  SIZE_T Value,
            /* [annotation][in] */ 
            _In_reads_opt_(Count)  void *Buffer,
            /* [annotation][in] */ 
            _In_opt_  ULONG Count) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateInterrupt( 
            /* [annotation][in] */ 
            _In_  PWUDF_INTERRUPT_CONFIG Configuration,
            /* [annotation][out] */ 
            _Out_  IWDFInterrupt **ppInterrupt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateWorkItem( 
            /* [annotation][in] */ 
            _In_  PWUDF_WORKITEM_CONFIG pConfig,
            /* [annotation][in] */ 
            _In_  IWDFObject *pParentObject,
            /* [annotation][out] */ 
            _Out_  IWDFWorkItem **ppWorkItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AssignS0IdleSettingsEx( 
            /* [annotation][in] */ 
            _In_  PWUDF_DEVICE_POWER_POLICY_IDLE_SETTINGS IdleSettings) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWDFDevice3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFDevice3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFDevice3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFDevice3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteWdfObject )( 
            IWDFDevice3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AssignContext )( 
            IWDFDevice3 * This,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  IObjectCleanup *pCleanupCallback,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  void *pContext);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveContext )( 
            IWDFDevice3 * This,
            /* [annotation][out] */ 
            _Out_  void **ppvContext);
        
        void ( STDMETHODCALLTYPE *AcquireLock )( 
            IWDFDevice3 * This);
        
        void ( STDMETHODCALLTYPE *ReleaseLock )( 
            IWDFDevice3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveDevicePropertyStore )( 
            IWDFDevice3 * This,
            /* [annotation][unique][in] */ 
            _In_opt_  PCWSTR pcwszServiceName,
            /* [annotation][in] */ 
            _In_  WDF_PROPERTY_STORE_RETRIEVE_FLAGS Flags,
            /* [annotation][out] */ 
            _Out_  IWDFNamedPropertyStore **ppPropStore,
            /* [annotation][unique][out] */ 
            _Out_opt_  WDF_PROPERTY_STORE_DISPOSITION *pDisposition);
        
        void ( STDMETHODCALLTYPE *GetDriver )( 
            IWDFDevice3 * This,
            /* [annotation][out] */ 
            _Out_  IWDFDriver **ppWdfDriver);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveDeviceInstanceId )( 
            IWDFDevice3 * This,
            /* [annotation][unique][out][string] */ 
            _Out_opt_  PWSTR Buffer,
            /* [annotation][out][in] */ 
            _Inout_  DWORD *pdwSizeInChars);
        
        void ( STDMETHODCALLTYPE *GetDefaultIoTarget )( 
            IWDFDevice3 * This,
            /* [annotation][out] */ 
            _Out_  IWDFIoTarget **ppWdfIoTarget);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWdfFile )( 
            IWDFDevice3 * This,
            /* [annotation][string][unique][in] */ 
            _In_opt_  LPCWSTR pcwszFileName,
            /* [annotation][out] */ 
            _Out_  IWDFDriverCreatedFile **ppFile);
        
        void ( STDMETHODCALLTYPE *GetDefaultIoQueue )( 
            IWDFDevice3 * This,
            /* [annotation][out] */ 
            _Out_  IWDFIoQueue **ppWdfIoQueue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateIoQueue )( 
            IWDFDevice3 * This,
            /* [annotation][in] */ 
            _In_opt_  IUnknown *pCallbackInterface,
            /* [annotation][in] */ 
            _In_  BOOL bDefaultQueue,
            /* [annotation][in] */ 
            _In_  WDF_IO_QUEUE_DISPATCH_TYPE DispatchType,
            /* [annotation][in] */ 
            _In_  BOOL bPowerManaged,
            /* [annotation][in] */ 
            _In_  BOOL bAllowZeroLengthRequests,
            /* [annotation][out] */ 
            _Out_  IWDFIoQueue **ppIoQueue);
        
        HRESULT ( STDMETHODCALLTYPE *CreateDeviceInterface )( 
            IWDFDevice3 * This,
            /* [annotation][in] */ 
            _In_  LPCGUID pDeviceInterfaceGuid,
            /* [annotation][unique][string][in] */ 
            _In_opt_  PCWSTR pReferenceString);
        
        HRESULT ( STDMETHODCALLTYPE *AssignDeviceInterfaceState )( 
            IWDFDevice3 * This,
            /* [annotation][in] */ 
            _In_  LPCGUID pDeviceInterfaceGuid,
            /* [annotation][unique][string][in] */ 
            _In_opt_  PCWSTR pReferenceString,
            /* [annotation][in] */ 
            _In_  BOOL Enable);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveDeviceName )( 
            IWDFDevice3 * This,
            /* [annotation][unique][out][string] */ 
            _Out_writes_to_opt_(*pdwDeviceNameLength, *pdwDeviceNameLength)  PWSTR pDeviceName,
            /* [annotation][out][in] */ 
            _Inout_  DWORD *pdwDeviceNameLength);
        
        HRESULT ( STDMETHODCALLTYPE *PostEvent )( 
            IWDFDevice3 * This,
            /* [annotation][in] */ 
            _In_  REFGUID EventGuid,
            /* [annotation][in] */ 
            _In_  WDF_EVENT_TYPE EventType,
            /* [annotation][size_is][in] */ 
            _In_reads_bytes_(cbDataSize)  BYTE *pbData,
            /* [annotation][in] */ 
            _In_  DWORD cbDataSize);
        
        HRESULT ( STDMETHODCALLTYPE *ConfigureRequestDispatching )( 
            IWDFDevice3 * This,
            /* [annotation][in] */ 
            _In_  IWDFIoQueue *pQueue,
            /* [annotation][in] */ 
            _In_  WDF_REQUEST_TYPE RequestType,
            /* [annotation][in] */ 
            _In_  BOOL Forward);
        
        void ( STDMETHODCALLTYPE *SetPnpState )( 
            IWDFDevice3 * This,
            /* [annotation][in] */ 
            _In_  WDF_PNP_STATE State,
            /* [annotation][in] */ 
            _In_  WDF_TRI_STATE Value);
        
        WDF_TRI_STATE ( STDMETHODCALLTYPE *GetPnpState )( 
            IWDFDevice3 * This,
            /* [annotation][in] */ 
            _In_  WDF_PNP_STATE State);
        
        void ( STDMETHODCALLTYPE *CommitPnpState )( 
            IWDFDevice3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateRequest )( 
            IWDFDevice3 * This,
            /* [annotation][unique][in] */ 
            _In_opt_  IUnknown *pCallbackInterface,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFObject *pParentObject,
            /* [annotation][out] */ 
            _Out_  IWDFIoRequest **ppRequest);
        
        HRESULT ( STDMETHODCALLTYPE *CreateSymbolicLink )( 
            IWDFDevice3 * This,
            /* [annotation][unique][string][in] */ 
            _In_  PCWSTR pSymbolicLink);
        
        HRESULT ( STDMETHODCALLTYPE *AssignS0IdleSettings )( 
            IWDFDevice3 * This,
            /* [annotation][in] */ 
            _In_  WDF_POWER_POLICY_S0_IDLE_CAPABILITIES IdleCaps,
            /* [annotation][in] */ 
            _In_  DEVICE_POWER_STATE DxState,
            /* [annotation][in] */ 
            _In_  ULONG IdleTimeout,
            /* [annotation][in] */ 
            _In_  WDF_POWER_POLICY_S0_IDLE_USER_CONTROL UserControlOfIdleSettings,
            /* [annotation][in] */ 
            _In_  WDF_TRI_STATE Enabled);
        
        HRESULT ( STDMETHODCALLTYPE *StopIdle )( 
            IWDFDevice3 * This,
            /* [annotation][in] */ 
            _In_  BOOL WaitForD0);
        
        void ( STDMETHODCALLTYPE *ResumeIdle )( 
            IWDFDevice3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateSymbolicLinkWithReferenceString )( 
            IWDFDevice3 * This,
            /* [annotation][unique][string][in] */ 
            _In_  PCWSTR pSymbolicLink,
            /* [annotation][unique][string][in] */ 
            _In_opt_  PCWSTR pReferenceString);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterRemoteInterfaceNotification )( 
            IWDFDevice3 * This,
            /* [annotation][in] */ 
            _In_  LPCGUID pDeviceInterfaceGuid,
            /* [annotation][in] */ 
            _In_  BOOL IncludeExistingInterfaces);
        
        HRESULT ( STDMETHODCALLTYPE *CreateRemoteInterface )( 
            IWDFDevice3 * This,
            /* [annotation][in] */ 
            _In_  IWDFRemoteInterfaceInitialize *pRemoteInterfaceInit,
            /* [annotation][unique][in] */ 
            _In_opt_  IUnknown *pCallbackInterface,
            /* [annotation][out] */ 
            _Out_  IWDFRemoteInterface **ppRemoteInterface);
        
        HRESULT ( STDMETHODCALLTYPE *CreateRemoteTarget )( 
            IWDFDevice3 * This,
            /* [annotation][unique][in] */ 
            _In_opt_  IUnknown *pCallbackInterface,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFObject *pParentObject,
            /* [annotation][out] */ 
            _Out_  IWDFRemoteTarget **ppRemoteTarget);
        
        void ( STDMETHODCALLTYPE *GetDeviceStackIoTypePreference )( 
            IWDFDevice3 * This,
            /* [annotation][out] */ 
            _Out_  WDF_DEVICE_IO_TYPE *ReadWritePreference,
            /* [annotation][out] */ 
            _Out_  WDF_DEVICE_IO_TYPE *IoControlPreference);
        
        HRESULT ( STDMETHODCALLTYPE *AssignSxWakeSettings )( 
            IWDFDevice3 * This,
            /* [annotation][in] */ 
            _In_  DEVICE_POWER_STATE DxState,
            /* [annotation][in] */ 
            _In_  WDF_POWER_POLICY_SX_WAKE_USER_CONTROL UserControlOfWakeSettings,
            /* [annotation][in] */ 
            _In_  WDF_TRI_STATE Enabled);
        
        POWER_ACTION ( STDMETHODCALLTYPE *GetSystemPowerAction )( 
            IWDFDevice3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *MapIoSpace )( 
            IWDFDevice3 * This,
            /* [annotation][in] */ 
            _In_  PHYSICAL_ADDRESS PhysicalAddress,
            /* [annotation][in] */ 
            _In_  SIZE_T NumberOfBytes,
            /* [annotation][in] */ 
            _In_  MEMORY_CACHING_TYPE CacheType,
            /* [annotation][out] */ 
            _Out_  void **pPseudoBaseAddress);
        
        void ( STDMETHODCALLTYPE *UnmapIoSpace )( 
            IWDFDevice3 * This,
            /* [annotation][in] */ 
            _In_  void *PseudoBaseAddress,
            /* [annotation][in] */ 
            _In_  SIZE_T NumberOfBytes);
        
        void *( STDMETHODCALLTYPE *GetHardwareRegisterMappedAddress )( 
            IWDFDevice3 * This,
            /* [annotation][in] */ 
            _In_  void *PseudoBaseAddress);
        
        SIZE_T ( STDMETHODCALLTYPE *ReadFromHardware )( 
            IWDFDevice3 * This,
            /* [annotation][in] */ 
            _In_  WDF_DEVICE_HWACCESS_TARGET_TYPE Type,
            /* [annotation][in] */ 
            _In_  WDF_DEVICE_HWACCESS_TARGET_SIZE Size,
            /* [annotation][in] */ 
            _In_  void *Address,
            /* [annotation][out] */ 
            _Out_writes_all_opt_(Count)  void *Buffer,
            /* [annotation][in] */ 
            _In_opt_  ULONG Count);
        
        void ( STDMETHODCALLTYPE *WriteToHardware )( 
            IWDFDevice3 * This,
            /* [annotation][in] */ 
            _In_  WDF_DEVICE_HWACCESS_TARGET_TYPE Type,
            /* [annotation][in] */ 
            _In_  WDF_DEVICE_HWACCESS_TARGET_SIZE Size,
            /* [annotation][in] */ 
            _In_  void *Address,
            /* [annotation][in] */ 
            _In_  SIZE_T Value,
            /* [annotation][in] */ 
            _In_reads_opt_(Count)  void *Buffer,
            /* [annotation][in] */ 
            _In_opt_  ULONG Count);
        
        HRESULT ( STDMETHODCALLTYPE *CreateInterrupt )( 
            IWDFDevice3 * This,
            /* [annotation][in] */ 
            _In_  PWUDF_INTERRUPT_CONFIG Configuration,
            /* [annotation][out] */ 
            _Out_  IWDFInterrupt **ppInterrupt);
        
        HRESULT ( STDMETHODCALLTYPE *CreateWorkItem )( 
            IWDFDevice3 * This,
            /* [annotation][in] */ 
            _In_  PWUDF_WORKITEM_CONFIG pConfig,
            /* [annotation][in] */ 
            _In_  IWDFObject *pParentObject,
            /* [annotation][out] */ 
            _Out_  IWDFWorkItem **ppWorkItem);
        
        HRESULT ( STDMETHODCALLTYPE *AssignS0IdleSettingsEx )( 
            IWDFDevice3 * This,
            /* [annotation][in] */ 
            _In_  PWUDF_DEVICE_POWER_POLICY_IDLE_SETTINGS IdleSettings);
        
        END_INTERFACE
    } IWDFDevice3Vtbl;

    interface IWDFDevice3
    {
        CONST_VTBL struct IWDFDevice3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFDevice3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFDevice3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFDevice3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFDevice3_DeleteWdfObject(This)	\
    ( (This)->lpVtbl -> DeleteWdfObject(This) ) 

#define IWDFDevice3_AssignContext(This,pCleanupCallback,pContext)	\
    ( (This)->lpVtbl -> AssignContext(This,pCleanupCallback,pContext) ) 

#define IWDFDevice3_RetrieveContext(This,ppvContext)	\
    ( (This)->lpVtbl -> RetrieveContext(This,ppvContext) ) 

#define IWDFDevice3_AcquireLock(This)	\
    ( (This)->lpVtbl -> AcquireLock(This) ) 

#define IWDFDevice3_ReleaseLock(This)	\
    ( (This)->lpVtbl -> ReleaseLock(This) ) 


#define IWDFDevice3_RetrieveDevicePropertyStore(This,pcwszServiceName,Flags,ppPropStore,pDisposition)	\
    ( (This)->lpVtbl -> RetrieveDevicePropertyStore(This,pcwszServiceName,Flags,ppPropStore,pDisposition) ) 

#define IWDFDevice3_GetDriver(This,ppWdfDriver)	\
    ( (This)->lpVtbl -> GetDriver(This,ppWdfDriver) ) 

#define IWDFDevice3_RetrieveDeviceInstanceId(This,Buffer,pdwSizeInChars)	\
    ( (This)->lpVtbl -> RetrieveDeviceInstanceId(This,Buffer,pdwSizeInChars) ) 

#define IWDFDevice3_GetDefaultIoTarget(This,ppWdfIoTarget)	\
    ( (This)->lpVtbl -> GetDefaultIoTarget(This,ppWdfIoTarget) ) 

#define IWDFDevice3_CreateWdfFile(This,pcwszFileName,ppFile)	\
    ( (This)->lpVtbl -> CreateWdfFile(This,pcwszFileName,ppFile) ) 

#define IWDFDevice3_GetDefaultIoQueue(This,ppWdfIoQueue)	\
    ( (This)->lpVtbl -> GetDefaultIoQueue(This,ppWdfIoQueue) ) 

#define IWDFDevice3_CreateIoQueue(This,pCallbackInterface,bDefaultQueue,DispatchType,bPowerManaged,bAllowZeroLengthRequests,ppIoQueue)	\
    ( (This)->lpVtbl -> CreateIoQueue(This,pCallbackInterface,bDefaultQueue,DispatchType,bPowerManaged,bAllowZeroLengthRequests,ppIoQueue) ) 

#define IWDFDevice3_CreateDeviceInterface(This,pDeviceInterfaceGuid,pReferenceString)	\
    ( (This)->lpVtbl -> CreateDeviceInterface(This,pDeviceInterfaceGuid,pReferenceString) ) 

#define IWDFDevice3_AssignDeviceInterfaceState(This,pDeviceInterfaceGuid,pReferenceString,Enable)	\
    ( (This)->lpVtbl -> AssignDeviceInterfaceState(This,pDeviceInterfaceGuid,pReferenceString,Enable) ) 

#define IWDFDevice3_RetrieveDeviceName(This,pDeviceName,pdwDeviceNameLength)	\
    ( (This)->lpVtbl -> RetrieveDeviceName(This,pDeviceName,pdwDeviceNameLength) ) 

#define IWDFDevice3_PostEvent(This,EventGuid,EventType,pbData,cbDataSize)	\
    ( (This)->lpVtbl -> PostEvent(This,EventGuid,EventType,pbData,cbDataSize) ) 

#define IWDFDevice3_ConfigureRequestDispatching(This,pQueue,RequestType,Forward)	\
    ( (This)->lpVtbl -> ConfigureRequestDispatching(This,pQueue,RequestType,Forward) ) 

#define IWDFDevice3_SetPnpState(This,State,Value)	\
    ( (This)->lpVtbl -> SetPnpState(This,State,Value) ) 

#define IWDFDevice3_GetPnpState(This,State)	\
    ( (This)->lpVtbl -> GetPnpState(This,State) ) 

#define IWDFDevice3_CommitPnpState(This)	\
    ( (This)->lpVtbl -> CommitPnpState(This) ) 

#define IWDFDevice3_CreateRequest(This,pCallbackInterface,pParentObject,ppRequest)	\
    ( (This)->lpVtbl -> CreateRequest(This,pCallbackInterface,pParentObject,ppRequest) ) 

#define IWDFDevice3_CreateSymbolicLink(This,pSymbolicLink)	\
    ( (This)->lpVtbl -> CreateSymbolicLink(This,pSymbolicLink) ) 


#define IWDFDevice3_AssignS0IdleSettings(This,IdleCaps,DxState,IdleTimeout,UserControlOfIdleSettings,Enabled)	\
    ( (This)->lpVtbl -> AssignS0IdleSettings(This,IdleCaps,DxState,IdleTimeout,UserControlOfIdleSettings,Enabled) ) 

#define IWDFDevice3_StopIdle(This,WaitForD0)	\
    ( (This)->lpVtbl -> StopIdle(This,WaitForD0) ) 

#define IWDFDevice3_ResumeIdle(This)	\
    ( (This)->lpVtbl -> ResumeIdle(This) ) 

#define IWDFDevice3_CreateSymbolicLinkWithReferenceString(This,pSymbolicLink,pReferenceString)	\
    ( (This)->lpVtbl -> CreateSymbolicLinkWithReferenceString(This,pSymbolicLink,pReferenceString) ) 

#define IWDFDevice3_RegisterRemoteInterfaceNotification(This,pDeviceInterfaceGuid,IncludeExistingInterfaces)	\
    ( (This)->lpVtbl -> RegisterRemoteInterfaceNotification(This,pDeviceInterfaceGuid,IncludeExistingInterfaces) ) 

#define IWDFDevice3_CreateRemoteInterface(This,pRemoteInterfaceInit,pCallbackInterface,ppRemoteInterface)	\
    ( (This)->lpVtbl -> CreateRemoteInterface(This,pRemoteInterfaceInit,pCallbackInterface,ppRemoteInterface) ) 

#define IWDFDevice3_CreateRemoteTarget(This,pCallbackInterface,pParentObject,ppRemoteTarget)	\
    ( (This)->lpVtbl -> CreateRemoteTarget(This,pCallbackInterface,pParentObject,ppRemoteTarget) ) 

#define IWDFDevice3_GetDeviceStackIoTypePreference(This,ReadWritePreference,IoControlPreference)	\
    ( (This)->lpVtbl -> GetDeviceStackIoTypePreference(This,ReadWritePreference,IoControlPreference) ) 

#define IWDFDevice3_AssignSxWakeSettings(This,DxState,UserControlOfWakeSettings,Enabled)	\
    ( (This)->lpVtbl -> AssignSxWakeSettings(This,DxState,UserControlOfWakeSettings,Enabled) ) 

#define IWDFDevice3_GetSystemPowerAction(This)	\
    ( (This)->lpVtbl -> GetSystemPowerAction(This) ) 


#define IWDFDevice3_MapIoSpace(This,PhysicalAddress,NumberOfBytes,CacheType,pPseudoBaseAddress)	\
    ( (This)->lpVtbl -> MapIoSpace(This,PhysicalAddress,NumberOfBytes,CacheType,pPseudoBaseAddress) ) 

#define IWDFDevice3_UnmapIoSpace(This,PseudoBaseAddress,NumberOfBytes)	\
    ( (This)->lpVtbl -> UnmapIoSpace(This,PseudoBaseAddress,NumberOfBytes) ) 

#define IWDFDevice3_GetHardwareRegisterMappedAddress(This,PseudoBaseAddress)	\
    ( (This)->lpVtbl -> GetHardwareRegisterMappedAddress(This,PseudoBaseAddress) ) 

#define IWDFDevice3_ReadFromHardware(This,Type,Size,Address,Buffer,Count)	\
    ( (This)->lpVtbl -> ReadFromHardware(This,Type,Size,Address,Buffer,Count) ) 

#define IWDFDevice3_WriteToHardware(This,Type,Size,Address,Value,Buffer,Count)	\
    ( (This)->lpVtbl -> WriteToHardware(This,Type,Size,Address,Value,Buffer,Count) ) 

#define IWDFDevice3_CreateInterrupt(This,Configuration,ppInterrupt)	\
    ( (This)->lpVtbl -> CreateInterrupt(This,Configuration,ppInterrupt) ) 

#define IWDFDevice3_CreateWorkItem(This,pConfig,pParentObject,ppWorkItem)	\
    ( (This)->lpVtbl -> CreateWorkItem(This,pConfig,pParentObject,ppWorkItem) ) 

#define IWDFDevice3_AssignS0IdleSettingsEx(This,IdleSettings)	\
    ( (This)->lpVtbl -> AssignS0IdleSettingsEx(This,IdleSettings) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFDevice3_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_wudfddi_0000_0007 */
/* [local] */ 

#ifdef MIDL_PASS
typedef void *PROPVARIANT;

#else
typedef struct tagPROPVARIANT PROPVARIANT;
#endif


extern RPC_IF_HANDLE __MIDL_itf_wudfddi_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wudfddi_0000_0007_v0_0_s_ifspec;

#ifndef __IWDFNamedPropertyStore_INTERFACE_DEFINED__
#define __IWDFNamedPropertyStore_INTERFACE_DEFINED__

/* interface IWDFNamedPropertyStore */
/* [unique][local][object][uuid] */ 


EXTERN_C const IID IID_IWDFNamedPropertyStore;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("394b48c9-bca0-498f-8e2c-01225464a932")
    IWDFNamedPropertyStore : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetNamedValue( 
            /* [annotation][string][in] */ 
            _In_  LPCWSTR pszName,
            /* [annotation][out] */ 
            _Out_  PROPVARIANT *pv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetNamedValue( 
            /* [annotation][string][in] */ 
            _In_  LPCWSTR pszName,
            /* [annotation][in] */ 
            _In_  const PROPVARIANT *pv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNameCount( 
            /* [annotation][out] */ 
            _Out_  DWORD *pdwCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNameAt( 
            /* [annotation][in] */ 
            _In_  DWORD iProp,
            /* [annotation][string][out] */ 
            _Out_  PWSTR *ppwszName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWDFNamedPropertyStoreVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFNamedPropertyStore * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFNamedPropertyStore * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFNamedPropertyStore * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetNamedValue )( 
            IWDFNamedPropertyStore * This,
            /* [annotation][string][in] */ 
            _In_  LPCWSTR pszName,
            /* [annotation][out] */ 
            _Out_  PROPVARIANT *pv);
        
        HRESULT ( STDMETHODCALLTYPE *SetNamedValue )( 
            IWDFNamedPropertyStore * This,
            /* [annotation][string][in] */ 
            _In_  LPCWSTR pszName,
            /* [annotation][in] */ 
            _In_  const PROPVARIANT *pv);
        
        HRESULT ( STDMETHODCALLTYPE *GetNameCount )( 
            IWDFNamedPropertyStore * This,
            /* [annotation][out] */ 
            _Out_  DWORD *pdwCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetNameAt )( 
            IWDFNamedPropertyStore * This,
            /* [annotation][in] */ 
            _In_  DWORD iProp,
            /* [annotation][string][out] */ 
            _Out_  PWSTR *ppwszName);
        
        END_INTERFACE
    } IWDFNamedPropertyStoreVtbl;

    interface IWDFNamedPropertyStore
    {
        CONST_VTBL struct IWDFNamedPropertyStoreVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFNamedPropertyStore_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFNamedPropertyStore_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFNamedPropertyStore_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFNamedPropertyStore_GetNamedValue(This,pszName,pv)	\
    ( (This)->lpVtbl -> GetNamedValue(This,pszName,pv) ) 

#define IWDFNamedPropertyStore_SetNamedValue(This,pszName,pv)	\
    ( (This)->lpVtbl -> SetNamedValue(This,pszName,pv) ) 

#define IWDFNamedPropertyStore_GetNameCount(This,pdwCount)	\
    ( (This)->lpVtbl -> GetNameCount(This,pdwCount) ) 

#define IWDFNamedPropertyStore_GetNameAt(This,iProp,ppwszName)	\
    ( (This)->lpVtbl -> GetNameAt(This,iProp,ppwszName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFNamedPropertyStore_INTERFACE_DEFINED__ */


#ifndef __IWDFNamedPropertyStore2_INTERFACE_DEFINED__
#define __IWDFNamedPropertyStore2_INTERFACE_DEFINED__

/* interface IWDFNamedPropertyStore2 */
/* [unique][local][object][uuid] */ 


EXTERN_C const IID IID_IWDFNamedPropertyStore2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1464ee0e-8e0f-4fda-b1a0-b3614c405d56")
    IWDFNamedPropertyStore2 : public IWDFNamedPropertyStore
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE DeleteNamedValue( 
            /* [annotation][string][in] */ 
            _In_  LPCWSTR pwszName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWDFNamedPropertyStore2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFNamedPropertyStore2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFNamedPropertyStore2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFNamedPropertyStore2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetNamedValue )( 
            IWDFNamedPropertyStore2 * This,
            /* [annotation][string][in] */ 
            _In_  LPCWSTR pszName,
            /* [annotation][out] */ 
            _Out_  PROPVARIANT *pv);
        
        HRESULT ( STDMETHODCALLTYPE *SetNamedValue )( 
            IWDFNamedPropertyStore2 * This,
            /* [annotation][string][in] */ 
            _In_  LPCWSTR pszName,
            /* [annotation][in] */ 
            _In_  const PROPVARIANT *pv);
        
        HRESULT ( STDMETHODCALLTYPE *GetNameCount )( 
            IWDFNamedPropertyStore2 * This,
            /* [annotation][out] */ 
            _Out_  DWORD *pdwCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetNameAt )( 
            IWDFNamedPropertyStore2 * This,
            /* [annotation][in] */ 
            _In_  DWORD iProp,
            /* [annotation][string][out] */ 
            _Out_  PWSTR *ppwszName);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteNamedValue )( 
            IWDFNamedPropertyStore2 * This,
            /* [annotation][string][in] */ 
            _In_  LPCWSTR pwszName);
        
        END_INTERFACE
    } IWDFNamedPropertyStore2Vtbl;

    interface IWDFNamedPropertyStore2
    {
        CONST_VTBL struct IWDFNamedPropertyStore2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFNamedPropertyStore2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFNamedPropertyStore2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFNamedPropertyStore2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFNamedPropertyStore2_GetNamedValue(This,pszName,pv)	\
    ( (This)->lpVtbl -> GetNamedValue(This,pszName,pv) ) 

#define IWDFNamedPropertyStore2_SetNamedValue(This,pszName,pv)	\
    ( (This)->lpVtbl -> SetNamedValue(This,pszName,pv) ) 

#define IWDFNamedPropertyStore2_GetNameCount(This,pdwCount)	\
    ( (This)->lpVtbl -> GetNameCount(This,pdwCount) ) 

#define IWDFNamedPropertyStore2_GetNameAt(This,iProp,ppwszName)	\
    ( (This)->lpVtbl -> GetNameAt(This,iProp,ppwszName) ) 


#define IWDFNamedPropertyStore2_DeleteNamedValue(This,pwszName)	\
    ( (This)->lpVtbl -> DeleteNamedValue(This,pwszName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFNamedPropertyStore2_INTERFACE_DEFINED__ */


#ifndef __IWDFIoQueue_INTERFACE_DEFINED__
#define __IWDFIoQueue_INTERFACE_DEFINED__

/* interface IWDFIoQueue */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWDFIoQueue;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AE1162B9-8B11-4714-993D-93DC48CC9E8A")
    IWDFIoQueue : public IWDFObject
    {
    public:
        virtual void STDMETHODCALLTYPE GetDevice( 
            /* [annotation][out] */ 
            _Out_  IWDFDevice **ppWdfDevice) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ConfigureRequestDispatching( 
            /* [annotation][in] */ 
            _In_  WDF_REQUEST_TYPE RequestType,
            /* [annotation][in] */ 
            _In_  BOOL Forward) = 0;
        
        virtual WDF_IO_QUEUE_STATE STDMETHODCALLTYPE GetState( 
            /* [annotation][out] */ 
            _Out_  ULONG *pulNumOfRequestsInQueue,
            /* [annotation][out] */ 
            _Out_  ULONG *pulNumOfRequestsInDriver) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RetrieveNextRequest( 
            /* [annotation][out] */ 
            _Out_  IWDFIoRequest **ppRequest) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RetrieveNextRequestByFileObject( 
            /* [annotation][in] */ 
            _In_  IWDFFile *pFile,
            /* [annotation][out] */ 
            _Out_  IWDFIoRequest **ppRequest) = 0;
        
        virtual void STDMETHODCALLTYPE Start( void) = 0;
        
        virtual void STDMETHODCALLTYPE Stop( 
            /* [annotation][unique][in] */ 
            _In_opt_  IQueueCallbackStateChange *pStopComplete) = 0;
        
        virtual void STDMETHODCALLTYPE StopSynchronously( void) = 0;
        
        virtual void STDMETHODCALLTYPE Drain( 
            /* [annotation][unique][in] */ 
            _In_opt_  IQueueCallbackStateChange *pDrainComplete) = 0;
        
        virtual void STDMETHODCALLTYPE DrainSynchronously( void) = 0;
        
        virtual void STDMETHODCALLTYPE Purge( 
            /* [annotation][unique][in] */ 
            _In_opt_  IQueueCallbackStateChange *pPurgeComplete) = 0;
        
        virtual void STDMETHODCALLTYPE PurgeSynchronously( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWDFIoQueueVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFIoQueue * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFIoQueue * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFIoQueue * This);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteWdfObject )( 
            IWDFIoQueue * This);
        
        HRESULT ( STDMETHODCALLTYPE *AssignContext )( 
            IWDFIoQueue * This,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  IObjectCleanup *pCleanupCallback,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  void *pContext);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveContext )( 
            IWDFIoQueue * This,
            /* [annotation][out] */ 
            _Out_  void **ppvContext);
        
        void ( STDMETHODCALLTYPE *AcquireLock )( 
            IWDFIoQueue * This);
        
        void ( STDMETHODCALLTYPE *ReleaseLock )( 
            IWDFIoQueue * This);
        
        void ( STDMETHODCALLTYPE *GetDevice )( 
            IWDFIoQueue * This,
            /* [annotation][out] */ 
            _Out_  IWDFDevice **ppWdfDevice);
        
        HRESULT ( STDMETHODCALLTYPE *ConfigureRequestDispatching )( 
            IWDFIoQueue * This,
            /* [annotation][in] */ 
            _In_  WDF_REQUEST_TYPE RequestType,
            /* [annotation][in] */ 
            _In_  BOOL Forward);
        
        WDF_IO_QUEUE_STATE ( STDMETHODCALLTYPE *GetState )( 
            IWDFIoQueue * This,
            /* [annotation][out] */ 
            _Out_  ULONG *pulNumOfRequestsInQueue,
            /* [annotation][out] */ 
            _Out_  ULONG *pulNumOfRequestsInDriver);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveNextRequest )( 
            IWDFIoQueue * This,
            /* [annotation][out] */ 
            _Out_  IWDFIoRequest **ppRequest);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveNextRequestByFileObject )( 
            IWDFIoQueue * This,
            /* [annotation][in] */ 
            _In_  IWDFFile *pFile,
            /* [annotation][out] */ 
            _Out_  IWDFIoRequest **ppRequest);
        
        void ( STDMETHODCALLTYPE *Start )( 
            IWDFIoQueue * This);
        
        void ( STDMETHODCALLTYPE *Stop )( 
            IWDFIoQueue * This,
            /* [annotation][unique][in] */ 
            _In_opt_  IQueueCallbackStateChange *pStopComplete);
        
        void ( STDMETHODCALLTYPE *StopSynchronously )( 
            IWDFIoQueue * This);
        
        void ( STDMETHODCALLTYPE *Drain )( 
            IWDFIoQueue * This,
            /* [annotation][unique][in] */ 
            _In_opt_  IQueueCallbackStateChange *pDrainComplete);
        
        void ( STDMETHODCALLTYPE *DrainSynchronously )( 
            IWDFIoQueue * This);
        
        void ( STDMETHODCALLTYPE *Purge )( 
            IWDFIoQueue * This,
            /* [annotation][unique][in] */ 
            _In_opt_  IQueueCallbackStateChange *pPurgeComplete);
        
        void ( STDMETHODCALLTYPE *PurgeSynchronously )( 
            IWDFIoQueue * This);
        
        END_INTERFACE
    } IWDFIoQueueVtbl;

    interface IWDFIoQueue
    {
        CONST_VTBL struct IWDFIoQueueVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFIoQueue_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFIoQueue_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFIoQueue_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFIoQueue_DeleteWdfObject(This)	\
    ( (This)->lpVtbl -> DeleteWdfObject(This) ) 

#define IWDFIoQueue_AssignContext(This,pCleanupCallback,pContext)	\
    ( (This)->lpVtbl -> AssignContext(This,pCleanupCallback,pContext) ) 

#define IWDFIoQueue_RetrieveContext(This,ppvContext)	\
    ( (This)->lpVtbl -> RetrieveContext(This,ppvContext) ) 

#define IWDFIoQueue_AcquireLock(This)	\
    ( (This)->lpVtbl -> AcquireLock(This) ) 

#define IWDFIoQueue_ReleaseLock(This)	\
    ( (This)->lpVtbl -> ReleaseLock(This) ) 


#define IWDFIoQueue_GetDevice(This,ppWdfDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppWdfDevice) ) 

#define IWDFIoQueue_ConfigureRequestDispatching(This,RequestType,Forward)	\
    ( (This)->lpVtbl -> ConfigureRequestDispatching(This,RequestType,Forward) ) 

#define IWDFIoQueue_GetState(This,pulNumOfRequestsInQueue,pulNumOfRequestsInDriver)	\
    ( (This)->lpVtbl -> GetState(This,pulNumOfRequestsInQueue,pulNumOfRequestsInDriver) ) 

#define IWDFIoQueue_RetrieveNextRequest(This,ppRequest)	\
    ( (This)->lpVtbl -> RetrieveNextRequest(This,ppRequest) ) 

#define IWDFIoQueue_RetrieveNextRequestByFileObject(This,pFile,ppRequest)	\
    ( (This)->lpVtbl -> RetrieveNextRequestByFileObject(This,pFile,ppRequest) ) 

#define IWDFIoQueue_Start(This)	\
    ( (This)->lpVtbl -> Start(This) ) 

#define IWDFIoQueue_Stop(This,pStopComplete)	\
    ( (This)->lpVtbl -> Stop(This,pStopComplete) ) 

#define IWDFIoQueue_StopSynchronously(This)	\
    ( (This)->lpVtbl -> StopSynchronously(This) ) 

#define IWDFIoQueue_Drain(This,pDrainComplete)	\
    ( (This)->lpVtbl -> Drain(This,pDrainComplete) ) 

#define IWDFIoQueue_DrainSynchronously(This)	\
    ( (This)->lpVtbl -> DrainSynchronously(This) ) 

#define IWDFIoQueue_Purge(This,pPurgeComplete)	\
    ( (This)->lpVtbl -> Purge(This,pPurgeComplete) ) 

#define IWDFIoQueue_PurgeSynchronously(This)	\
    ( (This)->lpVtbl -> PurgeSynchronously(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFIoQueue_INTERFACE_DEFINED__ */


#ifndef __IWDFIoRequest_INTERFACE_DEFINED__
#define __IWDFIoRequest_INTERFACE_DEFINED__

/* interface IWDFIoRequest */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWDFIoRequest;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("896DF312-22B4-4a9d-95DD-A364AAF59769")
    IWDFIoRequest : public IWDFObject
    {
    public:
        virtual void STDMETHODCALLTYPE CompleteWithInformation( 
            /* [annotation][in] */ 
            _In_  HRESULT CompletionStatus,
            /* [annotation][in] */ 
            _In_  SIZE_T Information) = 0;
        
        virtual void STDMETHODCALLTYPE SetInformation( 
            /* [annotation][in] */ 
            _In_  ULONG_PTR Information) = 0;
        
        virtual void STDMETHODCALLTYPE Complete( 
            /* [annotation][in] */ 
            _In_  HRESULT CompletionStatus) = 0;
        
        virtual void STDMETHODCALLTYPE SetCompletionCallback( 
            /* [annotation][in] */ 
            _In_  IRequestCallbackRequestCompletion *pCompletionCallback,
            /* [annotation][unique][in] */ 
            _In_opt_  void *pContext) = 0;
        
        virtual WDF_REQUEST_TYPE STDMETHODCALLTYPE GetType( void) = 0;
        
        virtual void STDMETHODCALLTYPE GetCreateParameters( 
            /* [annotation][unique][out] */ 
            _Out_opt_  ULONG *pOptions,
            /* [annotation][unique][out] */ 
            _Out_opt_  USHORT *pFileAttributes,
            /* [annotation][unique][out] */ 
            _Out_opt_  USHORT *pShareAccess) = 0;
        
        virtual void STDMETHODCALLTYPE GetReadParameters( 
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pSizeInBytes,
            /* [annotation][unique][out] */ 
            _Out_opt_  LONGLONG *pullOffset,
            /* [annotation][unique][out] */ 
            _Out_opt_  ULONG *pulKey) = 0;
        
        virtual void STDMETHODCALLTYPE GetWriteParameters( 
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pSizeInBytes,
            /* [annotation][unique][out] */ 
            _Out_opt_  LONGLONG *pullOffset,
            /* [annotation][unique][out] */ 
            _Out_opt_  ULONG *pulKey) = 0;
        
        virtual void STDMETHODCALLTYPE GetDeviceIoControlParameters( 
            /* [annotation][unique][out] */ 
            _Out_opt_  ULONG *pControlCode,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pInBufferSize,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pOutBufferSize) = 0;
        
        virtual void STDMETHODCALLTYPE GetOutputMemory( 
            /* [annotation][out] */ 
            _Out_  IWDFMemory **ppWdfMemory) = 0;
        
        virtual void STDMETHODCALLTYPE GetInputMemory( 
            /* [annotation][out] */ 
            _Out_  IWDFMemory **ppWdfMemory) = 0;
        
        virtual void STDMETHODCALLTYPE MarkCancelable( 
            /* [annotation][in] */ 
            _In_  IRequestCallbackCancel *pCancelCallback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnmarkCancelable( void) = 0;
        
        virtual BOOL STDMETHODCALLTYPE CancelSentRequest( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ForwardToIoQueue( 
            /* [annotation][in] */ 
            _In_  IWDFIoQueue *pDestination) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Send( 
            /* [annotation][in] */ 
            _In_  IWDFIoTarget *pIoTarget,
            /* [annotation][in] */ 
            _In_  ULONG Flags,
            /* [annotation][in] */ 
            _In_  LONGLONG Timeout) = 0;
        
        virtual void STDMETHODCALLTYPE GetFileObject( 
            /* [annotation][out] */ 
            _Out_  IWDFFile **ppFileObject) = 0;
        
        virtual void STDMETHODCALLTYPE FormatUsingCurrentType( void) = 0;
        
        virtual ULONG STDMETHODCALLTYPE GetRequestorProcessId( void) = 0;
        
        virtual void STDMETHODCALLTYPE GetIoQueue( 
            /* [annotation][out] */ 
            _Out_  IWDFIoQueue **ppWdfIoQueue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Impersonate( 
            /* [annotation][in] */ 
            _In_  SECURITY_IMPERSONATION_LEVEL ImpersonationLevel,
            /* [annotation][in] */ 
            _In_  IImpersonateCallback *pCallback,
            /* [annotation][unique][in] */ 
            _In_opt_  void *pvCallbackContext) = 0;
        
        virtual BOOL STDMETHODCALLTYPE IsFrom32BitProcess( void) = 0;
        
        virtual void STDMETHODCALLTYPE GetCompletionParams( 
            /* [annotation][out] */ 
            _Out_  IWDFRequestCompletionParams **ppCompletionParams) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWDFIoRequestVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFIoRequest * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFIoRequest * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFIoRequest * This);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteWdfObject )( 
            IWDFIoRequest * This);
        
        HRESULT ( STDMETHODCALLTYPE *AssignContext )( 
            IWDFIoRequest * This,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  IObjectCleanup *pCleanupCallback,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  void *pContext);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveContext )( 
            IWDFIoRequest * This,
            /* [annotation][out] */ 
            _Out_  void **ppvContext);
        
        void ( STDMETHODCALLTYPE *AcquireLock )( 
            IWDFIoRequest * This);
        
        void ( STDMETHODCALLTYPE *ReleaseLock )( 
            IWDFIoRequest * This);
        
        void ( STDMETHODCALLTYPE *CompleteWithInformation )( 
            IWDFIoRequest * This,
            /* [annotation][in] */ 
            _In_  HRESULT CompletionStatus,
            /* [annotation][in] */ 
            _In_  SIZE_T Information);
        
        void ( STDMETHODCALLTYPE *SetInformation )( 
            IWDFIoRequest * This,
            /* [annotation][in] */ 
            _In_  ULONG_PTR Information);
        
        void ( STDMETHODCALLTYPE *Complete )( 
            IWDFIoRequest * This,
            /* [annotation][in] */ 
            _In_  HRESULT CompletionStatus);
        
        void ( STDMETHODCALLTYPE *SetCompletionCallback )( 
            IWDFIoRequest * This,
            /* [annotation][in] */ 
            _In_  IRequestCallbackRequestCompletion *pCompletionCallback,
            /* [annotation][unique][in] */ 
            _In_opt_  void *pContext);
        
        WDF_REQUEST_TYPE ( STDMETHODCALLTYPE *GetType )( 
            IWDFIoRequest * This);
        
        void ( STDMETHODCALLTYPE *GetCreateParameters )( 
            IWDFIoRequest * This,
            /* [annotation][unique][out] */ 
            _Out_opt_  ULONG *pOptions,
            /* [annotation][unique][out] */ 
            _Out_opt_  USHORT *pFileAttributes,
            /* [annotation][unique][out] */ 
            _Out_opt_  USHORT *pShareAccess);
        
        void ( STDMETHODCALLTYPE *GetReadParameters )( 
            IWDFIoRequest * This,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pSizeInBytes,
            /* [annotation][unique][out] */ 
            _Out_opt_  LONGLONG *pullOffset,
            /* [annotation][unique][out] */ 
            _Out_opt_  ULONG *pulKey);
        
        void ( STDMETHODCALLTYPE *GetWriteParameters )( 
            IWDFIoRequest * This,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pSizeInBytes,
            /* [annotation][unique][out] */ 
            _Out_opt_  LONGLONG *pullOffset,
            /* [annotation][unique][out] */ 
            _Out_opt_  ULONG *pulKey);
        
        void ( STDMETHODCALLTYPE *GetDeviceIoControlParameters )( 
            IWDFIoRequest * This,
            /* [annotation][unique][out] */ 
            _Out_opt_  ULONG *pControlCode,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pInBufferSize,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pOutBufferSize);
        
        void ( STDMETHODCALLTYPE *GetOutputMemory )( 
            IWDFIoRequest * This,
            /* [annotation][out] */ 
            _Out_  IWDFMemory **ppWdfMemory);
        
        void ( STDMETHODCALLTYPE *GetInputMemory )( 
            IWDFIoRequest * This,
            /* [annotation][out] */ 
            _Out_  IWDFMemory **ppWdfMemory);
        
        void ( STDMETHODCALLTYPE *MarkCancelable )( 
            IWDFIoRequest * This,
            /* [annotation][in] */ 
            _In_  IRequestCallbackCancel *pCancelCallback);
        
        HRESULT ( STDMETHODCALLTYPE *UnmarkCancelable )( 
            IWDFIoRequest * This);
        
        BOOL ( STDMETHODCALLTYPE *CancelSentRequest )( 
            IWDFIoRequest * This);
        
        HRESULT ( STDMETHODCALLTYPE *ForwardToIoQueue )( 
            IWDFIoRequest * This,
            /* [annotation][in] */ 
            _In_  IWDFIoQueue *pDestination);
        
        HRESULT ( STDMETHODCALLTYPE *Send )( 
            IWDFIoRequest * This,
            /* [annotation][in] */ 
            _In_  IWDFIoTarget *pIoTarget,
            /* [annotation][in] */ 
            _In_  ULONG Flags,
            /* [annotation][in] */ 
            _In_  LONGLONG Timeout);
        
        void ( STDMETHODCALLTYPE *GetFileObject )( 
            IWDFIoRequest * This,
            /* [annotation][out] */ 
            _Out_  IWDFFile **ppFileObject);
        
        void ( STDMETHODCALLTYPE *FormatUsingCurrentType )( 
            IWDFIoRequest * This);
        
        ULONG ( STDMETHODCALLTYPE *GetRequestorProcessId )( 
            IWDFIoRequest * This);
        
        void ( STDMETHODCALLTYPE *GetIoQueue )( 
            IWDFIoRequest * This,
            /* [annotation][out] */ 
            _Out_  IWDFIoQueue **ppWdfIoQueue);
        
        HRESULT ( STDMETHODCALLTYPE *Impersonate )( 
            IWDFIoRequest * This,
            /* [annotation][in] */ 
            _In_  SECURITY_IMPERSONATION_LEVEL ImpersonationLevel,
            /* [annotation][in] */ 
            _In_  IImpersonateCallback *pCallback,
            /* [annotation][unique][in] */ 
            _In_opt_  void *pvCallbackContext);
        
        BOOL ( STDMETHODCALLTYPE *IsFrom32BitProcess )( 
            IWDFIoRequest * This);
        
        void ( STDMETHODCALLTYPE *GetCompletionParams )( 
            IWDFIoRequest * This,
            /* [annotation][out] */ 
            _Out_  IWDFRequestCompletionParams **ppCompletionParams);
        
        END_INTERFACE
    } IWDFIoRequestVtbl;

    interface IWDFIoRequest
    {
        CONST_VTBL struct IWDFIoRequestVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFIoRequest_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFIoRequest_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFIoRequest_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFIoRequest_DeleteWdfObject(This)	\
    ( (This)->lpVtbl -> DeleteWdfObject(This) ) 

#define IWDFIoRequest_AssignContext(This,pCleanupCallback,pContext)	\
    ( (This)->lpVtbl -> AssignContext(This,pCleanupCallback,pContext) ) 

#define IWDFIoRequest_RetrieveContext(This,ppvContext)	\
    ( (This)->lpVtbl -> RetrieveContext(This,ppvContext) ) 

#define IWDFIoRequest_AcquireLock(This)	\
    ( (This)->lpVtbl -> AcquireLock(This) ) 

#define IWDFIoRequest_ReleaseLock(This)	\
    ( (This)->lpVtbl -> ReleaseLock(This) ) 


#define IWDFIoRequest_CompleteWithInformation(This,CompletionStatus,Information)	\
    ( (This)->lpVtbl -> CompleteWithInformation(This,CompletionStatus,Information) ) 

#define IWDFIoRequest_SetInformation(This,Information)	\
    ( (This)->lpVtbl -> SetInformation(This,Information) ) 

#define IWDFIoRequest_Complete(This,CompletionStatus)	\
    ( (This)->lpVtbl -> Complete(This,CompletionStatus) ) 

#define IWDFIoRequest_SetCompletionCallback(This,pCompletionCallback,pContext)	\
    ( (This)->lpVtbl -> SetCompletionCallback(This,pCompletionCallback,pContext) ) 

#define IWDFIoRequest_GetType(This)	\
    ( (This)->lpVtbl -> GetType(This) ) 

#define IWDFIoRequest_GetCreateParameters(This,pOptions,pFileAttributes,pShareAccess)	\
    ( (This)->lpVtbl -> GetCreateParameters(This,pOptions,pFileAttributes,pShareAccess) ) 

#define IWDFIoRequest_GetReadParameters(This,pSizeInBytes,pullOffset,pulKey)	\
    ( (This)->lpVtbl -> GetReadParameters(This,pSizeInBytes,pullOffset,pulKey) ) 

#define IWDFIoRequest_GetWriteParameters(This,pSizeInBytes,pullOffset,pulKey)	\
    ( (This)->lpVtbl -> GetWriteParameters(This,pSizeInBytes,pullOffset,pulKey) ) 

#define IWDFIoRequest_GetDeviceIoControlParameters(This,pControlCode,pInBufferSize,pOutBufferSize)	\
    ( (This)->lpVtbl -> GetDeviceIoControlParameters(This,pControlCode,pInBufferSize,pOutBufferSize) ) 

#define IWDFIoRequest_GetOutputMemory(This,ppWdfMemory)	\
    ( (This)->lpVtbl -> GetOutputMemory(This,ppWdfMemory) ) 

#define IWDFIoRequest_GetInputMemory(This,ppWdfMemory)	\
    ( (This)->lpVtbl -> GetInputMemory(This,ppWdfMemory) ) 

#define IWDFIoRequest_MarkCancelable(This,pCancelCallback)	\
    ( (This)->lpVtbl -> MarkCancelable(This,pCancelCallback) ) 

#define IWDFIoRequest_UnmarkCancelable(This)	\
    ( (This)->lpVtbl -> UnmarkCancelable(This) ) 

#define IWDFIoRequest_CancelSentRequest(This)	\
    ( (This)->lpVtbl -> CancelSentRequest(This) ) 

#define IWDFIoRequest_ForwardToIoQueue(This,pDestination)	\
    ( (This)->lpVtbl -> ForwardToIoQueue(This,pDestination) ) 

#define IWDFIoRequest_Send(This,pIoTarget,Flags,Timeout)	\
    ( (This)->lpVtbl -> Send(This,pIoTarget,Flags,Timeout) ) 

#define IWDFIoRequest_GetFileObject(This,ppFileObject)	\
    ( (This)->lpVtbl -> GetFileObject(This,ppFileObject) ) 

#define IWDFIoRequest_FormatUsingCurrentType(This)	\
    ( (This)->lpVtbl -> FormatUsingCurrentType(This) ) 

#define IWDFIoRequest_GetRequestorProcessId(This)	\
    ( (This)->lpVtbl -> GetRequestorProcessId(This) ) 

#define IWDFIoRequest_GetIoQueue(This,ppWdfIoQueue)	\
    ( (This)->lpVtbl -> GetIoQueue(This,ppWdfIoQueue) ) 

#define IWDFIoRequest_Impersonate(This,ImpersonationLevel,pCallback,pvCallbackContext)	\
    ( (This)->lpVtbl -> Impersonate(This,ImpersonationLevel,pCallback,pvCallbackContext) ) 

#define IWDFIoRequest_IsFrom32BitProcess(This)	\
    ( (This)->lpVtbl -> IsFrom32BitProcess(This) ) 

#define IWDFIoRequest_GetCompletionParams(This,ppCompletionParams)	\
    ( (This)->lpVtbl -> GetCompletionParams(This,ppCompletionParams) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFIoRequest_INTERFACE_DEFINED__ */


#ifndef __IWDFIoRequest2_INTERFACE_DEFINED__
#define __IWDFIoRequest2_INTERFACE_DEFINED__

/* interface IWDFIoRequest2 */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWDFIoRequest2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1B67F4CD-B278-4085-93E7-57970D98B92B")
    IWDFIoRequest2 : public IWDFIoRequest
    {
    public:
        virtual void STDMETHODCALLTYPE Reuse( 
            /* [annotation][in] */ 
            _In_  HRESULT hrNewStatus) = 0;
        
        virtual WDF_KPROCESSOR_MODE STDMETHODCALLTYPE GetRequestorMode( void) = 0;
        
        virtual BOOL STDMETHODCALLTYPE IsFromUserModeDriver( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RetrieveInputBuffer( 
            /* [annotation][in] */ 
            _In_  SIZE_T MinimumRequiredCb,
            /* [annotation][out] */ 
            _Out_  PVOID *Buffer,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *BufferCb) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RetrieveOutputBuffer( 
            /* [annotation][in] */ 
            _In_  SIZE_T MinimumRequiredCb,
            /* [annotation][out] */ 
            _Out_  PVOID *Buffer,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *BufferCb) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RetrieveInputMemory( 
            /* [annotation][out] */ 
            _Out_  IWDFMemory **Memory) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RetrieveOutputMemory( 
            /* [annotation][out] */ 
            _Out_  IWDFMemory **Memory) = 0;
        
        virtual WDF_DEVICE_IO_TYPE STDMETHODCALLTYPE GetEffectiveIoType( void) = 0;
        
        virtual void STDMETHODCALLTYPE GetCreateParametersEx( 
            /* [annotation][unique][out] */ 
            _Out_opt_  ULONG *pOptions,
            /* [annotation][unique][out] */ 
            _Out_opt_  USHORT *pFileAttributes,
            /* [annotation][unique][out] */ 
            _Out_opt_  USHORT *pShareAccess,
            /* [annotation][unique][out] */ 
            _Out_opt_  ACCESS_MASK *pDesiredAccess) = 0;
        
        virtual void STDMETHODCALLTYPE GetQueryInformationParameters( 
            /* [annotation][unique][out] */ 
            _Out_opt_  WDF_FILE_INFORMATION_CLASS *pInformationClass,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pSizeInBytes) = 0;
        
        virtual void STDMETHODCALLTYPE GetSetInformationParameters( 
            /* [annotation][unique][out] */ 
            _Out_opt_  WDF_FILE_INFORMATION_CLASS *pInformationClass,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pSizeInBytes) = 0;
        
        virtual BOOL STDMETHODCALLTYPE IsCanceled( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStatus( void) = 0;
        
        virtual void STDMETHODCALLTYPE StopAcknowledge( 
            /* [annotation][in] */ 
            _In_  BOOL Requeue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Requeue( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWDFIoRequest2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFIoRequest2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFIoRequest2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFIoRequest2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteWdfObject )( 
            IWDFIoRequest2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AssignContext )( 
            IWDFIoRequest2 * This,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  IObjectCleanup *pCleanupCallback,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  void *pContext);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveContext )( 
            IWDFIoRequest2 * This,
            /* [annotation][out] */ 
            _Out_  void **ppvContext);
        
        void ( STDMETHODCALLTYPE *AcquireLock )( 
            IWDFIoRequest2 * This);
        
        void ( STDMETHODCALLTYPE *ReleaseLock )( 
            IWDFIoRequest2 * This);
        
        void ( STDMETHODCALLTYPE *CompleteWithInformation )( 
            IWDFIoRequest2 * This,
            /* [annotation][in] */ 
            _In_  HRESULT CompletionStatus,
            /* [annotation][in] */ 
            _In_  SIZE_T Information);
        
        void ( STDMETHODCALLTYPE *SetInformation )( 
            IWDFIoRequest2 * This,
            /* [annotation][in] */ 
            _In_  ULONG_PTR Information);
        
        void ( STDMETHODCALLTYPE *Complete )( 
            IWDFIoRequest2 * This,
            /* [annotation][in] */ 
            _In_  HRESULT CompletionStatus);
        
        void ( STDMETHODCALLTYPE *SetCompletionCallback )( 
            IWDFIoRequest2 * This,
            /* [annotation][in] */ 
            _In_  IRequestCallbackRequestCompletion *pCompletionCallback,
            /* [annotation][unique][in] */ 
            _In_opt_  void *pContext);
        
        WDF_REQUEST_TYPE ( STDMETHODCALLTYPE *GetType )( 
            IWDFIoRequest2 * This);
        
        void ( STDMETHODCALLTYPE *GetCreateParameters )( 
            IWDFIoRequest2 * This,
            /* [annotation][unique][out] */ 
            _Out_opt_  ULONG *pOptions,
            /* [annotation][unique][out] */ 
            _Out_opt_  USHORT *pFileAttributes,
            /* [annotation][unique][out] */ 
            _Out_opt_  USHORT *pShareAccess);
        
        void ( STDMETHODCALLTYPE *GetReadParameters )( 
            IWDFIoRequest2 * This,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pSizeInBytes,
            /* [annotation][unique][out] */ 
            _Out_opt_  LONGLONG *pullOffset,
            /* [annotation][unique][out] */ 
            _Out_opt_  ULONG *pulKey);
        
        void ( STDMETHODCALLTYPE *GetWriteParameters )( 
            IWDFIoRequest2 * This,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pSizeInBytes,
            /* [annotation][unique][out] */ 
            _Out_opt_  LONGLONG *pullOffset,
            /* [annotation][unique][out] */ 
            _Out_opt_  ULONG *pulKey);
        
        void ( STDMETHODCALLTYPE *GetDeviceIoControlParameters )( 
            IWDFIoRequest2 * This,
            /* [annotation][unique][out] */ 
            _Out_opt_  ULONG *pControlCode,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pInBufferSize,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pOutBufferSize);
        
        void ( STDMETHODCALLTYPE *GetOutputMemory )( 
            IWDFIoRequest2 * This,
            /* [annotation][out] */ 
            _Out_  IWDFMemory **ppWdfMemory);
        
        void ( STDMETHODCALLTYPE *GetInputMemory )( 
            IWDFIoRequest2 * This,
            /* [annotation][out] */ 
            _Out_  IWDFMemory **ppWdfMemory);
        
        void ( STDMETHODCALLTYPE *MarkCancelable )( 
            IWDFIoRequest2 * This,
            /* [annotation][in] */ 
            _In_  IRequestCallbackCancel *pCancelCallback);
        
        HRESULT ( STDMETHODCALLTYPE *UnmarkCancelable )( 
            IWDFIoRequest2 * This);
        
        BOOL ( STDMETHODCALLTYPE *CancelSentRequest )( 
            IWDFIoRequest2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ForwardToIoQueue )( 
            IWDFIoRequest2 * This,
            /* [annotation][in] */ 
            _In_  IWDFIoQueue *pDestination);
        
        HRESULT ( STDMETHODCALLTYPE *Send )( 
            IWDFIoRequest2 * This,
            /* [annotation][in] */ 
            _In_  IWDFIoTarget *pIoTarget,
            /* [annotation][in] */ 
            _In_  ULONG Flags,
            /* [annotation][in] */ 
            _In_  LONGLONG Timeout);
        
        void ( STDMETHODCALLTYPE *GetFileObject )( 
            IWDFIoRequest2 * This,
            /* [annotation][out] */ 
            _Out_  IWDFFile **ppFileObject);
        
        void ( STDMETHODCALLTYPE *FormatUsingCurrentType )( 
            IWDFIoRequest2 * This);
        
        ULONG ( STDMETHODCALLTYPE *GetRequestorProcessId )( 
            IWDFIoRequest2 * This);
        
        void ( STDMETHODCALLTYPE *GetIoQueue )( 
            IWDFIoRequest2 * This,
            /* [annotation][out] */ 
            _Out_  IWDFIoQueue **ppWdfIoQueue);
        
        HRESULT ( STDMETHODCALLTYPE *Impersonate )( 
            IWDFIoRequest2 * This,
            /* [annotation][in] */ 
            _In_  SECURITY_IMPERSONATION_LEVEL ImpersonationLevel,
            /* [annotation][in] */ 
            _In_  IImpersonateCallback *pCallback,
            /* [annotation][unique][in] */ 
            _In_opt_  void *pvCallbackContext);
        
        BOOL ( STDMETHODCALLTYPE *IsFrom32BitProcess )( 
            IWDFIoRequest2 * This);
        
        void ( STDMETHODCALLTYPE *GetCompletionParams )( 
            IWDFIoRequest2 * This,
            /* [annotation][out] */ 
            _Out_  IWDFRequestCompletionParams **ppCompletionParams);
        
        void ( STDMETHODCALLTYPE *Reuse )( 
            IWDFIoRequest2 * This,
            /* [annotation][in] */ 
            _In_  HRESULT hrNewStatus);
        
        WDF_KPROCESSOR_MODE ( STDMETHODCALLTYPE *GetRequestorMode )( 
            IWDFIoRequest2 * This);
        
        BOOL ( STDMETHODCALLTYPE *IsFromUserModeDriver )( 
            IWDFIoRequest2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveInputBuffer )( 
            IWDFIoRequest2 * This,
            /* [annotation][in] */ 
            _In_  SIZE_T MinimumRequiredCb,
            /* [annotation][out] */ 
            _Out_  PVOID *Buffer,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *BufferCb);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveOutputBuffer )( 
            IWDFIoRequest2 * This,
            /* [annotation][in] */ 
            _In_  SIZE_T MinimumRequiredCb,
            /* [annotation][out] */ 
            _Out_  PVOID *Buffer,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *BufferCb);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveInputMemory )( 
            IWDFIoRequest2 * This,
            /* [annotation][out] */ 
            _Out_  IWDFMemory **Memory);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveOutputMemory )( 
            IWDFIoRequest2 * This,
            /* [annotation][out] */ 
            _Out_  IWDFMemory **Memory);
        
        WDF_DEVICE_IO_TYPE ( STDMETHODCALLTYPE *GetEffectiveIoType )( 
            IWDFIoRequest2 * This);
        
        void ( STDMETHODCALLTYPE *GetCreateParametersEx )( 
            IWDFIoRequest2 * This,
            /* [annotation][unique][out] */ 
            _Out_opt_  ULONG *pOptions,
            /* [annotation][unique][out] */ 
            _Out_opt_  USHORT *pFileAttributes,
            /* [annotation][unique][out] */ 
            _Out_opt_  USHORT *pShareAccess,
            /* [annotation][unique][out] */ 
            _Out_opt_  ACCESS_MASK *pDesiredAccess);
        
        void ( STDMETHODCALLTYPE *GetQueryInformationParameters )( 
            IWDFIoRequest2 * This,
            /* [annotation][unique][out] */ 
            _Out_opt_  WDF_FILE_INFORMATION_CLASS *pInformationClass,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pSizeInBytes);
        
        void ( STDMETHODCALLTYPE *GetSetInformationParameters )( 
            IWDFIoRequest2 * This,
            /* [annotation][unique][out] */ 
            _Out_opt_  WDF_FILE_INFORMATION_CLASS *pInformationClass,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pSizeInBytes);
        
        BOOL ( STDMETHODCALLTYPE *IsCanceled )( 
            IWDFIoRequest2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetStatus )( 
            IWDFIoRequest2 * This);
        
        void ( STDMETHODCALLTYPE *StopAcknowledge )( 
            IWDFIoRequest2 * This,
            /* [annotation][in] */ 
            _In_  BOOL Requeue);
        
        HRESULT ( STDMETHODCALLTYPE *Requeue )( 
            IWDFIoRequest2 * This);
        
        END_INTERFACE
    } IWDFIoRequest2Vtbl;

    interface IWDFIoRequest2
    {
        CONST_VTBL struct IWDFIoRequest2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFIoRequest2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFIoRequest2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFIoRequest2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFIoRequest2_DeleteWdfObject(This)	\
    ( (This)->lpVtbl -> DeleteWdfObject(This) ) 

#define IWDFIoRequest2_AssignContext(This,pCleanupCallback,pContext)	\
    ( (This)->lpVtbl -> AssignContext(This,pCleanupCallback,pContext) ) 

#define IWDFIoRequest2_RetrieveContext(This,ppvContext)	\
    ( (This)->lpVtbl -> RetrieveContext(This,ppvContext) ) 

#define IWDFIoRequest2_AcquireLock(This)	\
    ( (This)->lpVtbl -> AcquireLock(This) ) 

#define IWDFIoRequest2_ReleaseLock(This)	\
    ( (This)->lpVtbl -> ReleaseLock(This) ) 


#define IWDFIoRequest2_CompleteWithInformation(This,CompletionStatus,Information)	\
    ( (This)->lpVtbl -> CompleteWithInformation(This,CompletionStatus,Information) ) 

#define IWDFIoRequest2_SetInformation(This,Information)	\
    ( (This)->lpVtbl -> SetInformation(This,Information) ) 

#define IWDFIoRequest2_Complete(This,CompletionStatus)	\
    ( (This)->lpVtbl -> Complete(This,CompletionStatus) ) 

#define IWDFIoRequest2_SetCompletionCallback(This,pCompletionCallback,pContext)	\
    ( (This)->lpVtbl -> SetCompletionCallback(This,pCompletionCallback,pContext) ) 

#define IWDFIoRequest2_GetType(This)	\
    ( (This)->lpVtbl -> GetType(This) ) 

#define IWDFIoRequest2_GetCreateParameters(This,pOptions,pFileAttributes,pShareAccess)	\
    ( (This)->lpVtbl -> GetCreateParameters(This,pOptions,pFileAttributes,pShareAccess) ) 

#define IWDFIoRequest2_GetReadParameters(This,pSizeInBytes,pullOffset,pulKey)	\
    ( (This)->lpVtbl -> GetReadParameters(This,pSizeInBytes,pullOffset,pulKey) ) 

#define IWDFIoRequest2_GetWriteParameters(This,pSizeInBytes,pullOffset,pulKey)	\
    ( (This)->lpVtbl -> GetWriteParameters(This,pSizeInBytes,pullOffset,pulKey) ) 

#define IWDFIoRequest2_GetDeviceIoControlParameters(This,pControlCode,pInBufferSize,pOutBufferSize)	\
    ( (This)->lpVtbl -> GetDeviceIoControlParameters(This,pControlCode,pInBufferSize,pOutBufferSize) ) 

#define IWDFIoRequest2_GetOutputMemory(This,ppWdfMemory)	\
    ( (This)->lpVtbl -> GetOutputMemory(This,ppWdfMemory) ) 

#define IWDFIoRequest2_GetInputMemory(This,ppWdfMemory)	\
    ( (This)->lpVtbl -> GetInputMemory(This,ppWdfMemory) ) 

#define IWDFIoRequest2_MarkCancelable(This,pCancelCallback)	\
    ( (This)->lpVtbl -> MarkCancelable(This,pCancelCallback) ) 

#define IWDFIoRequest2_UnmarkCancelable(This)	\
    ( (This)->lpVtbl -> UnmarkCancelable(This) ) 

#define IWDFIoRequest2_CancelSentRequest(This)	\
    ( (This)->lpVtbl -> CancelSentRequest(This) ) 

#define IWDFIoRequest2_ForwardToIoQueue(This,pDestination)	\
    ( (This)->lpVtbl -> ForwardToIoQueue(This,pDestination) ) 

#define IWDFIoRequest2_Send(This,pIoTarget,Flags,Timeout)	\
    ( (This)->lpVtbl -> Send(This,pIoTarget,Flags,Timeout) ) 

#define IWDFIoRequest2_GetFileObject(This,ppFileObject)	\
    ( (This)->lpVtbl -> GetFileObject(This,ppFileObject) ) 

#define IWDFIoRequest2_FormatUsingCurrentType(This)	\
    ( (This)->lpVtbl -> FormatUsingCurrentType(This) ) 

#define IWDFIoRequest2_GetRequestorProcessId(This)	\
    ( (This)->lpVtbl -> GetRequestorProcessId(This) ) 

#define IWDFIoRequest2_GetIoQueue(This,ppWdfIoQueue)	\
    ( (This)->lpVtbl -> GetIoQueue(This,ppWdfIoQueue) ) 

#define IWDFIoRequest2_Impersonate(This,ImpersonationLevel,pCallback,pvCallbackContext)	\
    ( (This)->lpVtbl -> Impersonate(This,ImpersonationLevel,pCallback,pvCallbackContext) ) 

#define IWDFIoRequest2_IsFrom32BitProcess(This)	\
    ( (This)->lpVtbl -> IsFrom32BitProcess(This) ) 

#define IWDFIoRequest2_GetCompletionParams(This,ppCompletionParams)	\
    ( (This)->lpVtbl -> GetCompletionParams(This,ppCompletionParams) ) 


#define IWDFIoRequest2_Reuse(This,hrNewStatus)	\
    ( (This)->lpVtbl -> Reuse(This,hrNewStatus) ) 

#define IWDFIoRequest2_GetRequestorMode(This)	\
    ( (This)->lpVtbl -> GetRequestorMode(This) ) 

#define IWDFIoRequest2_IsFromUserModeDriver(This)	\
    ( (This)->lpVtbl -> IsFromUserModeDriver(This) ) 

#define IWDFIoRequest2_RetrieveInputBuffer(This,MinimumRequiredCb,Buffer,BufferCb)	\
    ( (This)->lpVtbl -> RetrieveInputBuffer(This,MinimumRequiredCb,Buffer,BufferCb) ) 

#define IWDFIoRequest2_RetrieveOutputBuffer(This,MinimumRequiredCb,Buffer,BufferCb)	\
    ( (This)->lpVtbl -> RetrieveOutputBuffer(This,MinimumRequiredCb,Buffer,BufferCb) ) 

#define IWDFIoRequest2_RetrieveInputMemory(This,Memory)	\
    ( (This)->lpVtbl -> RetrieveInputMemory(This,Memory) ) 

#define IWDFIoRequest2_RetrieveOutputMemory(This,Memory)	\
    ( (This)->lpVtbl -> RetrieveOutputMemory(This,Memory) ) 

#define IWDFIoRequest2_GetEffectiveIoType(This)	\
    ( (This)->lpVtbl -> GetEffectiveIoType(This) ) 

#define IWDFIoRequest2_GetCreateParametersEx(This,pOptions,pFileAttributes,pShareAccess,pDesiredAccess)	\
    ( (This)->lpVtbl -> GetCreateParametersEx(This,pOptions,pFileAttributes,pShareAccess,pDesiredAccess) ) 

#define IWDFIoRequest2_GetQueryInformationParameters(This,pInformationClass,pSizeInBytes)	\
    ( (This)->lpVtbl -> GetQueryInformationParameters(This,pInformationClass,pSizeInBytes) ) 

#define IWDFIoRequest2_GetSetInformationParameters(This,pInformationClass,pSizeInBytes)	\
    ( (This)->lpVtbl -> GetSetInformationParameters(This,pInformationClass,pSizeInBytes) ) 

#define IWDFIoRequest2_IsCanceled(This)	\
    ( (This)->lpVtbl -> IsCanceled(This) ) 

#define IWDFIoRequest2_GetStatus(This)	\
    ( (This)->lpVtbl -> GetStatus(This) ) 

#define IWDFIoRequest2_StopAcknowledge(This,Requeue)	\
    ( (This)->lpVtbl -> StopAcknowledge(This,Requeue) ) 

#define IWDFIoRequest2_Requeue(This)	\
    ( (This)->lpVtbl -> Requeue(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFIoRequest2_INTERFACE_DEFINED__ */


#ifndef __IWDFIoRequest3_INTERFACE_DEFINED__
#define __IWDFIoRequest3_INTERFACE_DEFINED__

/* interface IWDFIoRequest3 */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWDFIoRequest3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("92795040-B8AA-487a-B110-B80EBBD40B44")
    IWDFIoRequest3 : public IWDFIoRequest2
    {
    public:
        virtual void STDMETHODCALLTYPE SetUserModeDriverInitiatedIo( 
            /* [annotation][in] */ 
            _In_  BOOL IsUserModeDriverInitiated) = 0;
        
        virtual BOOL STDMETHODCALLTYPE GetUserModeDriverInitiatedIo( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RetrieveActivityId( 
            /* [annotation][out] */ 
            _Out_  LPGUID ActivityId) = 0;
        
        virtual void STDMETHODCALLTYPE SetActivityId( 
            /* [annotation][in] */ 
            _In_  LPGUID ActivityId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWDFIoRequest3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFIoRequest3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFIoRequest3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFIoRequest3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteWdfObject )( 
            IWDFIoRequest3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AssignContext )( 
            IWDFIoRequest3 * This,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  IObjectCleanup *pCleanupCallback,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  void *pContext);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveContext )( 
            IWDFIoRequest3 * This,
            /* [annotation][out] */ 
            _Out_  void **ppvContext);
        
        void ( STDMETHODCALLTYPE *AcquireLock )( 
            IWDFIoRequest3 * This);
        
        void ( STDMETHODCALLTYPE *ReleaseLock )( 
            IWDFIoRequest3 * This);
        
        void ( STDMETHODCALLTYPE *CompleteWithInformation )( 
            IWDFIoRequest3 * This,
            /* [annotation][in] */ 
            _In_  HRESULT CompletionStatus,
            /* [annotation][in] */ 
            _In_  SIZE_T Information);
        
        void ( STDMETHODCALLTYPE *SetInformation )( 
            IWDFIoRequest3 * This,
            /* [annotation][in] */ 
            _In_  ULONG_PTR Information);
        
        void ( STDMETHODCALLTYPE *Complete )( 
            IWDFIoRequest3 * This,
            /* [annotation][in] */ 
            _In_  HRESULT CompletionStatus);
        
        void ( STDMETHODCALLTYPE *SetCompletionCallback )( 
            IWDFIoRequest3 * This,
            /* [annotation][in] */ 
            _In_  IRequestCallbackRequestCompletion *pCompletionCallback,
            /* [annotation][unique][in] */ 
            _In_opt_  void *pContext);
        
        WDF_REQUEST_TYPE ( STDMETHODCALLTYPE *GetType )( 
            IWDFIoRequest3 * This);
        
        void ( STDMETHODCALLTYPE *GetCreateParameters )( 
            IWDFIoRequest3 * This,
            /* [annotation][unique][out] */ 
            _Out_opt_  ULONG *pOptions,
            /* [annotation][unique][out] */ 
            _Out_opt_  USHORT *pFileAttributes,
            /* [annotation][unique][out] */ 
            _Out_opt_  USHORT *pShareAccess);
        
        void ( STDMETHODCALLTYPE *GetReadParameters )( 
            IWDFIoRequest3 * This,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pSizeInBytes,
            /* [annotation][unique][out] */ 
            _Out_opt_  LONGLONG *pullOffset,
            /* [annotation][unique][out] */ 
            _Out_opt_  ULONG *pulKey);
        
        void ( STDMETHODCALLTYPE *GetWriteParameters )( 
            IWDFIoRequest3 * This,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pSizeInBytes,
            /* [annotation][unique][out] */ 
            _Out_opt_  LONGLONG *pullOffset,
            /* [annotation][unique][out] */ 
            _Out_opt_  ULONG *pulKey);
        
        void ( STDMETHODCALLTYPE *GetDeviceIoControlParameters )( 
            IWDFIoRequest3 * This,
            /* [annotation][unique][out] */ 
            _Out_opt_  ULONG *pControlCode,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pInBufferSize,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pOutBufferSize);
        
        void ( STDMETHODCALLTYPE *GetOutputMemory )( 
            IWDFIoRequest3 * This,
            /* [annotation][out] */ 
            _Out_  IWDFMemory **ppWdfMemory);
        
        void ( STDMETHODCALLTYPE *GetInputMemory )( 
            IWDFIoRequest3 * This,
            /* [annotation][out] */ 
            _Out_  IWDFMemory **ppWdfMemory);
        
        void ( STDMETHODCALLTYPE *MarkCancelable )( 
            IWDFIoRequest3 * This,
            /* [annotation][in] */ 
            _In_  IRequestCallbackCancel *pCancelCallback);
        
        HRESULT ( STDMETHODCALLTYPE *UnmarkCancelable )( 
            IWDFIoRequest3 * This);
        
        BOOL ( STDMETHODCALLTYPE *CancelSentRequest )( 
            IWDFIoRequest3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ForwardToIoQueue )( 
            IWDFIoRequest3 * This,
            /* [annotation][in] */ 
            _In_  IWDFIoQueue *pDestination);
        
        HRESULT ( STDMETHODCALLTYPE *Send )( 
            IWDFIoRequest3 * This,
            /* [annotation][in] */ 
            _In_  IWDFIoTarget *pIoTarget,
            /* [annotation][in] */ 
            _In_  ULONG Flags,
            /* [annotation][in] */ 
            _In_  LONGLONG Timeout);
        
        void ( STDMETHODCALLTYPE *GetFileObject )( 
            IWDFIoRequest3 * This,
            /* [annotation][out] */ 
            _Out_  IWDFFile **ppFileObject);
        
        void ( STDMETHODCALLTYPE *FormatUsingCurrentType )( 
            IWDFIoRequest3 * This);
        
        ULONG ( STDMETHODCALLTYPE *GetRequestorProcessId )( 
            IWDFIoRequest3 * This);
        
        void ( STDMETHODCALLTYPE *GetIoQueue )( 
            IWDFIoRequest3 * This,
            /* [annotation][out] */ 
            _Out_  IWDFIoQueue **ppWdfIoQueue);
        
        HRESULT ( STDMETHODCALLTYPE *Impersonate )( 
            IWDFIoRequest3 * This,
            /* [annotation][in] */ 
            _In_  SECURITY_IMPERSONATION_LEVEL ImpersonationLevel,
            /* [annotation][in] */ 
            _In_  IImpersonateCallback *pCallback,
            /* [annotation][unique][in] */ 
            _In_opt_  void *pvCallbackContext);
        
        BOOL ( STDMETHODCALLTYPE *IsFrom32BitProcess )( 
            IWDFIoRequest3 * This);
        
        void ( STDMETHODCALLTYPE *GetCompletionParams )( 
            IWDFIoRequest3 * This,
            /* [annotation][out] */ 
            _Out_  IWDFRequestCompletionParams **ppCompletionParams);
        
        void ( STDMETHODCALLTYPE *Reuse )( 
            IWDFIoRequest3 * This,
            /* [annotation][in] */ 
            _In_  HRESULT hrNewStatus);
        
        WDF_KPROCESSOR_MODE ( STDMETHODCALLTYPE *GetRequestorMode )( 
            IWDFIoRequest3 * This);
        
        BOOL ( STDMETHODCALLTYPE *IsFromUserModeDriver )( 
            IWDFIoRequest3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveInputBuffer )( 
            IWDFIoRequest3 * This,
            /* [annotation][in] */ 
            _In_  SIZE_T MinimumRequiredCb,
            /* [annotation][out] */ 
            _Out_  PVOID *Buffer,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *BufferCb);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveOutputBuffer )( 
            IWDFIoRequest3 * This,
            /* [annotation][in] */ 
            _In_  SIZE_T MinimumRequiredCb,
            /* [annotation][out] */ 
            _Out_  PVOID *Buffer,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *BufferCb);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveInputMemory )( 
            IWDFIoRequest3 * This,
            /* [annotation][out] */ 
            _Out_  IWDFMemory **Memory);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveOutputMemory )( 
            IWDFIoRequest3 * This,
            /* [annotation][out] */ 
            _Out_  IWDFMemory **Memory);
        
        WDF_DEVICE_IO_TYPE ( STDMETHODCALLTYPE *GetEffectiveIoType )( 
            IWDFIoRequest3 * This);
        
        void ( STDMETHODCALLTYPE *GetCreateParametersEx )( 
            IWDFIoRequest3 * This,
            /* [annotation][unique][out] */ 
            _Out_opt_  ULONG *pOptions,
            /* [annotation][unique][out] */ 
            _Out_opt_  USHORT *pFileAttributes,
            /* [annotation][unique][out] */ 
            _Out_opt_  USHORT *pShareAccess,
            /* [annotation][unique][out] */ 
            _Out_opt_  ACCESS_MASK *pDesiredAccess);
        
        void ( STDMETHODCALLTYPE *GetQueryInformationParameters )( 
            IWDFIoRequest3 * This,
            /* [annotation][unique][out] */ 
            _Out_opt_  WDF_FILE_INFORMATION_CLASS *pInformationClass,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pSizeInBytes);
        
        void ( STDMETHODCALLTYPE *GetSetInformationParameters )( 
            IWDFIoRequest3 * This,
            /* [annotation][unique][out] */ 
            _Out_opt_  WDF_FILE_INFORMATION_CLASS *pInformationClass,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pSizeInBytes);
        
        BOOL ( STDMETHODCALLTYPE *IsCanceled )( 
            IWDFIoRequest3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetStatus )( 
            IWDFIoRequest3 * This);
        
        void ( STDMETHODCALLTYPE *StopAcknowledge )( 
            IWDFIoRequest3 * This,
            /* [annotation][in] */ 
            _In_  BOOL Requeue);
        
        HRESULT ( STDMETHODCALLTYPE *Requeue )( 
            IWDFIoRequest3 * This);
        
        void ( STDMETHODCALLTYPE *SetUserModeDriverInitiatedIo )( 
            IWDFIoRequest3 * This,
            /* [annotation][in] */ 
            _In_  BOOL IsUserModeDriverInitiated);
        
        BOOL ( STDMETHODCALLTYPE *GetUserModeDriverInitiatedIo )( 
            IWDFIoRequest3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveActivityId )( 
            IWDFIoRequest3 * This,
            /* [annotation][out] */ 
            _Out_  LPGUID ActivityId);
        
        void ( STDMETHODCALLTYPE *SetActivityId )( 
            IWDFIoRequest3 * This,
            /* [annotation][in] */ 
            _In_  LPGUID ActivityId);
        
        END_INTERFACE
    } IWDFIoRequest3Vtbl;

    interface IWDFIoRequest3
    {
        CONST_VTBL struct IWDFIoRequest3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFIoRequest3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFIoRequest3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFIoRequest3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFIoRequest3_DeleteWdfObject(This)	\
    ( (This)->lpVtbl -> DeleteWdfObject(This) ) 

#define IWDFIoRequest3_AssignContext(This,pCleanupCallback,pContext)	\
    ( (This)->lpVtbl -> AssignContext(This,pCleanupCallback,pContext) ) 

#define IWDFIoRequest3_RetrieveContext(This,ppvContext)	\
    ( (This)->lpVtbl -> RetrieveContext(This,ppvContext) ) 

#define IWDFIoRequest3_AcquireLock(This)	\
    ( (This)->lpVtbl -> AcquireLock(This) ) 

#define IWDFIoRequest3_ReleaseLock(This)	\
    ( (This)->lpVtbl -> ReleaseLock(This) ) 


#define IWDFIoRequest3_CompleteWithInformation(This,CompletionStatus,Information)	\
    ( (This)->lpVtbl -> CompleteWithInformation(This,CompletionStatus,Information) ) 

#define IWDFIoRequest3_SetInformation(This,Information)	\
    ( (This)->lpVtbl -> SetInformation(This,Information) ) 

#define IWDFIoRequest3_Complete(This,CompletionStatus)	\
    ( (This)->lpVtbl -> Complete(This,CompletionStatus) ) 

#define IWDFIoRequest3_SetCompletionCallback(This,pCompletionCallback,pContext)	\
    ( (This)->lpVtbl -> SetCompletionCallback(This,pCompletionCallback,pContext) ) 

#define IWDFIoRequest3_GetType(This)	\
    ( (This)->lpVtbl -> GetType(This) ) 

#define IWDFIoRequest3_GetCreateParameters(This,pOptions,pFileAttributes,pShareAccess)	\
    ( (This)->lpVtbl -> GetCreateParameters(This,pOptions,pFileAttributes,pShareAccess) ) 

#define IWDFIoRequest3_GetReadParameters(This,pSizeInBytes,pullOffset,pulKey)	\
    ( (This)->lpVtbl -> GetReadParameters(This,pSizeInBytes,pullOffset,pulKey) ) 

#define IWDFIoRequest3_GetWriteParameters(This,pSizeInBytes,pullOffset,pulKey)	\
    ( (This)->lpVtbl -> GetWriteParameters(This,pSizeInBytes,pullOffset,pulKey) ) 

#define IWDFIoRequest3_GetDeviceIoControlParameters(This,pControlCode,pInBufferSize,pOutBufferSize)	\
    ( (This)->lpVtbl -> GetDeviceIoControlParameters(This,pControlCode,pInBufferSize,pOutBufferSize) ) 

#define IWDFIoRequest3_GetOutputMemory(This,ppWdfMemory)	\
    ( (This)->lpVtbl -> GetOutputMemory(This,ppWdfMemory) ) 

#define IWDFIoRequest3_GetInputMemory(This,ppWdfMemory)	\
    ( (This)->lpVtbl -> GetInputMemory(This,ppWdfMemory) ) 

#define IWDFIoRequest3_MarkCancelable(This,pCancelCallback)	\
    ( (This)->lpVtbl -> MarkCancelable(This,pCancelCallback) ) 

#define IWDFIoRequest3_UnmarkCancelable(This)	\
    ( (This)->lpVtbl -> UnmarkCancelable(This) ) 

#define IWDFIoRequest3_CancelSentRequest(This)	\
    ( (This)->lpVtbl -> CancelSentRequest(This) ) 

#define IWDFIoRequest3_ForwardToIoQueue(This,pDestination)	\
    ( (This)->lpVtbl -> ForwardToIoQueue(This,pDestination) ) 

#define IWDFIoRequest3_Send(This,pIoTarget,Flags,Timeout)	\
    ( (This)->lpVtbl -> Send(This,pIoTarget,Flags,Timeout) ) 

#define IWDFIoRequest3_GetFileObject(This,ppFileObject)	\
    ( (This)->lpVtbl -> GetFileObject(This,ppFileObject) ) 

#define IWDFIoRequest3_FormatUsingCurrentType(This)	\
    ( (This)->lpVtbl -> FormatUsingCurrentType(This) ) 

#define IWDFIoRequest3_GetRequestorProcessId(This)	\
    ( (This)->lpVtbl -> GetRequestorProcessId(This) ) 

#define IWDFIoRequest3_GetIoQueue(This,ppWdfIoQueue)	\
    ( (This)->lpVtbl -> GetIoQueue(This,ppWdfIoQueue) ) 

#define IWDFIoRequest3_Impersonate(This,ImpersonationLevel,pCallback,pvCallbackContext)	\
    ( (This)->lpVtbl -> Impersonate(This,ImpersonationLevel,pCallback,pvCallbackContext) ) 

#define IWDFIoRequest3_IsFrom32BitProcess(This)	\
    ( (This)->lpVtbl -> IsFrom32BitProcess(This) ) 

#define IWDFIoRequest3_GetCompletionParams(This,ppCompletionParams)	\
    ( (This)->lpVtbl -> GetCompletionParams(This,ppCompletionParams) ) 


#define IWDFIoRequest3_Reuse(This,hrNewStatus)	\
    ( (This)->lpVtbl -> Reuse(This,hrNewStatus) ) 

#define IWDFIoRequest3_GetRequestorMode(This)	\
    ( (This)->lpVtbl -> GetRequestorMode(This) ) 

#define IWDFIoRequest3_IsFromUserModeDriver(This)	\
    ( (This)->lpVtbl -> IsFromUserModeDriver(This) ) 

#define IWDFIoRequest3_RetrieveInputBuffer(This,MinimumRequiredCb,Buffer,BufferCb)	\
    ( (This)->lpVtbl -> RetrieveInputBuffer(This,MinimumRequiredCb,Buffer,BufferCb) ) 

#define IWDFIoRequest3_RetrieveOutputBuffer(This,MinimumRequiredCb,Buffer,BufferCb)	\
    ( (This)->lpVtbl -> RetrieveOutputBuffer(This,MinimumRequiredCb,Buffer,BufferCb) ) 

#define IWDFIoRequest3_RetrieveInputMemory(This,Memory)	\
    ( (This)->lpVtbl -> RetrieveInputMemory(This,Memory) ) 

#define IWDFIoRequest3_RetrieveOutputMemory(This,Memory)	\
    ( (This)->lpVtbl -> RetrieveOutputMemory(This,Memory) ) 

#define IWDFIoRequest3_GetEffectiveIoType(This)	\
    ( (This)->lpVtbl -> GetEffectiveIoType(This) ) 

#define IWDFIoRequest3_GetCreateParametersEx(This,pOptions,pFileAttributes,pShareAccess,pDesiredAccess)	\
    ( (This)->lpVtbl -> GetCreateParametersEx(This,pOptions,pFileAttributes,pShareAccess,pDesiredAccess) ) 

#define IWDFIoRequest3_GetQueryInformationParameters(This,pInformationClass,pSizeInBytes)	\
    ( (This)->lpVtbl -> GetQueryInformationParameters(This,pInformationClass,pSizeInBytes) ) 

#define IWDFIoRequest3_GetSetInformationParameters(This,pInformationClass,pSizeInBytes)	\
    ( (This)->lpVtbl -> GetSetInformationParameters(This,pInformationClass,pSizeInBytes) ) 

#define IWDFIoRequest3_IsCanceled(This)	\
    ( (This)->lpVtbl -> IsCanceled(This) ) 

#define IWDFIoRequest3_GetStatus(This)	\
    ( (This)->lpVtbl -> GetStatus(This) ) 

#define IWDFIoRequest3_StopAcknowledge(This,Requeue)	\
    ( (This)->lpVtbl -> StopAcknowledge(This,Requeue) ) 

#define IWDFIoRequest3_Requeue(This)	\
    ( (This)->lpVtbl -> Requeue(This) ) 


#define IWDFIoRequest3_SetUserModeDriverInitiatedIo(This,IsUserModeDriverInitiated)	\
    ( (This)->lpVtbl -> SetUserModeDriverInitiatedIo(This,IsUserModeDriverInitiated) ) 

#define IWDFIoRequest3_GetUserModeDriverInitiatedIo(This)	\
    ( (This)->lpVtbl -> GetUserModeDriverInitiatedIo(This) ) 

#define IWDFIoRequest3_RetrieveActivityId(This,ActivityId)	\
    ( (This)->lpVtbl -> RetrieveActivityId(This,ActivityId) ) 

#define IWDFIoRequest3_SetActivityId(This,ActivityId)	\
    ( (This)->lpVtbl -> SetActivityId(This,ActivityId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFIoRequest3_INTERFACE_DEFINED__ */


#ifndef __IWDFRequestCompletionParams_INTERFACE_DEFINED__
#define __IWDFRequestCompletionParams_INTERFACE_DEFINED__

/* interface IWDFRequestCompletionParams */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWDFRequestCompletionParams;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("707a2b42-69b8-4971-a49c-4031861e7aff")
    IWDFRequestCompletionParams : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCompletionStatus( void) = 0;
        
        virtual ULONG_PTR STDMETHODCALLTYPE GetInformation( void) = 0;
        
        virtual WDF_REQUEST_TYPE STDMETHODCALLTYPE GetCompletedRequestType( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWDFRequestCompletionParamsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFRequestCompletionParams * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFRequestCompletionParams * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFRequestCompletionParams * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCompletionStatus )( 
            IWDFRequestCompletionParams * This);
        
        ULONG_PTR ( STDMETHODCALLTYPE *GetInformation )( 
            IWDFRequestCompletionParams * This);
        
        WDF_REQUEST_TYPE ( STDMETHODCALLTYPE *GetCompletedRequestType )( 
            IWDFRequestCompletionParams * This);
        
        END_INTERFACE
    } IWDFRequestCompletionParamsVtbl;

    interface IWDFRequestCompletionParams
    {
        CONST_VTBL struct IWDFRequestCompletionParamsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFRequestCompletionParams_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFRequestCompletionParams_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFRequestCompletionParams_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFRequestCompletionParams_GetCompletionStatus(This)	\
    ( (This)->lpVtbl -> GetCompletionStatus(This) ) 

#define IWDFRequestCompletionParams_GetInformation(This)	\
    ( (This)->lpVtbl -> GetInformation(This) ) 

#define IWDFRequestCompletionParams_GetCompletedRequestType(This)	\
    ( (This)->lpVtbl -> GetCompletedRequestType(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFRequestCompletionParams_INTERFACE_DEFINED__ */


#ifndef __IWDFIoRequestCompletionParams_INTERFACE_DEFINED__
#define __IWDFIoRequestCompletionParams_INTERFACE_DEFINED__

/* interface IWDFIoRequestCompletionParams */
/* [unique][restricted][local][uuid][object] */ 


EXTERN_C const IID IID_IWDFIoRequestCompletionParams;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("723d4f3c-7722-4c49-99ae-195937bd9582")
    IWDFIoRequestCompletionParams : public IWDFRequestCompletionParams
    {
    public:
        virtual void STDMETHODCALLTYPE GetWriteParameters( 
            /* [annotation][unique][out] */ 
            _Out_opt_  IWDFMemory **ppWriteMemory,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pBytesWritten,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pWriteMemoryOffset) = 0;
        
        virtual void STDMETHODCALLTYPE GetReadParameters( 
            /* [annotation][unique][out] */ 
            _Out_opt_  IWDFMemory **ppReadMemory,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pBytesRead,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pReadMemoryOffset) = 0;
        
        virtual void STDMETHODCALLTYPE GetIoctlParameters( 
            /* [annotation][unique][out] */ 
            _Out_opt_  ULONG *pIoControlCode,
            /* [annotation][unique][out] */ 
            _Out_opt_  IWDFMemory **ppInputMemory,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pInputMemoryOffset,
            /* [annotation][unique][out] */ 
            _Out_opt_  IWDFMemory **ppOutputMemory,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pOutputMemoryOffset,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pOutBytes) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWDFIoRequestCompletionParamsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFIoRequestCompletionParams * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFIoRequestCompletionParams * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFIoRequestCompletionParams * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCompletionStatus )( 
            IWDFIoRequestCompletionParams * This);
        
        ULONG_PTR ( STDMETHODCALLTYPE *GetInformation )( 
            IWDFIoRequestCompletionParams * This);
        
        WDF_REQUEST_TYPE ( STDMETHODCALLTYPE *GetCompletedRequestType )( 
            IWDFIoRequestCompletionParams * This);
        
        void ( STDMETHODCALLTYPE *GetWriteParameters )( 
            IWDFIoRequestCompletionParams * This,
            /* [annotation][unique][out] */ 
            _Out_opt_  IWDFMemory **ppWriteMemory,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pBytesWritten,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pWriteMemoryOffset);
        
        void ( STDMETHODCALLTYPE *GetReadParameters )( 
            IWDFIoRequestCompletionParams * This,
            /* [annotation][unique][out] */ 
            _Out_opt_  IWDFMemory **ppReadMemory,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pBytesRead,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pReadMemoryOffset);
        
        void ( STDMETHODCALLTYPE *GetIoctlParameters )( 
            IWDFIoRequestCompletionParams * This,
            /* [annotation][unique][out] */ 
            _Out_opt_  ULONG *pIoControlCode,
            /* [annotation][unique][out] */ 
            _Out_opt_  IWDFMemory **ppInputMemory,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pInputMemoryOffset,
            /* [annotation][unique][out] */ 
            _Out_opt_  IWDFMemory **ppOutputMemory,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pOutputMemoryOffset,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *pOutBytes);
        
        END_INTERFACE
    } IWDFIoRequestCompletionParamsVtbl;

    interface IWDFIoRequestCompletionParams
    {
        CONST_VTBL struct IWDFIoRequestCompletionParamsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFIoRequestCompletionParams_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFIoRequestCompletionParams_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFIoRequestCompletionParams_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFIoRequestCompletionParams_GetCompletionStatus(This)	\
    ( (This)->lpVtbl -> GetCompletionStatus(This) ) 

#define IWDFIoRequestCompletionParams_GetInformation(This)	\
    ( (This)->lpVtbl -> GetInformation(This) ) 

#define IWDFIoRequestCompletionParams_GetCompletedRequestType(This)	\
    ( (This)->lpVtbl -> GetCompletedRequestType(This) ) 


#define IWDFIoRequestCompletionParams_GetWriteParameters(This,ppWriteMemory,pBytesWritten,pWriteMemoryOffset)	\
    ( (This)->lpVtbl -> GetWriteParameters(This,ppWriteMemory,pBytesWritten,pWriteMemoryOffset) ) 

#define IWDFIoRequestCompletionParams_GetReadParameters(This,ppReadMemory,pBytesRead,pReadMemoryOffset)	\
    ( (This)->lpVtbl -> GetReadParameters(This,ppReadMemory,pBytesRead,pReadMemoryOffset) ) 

#define IWDFIoRequestCompletionParams_GetIoctlParameters(This,pIoControlCode,ppInputMemory,pInputMemoryOffset,ppOutputMemory,pOutputMemoryOffset,pOutBytes)	\
    ( (This)->lpVtbl -> GetIoctlParameters(This,pIoControlCode,ppInputMemory,pInputMemoryOffset,ppOutputMemory,pOutputMemoryOffset,pOutBytes) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFIoRequestCompletionParams_INTERFACE_DEFINED__ */


#ifndef __IWDFFile_INTERFACE_DEFINED__
#define __IWDFFile_INTERFACE_DEFINED__

/* interface IWDFFile */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWDFFile;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CC8FE04B-FE8B-4245-AFD6-C31BC830C791")
    IWDFFile : public IWDFObject
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RetrieveFileName( 
            /* [annotation][unique][out][string] */ 
             _Out_writes_all_opt_(pFileName ? *pdwFileNameLengthInChars : 0)  PWSTR pFileName,
            /* [annotation][out][in] */ 
            _Inout_  DWORD *pdwFileNameLengthInChars) = 0;
        
        virtual void STDMETHODCALLTYPE GetDevice( 
            /* [annotation][out] */ 
            _Out_  IWDFDevice **ppWdfDevice) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWDFFileVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFFile * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFFile * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFFile * This);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteWdfObject )( 
            IWDFFile * This);
        
        HRESULT ( STDMETHODCALLTYPE *AssignContext )( 
            IWDFFile * This,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  IObjectCleanup *pCleanupCallback,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  void *pContext);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveContext )( 
            IWDFFile * This,
            /* [annotation][out] */ 
            _Out_  void **ppvContext);
        
        void ( STDMETHODCALLTYPE *AcquireLock )( 
            IWDFFile * This);
        
        void ( STDMETHODCALLTYPE *ReleaseLock )( 
            IWDFFile * This);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveFileName )( 
            IWDFFile * This,
            /* [annotation][unique][out][string] */ 
             _Out_writes_all_opt_(pFileName ? *pdwFileNameLengthInChars : 0)  PWSTR pFileName,
            /* [annotation][out][in] */ 
            _Inout_  DWORD *pdwFileNameLengthInChars);
        
        void ( STDMETHODCALLTYPE *GetDevice )( 
            IWDFFile * This,
            /* [annotation][out] */ 
            _Out_  IWDFDevice **ppWdfDevice);
        
        END_INTERFACE
    } IWDFFileVtbl;

    interface IWDFFile
    {
        CONST_VTBL struct IWDFFileVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFFile_DeleteWdfObject(This)	\
    ( (This)->lpVtbl -> DeleteWdfObject(This) ) 

#define IWDFFile_AssignContext(This,pCleanupCallback,pContext)	\
    ( (This)->lpVtbl -> AssignContext(This,pCleanupCallback,pContext) ) 

#define IWDFFile_RetrieveContext(This,ppvContext)	\
    ( (This)->lpVtbl -> RetrieveContext(This,ppvContext) ) 

#define IWDFFile_AcquireLock(This)	\
    ( (This)->lpVtbl -> AcquireLock(This) ) 

#define IWDFFile_ReleaseLock(This)	\
    ( (This)->lpVtbl -> ReleaseLock(This) ) 


#define IWDFFile_RetrieveFileName(This,pFileName,pdwFileNameLengthInChars)	\
    ( (This)->lpVtbl -> RetrieveFileName(This,pFileName,pdwFileNameLengthInChars) ) 

#define IWDFFile_GetDevice(This,ppWdfDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppWdfDevice) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFFile_INTERFACE_DEFINED__ */


#ifndef __IWDFFile2_INTERFACE_DEFINED__
#define __IWDFFile2_INTERFACE_DEFINED__

/* interface IWDFFile2 */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWDFFile2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("97893137-CE7F-4918-BC43-A91AEF84B043")
    IWDFFile2 : public IWDFFile
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RetrieveCountedFileName( 
            /* [annotation][size_is][unique][out] */ 
            _Out_writes_all_opt_(pCountedFileName ? *pdwCountedFileNameLengthInChars : 0)  WCHAR *pCountedFileName,
            /* [annotation][out][in] */ 
            _Inout_  DWORD *pdwCountedFileNameLengthInChars) = 0;
        
        virtual void STDMETHODCALLTYPE GetRelatedFileObject( 
            /* [annotation][out] */ 
            _Out_  IWDFFile **ppRelatedFileObj) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWDFFile2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFFile2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFFile2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFFile2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteWdfObject )( 
            IWDFFile2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AssignContext )( 
            IWDFFile2 * This,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  IObjectCleanup *pCleanupCallback,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  void *pContext);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveContext )( 
            IWDFFile2 * This,
            /* [annotation][out] */ 
            _Out_  void **ppvContext);
        
        void ( STDMETHODCALLTYPE *AcquireLock )( 
            IWDFFile2 * This);
        
        void ( STDMETHODCALLTYPE *ReleaseLock )( 
            IWDFFile2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveFileName )( 
            IWDFFile2 * This,
            /* [annotation][unique][out][string] */ 
             _Out_writes_all_opt_(pFileName ? *pdwFileNameLengthInChars : 0)  PWSTR pFileName,
            /* [annotation][out][in] */ 
            _Inout_  DWORD *pdwFileNameLengthInChars);
        
        void ( STDMETHODCALLTYPE *GetDevice )( 
            IWDFFile2 * This,
            /* [annotation][out] */ 
            _Out_  IWDFDevice **ppWdfDevice);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveCountedFileName )( 
            IWDFFile2 * This,
            /* [annotation][size_is][unique][out] */ 
            _Out_writes_all_opt_(pCountedFileName ? *pdwCountedFileNameLengthInChars : 0)  WCHAR *pCountedFileName,
            /* [annotation][out][in] */ 
            _Inout_  DWORD *pdwCountedFileNameLengthInChars);
        
        void ( STDMETHODCALLTYPE *GetRelatedFileObject )( 
            IWDFFile2 * This,
            /* [annotation][out] */ 
            _Out_  IWDFFile **ppRelatedFileObj);
        
        END_INTERFACE
    } IWDFFile2Vtbl;

    interface IWDFFile2
    {
        CONST_VTBL struct IWDFFile2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFFile2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFFile2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFFile2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFFile2_DeleteWdfObject(This)	\
    ( (This)->lpVtbl -> DeleteWdfObject(This) ) 

#define IWDFFile2_AssignContext(This,pCleanupCallback,pContext)	\
    ( (This)->lpVtbl -> AssignContext(This,pCleanupCallback,pContext) ) 

#define IWDFFile2_RetrieveContext(This,ppvContext)	\
    ( (This)->lpVtbl -> RetrieveContext(This,ppvContext) ) 

#define IWDFFile2_AcquireLock(This)	\
    ( (This)->lpVtbl -> AcquireLock(This) ) 

#define IWDFFile2_ReleaseLock(This)	\
    ( (This)->lpVtbl -> ReleaseLock(This) ) 


#define IWDFFile2_RetrieveFileName(This,pFileName,pdwFileNameLengthInChars)	\
    ( (This)->lpVtbl -> RetrieveFileName(This,pFileName,pdwFileNameLengthInChars) ) 

#define IWDFFile2_GetDevice(This,ppWdfDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppWdfDevice) ) 


#define IWDFFile2_RetrieveCountedFileName(This,pCountedFileName,pdwCountedFileNameLengthInChars)	\
    ( (This)->lpVtbl -> RetrieveCountedFileName(This,pCountedFileName,pdwCountedFileNameLengthInChars) ) 

#define IWDFFile2_GetRelatedFileObject(This,ppRelatedFileObj)	\
    ( (This)->lpVtbl -> GetRelatedFileObject(This,ppRelatedFileObj) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFFile2_INTERFACE_DEFINED__ */


#ifndef __IWDFFile3_INTERFACE_DEFINED__
#define __IWDFFile3_INTERFACE_DEFINED__

/* interface IWDFFile3 */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWDFFile3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7188CA4F-1BD4-4FBC-A34A-2DC7B57F17CC")
    IWDFFile3 : public IWDFFile2
    {
    public:
        virtual void STDMETHODCALLTYPE GetInitiatorProcessId( 
            /* [out] */ DWORD *pdwProcessId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWDFFile3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFFile3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFFile3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFFile3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteWdfObject )( 
            IWDFFile3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AssignContext )( 
            IWDFFile3 * This,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  IObjectCleanup *pCleanupCallback,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  void *pContext);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveContext )( 
            IWDFFile3 * This,
            /* [annotation][out] */ 
            _Out_  void **ppvContext);
        
        void ( STDMETHODCALLTYPE *AcquireLock )( 
            IWDFFile3 * This);
        
        void ( STDMETHODCALLTYPE *ReleaseLock )( 
            IWDFFile3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveFileName )( 
            IWDFFile3 * This,
            /* [annotation][unique][out][string] */ 
             _Out_writes_all_opt_(pFileName ? *pdwFileNameLengthInChars : 0)  PWSTR pFileName,
            /* [annotation][out][in] */ 
            _Inout_  DWORD *pdwFileNameLengthInChars);
        
        void ( STDMETHODCALLTYPE *GetDevice )( 
            IWDFFile3 * This,
            /* [annotation][out] */ 
            _Out_  IWDFDevice **ppWdfDevice);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveCountedFileName )( 
            IWDFFile3 * This,
            /* [annotation][size_is][unique][out] */ 
            _Out_writes_all_opt_(pCountedFileName ? *pdwCountedFileNameLengthInChars : 0)  WCHAR *pCountedFileName,
            /* [annotation][out][in] */ 
            _Inout_  DWORD *pdwCountedFileNameLengthInChars);
        
        void ( STDMETHODCALLTYPE *GetRelatedFileObject )( 
            IWDFFile3 * This,
            /* [annotation][out] */ 
            _Out_  IWDFFile **ppRelatedFileObj);
        
        void ( STDMETHODCALLTYPE *GetInitiatorProcessId )( 
            IWDFFile3 * This,
            /* [out] */ DWORD *pdwProcessId);
        
        END_INTERFACE
    } IWDFFile3Vtbl;

    interface IWDFFile3
    {
        CONST_VTBL struct IWDFFile3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFFile3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFFile3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFFile3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFFile3_DeleteWdfObject(This)	\
    ( (This)->lpVtbl -> DeleteWdfObject(This) ) 

#define IWDFFile3_AssignContext(This,pCleanupCallback,pContext)	\
    ( (This)->lpVtbl -> AssignContext(This,pCleanupCallback,pContext) ) 

#define IWDFFile3_RetrieveContext(This,ppvContext)	\
    ( (This)->lpVtbl -> RetrieveContext(This,ppvContext) ) 

#define IWDFFile3_AcquireLock(This)	\
    ( (This)->lpVtbl -> AcquireLock(This) ) 

#define IWDFFile3_ReleaseLock(This)	\
    ( (This)->lpVtbl -> ReleaseLock(This) ) 


#define IWDFFile3_RetrieveFileName(This,pFileName,pdwFileNameLengthInChars)	\
    ( (This)->lpVtbl -> RetrieveFileName(This,pFileName,pdwFileNameLengthInChars) ) 

#define IWDFFile3_GetDevice(This,ppWdfDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppWdfDevice) ) 


#define IWDFFile3_RetrieveCountedFileName(This,pCountedFileName,pdwCountedFileNameLengthInChars)	\
    ( (This)->lpVtbl -> RetrieveCountedFileName(This,pCountedFileName,pdwCountedFileNameLengthInChars) ) 

#define IWDFFile3_GetRelatedFileObject(This,ppRelatedFileObj)	\
    ( (This)->lpVtbl -> GetRelatedFileObject(This,ppRelatedFileObj) ) 


#define IWDFFile3_GetInitiatorProcessId(This,pdwProcessId)	\
    ( (This)->lpVtbl -> GetInitiatorProcessId(This,pdwProcessId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFFile3_INTERFACE_DEFINED__ */


#ifndef __IWDFDriverCreatedFile_INTERFACE_DEFINED__
#define __IWDFDriverCreatedFile_INTERFACE_DEFINED__

/* interface IWDFDriverCreatedFile */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWDFDriverCreatedFile;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b7615d26-494b-47a6-b4cf-0271bcc3da4b")
    IWDFDriverCreatedFile : public IWDFFile
    {
    public:
        virtual void STDMETHODCALLTYPE Close( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWDFDriverCreatedFileVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFDriverCreatedFile * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFDriverCreatedFile * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFDriverCreatedFile * This);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteWdfObject )( 
            IWDFDriverCreatedFile * This);
        
        HRESULT ( STDMETHODCALLTYPE *AssignContext )( 
            IWDFDriverCreatedFile * This,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  IObjectCleanup *pCleanupCallback,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  void *pContext);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveContext )( 
            IWDFDriverCreatedFile * This,
            /* [annotation][out] */ 
            _Out_  void **ppvContext);
        
        void ( STDMETHODCALLTYPE *AcquireLock )( 
            IWDFDriverCreatedFile * This);
        
        void ( STDMETHODCALLTYPE *ReleaseLock )( 
            IWDFDriverCreatedFile * This);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveFileName )( 
            IWDFDriverCreatedFile * This,
            /* [annotation][unique][out][string] */ 
             _Out_writes_all_opt_(pFileName ? *pdwFileNameLengthInChars : 0)  PWSTR pFileName,
            /* [annotation][out][in] */ 
            _Inout_  DWORD *pdwFileNameLengthInChars);
        
        void ( STDMETHODCALLTYPE *GetDevice )( 
            IWDFDriverCreatedFile * This,
            /* [annotation][out] */ 
            _Out_  IWDFDevice **ppWdfDevice);
        
        void ( STDMETHODCALLTYPE *Close )( 
            IWDFDriverCreatedFile * This);
        
        END_INTERFACE
    } IWDFDriverCreatedFileVtbl;

    interface IWDFDriverCreatedFile
    {
        CONST_VTBL struct IWDFDriverCreatedFileVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFDriverCreatedFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFDriverCreatedFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFDriverCreatedFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFDriverCreatedFile_DeleteWdfObject(This)	\
    ( (This)->lpVtbl -> DeleteWdfObject(This) ) 

#define IWDFDriverCreatedFile_AssignContext(This,pCleanupCallback,pContext)	\
    ( (This)->lpVtbl -> AssignContext(This,pCleanupCallback,pContext) ) 

#define IWDFDriverCreatedFile_RetrieveContext(This,ppvContext)	\
    ( (This)->lpVtbl -> RetrieveContext(This,ppvContext) ) 

#define IWDFDriverCreatedFile_AcquireLock(This)	\
    ( (This)->lpVtbl -> AcquireLock(This) ) 

#define IWDFDriverCreatedFile_ReleaseLock(This)	\
    ( (This)->lpVtbl -> ReleaseLock(This) ) 


#define IWDFDriverCreatedFile_RetrieveFileName(This,pFileName,pdwFileNameLengthInChars)	\
    ( (This)->lpVtbl -> RetrieveFileName(This,pFileName,pdwFileNameLengthInChars) ) 

#define IWDFDriverCreatedFile_GetDevice(This,ppWdfDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppWdfDevice) ) 


#define IWDFDriverCreatedFile_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFDriverCreatedFile_INTERFACE_DEFINED__ */


#ifndef __IWDFIoTarget_INTERFACE_DEFINED__
#define __IWDFIoTarget_INTERFACE_DEFINED__

/* interface IWDFIoTarget */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWDFIoTarget;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CC060D79-C0C2-407f-8B10-A5E900FC3474")
    IWDFIoTarget : public IWDFObject
    {
    public:
        virtual void STDMETHODCALLTYPE GetTargetFile( 
            /* [annotation][out] */ 
            _Out_  IWDFFile **ppWdfFile) = 0;
        
        virtual void STDMETHODCALLTYPE CancelSentRequestsForFile( 
            /* [annotation][in] */ 
            _In_  IWDFFile *pFile) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FormatRequestForRead( 
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pRequest,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFFile *pFile,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFMemory *pOutputMemory,
            /* [annotation][unique][in] */ 
            _In_opt_  PWDFMEMORY_OFFSET pOutputMemoryOffset,
            /* [annotation][unique][in] */ 
            _In_opt_  PLONGLONG DeviceOffset) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FormatRequestForWrite( 
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pRequest,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFFile *pFile,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFMemory *pInputMemory,
            /* [annotation][unique][in] */ 
            _In_opt_  PWDFMEMORY_OFFSET pInputMemoryOffset,
            /* [annotation][unique][in] */ 
            _In_opt_  PLONGLONG DeviceOffset) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FormatRequestForIoctl( 
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
            _In_opt_  PWDFMEMORY_OFFSET pOutputMemoryOffset) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWDFIoTargetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFIoTarget * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFIoTarget * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFIoTarget * This);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteWdfObject )( 
            IWDFIoTarget * This);
        
        HRESULT ( STDMETHODCALLTYPE *AssignContext )( 
            IWDFIoTarget * This,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  IObjectCleanup *pCleanupCallback,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  void *pContext);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveContext )( 
            IWDFIoTarget * This,
            /* [annotation][out] */ 
            _Out_  void **ppvContext);
        
        void ( STDMETHODCALLTYPE *AcquireLock )( 
            IWDFIoTarget * This);
        
        void ( STDMETHODCALLTYPE *ReleaseLock )( 
            IWDFIoTarget * This);
        
        void ( STDMETHODCALLTYPE *GetTargetFile )( 
            IWDFIoTarget * This,
            /* [annotation][out] */ 
            _Out_  IWDFFile **ppWdfFile);
        
        void ( STDMETHODCALLTYPE *CancelSentRequestsForFile )( 
            IWDFIoTarget * This,
            /* [annotation][in] */ 
            _In_  IWDFFile *pFile);
        
        HRESULT ( STDMETHODCALLTYPE *FormatRequestForRead )( 
            IWDFIoTarget * This,
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
            IWDFIoTarget * This,
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
            IWDFIoTarget * This,
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
        
        END_INTERFACE
    } IWDFIoTargetVtbl;

    interface IWDFIoTarget
    {
        CONST_VTBL struct IWDFIoTargetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFIoTarget_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFIoTarget_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFIoTarget_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFIoTarget_DeleteWdfObject(This)	\
    ( (This)->lpVtbl -> DeleteWdfObject(This) ) 

#define IWDFIoTarget_AssignContext(This,pCleanupCallback,pContext)	\
    ( (This)->lpVtbl -> AssignContext(This,pCleanupCallback,pContext) ) 

#define IWDFIoTarget_RetrieveContext(This,ppvContext)	\
    ( (This)->lpVtbl -> RetrieveContext(This,ppvContext) ) 

#define IWDFIoTarget_AcquireLock(This)	\
    ( (This)->lpVtbl -> AcquireLock(This) ) 

#define IWDFIoTarget_ReleaseLock(This)	\
    ( (This)->lpVtbl -> ReleaseLock(This) ) 


#define IWDFIoTarget_GetTargetFile(This,ppWdfFile)	\
    ( (This)->lpVtbl -> GetTargetFile(This,ppWdfFile) ) 

#define IWDFIoTarget_CancelSentRequestsForFile(This,pFile)	\
    ( (This)->lpVtbl -> CancelSentRequestsForFile(This,pFile) ) 

#define IWDFIoTarget_FormatRequestForRead(This,pRequest,pFile,pOutputMemory,pOutputMemoryOffset,DeviceOffset)	\
    ( (This)->lpVtbl -> FormatRequestForRead(This,pRequest,pFile,pOutputMemory,pOutputMemoryOffset,DeviceOffset) ) 

#define IWDFIoTarget_FormatRequestForWrite(This,pRequest,pFile,pInputMemory,pInputMemoryOffset,DeviceOffset)	\
    ( (This)->lpVtbl -> FormatRequestForWrite(This,pRequest,pFile,pInputMemory,pInputMemoryOffset,DeviceOffset) ) 

#define IWDFIoTarget_FormatRequestForIoctl(This,pRequest,IoctlCode,pFile,pInputMemory,pInputMemoryOffset,pOutputMemory,pOutputMemoryOffset)	\
    ( (This)->lpVtbl -> FormatRequestForIoctl(This,pRequest,IoctlCode,pFile,pInputMemory,pInputMemoryOffset,pOutputMemory,pOutputMemoryOffset) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFIoTarget_INTERFACE_DEFINED__ */


#ifndef __IWDFIoTarget2_INTERFACE_DEFINED__
#define __IWDFIoTarget2_INTERFACE_DEFINED__

/* interface IWDFIoTarget2 */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWDFIoTarget2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("eaebcbbb-deb5-4849-8acf-fb38336b94c7")
    IWDFIoTarget2 : public IWDFIoTarget
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE FormatRequestForFlush( 
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pRequest,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFFile *pFile) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FormatRequestForSetInformation( 
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pRequest,
            /* [annotation][in] */ 
            _In_  WDF_FILE_INFORMATION_CLASS InformationClass,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFFile *pFile,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFMemory *pInformationMemory,
            /* [annotation][unique][in] */ 
            _In_opt_  PWDFMEMORY_OFFSET pInformationMemoryOffset) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FormatRequestForQueryInformation( 
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pRequest,
            /* [annotation][in] */ 
            _In_  WDF_FILE_INFORMATION_CLASS InformationClass,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFFile *pFile,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFMemory *pInformationMemory,
            /* [annotation][unique][in] */ 
            _In_opt_  PWDFMEMORY_OFFSET pInformationMemoryOffset) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWDFIoTarget2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFIoTarget2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFIoTarget2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFIoTarget2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteWdfObject )( 
            IWDFIoTarget2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AssignContext )( 
            IWDFIoTarget2 * This,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  IObjectCleanup *pCleanupCallback,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  void *pContext);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveContext )( 
            IWDFIoTarget2 * This,
            /* [annotation][out] */ 
            _Out_  void **ppvContext);
        
        void ( STDMETHODCALLTYPE *AcquireLock )( 
            IWDFIoTarget2 * This);
        
        void ( STDMETHODCALLTYPE *ReleaseLock )( 
            IWDFIoTarget2 * This);
        
        void ( STDMETHODCALLTYPE *GetTargetFile )( 
            IWDFIoTarget2 * This,
            /* [annotation][out] */ 
            _Out_  IWDFFile **ppWdfFile);
        
        void ( STDMETHODCALLTYPE *CancelSentRequestsForFile )( 
            IWDFIoTarget2 * This,
            /* [annotation][in] */ 
            _In_  IWDFFile *pFile);
        
        HRESULT ( STDMETHODCALLTYPE *FormatRequestForRead )( 
            IWDFIoTarget2 * This,
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
            IWDFIoTarget2 * This,
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
            IWDFIoTarget2 * This,
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
        
        HRESULT ( STDMETHODCALLTYPE *FormatRequestForFlush )( 
            IWDFIoTarget2 * This,
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pRequest,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFFile *pFile);
        
        HRESULT ( STDMETHODCALLTYPE *FormatRequestForSetInformation )( 
            IWDFIoTarget2 * This,
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pRequest,
            /* [annotation][in] */ 
            _In_  WDF_FILE_INFORMATION_CLASS InformationClass,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFFile *pFile,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFMemory *pInformationMemory,
            /* [annotation][unique][in] */ 
            _In_opt_  PWDFMEMORY_OFFSET pInformationMemoryOffset);
        
        HRESULT ( STDMETHODCALLTYPE *FormatRequestForQueryInformation )( 
            IWDFIoTarget2 * This,
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pRequest,
            /* [annotation][in] */ 
            _In_  WDF_FILE_INFORMATION_CLASS InformationClass,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFFile *pFile,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFMemory *pInformationMemory,
            /* [annotation][unique][in] */ 
            _In_opt_  PWDFMEMORY_OFFSET pInformationMemoryOffset);
        
        END_INTERFACE
    } IWDFIoTarget2Vtbl;

    interface IWDFIoTarget2
    {
        CONST_VTBL struct IWDFIoTarget2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFIoTarget2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFIoTarget2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFIoTarget2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFIoTarget2_DeleteWdfObject(This)	\
    ( (This)->lpVtbl -> DeleteWdfObject(This) ) 

#define IWDFIoTarget2_AssignContext(This,pCleanupCallback,pContext)	\
    ( (This)->lpVtbl -> AssignContext(This,pCleanupCallback,pContext) ) 

#define IWDFIoTarget2_RetrieveContext(This,ppvContext)	\
    ( (This)->lpVtbl -> RetrieveContext(This,ppvContext) ) 

#define IWDFIoTarget2_AcquireLock(This)	\
    ( (This)->lpVtbl -> AcquireLock(This) ) 

#define IWDFIoTarget2_ReleaseLock(This)	\
    ( (This)->lpVtbl -> ReleaseLock(This) ) 


#define IWDFIoTarget2_GetTargetFile(This,ppWdfFile)	\
    ( (This)->lpVtbl -> GetTargetFile(This,ppWdfFile) ) 

#define IWDFIoTarget2_CancelSentRequestsForFile(This,pFile)	\
    ( (This)->lpVtbl -> CancelSentRequestsForFile(This,pFile) ) 

#define IWDFIoTarget2_FormatRequestForRead(This,pRequest,pFile,pOutputMemory,pOutputMemoryOffset,DeviceOffset)	\
    ( (This)->lpVtbl -> FormatRequestForRead(This,pRequest,pFile,pOutputMemory,pOutputMemoryOffset,DeviceOffset) ) 

#define IWDFIoTarget2_FormatRequestForWrite(This,pRequest,pFile,pInputMemory,pInputMemoryOffset,DeviceOffset)	\
    ( (This)->lpVtbl -> FormatRequestForWrite(This,pRequest,pFile,pInputMemory,pInputMemoryOffset,DeviceOffset) ) 

#define IWDFIoTarget2_FormatRequestForIoctl(This,pRequest,IoctlCode,pFile,pInputMemory,pInputMemoryOffset,pOutputMemory,pOutputMemoryOffset)	\
    ( (This)->lpVtbl -> FormatRequestForIoctl(This,pRequest,IoctlCode,pFile,pInputMemory,pInputMemoryOffset,pOutputMemory,pOutputMemoryOffset) ) 


#define IWDFIoTarget2_FormatRequestForFlush(This,pRequest,pFile)	\
    ( (This)->lpVtbl -> FormatRequestForFlush(This,pRequest,pFile) ) 

#define IWDFIoTarget2_FormatRequestForSetInformation(This,pRequest,InformationClass,pFile,pInformationMemory,pInformationMemoryOffset)	\
    ( (This)->lpVtbl -> FormatRequestForSetInformation(This,pRequest,InformationClass,pFile,pInformationMemory,pInformationMemoryOffset) ) 

#define IWDFIoTarget2_FormatRequestForQueryInformation(This,pRequest,InformationClass,pFile,pInformationMemory,pInformationMemoryOffset)	\
    ( (This)->lpVtbl -> FormatRequestForQueryInformation(This,pRequest,InformationClass,pFile,pInformationMemory,pInformationMemoryOffset) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFIoTarget2_INTERFACE_DEFINED__ */


#ifndef __IWDFIoTargetStateManagement_INTERFACE_DEFINED__
#define __IWDFIoTargetStateManagement_INTERFACE_DEFINED__

/* interface IWDFIoTargetStateManagement */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWDFIoTargetStateManagement;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("88b077aa-eff6-4eba-9e4d-064c70822b98")
    IWDFIoTargetStateManagement : public IUnknown
    {
    public:
        virtual WDF_IO_TARGET_STATE STDMETHODCALLTYPE GetState( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Start( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Stop( 
            /* [annotation][in] */ 
            _In_  WDF_IO_TARGET_SENT_IO_ACTION Action) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Remove( 
            /* [annotation][in] */ 
            _In_  BOOL bIsSurpriseRemove) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWDFIoTargetStateManagementVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFIoTargetStateManagement * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFIoTargetStateManagement * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFIoTargetStateManagement * This);
        
        WDF_IO_TARGET_STATE ( STDMETHODCALLTYPE *GetState )( 
            IWDFIoTargetStateManagement * This);
        
        HRESULT ( STDMETHODCALLTYPE *Start )( 
            IWDFIoTargetStateManagement * This);
        
        HRESULT ( STDMETHODCALLTYPE *Stop )( 
            IWDFIoTargetStateManagement * This,
            /* [annotation][in] */ 
            _In_  WDF_IO_TARGET_SENT_IO_ACTION Action);
        
        HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IWDFIoTargetStateManagement * This,
            /* [annotation][in] */ 
            _In_  BOOL bIsSurpriseRemove);
        
        END_INTERFACE
    } IWDFIoTargetStateManagementVtbl;

    interface IWDFIoTargetStateManagement
    {
        CONST_VTBL struct IWDFIoTargetStateManagementVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFIoTargetStateManagement_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFIoTargetStateManagement_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFIoTargetStateManagement_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFIoTargetStateManagement_GetState(This)	\
    ( (This)->lpVtbl -> GetState(This) ) 

#define IWDFIoTargetStateManagement_Start(This)	\
    ( (This)->lpVtbl -> Start(This) ) 

#define IWDFIoTargetStateManagement_Stop(This,Action)	\
    ( (This)->lpVtbl -> Stop(This,Action) ) 

#define IWDFIoTargetStateManagement_Remove(This,bIsSurpriseRemove)	\
    ( (This)->lpVtbl -> Remove(This,bIsSurpriseRemove) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFIoTargetStateManagement_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_wudfddi_0000_0022 */
/* [local] */ 

typedef struct _UMDF_IO_TARGET_OPEN_PARAMS
    {
    DWORD dwShareMode;
    DWORD dwCreationDisposition;
    DWORD dwFlagsAndAttributes;
    } 	UMDF_IO_TARGET_OPEN_PARAMS;

typedef struct _UMDF_IO_TARGET_OPEN_PARAMS *PUMDF_IO_TARGET_OPEN_PARAMS;



extern RPC_IF_HANDLE __MIDL_itf_wudfddi_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wudfddi_0000_0022_v0_0_s_ifspec;

#ifndef __IWDFRemoteTarget_INTERFACE_DEFINED__
#define __IWDFRemoteTarget_INTERFACE_DEFINED__

/* interface IWDFRemoteTarget */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWDFRemoteTarget;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d3ddb29d-bb46-48de-901b-96bed7b1d350")
    IWDFRemoteTarget : public IWDFIoTarget2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OpenRemoteInterface( 
            /* [annotation][in] */ 
            _In_  IWDFRemoteInterface *pRemoteInterface,
            /* [annotation][string][in] */ 
            _In_opt_  PCWSTR pszRelativeFileName,
            /* [annotation][in] */ 
            _In_  DWORD DesiredAccess,
            /* [annotation][unique][in] */ 
            _In_opt_  PUMDF_IO_TARGET_OPEN_PARAMS pOpenParams) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OpenFileByName( 
            /* [annotation][string][in] */ 
            _In_  PCWSTR pszFileName,
            /* [annotation][in] */ 
            _In_  DWORD DesiredAccess,
            /* [annotation][unique][in] */ 
            _In_opt_  PUMDF_IO_TARGET_OPEN_PARAMS pOpenParams) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CloseForQueryRemove( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reopen( void) = 0;
        
        virtual WDF_IO_TARGET_STATE STDMETHODCALLTYPE GetState( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Start( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Stop( 
            /* [annotation][in] */ 
            _In_  WDF_IO_TARGET_SENT_IO_ACTION Action) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWDFRemoteTargetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFRemoteTarget * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFRemoteTarget * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFRemoteTarget * This);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteWdfObject )( 
            IWDFRemoteTarget * This);
        
        HRESULT ( STDMETHODCALLTYPE *AssignContext )( 
            IWDFRemoteTarget * This,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  IObjectCleanup *pCleanupCallback,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  void *pContext);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveContext )( 
            IWDFRemoteTarget * This,
            /* [annotation][out] */ 
            _Out_  void **ppvContext);
        
        void ( STDMETHODCALLTYPE *AcquireLock )( 
            IWDFRemoteTarget * This);
        
        void ( STDMETHODCALLTYPE *ReleaseLock )( 
            IWDFRemoteTarget * This);
        
        void ( STDMETHODCALLTYPE *GetTargetFile )( 
            IWDFRemoteTarget * This,
            /* [annotation][out] */ 
            _Out_  IWDFFile **ppWdfFile);
        
        void ( STDMETHODCALLTYPE *CancelSentRequestsForFile )( 
            IWDFRemoteTarget * This,
            /* [annotation][in] */ 
            _In_  IWDFFile *pFile);
        
        HRESULT ( STDMETHODCALLTYPE *FormatRequestForRead )( 
            IWDFRemoteTarget * This,
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
            IWDFRemoteTarget * This,
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
            IWDFRemoteTarget * This,
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
        
        HRESULT ( STDMETHODCALLTYPE *FormatRequestForFlush )( 
            IWDFRemoteTarget * This,
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pRequest,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFFile *pFile);
        
        HRESULT ( STDMETHODCALLTYPE *FormatRequestForSetInformation )( 
            IWDFRemoteTarget * This,
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pRequest,
            /* [annotation][in] */ 
            _In_  WDF_FILE_INFORMATION_CLASS InformationClass,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFFile *pFile,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFMemory *pInformationMemory,
            /* [annotation][unique][in] */ 
            _In_opt_  PWDFMEMORY_OFFSET pInformationMemoryOffset);
        
        HRESULT ( STDMETHODCALLTYPE *FormatRequestForQueryInformation )( 
            IWDFRemoteTarget * This,
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pRequest,
            /* [annotation][in] */ 
            _In_  WDF_FILE_INFORMATION_CLASS InformationClass,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFFile *pFile,
            /* [annotation][unique][in] */ 
            _In_opt_  IWDFMemory *pInformationMemory,
            /* [annotation][unique][in] */ 
            _In_opt_  PWDFMEMORY_OFFSET pInformationMemoryOffset);
        
        HRESULT ( STDMETHODCALLTYPE *OpenRemoteInterface )( 
            IWDFRemoteTarget * This,
            /* [annotation][in] */ 
            _In_  IWDFRemoteInterface *pRemoteInterface,
            /* [annotation][string][in] */ 
            _In_opt_  PCWSTR pszRelativeFileName,
            /* [annotation][in] */ 
            _In_  DWORD DesiredAccess,
            /* [annotation][unique][in] */ 
            _In_opt_  PUMDF_IO_TARGET_OPEN_PARAMS pOpenParams);
        
        HRESULT ( STDMETHODCALLTYPE *OpenFileByName )( 
            IWDFRemoteTarget * This,
            /* [annotation][string][in] */ 
            _In_  PCWSTR pszFileName,
            /* [annotation][in] */ 
            _In_  DWORD DesiredAccess,
            /* [annotation][unique][in] */ 
            _In_opt_  PUMDF_IO_TARGET_OPEN_PARAMS pOpenParams);
        
        HRESULT ( STDMETHODCALLTYPE *Close )( 
            IWDFRemoteTarget * This);
        
        HRESULT ( STDMETHODCALLTYPE *CloseForQueryRemove )( 
            IWDFRemoteTarget * This);
        
        HRESULT ( STDMETHODCALLTYPE *Reopen )( 
            IWDFRemoteTarget * This);
        
        WDF_IO_TARGET_STATE ( STDMETHODCALLTYPE *GetState )( 
            IWDFRemoteTarget * This);
        
        HRESULT ( STDMETHODCALLTYPE *Start )( 
            IWDFRemoteTarget * This);
        
        HRESULT ( STDMETHODCALLTYPE *Stop )( 
            IWDFRemoteTarget * This,
            /* [annotation][in] */ 
            _In_  WDF_IO_TARGET_SENT_IO_ACTION Action);
        
        END_INTERFACE
    } IWDFRemoteTargetVtbl;

    interface IWDFRemoteTarget
    {
        CONST_VTBL struct IWDFRemoteTargetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFRemoteTarget_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFRemoteTarget_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFRemoteTarget_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFRemoteTarget_DeleteWdfObject(This)	\
    ( (This)->lpVtbl -> DeleteWdfObject(This) ) 

#define IWDFRemoteTarget_AssignContext(This,pCleanupCallback,pContext)	\
    ( (This)->lpVtbl -> AssignContext(This,pCleanupCallback,pContext) ) 

#define IWDFRemoteTarget_RetrieveContext(This,ppvContext)	\
    ( (This)->lpVtbl -> RetrieveContext(This,ppvContext) ) 

#define IWDFRemoteTarget_AcquireLock(This)	\
    ( (This)->lpVtbl -> AcquireLock(This) ) 

#define IWDFRemoteTarget_ReleaseLock(This)	\
    ( (This)->lpVtbl -> ReleaseLock(This) ) 


#define IWDFRemoteTarget_GetTargetFile(This,ppWdfFile)	\
    ( (This)->lpVtbl -> GetTargetFile(This,ppWdfFile) ) 

#define IWDFRemoteTarget_CancelSentRequestsForFile(This,pFile)	\
    ( (This)->lpVtbl -> CancelSentRequestsForFile(This,pFile) ) 

#define IWDFRemoteTarget_FormatRequestForRead(This,pRequest,pFile,pOutputMemory,pOutputMemoryOffset,DeviceOffset)	\
    ( (This)->lpVtbl -> FormatRequestForRead(This,pRequest,pFile,pOutputMemory,pOutputMemoryOffset,DeviceOffset) ) 

#define IWDFRemoteTarget_FormatRequestForWrite(This,pRequest,pFile,pInputMemory,pInputMemoryOffset,DeviceOffset)	\
    ( (This)->lpVtbl -> FormatRequestForWrite(This,pRequest,pFile,pInputMemory,pInputMemoryOffset,DeviceOffset) ) 

#define IWDFRemoteTarget_FormatRequestForIoctl(This,pRequest,IoctlCode,pFile,pInputMemory,pInputMemoryOffset,pOutputMemory,pOutputMemoryOffset)	\
    ( (This)->lpVtbl -> FormatRequestForIoctl(This,pRequest,IoctlCode,pFile,pInputMemory,pInputMemoryOffset,pOutputMemory,pOutputMemoryOffset) ) 


#define IWDFRemoteTarget_FormatRequestForFlush(This,pRequest,pFile)	\
    ( (This)->lpVtbl -> FormatRequestForFlush(This,pRequest,pFile) ) 

#define IWDFRemoteTarget_FormatRequestForSetInformation(This,pRequest,InformationClass,pFile,pInformationMemory,pInformationMemoryOffset)	\
    ( (This)->lpVtbl -> FormatRequestForSetInformation(This,pRequest,InformationClass,pFile,pInformationMemory,pInformationMemoryOffset) ) 

#define IWDFRemoteTarget_FormatRequestForQueryInformation(This,pRequest,InformationClass,pFile,pInformationMemory,pInformationMemoryOffset)	\
    ( (This)->lpVtbl -> FormatRequestForQueryInformation(This,pRequest,InformationClass,pFile,pInformationMemory,pInformationMemoryOffset) ) 


#define IWDFRemoteTarget_OpenRemoteInterface(This,pRemoteInterface,pszRelativeFileName,DesiredAccess,pOpenParams)	\
    ( (This)->lpVtbl -> OpenRemoteInterface(This,pRemoteInterface,pszRelativeFileName,DesiredAccess,pOpenParams) ) 

#define IWDFRemoteTarget_OpenFileByName(This,pszFileName,DesiredAccess,pOpenParams)	\
    ( (This)->lpVtbl -> OpenFileByName(This,pszFileName,DesiredAccess,pOpenParams) ) 

#define IWDFRemoteTarget_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define IWDFRemoteTarget_CloseForQueryRemove(This)	\
    ( (This)->lpVtbl -> CloseForQueryRemove(This) ) 

#define IWDFRemoteTarget_Reopen(This)	\
    ( (This)->lpVtbl -> Reopen(This) ) 

#define IWDFRemoteTarget_GetState(This)	\
    ( (This)->lpVtbl -> GetState(This) ) 

#define IWDFRemoteTarget_Start(This)	\
    ( (This)->lpVtbl -> Start(This) ) 

#define IWDFRemoteTarget_Stop(This,Action)	\
    ( (This)->lpVtbl -> Stop(This,Action) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFRemoteTarget_INTERFACE_DEFINED__ */


#ifndef __IWDFFileHandleTargetFactory_INTERFACE_DEFINED__
#define __IWDFFileHandleTargetFactory_INTERFACE_DEFINED__

/* interface IWDFFileHandleTargetFactory */
/* [unique][local][object][uuid] */ 


EXTERN_C const IID IID_IWDFFileHandleTargetFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1427b7e8-e365-400b-9b92-5ace55168e25")
    IWDFFileHandleTargetFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateFileHandleTarget( 
            /* [annotation][in] */ 
            _In_  HANDLE hTarget,
            /* [annotation][out] */ 
            _Out_  IWDFIoTarget **ppTarget) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWDFFileHandleTargetFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFFileHandleTargetFactory * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFFileHandleTargetFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFFileHandleTargetFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateFileHandleTarget )( 
            IWDFFileHandleTargetFactory * This,
            /* [annotation][in] */ 
            _In_  HANDLE hTarget,
            /* [annotation][out] */ 
            _Out_  IWDFIoTarget **ppTarget);
        
        END_INTERFACE
    } IWDFFileHandleTargetFactoryVtbl;

    interface IWDFFileHandleTargetFactory
    {
        CONST_VTBL struct IWDFFileHandleTargetFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFFileHandleTargetFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFFileHandleTargetFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFFileHandleTargetFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFFileHandleTargetFactory_CreateFileHandleTarget(This,hTarget,ppTarget)	\
    ( (This)->lpVtbl -> CreateFileHandleTarget(This,hTarget,ppTarget) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFFileHandleTargetFactory_INTERFACE_DEFINED__ */


#ifndef __IWDFMemory_INTERFACE_DEFINED__
#define __IWDFMemory_INTERFACE_DEFINED__

/* interface IWDFMemory */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWDFMemory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AB098F88-8F16-472a-B0BC-ECA46486C102")
    IWDFMemory : public IWDFObject
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CopyFromMemory( 
            /* [annotation][in] */ 
            _In_  IWDFMemory *Source,
            /* [annotation][unique][in] */ 
            _In_opt_  PWDFMEMORY_OFFSET SourceOffset) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CopyToBuffer( 
            /* [annotation][in] */ 
            _In_  ULONG_PTR SourceOffset,
            /* [annotation][size_is][in] */ 
            _Out_writes_bytes_(NumOfBytesToCopyTo)  void *TargetBuffer,
            /* [annotation][in] */ 
            _In_  SIZE_T NumOfBytesToCopyTo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CopyFromBuffer( 
            /* [annotation][in] */ 
            _In_  ULONG_PTR DestOffset,
            /* [annotation][size_is][in] */ 
            _In_reads_bytes_(NumOfBytesToCopyFrom)  void *SourceBuffer,
            /* [annotation][in] */ 
            _In_  SIZE_T NumOfBytesToCopyFrom) = 0;
        
        virtual SIZE_T STDMETHODCALLTYPE GetSize( void) = 0;
        
        virtual void *STDMETHODCALLTYPE GetDataBuffer( 
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *BufferSize) = 0;
        
        virtual void STDMETHODCALLTYPE SetBuffer( 
            /* [annotation][size_is][in] */ 
            _In_reads_bytes_(BufferSize)  void *Buffer,
            /* [annotation][in] */ 
            _In_  SIZE_T BufferSize) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWDFMemoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFMemory * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFMemory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFMemory * This);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteWdfObject )( 
            IWDFMemory * This);
        
        HRESULT ( STDMETHODCALLTYPE *AssignContext )( 
            IWDFMemory * This,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  IObjectCleanup *pCleanupCallback,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  void *pContext);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveContext )( 
            IWDFMemory * This,
            /* [annotation][out] */ 
            _Out_  void **ppvContext);
        
        void ( STDMETHODCALLTYPE *AcquireLock )( 
            IWDFMemory * This);
        
        void ( STDMETHODCALLTYPE *ReleaseLock )( 
            IWDFMemory * This);
        
        HRESULT ( STDMETHODCALLTYPE *CopyFromMemory )( 
            IWDFMemory * This,
            /* [annotation][in] */ 
            _In_  IWDFMemory *Source,
            /* [annotation][unique][in] */ 
            _In_opt_  PWDFMEMORY_OFFSET SourceOffset);
        
        HRESULT ( STDMETHODCALLTYPE *CopyToBuffer )( 
            IWDFMemory * This,
            /* [annotation][in] */ 
            _In_  ULONG_PTR SourceOffset,
            /* [annotation][size_is][in] */ 
            _Out_writes_bytes_(NumOfBytesToCopyTo)  void *TargetBuffer,
            /* [annotation][in] */ 
            _In_  SIZE_T NumOfBytesToCopyTo);
        
        HRESULT ( STDMETHODCALLTYPE *CopyFromBuffer )( 
            IWDFMemory * This,
            /* [annotation][in] */ 
            _In_  ULONG_PTR DestOffset,
            /* [annotation][size_is][in] */ 
            _In_reads_bytes_(NumOfBytesToCopyFrom)  void *SourceBuffer,
            /* [annotation][in] */ 
            _In_  SIZE_T NumOfBytesToCopyFrom);
        
        SIZE_T ( STDMETHODCALLTYPE *GetSize )( 
            IWDFMemory * This);
        
        void *( STDMETHODCALLTYPE *GetDataBuffer )( 
            IWDFMemory * This,
            /* [annotation][unique][out] */ 
            _Out_opt_  SIZE_T *BufferSize);
        
        void ( STDMETHODCALLTYPE *SetBuffer )( 
            IWDFMemory * This,
            /* [annotation][size_is][in] */ 
            _In_reads_bytes_(BufferSize)  void *Buffer,
            /* [annotation][in] */ 
            _In_  SIZE_T BufferSize);
        
        END_INTERFACE
    } IWDFMemoryVtbl;

    interface IWDFMemory
    {
        CONST_VTBL struct IWDFMemoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFMemory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFMemory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFMemory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFMemory_DeleteWdfObject(This)	\
    ( (This)->lpVtbl -> DeleteWdfObject(This) ) 

#define IWDFMemory_AssignContext(This,pCleanupCallback,pContext)	\
    ( (This)->lpVtbl -> AssignContext(This,pCleanupCallback,pContext) ) 

#define IWDFMemory_RetrieveContext(This,ppvContext)	\
    ( (This)->lpVtbl -> RetrieveContext(This,ppvContext) ) 

#define IWDFMemory_AcquireLock(This)	\
    ( (This)->lpVtbl -> AcquireLock(This) ) 

#define IWDFMemory_ReleaseLock(This)	\
    ( (This)->lpVtbl -> ReleaseLock(This) ) 


#define IWDFMemory_CopyFromMemory(This,Source,SourceOffset)	\
    ( (This)->lpVtbl -> CopyFromMemory(This,Source,SourceOffset) ) 

#define IWDFMemory_CopyToBuffer(This,SourceOffset,TargetBuffer,NumOfBytesToCopyTo)	\
    ( (This)->lpVtbl -> CopyToBuffer(This,SourceOffset,TargetBuffer,NumOfBytesToCopyTo) ) 

#define IWDFMemory_CopyFromBuffer(This,DestOffset,SourceBuffer,NumOfBytesToCopyFrom)	\
    ( (This)->lpVtbl -> CopyFromBuffer(This,DestOffset,SourceBuffer,NumOfBytesToCopyFrom) ) 

#define IWDFMemory_GetSize(This)	\
    ( (This)->lpVtbl -> GetSize(This) ) 

#define IWDFMemory_GetDataBuffer(This,BufferSize)	\
    ( (This)->lpVtbl -> GetDataBuffer(This,BufferSize) ) 

#define IWDFMemory_SetBuffer(This,Buffer,BufferSize)	\
    ( (This)->lpVtbl -> SetBuffer(This,Buffer,BufferSize) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFMemory_INTERFACE_DEFINED__ */


#ifndef __IWDFRemoteInterfaceInitialize_INTERFACE_DEFINED__
#define __IWDFRemoteInterfaceInitialize_INTERFACE_DEFINED__

/* interface IWDFRemoteInterfaceInitialize */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWDFRemoteInterfaceInitialize;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8073D34C-4A21-4321-B6C7-A963FBECB6AD")
    IWDFRemoteInterfaceInitialize : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE GetInterfaceGuid( 
            /* [annotation][out] */ 
            _Out_  LPGUID pDeviceInterfaceGuid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RetrieveSymbolicLink( 
            /* [annotation][unique][out][string] */ 
            _Out_opt_  PWSTR pSymbolicLink,
            /* [annotation][out][in] */ 
            _Inout_  DWORD *pdwSymbolicLinkLengthInChars) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWDFRemoteInterfaceInitializeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFRemoteInterfaceInitialize * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFRemoteInterfaceInitialize * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFRemoteInterfaceInitialize * This);
        
        void ( STDMETHODCALLTYPE *GetInterfaceGuid )( 
            IWDFRemoteInterfaceInitialize * This,
            /* [annotation][out] */ 
            _Out_  LPGUID pDeviceInterfaceGuid);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveSymbolicLink )( 
            IWDFRemoteInterfaceInitialize * This,
            /* [annotation][unique][out][string] */ 
            _Out_opt_  PWSTR pSymbolicLink,
            /* [annotation][out][in] */ 
            _Inout_  DWORD *pdwSymbolicLinkLengthInChars);
        
        END_INTERFACE
    } IWDFRemoteInterfaceInitializeVtbl;

    interface IWDFRemoteInterfaceInitialize
    {
        CONST_VTBL struct IWDFRemoteInterfaceInitializeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFRemoteInterfaceInitialize_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFRemoteInterfaceInitialize_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFRemoteInterfaceInitialize_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFRemoteInterfaceInitialize_GetInterfaceGuid(This,pDeviceInterfaceGuid)	\
    ( (This)->lpVtbl -> GetInterfaceGuid(This,pDeviceInterfaceGuid) ) 

#define IWDFRemoteInterfaceInitialize_RetrieveSymbolicLink(This,pSymbolicLink,pdwSymbolicLinkLengthInChars)	\
    ( (This)->lpVtbl -> RetrieveSymbolicLink(This,pSymbolicLink,pdwSymbolicLinkLengthInChars) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFRemoteInterfaceInitialize_INTERFACE_DEFINED__ */


#ifndef __IWDFRemoteInterface_INTERFACE_DEFINED__
#define __IWDFRemoteInterface_INTERFACE_DEFINED__

/* interface IWDFRemoteInterface */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWDFRemoteInterface;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("49CBAB14-E7CF-490B-8CDD-E0E6B2AC0247")
    IWDFRemoteInterface : public IWDFObject
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IWDFRemoteInterfaceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFRemoteInterface * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFRemoteInterface * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFRemoteInterface * This);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteWdfObject )( 
            IWDFRemoteInterface * This);
        
        HRESULT ( STDMETHODCALLTYPE *AssignContext )( 
            IWDFRemoteInterface * This,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  IObjectCleanup *pCleanupCallback,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  void *pContext);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveContext )( 
            IWDFRemoteInterface * This,
            /* [annotation][out] */ 
            _Out_  void **ppvContext);
        
        void ( STDMETHODCALLTYPE *AcquireLock )( 
            IWDFRemoteInterface * This);
        
        void ( STDMETHODCALLTYPE *ReleaseLock )( 
            IWDFRemoteInterface * This);
        
        END_INTERFACE
    } IWDFRemoteInterfaceVtbl;

    interface IWDFRemoteInterface
    {
        CONST_VTBL struct IWDFRemoteInterfaceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFRemoteInterface_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFRemoteInterface_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFRemoteInterface_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFRemoteInterface_DeleteWdfObject(This)	\
    ( (This)->lpVtbl -> DeleteWdfObject(This) ) 

#define IWDFRemoteInterface_AssignContext(This,pCleanupCallback,pContext)	\
    ( (This)->lpVtbl -> AssignContext(This,pCleanupCallback,pContext) ) 

#define IWDFRemoteInterface_RetrieveContext(This,ppvContext)	\
    ( (This)->lpVtbl -> RetrieveContext(This,ppvContext) ) 

#define IWDFRemoteInterface_AcquireLock(This)	\
    ( (This)->lpVtbl -> AcquireLock(This) ) 

#define IWDFRemoteInterface_ReleaseLock(This)	\
    ( (This)->lpVtbl -> ReleaseLock(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFRemoteInterface_INTERFACE_DEFINED__ */


#ifndef __IWDFPropertyStoreFactory_INTERFACE_DEFINED__
#define __IWDFPropertyStoreFactory_INTERFACE_DEFINED__

/* interface IWDFPropertyStoreFactory */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWDFPropertyStoreFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("45BE7E06-9B65-434d-A7D6-9572D7F73D53")
    IWDFPropertyStoreFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RetrieveDevicePropertyStore( 
            /* [annotation][in] */ 
            _In_  PWDF_PROPERTY_STORE_ROOT RootSpecifier,
            /* [annotation][in] */ 
            _In_  WDF_PROPERTY_STORE_RETRIEVE_FLAGS Flags,
            /* [annotation][in] */ 
            _In_  REGSAM DesiredAccess,
            /* [annotation][unique][in] */ 
            _In_opt_  PCWSTR SubkeyPath,
            /* [annotation][out] */ 
            _Out_  IWDFNamedPropertyStore2 **PropertyStore,
            /* [annotation][unique][out] */ 
            _Out_opt_  WDF_PROPERTY_STORE_DISPOSITION *Disposition) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWDFPropertyStoreFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFPropertyStoreFactory * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFPropertyStoreFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFPropertyStoreFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveDevicePropertyStore )( 
            IWDFPropertyStoreFactory * This,
            /* [annotation][in] */ 
            _In_  PWDF_PROPERTY_STORE_ROOT RootSpecifier,
            /* [annotation][in] */ 
            _In_  WDF_PROPERTY_STORE_RETRIEVE_FLAGS Flags,
            /* [annotation][in] */ 
            _In_  REGSAM DesiredAccess,
            /* [annotation][unique][in] */ 
            _In_opt_  PCWSTR SubkeyPath,
            /* [annotation][out] */ 
            _Out_  IWDFNamedPropertyStore2 **PropertyStore,
            /* [annotation][unique][out] */ 
            _Out_opt_  WDF_PROPERTY_STORE_DISPOSITION *Disposition);
        
        END_INTERFACE
    } IWDFPropertyStoreFactoryVtbl;

    interface IWDFPropertyStoreFactory
    {
        CONST_VTBL struct IWDFPropertyStoreFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFPropertyStoreFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFPropertyStoreFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFPropertyStoreFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFPropertyStoreFactory_RetrieveDevicePropertyStore(This,RootSpecifier,Flags,DesiredAccess,SubkeyPath,PropertyStore,Disposition)	\
    ( (This)->lpVtbl -> RetrieveDevicePropertyStore(This,RootSpecifier,Flags,DesiredAccess,SubkeyPath,PropertyStore,Disposition) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFPropertyStoreFactory_INTERFACE_DEFINED__ */


#ifndef __IWDFUnifiedPropertyStore_INTERFACE_DEFINED__
#define __IWDFUnifiedPropertyStore_INTERFACE_DEFINED__

/* interface IWDFUnifiedPropertyStore */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWDFUnifiedPropertyStore;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6B966713-AC73-4975-AC3C-9DF31C68DA73")
    IWDFUnifiedPropertyStore : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetPropertyData( 
            /* [annotation][in] */ 
            _In_  const DEVPROPKEY *PropertyKey,
            /* [annotation][in] */ 
            _In_  LCID Lcid,
            /* [annotation][in] */ 
            _In_  ULONG Flags,
            /* [annotation][in] */ 
            _In_  DEVPROPTYPE PropertyType,
            /* [annotation][in] */ 
            _In_  ULONG PropertyDataSize,
            /* [annotation][size_is][unique][in] */ 
            _In_reads_bytes_opt_(PropertyDataSize)  PVOID PropertyData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyData( 
            /* [annotation][in] */ 
            _In_  const DEVPROPKEY *PropertyKey,
            /* [annotation][in] */ 
            _In_  LCID Lcid,
            /* [annotation][in] */ 
            _In_  ULONG Flags,
            /* [annotation][in] */ 
            _In_  ULONG PropertyDataSize,
            /* [annotation][size_is][unique][out] */ 
            _Out_writes_bytes_opt_(PropertyDataSize)  PVOID PropertyData,
            /* [annotation][out] */ 
            _Out_  ULONG *PropertyDataRequiredSize,
            /* [annotation][out] */ 
            _Out_  DEVPROPTYPE *PropertyType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWDFUnifiedPropertyStoreVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFUnifiedPropertyStore * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFUnifiedPropertyStore * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFUnifiedPropertyStore * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetPropertyData )( 
            IWDFUnifiedPropertyStore * This,
            /* [annotation][in] */ 
            _In_  const DEVPROPKEY *PropertyKey,
            /* [annotation][in] */ 
            _In_  LCID Lcid,
            /* [annotation][in] */ 
            _In_  ULONG Flags,
            /* [annotation][in] */ 
            _In_  DEVPROPTYPE PropertyType,
            /* [annotation][in] */ 
            _In_  ULONG PropertyDataSize,
            /* [annotation][size_is][unique][in] */ 
            _In_reads_bytes_opt_(PropertyDataSize)  PVOID PropertyData);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropertyData )( 
            IWDFUnifiedPropertyStore * This,
            /* [annotation][in] */ 
            _In_  const DEVPROPKEY *PropertyKey,
            /* [annotation][in] */ 
            _In_  LCID Lcid,
            /* [annotation][in] */ 
            _In_  ULONG Flags,
            /* [annotation][in] */ 
            _In_  ULONG PropertyDataSize,
            /* [annotation][size_is][unique][out] */ 
            _Out_writes_bytes_opt_(PropertyDataSize)  PVOID PropertyData,
            /* [annotation][out] */ 
            _Out_  ULONG *PropertyDataRequiredSize,
            /* [annotation][out] */ 
            _Out_  DEVPROPTYPE *PropertyType);
        
        END_INTERFACE
    } IWDFUnifiedPropertyStoreVtbl;

    interface IWDFUnifiedPropertyStore
    {
        CONST_VTBL struct IWDFUnifiedPropertyStoreVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFUnifiedPropertyStore_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFUnifiedPropertyStore_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFUnifiedPropertyStore_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFUnifiedPropertyStore_SetPropertyData(This,PropertyKey,Lcid,Flags,PropertyType,PropertyDataSize,PropertyData)	\
    ( (This)->lpVtbl -> SetPropertyData(This,PropertyKey,Lcid,Flags,PropertyType,PropertyDataSize,PropertyData) ) 

#define IWDFUnifiedPropertyStore_GetPropertyData(This,PropertyKey,Lcid,Flags,PropertyDataSize,PropertyData,PropertyDataRequiredSize,PropertyType)	\
    ( (This)->lpVtbl -> GetPropertyData(This,PropertyKey,Lcid,Flags,PropertyDataSize,PropertyData,PropertyDataRequiredSize,PropertyType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFUnifiedPropertyStore_INTERFACE_DEFINED__ */


#ifndef __IWDFUnifiedPropertyStoreFactory_INTERFACE_DEFINED__
#define __IWDFUnifiedPropertyStoreFactory_INTERFACE_DEFINED__

/* interface IWDFUnifiedPropertyStoreFactory */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWDFUnifiedPropertyStoreFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6AD8FAC3-8B77-4997-99E4-6B78C5F548D6")
    IWDFUnifiedPropertyStoreFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RetrieveUnifiedDevicePropertyStore( 
            /* [annotation][in] */ 
            _In_  PWDF_PROPERTY_STORE_ROOT RootSpecifier,
            /* [annotation][out] */ 
            _Out_  IWDFUnifiedPropertyStore **PropertyStore) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWDFUnifiedPropertyStoreFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFUnifiedPropertyStoreFactory * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFUnifiedPropertyStoreFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFUnifiedPropertyStoreFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveUnifiedDevicePropertyStore )( 
            IWDFUnifiedPropertyStoreFactory * This,
            /* [annotation][in] */ 
            _In_  PWDF_PROPERTY_STORE_ROOT RootSpecifier,
            /* [annotation][out] */ 
            _Out_  IWDFUnifiedPropertyStore **PropertyStore);
        
        END_INTERFACE
    } IWDFUnifiedPropertyStoreFactoryVtbl;

    interface IWDFUnifiedPropertyStoreFactory
    {
        CONST_VTBL struct IWDFUnifiedPropertyStoreFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFUnifiedPropertyStoreFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFUnifiedPropertyStoreFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFUnifiedPropertyStoreFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFUnifiedPropertyStoreFactory_RetrieveUnifiedDevicePropertyStore(This,RootSpecifier,PropertyStore)	\
    ( (This)->lpVtbl -> RetrieveUnifiedDevicePropertyStore(This,RootSpecifier,PropertyStore) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFUnifiedPropertyStoreFactory_INTERFACE_DEFINED__ */


#ifndef __IWDFCmResourceList_INTERFACE_DEFINED__
#define __IWDFCmResourceList_INTERFACE_DEFINED__

/* interface IWDFCmResourceList */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWDFCmResourceList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9F4546E9-FB4F-4df6-B8B8-B39E5D7D1AD4")
    IWDFCmResourceList : public IWDFObject
    {
    public:
        virtual ULONG STDMETHODCALLTYPE GetCount( void) = 0;
        
        virtual PCM_PARTIAL_RESOURCE_DESCRIPTOR STDMETHODCALLTYPE GetDescriptor( 
            /* [annotation][in] */ 
            _In_  ULONG Index) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWDFCmResourceListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFCmResourceList * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFCmResourceList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFCmResourceList * This);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteWdfObject )( 
            IWDFCmResourceList * This);
        
        HRESULT ( STDMETHODCALLTYPE *AssignContext )( 
            IWDFCmResourceList * This,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  IObjectCleanup *pCleanupCallback,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  void *pContext);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveContext )( 
            IWDFCmResourceList * This,
            /* [annotation][out] */ 
            _Out_  void **ppvContext);
        
        void ( STDMETHODCALLTYPE *AcquireLock )( 
            IWDFCmResourceList * This);
        
        void ( STDMETHODCALLTYPE *ReleaseLock )( 
            IWDFCmResourceList * This);
        
        ULONG ( STDMETHODCALLTYPE *GetCount )( 
            IWDFCmResourceList * This);
        
        PCM_PARTIAL_RESOURCE_DESCRIPTOR ( STDMETHODCALLTYPE *GetDescriptor )( 
            IWDFCmResourceList * This,
            /* [annotation][in] */ 
            _In_  ULONG Index);
        
        END_INTERFACE
    } IWDFCmResourceListVtbl;

    interface IWDFCmResourceList
    {
        CONST_VTBL struct IWDFCmResourceListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFCmResourceList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFCmResourceList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFCmResourceList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFCmResourceList_DeleteWdfObject(This)	\
    ( (This)->lpVtbl -> DeleteWdfObject(This) ) 

#define IWDFCmResourceList_AssignContext(This,pCleanupCallback,pContext)	\
    ( (This)->lpVtbl -> AssignContext(This,pCleanupCallback,pContext) ) 

#define IWDFCmResourceList_RetrieveContext(This,ppvContext)	\
    ( (This)->lpVtbl -> RetrieveContext(This,ppvContext) ) 

#define IWDFCmResourceList_AcquireLock(This)	\
    ( (This)->lpVtbl -> AcquireLock(This) ) 

#define IWDFCmResourceList_ReleaseLock(This)	\
    ( (This)->lpVtbl -> ReleaseLock(This) ) 


#define IWDFCmResourceList_GetCount(This)	\
    ( (This)->lpVtbl -> GetCount(This) ) 

#define IWDFCmResourceList_GetDescriptor(This,Index)	\
    ( (This)->lpVtbl -> GetDescriptor(This,Index) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFCmResourceList_INTERFACE_DEFINED__ */


#ifndef __IWDFInterrupt_INTERFACE_DEFINED__
#define __IWDFInterrupt_INTERFACE_DEFINED__

/* interface IWDFInterrupt */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWDFInterrupt;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AA2AD894-1C27-4ef4-B648-0D2223526B87")
    IWDFInterrupt : public IWDFObject
    {
    public:
        virtual void STDMETHODCALLTYPE Enable( void) = 0;
        
        virtual void STDMETHODCALLTYPE Disable( void) = 0;
        
        virtual IWDFDevice3 *STDMETHODCALLTYPE GetDevice( void) = 0;
        
        virtual void STDMETHODCALLTYPE GetInfo( 
            /* [annotation][out] */ 
            _Out_  PWDF_INTERRUPT_INFO InterruptInfo) = 0;
        
        virtual void STDMETHODCALLTYPE SetPolicy( 
            /* [annotation][in] */ 
            _In_  WDF_INTERRUPT_POLICY Policy,
            /* [annotation][in] */ 
            _In_  WDF_INTERRUPT_PRIORITY Priority,
            /* [annotation][in] */ 
            _In_  KAFFINITY TargetProcessorSet) = 0;
        
        virtual void STDMETHODCALLTYPE SetExtendedPolicy( 
            /* [annotation][in] */ 
            _In_  PWDF_INTERRUPT_EXTENDED_POLICY PolicyAndGroup) = 0;
        
        virtual void STDMETHODCALLTYPE AcquireInterruptLock( void) = 0;
        
        virtual void STDMETHODCALLTYPE ReleaseInterruptLock( void) = 0;
        
        virtual BOOLEAN STDMETHODCALLTYPE QueueWorkItemForIsr( void) = 0;
        
        virtual BOOLEAN STDMETHODCALLTYPE TryToAcquireInterruptLock( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWDFInterruptVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFInterrupt * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFInterrupt * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFInterrupt * This);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteWdfObject )( 
            IWDFInterrupt * This);
        
        HRESULT ( STDMETHODCALLTYPE *AssignContext )( 
            IWDFInterrupt * This,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  IObjectCleanup *pCleanupCallback,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  void *pContext);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveContext )( 
            IWDFInterrupt * This,
            /* [annotation][out] */ 
            _Out_  void **ppvContext);
        
        void ( STDMETHODCALLTYPE *AcquireLock )( 
            IWDFInterrupt * This);
        
        void ( STDMETHODCALLTYPE *ReleaseLock )( 
            IWDFInterrupt * This);
        
        void ( STDMETHODCALLTYPE *Enable )( 
            IWDFInterrupt * This);
        
        void ( STDMETHODCALLTYPE *Disable )( 
            IWDFInterrupt * This);
        
        IWDFDevice3 *( STDMETHODCALLTYPE *GetDevice )( 
            IWDFInterrupt * This);
        
        void ( STDMETHODCALLTYPE *GetInfo )( 
            IWDFInterrupt * This,
            /* [annotation][out] */ 
            _Out_  PWDF_INTERRUPT_INFO InterruptInfo);
        
        void ( STDMETHODCALLTYPE *SetPolicy )( 
            IWDFInterrupt * This,
            /* [annotation][in] */ 
            _In_  WDF_INTERRUPT_POLICY Policy,
            /* [annotation][in] */ 
            _In_  WDF_INTERRUPT_PRIORITY Priority,
            /* [annotation][in] */ 
            _In_  KAFFINITY TargetProcessorSet);
        
        void ( STDMETHODCALLTYPE *SetExtendedPolicy )( 
            IWDFInterrupt * This,
            /* [annotation][in] */ 
            _In_  PWDF_INTERRUPT_EXTENDED_POLICY PolicyAndGroup);
        
        void ( STDMETHODCALLTYPE *AcquireInterruptLock )( 
            IWDFInterrupt * This);
        
        void ( STDMETHODCALLTYPE *ReleaseInterruptLock )( 
            IWDFInterrupt * This);
        
        BOOLEAN ( STDMETHODCALLTYPE *QueueWorkItemForIsr )( 
            IWDFInterrupt * This);
        
        BOOLEAN ( STDMETHODCALLTYPE *TryToAcquireInterruptLock )( 
            IWDFInterrupt * This);
        
        END_INTERFACE
    } IWDFInterruptVtbl;

    interface IWDFInterrupt
    {
        CONST_VTBL struct IWDFInterruptVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFInterrupt_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFInterrupt_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFInterrupt_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFInterrupt_DeleteWdfObject(This)	\
    ( (This)->lpVtbl -> DeleteWdfObject(This) ) 

#define IWDFInterrupt_AssignContext(This,pCleanupCallback,pContext)	\
    ( (This)->lpVtbl -> AssignContext(This,pCleanupCallback,pContext) ) 

#define IWDFInterrupt_RetrieveContext(This,ppvContext)	\
    ( (This)->lpVtbl -> RetrieveContext(This,ppvContext) ) 

#define IWDFInterrupt_AcquireLock(This)	\
    ( (This)->lpVtbl -> AcquireLock(This) ) 

#define IWDFInterrupt_ReleaseLock(This)	\
    ( (This)->lpVtbl -> ReleaseLock(This) ) 


#define IWDFInterrupt_Enable(This)	\
    ( (This)->lpVtbl -> Enable(This) ) 

#define IWDFInterrupt_Disable(This)	\
    ( (This)->lpVtbl -> Disable(This) ) 

#define IWDFInterrupt_GetDevice(This)	\
    ( (This)->lpVtbl -> GetDevice(This) ) 

#define IWDFInterrupt_GetInfo(This,InterruptInfo)	\
    ( (This)->lpVtbl -> GetInfo(This,InterruptInfo) ) 

#define IWDFInterrupt_SetPolicy(This,Policy,Priority,TargetProcessorSet)	\
    ( (This)->lpVtbl -> SetPolicy(This,Policy,Priority,TargetProcessorSet) ) 

#define IWDFInterrupt_SetExtendedPolicy(This,PolicyAndGroup)	\
    ( (This)->lpVtbl -> SetExtendedPolicy(This,PolicyAndGroup) ) 

#define IWDFInterrupt_AcquireInterruptLock(This)	\
    ( (This)->lpVtbl -> AcquireInterruptLock(This) ) 

#define IWDFInterrupt_ReleaseInterruptLock(This)	\
    ( (This)->lpVtbl -> ReleaseInterruptLock(This) ) 

#define IWDFInterrupt_QueueWorkItemForIsr(This)	\
    ( (This)->lpVtbl -> QueueWorkItemForIsr(This) ) 

#define IWDFInterrupt_TryToAcquireInterruptLock(This)	\
    ( (This)->lpVtbl -> TryToAcquireInterruptLock(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFInterrupt_INTERFACE_DEFINED__ */


#ifndef __IWDFWorkItem_INTERFACE_DEFINED__
#define __IWDFWorkItem_INTERFACE_DEFINED__

/* interface IWDFWorkItem */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWDFWorkItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E3142542-5259-4f20-A1ED-F57055AF9265")
    IWDFWorkItem : public IWDFObject
    {
    public:
        virtual void STDMETHODCALLTYPE Enqueue( void) = 0;
        
        virtual void STDMETHODCALLTYPE Flush( void) = 0;
        
        virtual IWDFObject *STDMETHODCALLTYPE GetParentObject( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWDFWorkItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWDFWorkItem * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWDFWorkItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWDFWorkItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteWdfObject )( 
            IWDFWorkItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *AssignContext )( 
            IWDFWorkItem * This,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  IObjectCleanup *pCleanupCallback,
            /* [annotation][unique][in] */ 
            _In_opt_ __drv_aliasesMem  void *pContext);
        
        HRESULT ( STDMETHODCALLTYPE *RetrieveContext )( 
            IWDFWorkItem * This,
            /* [annotation][out] */ 
            _Out_  void **ppvContext);
        
        void ( STDMETHODCALLTYPE *AcquireLock )( 
            IWDFWorkItem * This);
        
        void ( STDMETHODCALLTYPE *ReleaseLock )( 
            IWDFWorkItem * This);
        
        void ( STDMETHODCALLTYPE *Enqueue )( 
            IWDFWorkItem * This);
        
        void ( STDMETHODCALLTYPE *Flush )( 
            IWDFWorkItem * This);
        
        IWDFObject *( STDMETHODCALLTYPE *GetParentObject )( 
            IWDFWorkItem * This);
        
        END_INTERFACE
    } IWDFWorkItemVtbl;

    interface IWDFWorkItem
    {
        CONST_VTBL struct IWDFWorkItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWDFWorkItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWDFWorkItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWDFWorkItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWDFWorkItem_DeleteWdfObject(This)	\
    ( (This)->lpVtbl -> DeleteWdfObject(This) ) 

#define IWDFWorkItem_AssignContext(This,pCleanupCallback,pContext)	\
    ( (This)->lpVtbl -> AssignContext(This,pCleanupCallback,pContext) ) 

#define IWDFWorkItem_RetrieveContext(This,ppvContext)	\
    ( (This)->lpVtbl -> RetrieveContext(This,ppvContext) ) 

#define IWDFWorkItem_AcquireLock(This)	\
    ( (This)->lpVtbl -> AcquireLock(This) ) 

#define IWDFWorkItem_ReleaseLock(This)	\
    ( (This)->lpVtbl -> ReleaseLock(This) ) 


#define IWDFWorkItem_Enqueue(This)	\
    ( (This)->lpVtbl -> Enqueue(This) ) 

#define IWDFWorkItem_Flush(This)	\
    ( (This)->lpVtbl -> Flush(This) ) 

#define IWDFWorkItem_GetParentObject(This)	\
    ( (This)->lpVtbl -> GetParentObject(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWDFWorkItem_INTERFACE_DEFINED__ */


#ifndef __IObjectCleanup_INTERFACE_DEFINED__
#define __IObjectCleanup_INTERFACE_DEFINED__

/* interface IObjectCleanup */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IObjectCleanup;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("244ABE3A-ABBC-43b1-A877-F00077550E6A")
    IObjectCleanup : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE OnCleanup( 
            /* [annotation][in] */ 
            _In_  IWDFObject *pWdfObject) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IObjectCleanupVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IObjectCleanup * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IObjectCleanup * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IObjectCleanup * This);
        
        void ( STDMETHODCALLTYPE *OnCleanup )( 
            IObjectCleanup * This,
            /* [annotation][in] */ 
            _In_  IWDFObject *pWdfObject);
        
        END_INTERFACE
    } IObjectCleanupVtbl;

    interface IObjectCleanup
    {
        CONST_VTBL struct IObjectCleanupVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObjectCleanup_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IObjectCleanup_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IObjectCleanup_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IObjectCleanup_OnCleanup(This,pWdfObject)	\
    ( (This)->lpVtbl -> OnCleanup(This,pWdfObject) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IObjectCleanup_INTERFACE_DEFINED__ */


#ifndef __IDriverEntry_INTERFACE_DEFINED__
#define __IDriverEntry_INTERFACE_DEFINED__

/* interface IDriverEntry */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDriverEntry;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1bec7499-8881-4f2b-b01c-a1a907304afc")
    IDriverEntry : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnInitialize( 
            /* [annotation][in] */ 
            _In_  IWDFDriver *pWdfDriver) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnDeviceAdd( 
            /* [annotation][in] */ 
            _In_  IWDFDriver *pWdfDriver,
            /* [annotation][in] */ 
            _In_  IWDFDeviceInitialize *pWdfDeviceInit) = 0;
        
        virtual void STDMETHODCALLTYPE OnDeinitialize( 
            /* [annotation][in] */ 
            _In_  IWDFDriver *pWdfDriver) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDriverEntryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDriverEntry * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDriverEntry * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDriverEntry * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnInitialize )( 
            IDriverEntry * This,
            /* [annotation][in] */ 
            _In_  IWDFDriver *pWdfDriver);
        
        HRESULT ( STDMETHODCALLTYPE *OnDeviceAdd )( 
            IDriverEntry * This,
            /* [annotation][in] */ 
            _In_  IWDFDriver *pWdfDriver,
            /* [annotation][in] */ 
            _In_  IWDFDeviceInitialize *pWdfDeviceInit);
        
        void ( STDMETHODCALLTYPE *OnDeinitialize )( 
            IDriverEntry * This,
            /* [annotation][in] */ 
            _In_  IWDFDriver *pWdfDriver);
        
        END_INTERFACE
    } IDriverEntryVtbl;

    interface IDriverEntry
    {
        CONST_VTBL struct IDriverEntryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDriverEntry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDriverEntry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDriverEntry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDriverEntry_OnInitialize(This,pWdfDriver)	\
    ( (This)->lpVtbl -> OnInitialize(This,pWdfDriver) ) 

#define IDriverEntry_OnDeviceAdd(This,pWdfDriver,pWdfDeviceInit)	\
    ( (This)->lpVtbl -> OnDeviceAdd(This,pWdfDriver,pWdfDeviceInit) ) 

#define IDriverEntry_OnDeinitialize(This,pWdfDriver)	\
    ( (This)->lpVtbl -> OnDeinitialize(This,pWdfDriver) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDriverEntry_INTERFACE_DEFINED__ */


#ifndef __IPnpCallback_INTERFACE_DEFINED__
#define __IPnpCallback_INTERFACE_DEFINED__

/* interface IPnpCallback */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IPnpCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("27C32374-CC45-4840-857E-8E5EF7C0EBFF")
    IPnpCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnD0Entry( 
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice,
            /* [annotation][in] */ 
            _In_  WDF_POWER_DEVICE_STATE previousState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnD0Exit( 
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice,
            /* [annotation][in] */ 
            _In_  WDF_POWER_DEVICE_STATE newState) = 0;
        
        virtual void STDMETHODCALLTYPE OnSurpriseRemoval( 
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnQueryRemove( 
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnQueryStop( 
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPnpCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPnpCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPnpCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPnpCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnD0Entry )( 
            IPnpCallback * This,
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice,
            /* [annotation][in] */ 
            _In_  WDF_POWER_DEVICE_STATE previousState);
        
        HRESULT ( STDMETHODCALLTYPE *OnD0Exit )( 
            IPnpCallback * This,
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice,
            /* [annotation][in] */ 
            _In_  WDF_POWER_DEVICE_STATE newState);
        
        void ( STDMETHODCALLTYPE *OnSurpriseRemoval )( 
            IPnpCallback * This,
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice);
        
        HRESULT ( STDMETHODCALLTYPE *OnQueryRemove )( 
            IPnpCallback * This,
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice);
        
        HRESULT ( STDMETHODCALLTYPE *OnQueryStop )( 
            IPnpCallback * This,
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice);
        
        END_INTERFACE
    } IPnpCallbackVtbl;

    interface IPnpCallback
    {
        CONST_VTBL struct IPnpCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPnpCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPnpCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPnpCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPnpCallback_OnD0Entry(This,pWdfDevice,previousState)	\
    ( (This)->lpVtbl -> OnD0Entry(This,pWdfDevice,previousState) ) 

#define IPnpCallback_OnD0Exit(This,pWdfDevice,newState)	\
    ( (This)->lpVtbl -> OnD0Exit(This,pWdfDevice,newState) ) 

#define IPnpCallback_OnSurpriseRemoval(This,pWdfDevice)	\
    ( (This)->lpVtbl -> OnSurpriseRemoval(This,pWdfDevice) ) 

#define IPnpCallback_OnQueryRemove(This,pWdfDevice)	\
    ( (This)->lpVtbl -> OnQueryRemove(This,pWdfDevice) ) 

#define IPnpCallback_OnQueryStop(This,pWdfDevice)	\
    ( (This)->lpVtbl -> OnQueryStop(This,pWdfDevice) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPnpCallback_INTERFACE_DEFINED__ */


#ifndef __IPnpCallbackSelfManagedIo_INTERFACE_DEFINED__
#define __IPnpCallbackSelfManagedIo_INTERFACE_DEFINED__

/* interface IPnpCallbackSelfManagedIo */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IPnpCallbackSelfManagedIo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D1C9CA4C-46AA-46f8-BD8C-6CA9DEB13340")
    IPnpCallbackSelfManagedIo : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE OnSelfManagedIoCleanup( 
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice) = 0;
        
        virtual void STDMETHODCALLTYPE OnSelfManagedIoFlush( 
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnSelfManagedIoInit( 
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnSelfManagedIoSuspend( 
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnSelfManagedIoRestart( 
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnSelfManagedIoStop( 
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPnpCallbackSelfManagedIoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPnpCallbackSelfManagedIo * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPnpCallbackSelfManagedIo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPnpCallbackSelfManagedIo * This);
        
        void ( STDMETHODCALLTYPE *OnSelfManagedIoCleanup )( 
            IPnpCallbackSelfManagedIo * This,
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice);
        
        void ( STDMETHODCALLTYPE *OnSelfManagedIoFlush )( 
            IPnpCallbackSelfManagedIo * This,
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice);
        
        HRESULT ( STDMETHODCALLTYPE *OnSelfManagedIoInit )( 
            IPnpCallbackSelfManagedIo * This,
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice);
        
        HRESULT ( STDMETHODCALLTYPE *OnSelfManagedIoSuspend )( 
            IPnpCallbackSelfManagedIo * This,
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice);
        
        HRESULT ( STDMETHODCALLTYPE *OnSelfManagedIoRestart )( 
            IPnpCallbackSelfManagedIo * This,
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice);
        
        HRESULT ( STDMETHODCALLTYPE *OnSelfManagedIoStop )( 
            IPnpCallbackSelfManagedIo * This,
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice);
        
        END_INTERFACE
    } IPnpCallbackSelfManagedIoVtbl;

    interface IPnpCallbackSelfManagedIo
    {
        CONST_VTBL struct IPnpCallbackSelfManagedIoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPnpCallbackSelfManagedIo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPnpCallbackSelfManagedIo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPnpCallbackSelfManagedIo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPnpCallbackSelfManagedIo_OnSelfManagedIoCleanup(This,pWdfDevice)	\
    ( (This)->lpVtbl -> OnSelfManagedIoCleanup(This,pWdfDevice) ) 

#define IPnpCallbackSelfManagedIo_OnSelfManagedIoFlush(This,pWdfDevice)	\
    ( (This)->lpVtbl -> OnSelfManagedIoFlush(This,pWdfDevice) ) 

#define IPnpCallbackSelfManagedIo_OnSelfManagedIoInit(This,pWdfDevice)	\
    ( (This)->lpVtbl -> OnSelfManagedIoInit(This,pWdfDevice) ) 

#define IPnpCallbackSelfManagedIo_OnSelfManagedIoSuspend(This,pWdfDevice)	\
    ( (This)->lpVtbl -> OnSelfManagedIoSuspend(This,pWdfDevice) ) 

#define IPnpCallbackSelfManagedIo_OnSelfManagedIoRestart(This,pWdfDevice)	\
    ( (This)->lpVtbl -> OnSelfManagedIoRestart(This,pWdfDevice) ) 

#define IPnpCallbackSelfManagedIo_OnSelfManagedIoStop(This,pWdfDevice)	\
    ( (This)->lpVtbl -> OnSelfManagedIoStop(This,pWdfDevice) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPnpCallbackSelfManagedIo_INTERFACE_DEFINED__ */


#ifndef __IPnpCallbackHardware_INTERFACE_DEFINED__
#define __IPnpCallbackHardware_INTERFACE_DEFINED__

/* interface IPnpCallbackHardware */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IPnpCallbackHardware;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("51433BD3-C7C1-4bd8-B4C1-AB1E034626CC")
    IPnpCallbackHardware : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnPrepareHardware( 
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnReleaseHardware( 
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPnpCallbackHardwareVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPnpCallbackHardware * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPnpCallbackHardware * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPnpCallbackHardware * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnPrepareHardware )( 
            IPnpCallbackHardware * This,
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice);
        
        HRESULT ( STDMETHODCALLTYPE *OnReleaseHardware )( 
            IPnpCallbackHardware * This,
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice);
        
        END_INTERFACE
    } IPnpCallbackHardwareVtbl;

    interface IPnpCallbackHardware
    {
        CONST_VTBL struct IPnpCallbackHardwareVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPnpCallbackHardware_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPnpCallbackHardware_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPnpCallbackHardware_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPnpCallbackHardware_OnPrepareHardware(This,pWdfDevice)	\
    ( (This)->lpVtbl -> OnPrepareHardware(This,pWdfDevice) ) 

#define IPnpCallbackHardware_OnReleaseHardware(This,pWdfDevice)	\
    ( (This)->lpVtbl -> OnReleaseHardware(This,pWdfDevice) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPnpCallbackHardware_INTERFACE_DEFINED__ */


#ifndef __IPnpCallbackHardware2_INTERFACE_DEFINED__
#define __IPnpCallbackHardware2_INTERFACE_DEFINED__

/* interface IPnpCallbackHardware2 */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IPnpCallbackHardware2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1493CD1B-C546-46bb-BF47-B27465093393")
    IPnpCallbackHardware2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnPrepareHardware( 
            /* [annotation][in] */ 
            _In_  IWDFDevice3 *pWdfDevice,
            /* [annotation][in] */ 
            _In_  IWDFCmResourceList *pWdfResourcesRaw,
            /* [annotation][in] */ 
            _In_  IWDFCmResourceList *pWdfResourcesTranslated) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnReleaseHardware( 
            /* [annotation][in] */ 
            _In_  IWDFDevice3 *pWdfDevice,
            /* [annotation][in] */ 
            _In_  IWDFCmResourceList *pWdfResourcesTranslated) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPnpCallbackHardware2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPnpCallbackHardware2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPnpCallbackHardware2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPnpCallbackHardware2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnPrepareHardware )( 
            IPnpCallbackHardware2 * This,
            /* [annotation][in] */ 
            _In_  IWDFDevice3 *pWdfDevice,
            /* [annotation][in] */ 
            _In_  IWDFCmResourceList *pWdfResourcesRaw,
            /* [annotation][in] */ 
            _In_  IWDFCmResourceList *pWdfResourcesTranslated);
        
        HRESULT ( STDMETHODCALLTYPE *OnReleaseHardware )( 
            IPnpCallbackHardware2 * This,
            /* [annotation][in] */ 
            _In_  IWDFDevice3 *pWdfDevice,
            /* [annotation][in] */ 
            _In_  IWDFCmResourceList *pWdfResourcesTranslated);
        
        END_INTERFACE
    } IPnpCallbackHardware2Vtbl;

    interface IPnpCallbackHardware2
    {
        CONST_VTBL struct IPnpCallbackHardware2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPnpCallbackHardware2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPnpCallbackHardware2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPnpCallbackHardware2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPnpCallbackHardware2_OnPrepareHardware(This,pWdfDevice,pWdfResourcesRaw,pWdfResourcesTranslated)	\
    ( (This)->lpVtbl -> OnPrepareHardware(This,pWdfDevice,pWdfResourcesRaw,pWdfResourcesTranslated) ) 

#define IPnpCallbackHardware2_OnReleaseHardware(This,pWdfDevice,pWdfResourcesTranslated)	\
    ( (This)->lpVtbl -> OnReleaseHardware(This,pWdfDevice,pWdfResourcesTranslated) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPnpCallbackHardware2_INTERFACE_DEFINED__ */


#ifndef __IPowerPolicyCallbackWakeFromS0_INTERFACE_DEFINED__
#define __IPowerPolicyCallbackWakeFromS0_INTERFACE_DEFINED__

/* interface IPowerPolicyCallbackWakeFromS0 */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IPowerPolicyCallbackWakeFromS0;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7EE9F0FA-5A1A-48df-A35E-8DB42F519B66")
    IPowerPolicyCallbackWakeFromS0 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnArmWakeFromS0( 
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice) = 0;
        
        virtual void STDMETHODCALLTYPE OnDisarmWakeFromS0( 
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice) = 0;
        
        virtual void STDMETHODCALLTYPE OnWakeFromS0Triggered( 
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPowerPolicyCallbackWakeFromS0Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPowerPolicyCallbackWakeFromS0 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPowerPolicyCallbackWakeFromS0 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPowerPolicyCallbackWakeFromS0 * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnArmWakeFromS0 )( 
            IPowerPolicyCallbackWakeFromS0 * This,
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice);
        
        void ( STDMETHODCALLTYPE *OnDisarmWakeFromS0 )( 
            IPowerPolicyCallbackWakeFromS0 * This,
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice);
        
        void ( STDMETHODCALLTYPE *OnWakeFromS0Triggered )( 
            IPowerPolicyCallbackWakeFromS0 * This,
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice);
        
        END_INTERFACE
    } IPowerPolicyCallbackWakeFromS0Vtbl;

    interface IPowerPolicyCallbackWakeFromS0
    {
        CONST_VTBL struct IPowerPolicyCallbackWakeFromS0Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPowerPolicyCallbackWakeFromS0_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPowerPolicyCallbackWakeFromS0_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPowerPolicyCallbackWakeFromS0_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPowerPolicyCallbackWakeFromS0_OnArmWakeFromS0(This,pWdfDevice)	\
    ( (This)->lpVtbl -> OnArmWakeFromS0(This,pWdfDevice) ) 

#define IPowerPolicyCallbackWakeFromS0_OnDisarmWakeFromS0(This,pWdfDevice)	\
    ( (This)->lpVtbl -> OnDisarmWakeFromS0(This,pWdfDevice) ) 

#define IPowerPolicyCallbackWakeFromS0_OnWakeFromS0Triggered(This,pWdfDevice)	\
    ( (This)->lpVtbl -> OnWakeFromS0Triggered(This,pWdfDevice) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPowerPolicyCallbackWakeFromS0_INTERFACE_DEFINED__ */


#ifndef __IPowerPolicyCallbackWakeFromSx_INTERFACE_DEFINED__
#define __IPowerPolicyCallbackWakeFromSx_INTERFACE_DEFINED__

/* interface IPowerPolicyCallbackWakeFromSx */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IPowerPolicyCallbackWakeFromSx;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3AB1426D-689C-4220-901E-03C6D909B5F5")
    IPowerPolicyCallbackWakeFromSx : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnArmWakeFromSx( 
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice) = 0;
        
        virtual void STDMETHODCALLTYPE OnDisarmWakeFromSx( 
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice) = 0;
        
        virtual void STDMETHODCALLTYPE OnWakeFromSxTriggered( 
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPowerPolicyCallbackWakeFromSxVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPowerPolicyCallbackWakeFromSx * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPowerPolicyCallbackWakeFromSx * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPowerPolicyCallbackWakeFromSx * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnArmWakeFromSx )( 
            IPowerPolicyCallbackWakeFromSx * This,
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice);
        
        void ( STDMETHODCALLTYPE *OnDisarmWakeFromSx )( 
            IPowerPolicyCallbackWakeFromSx * This,
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice);
        
        void ( STDMETHODCALLTYPE *OnWakeFromSxTriggered )( 
            IPowerPolicyCallbackWakeFromSx * This,
            /* [annotation][in] */ 
            _In_  IWDFDevice *pWdfDevice);
        
        END_INTERFACE
    } IPowerPolicyCallbackWakeFromSxVtbl;

    interface IPowerPolicyCallbackWakeFromSx
    {
        CONST_VTBL struct IPowerPolicyCallbackWakeFromSxVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPowerPolicyCallbackWakeFromSx_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPowerPolicyCallbackWakeFromSx_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPowerPolicyCallbackWakeFromSx_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPowerPolicyCallbackWakeFromSx_OnArmWakeFromSx(This,pWdfDevice)	\
    ( (This)->lpVtbl -> OnArmWakeFromSx(This,pWdfDevice) ) 

#define IPowerPolicyCallbackWakeFromSx_OnDisarmWakeFromSx(This,pWdfDevice)	\
    ( (This)->lpVtbl -> OnDisarmWakeFromSx(This,pWdfDevice) ) 

#define IPowerPolicyCallbackWakeFromSx_OnWakeFromSxTriggered(This,pWdfDevice)	\
    ( (This)->lpVtbl -> OnWakeFromSxTriggered(This,pWdfDevice) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPowerPolicyCallbackWakeFromSx_INTERFACE_DEFINED__ */


#ifndef __IQueueCallbackCreate_INTERFACE_DEFINED__
#define __IQueueCallbackCreate_INTERFACE_DEFINED__

/* interface IQueueCallbackCreate */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IQueueCallbackCreate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7D8899F0-8DA9-435f-983C-7E17D4356997")
    IQueueCallbackCreate : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE OnCreateFile( 
            /* [annotation][in] */ 
            _In_  IWDFIoQueue *pWdfQueue,
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pWDFRequest,
            /* [annotation][in] */ 
            _In_  IWDFFile *pWdfFileObject) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IQueueCallbackCreateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IQueueCallbackCreate * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IQueueCallbackCreate * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IQueueCallbackCreate * This);
        
        void ( STDMETHODCALLTYPE *OnCreateFile )( 
            IQueueCallbackCreate * This,
            /* [annotation][in] */ 
            _In_  IWDFIoQueue *pWdfQueue,
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pWDFRequest,
            /* [annotation][in] */ 
            _In_  IWDFFile *pWdfFileObject);
        
        END_INTERFACE
    } IQueueCallbackCreateVtbl;

    interface IQueueCallbackCreate
    {
        CONST_VTBL struct IQueueCallbackCreateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IQueueCallbackCreate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IQueueCallbackCreate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IQueueCallbackCreate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IQueueCallbackCreate_OnCreateFile(This,pWdfQueue,pWDFRequest,pWdfFileObject)	\
    ( (This)->lpVtbl -> OnCreateFile(This,pWdfQueue,pWDFRequest,pWdfFileObject) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IQueueCallbackCreate_INTERFACE_DEFINED__ */


#ifndef __IQueueCallbackRead_INTERFACE_DEFINED__
#define __IQueueCallbackRead_INTERFACE_DEFINED__

/* interface IQueueCallbackRead */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IQueueCallbackRead;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C3072620-1DA6-48fb-B4FE-ED652B16AEB2")
    IQueueCallbackRead : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE OnRead( 
            /* [annotation][in] */ 
            _In_  IWDFIoQueue *pWdfQueue,
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pWdfRequest,
            /* [annotation][in] */ 
            _In_  SIZE_T NumOfBytesToRead) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IQueueCallbackReadVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IQueueCallbackRead * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IQueueCallbackRead * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IQueueCallbackRead * This);
        
        void ( STDMETHODCALLTYPE *OnRead )( 
            IQueueCallbackRead * This,
            /* [annotation][in] */ 
            _In_  IWDFIoQueue *pWdfQueue,
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pWdfRequest,
            /* [annotation][in] */ 
            _In_  SIZE_T NumOfBytesToRead);
        
        END_INTERFACE
    } IQueueCallbackReadVtbl;

    interface IQueueCallbackRead
    {
        CONST_VTBL struct IQueueCallbackReadVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IQueueCallbackRead_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IQueueCallbackRead_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IQueueCallbackRead_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IQueueCallbackRead_OnRead(This,pWdfQueue,pWdfRequest,NumOfBytesToRead)	\
    ( (This)->lpVtbl -> OnRead(This,pWdfQueue,pWdfRequest,NumOfBytesToRead) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IQueueCallbackRead_INTERFACE_DEFINED__ */


#ifndef __IQueueCallbackWrite_INTERFACE_DEFINED__
#define __IQueueCallbackWrite_INTERFACE_DEFINED__

/* interface IQueueCallbackWrite */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IQueueCallbackWrite;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4888CBC5-3FA2-4ea3-89A3-C20ED6E04778")
    IQueueCallbackWrite : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE OnWrite( 
            /* [annotation][in] */ 
            _In_  IWDFIoQueue *pWdfQueue,
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pWdfRequest,
            /* [annotation][in] */ 
            _In_  SIZE_T NumOfBytesToWrite) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IQueueCallbackWriteVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IQueueCallbackWrite * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IQueueCallbackWrite * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IQueueCallbackWrite * This);
        
        void ( STDMETHODCALLTYPE *OnWrite )( 
            IQueueCallbackWrite * This,
            /* [annotation][in] */ 
            _In_  IWDFIoQueue *pWdfQueue,
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pWdfRequest,
            /* [annotation][in] */ 
            _In_  SIZE_T NumOfBytesToWrite);
        
        END_INTERFACE
    } IQueueCallbackWriteVtbl;

    interface IQueueCallbackWrite
    {
        CONST_VTBL struct IQueueCallbackWriteVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IQueueCallbackWrite_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IQueueCallbackWrite_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IQueueCallbackWrite_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IQueueCallbackWrite_OnWrite(This,pWdfQueue,pWdfRequest,NumOfBytesToWrite)	\
    ( (This)->lpVtbl -> OnWrite(This,pWdfQueue,pWdfRequest,NumOfBytesToWrite) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IQueueCallbackWrite_INTERFACE_DEFINED__ */


#ifndef __IQueueCallbackDeviceIoControl_INTERFACE_DEFINED__
#define __IQueueCallbackDeviceIoControl_INTERFACE_DEFINED__

/* interface IQueueCallbackDeviceIoControl */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IQueueCallbackDeviceIoControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C5411408-0F1E-4ed6-A412-36DD15EEE707")
    IQueueCallbackDeviceIoControl : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE OnDeviceIoControl( 
            /* [annotation][in] */ 
            _In_  IWDFIoQueue *pWdfQueue,
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pWdfRequest,
            /* [annotation][in] */ 
            _In_  ULONG ControlCode,
            /* [annotation][in] */ 
            _In_  SIZE_T InputBufferSizeInBytes,
            /* [annotation][in] */ 
            _In_  SIZE_T OutputBufferSizeInBytes) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IQueueCallbackDeviceIoControlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IQueueCallbackDeviceIoControl * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IQueueCallbackDeviceIoControl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IQueueCallbackDeviceIoControl * This);
        
        void ( STDMETHODCALLTYPE *OnDeviceIoControl )( 
            IQueueCallbackDeviceIoControl * This,
            /* [annotation][in] */ 
            _In_  IWDFIoQueue *pWdfQueue,
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pWdfRequest,
            /* [annotation][in] */ 
            _In_  ULONG ControlCode,
            /* [annotation][in] */ 
            _In_  SIZE_T InputBufferSizeInBytes,
            /* [annotation][in] */ 
            _In_  SIZE_T OutputBufferSizeInBytes);
        
        END_INTERFACE
    } IQueueCallbackDeviceIoControlVtbl;

    interface IQueueCallbackDeviceIoControl
    {
        CONST_VTBL struct IQueueCallbackDeviceIoControlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IQueueCallbackDeviceIoControl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IQueueCallbackDeviceIoControl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IQueueCallbackDeviceIoControl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IQueueCallbackDeviceIoControl_OnDeviceIoControl(This,pWdfQueue,pWdfRequest,ControlCode,InputBufferSizeInBytes,OutputBufferSizeInBytes)	\
    ( (This)->lpVtbl -> OnDeviceIoControl(This,pWdfQueue,pWdfRequest,ControlCode,InputBufferSizeInBytes,OutputBufferSizeInBytes) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IQueueCallbackDeviceIoControl_INTERFACE_DEFINED__ */


#ifndef __IQueueCallbackDefaultIoHandler_INTERFACE_DEFINED__
#define __IQueueCallbackDefaultIoHandler_INTERFACE_DEFINED__

/* interface IQueueCallbackDefaultIoHandler */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IQueueCallbackDefaultIoHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("15FB6D38-FDD8-4005-8E55-EB0B98313499")
    IQueueCallbackDefaultIoHandler : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE OnDefaultIoHandler( 
            /* [annotation][in] */ 
            _In_  IWDFIoQueue *pWdfQueue,
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pWdfRequest) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IQueueCallbackDefaultIoHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IQueueCallbackDefaultIoHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IQueueCallbackDefaultIoHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IQueueCallbackDefaultIoHandler * This);
        
        void ( STDMETHODCALLTYPE *OnDefaultIoHandler )( 
            IQueueCallbackDefaultIoHandler * This,
            /* [annotation][in] */ 
            _In_  IWDFIoQueue *pWdfQueue,
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pWdfRequest);
        
        END_INTERFACE
    } IQueueCallbackDefaultIoHandlerVtbl;

    interface IQueueCallbackDefaultIoHandler
    {
        CONST_VTBL struct IQueueCallbackDefaultIoHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IQueueCallbackDefaultIoHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IQueueCallbackDefaultIoHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IQueueCallbackDefaultIoHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IQueueCallbackDefaultIoHandler_OnDefaultIoHandler(This,pWdfQueue,pWdfRequest)	\
    ( (This)->lpVtbl -> OnDefaultIoHandler(This,pWdfQueue,pWdfRequest) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IQueueCallbackDefaultIoHandler_INTERFACE_DEFINED__ */


#ifndef __IQueueCallbackStateChange_INTERFACE_DEFINED__
#define __IQueueCallbackStateChange_INTERFACE_DEFINED__

/* interface IQueueCallbackStateChange */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IQueueCallbackStateChange;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E7ECE381-7CB1-468a-BC43-ABD5948FFC75")
    IQueueCallbackStateChange : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE OnStateChange( 
            /* [annotation][in] */ 
            _In_  IWDFIoQueue *pWdfQueue,
            /* [annotation][in] */ 
            _In_  WDF_IO_QUEUE_STATE QueueState) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IQueueCallbackStateChangeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IQueueCallbackStateChange * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IQueueCallbackStateChange * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IQueueCallbackStateChange * This);
        
        void ( STDMETHODCALLTYPE *OnStateChange )( 
            IQueueCallbackStateChange * This,
            /* [annotation][in] */ 
            _In_  IWDFIoQueue *pWdfQueue,
            /* [annotation][in] */ 
            _In_  WDF_IO_QUEUE_STATE QueueState);
        
        END_INTERFACE
    } IQueueCallbackStateChangeVtbl;

    interface IQueueCallbackStateChange
    {
        CONST_VTBL struct IQueueCallbackStateChangeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IQueueCallbackStateChange_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IQueueCallbackStateChange_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IQueueCallbackStateChange_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IQueueCallbackStateChange_OnStateChange(This,pWdfQueue,QueueState)	\
    ( (This)->lpVtbl -> OnStateChange(This,pWdfQueue,QueueState) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IQueueCallbackStateChange_INTERFACE_DEFINED__ */


#ifndef __IQueueCallbackIoStop_INTERFACE_DEFINED__
#define __IQueueCallbackIoStop_INTERFACE_DEFINED__

/* interface IQueueCallbackIoStop */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IQueueCallbackIoStop;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3DE3B961-88FB-435a-9C14-0868FB4FC623")
    IQueueCallbackIoStop : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE OnIoStop( 
            /* [annotation][in] */ 
            _In_  IWDFIoQueue *pWdfQueue,
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pWdfRequest,
            /* [annotation][in] */ 
            _In_  ULONG ActionFlags) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IQueueCallbackIoStopVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IQueueCallbackIoStop * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IQueueCallbackIoStop * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IQueueCallbackIoStop * This);
        
        void ( STDMETHODCALLTYPE *OnIoStop )( 
            IQueueCallbackIoStop * This,
            /* [annotation][in] */ 
            _In_  IWDFIoQueue *pWdfQueue,
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pWdfRequest,
            /* [annotation][in] */ 
            _In_  ULONG ActionFlags);
        
        END_INTERFACE
    } IQueueCallbackIoStopVtbl;

    interface IQueueCallbackIoStop
    {
        CONST_VTBL struct IQueueCallbackIoStopVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IQueueCallbackIoStop_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IQueueCallbackIoStop_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IQueueCallbackIoStop_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IQueueCallbackIoStop_OnIoStop(This,pWdfQueue,pWdfRequest,ActionFlags)	\
    ( (This)->lpVtbl -> OnIoStop(This,pWdfQueue,pWdfRequest,ActionFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IQueueCallbackIoStop_INTERFACE_DEFINED__ */


#ifndef __IQueueCallbackIoResume_INTERFACE_DEFINED__
#define __IQueueCallbackIoResume_INTERFACE_DEFINED__

/* interface IQueueCallbackIoResume */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IQueueCallbackIoResume;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BEE9FD3C-3DDA-4d9d-A8FC-02C38D79F663")
    IQueueCallbackIoResume : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE OnIoResume( 
            /* [annotation][in] */ 
            _In_  IWDFIoQueue *pWdfQueue,
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pWdfRequest) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IQueueCallbackIoResumeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IQueueCallbackIoResume * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IQueueCallbackIoResume * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IQueueCallbackIoResume * This);
        
        void ( STDMETHODCALLTYPE *OnIoResume )( 
            IQueueCallbackIoResume * This,
            /* [annotation][in] */ 
            _In_  IWDFIoQueue *pWdfQueue,
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pWdfRequest);
        
        END_INTERFACE
    } IQueueCallbackIoResumeVtbl;

    interface IQueueCallbackIoResume
    {
        CONST_VTBL struct IQueueCallbackIoResumeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IQueueCallbackIoResume_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IQueueCallbackIoResume_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IQueueCallbackIoResume_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IQueueCallbackIoResume_OnIoResume(This,pWdfQueue,pWdfRequest)	\
    ( (This)->lpVtbl -> OnIoResume(This,pWdfQueue,pWdfRequest) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IQueueCallbackIoResume_INTERFACE_DEFINED__ */


#ifndef __IQueueCallbackIoCanceledOnQueue_INTERFACE_DEFINED__
#define __IQueueCallbackIoCanceledOnQueue_INTERFACE_DEFINED__

/* interface IQueueCallbackIoCanceledOnQueue */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IQueueCallbackIoCanceledOnQueue;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("746383C4-00A7-4200-8073-C02D076976BE")
    IQueueCallbackIoCanceledOnQueue : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE OnIoCanceledOnQueue( 
            /* [annotation][in] */ 
            _In_  IWDFIoQueue *pWdfQueue,
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pWdfRequest) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IQueueCallbackIoCanceledOnQueueVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IQueueCallbackIoCanceledOnQueue * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IQueueCallbackIoCanceledOnQueue * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IQueueCallbackIoCanceledOnQueue * This);
        
        void ( STDMETHODCALLTYPE *OnIoCanceledOnQueue )( 
            IQueueCallbackIoCanceledOnQueue * This,
            /* [annotation][in] */ 
            _In_  IWDFIoQueue *pWdfQueue,
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pWdfRequest);
        
        END_INTERFACE
    } IQueueCallbackIoCanceledOnQueueVtbl;

    interface IQueueCallbackIoCanceledOnQueue
    {
        CONST_VTBL struct IQueueCallbackIoCanceledOnQueueVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IQueueCallbackIoCanceledOnQueue_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IQueueCallbackIoCanceledOnQueue_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IQueueCallbackIoCanceledOnQueue_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IQueueCallbackIoCanceledOnQueue_OnIoCanceledOnQueue(This,pWdfQueue,pWdfRequest)	\
    ( (This)->lpVtbl -> OnIoCanceledOnQueue(This,pWdfQueue,pWdfRequest) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IQueueCallbackIoCanceledOnQueue_INTERFACE_DEFINED__ */


#ifndef __IRequestCallbackCancel_INTERFACE_DEFINED__
#define __IRequestCallbackCancel_INTERFACE_DEFINED__

/* interface IRequestCallbackCancel */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRequestCallbackCancel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4E9F1A77-4587-4235-81C4-E6D24545A656")
    IRequestCallbackCancel : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE OnCancel( 
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pWdfRequest) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRequestCallbackCancelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRequestCallbackCancel * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRequestCallbackCancel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRequestCallbackCancel * This);
        
        void ( STDMETHODCALLTYPE *OnCancel )( 
            IRequestCallbackCancel * This,
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pWdfRequest);
        
        END_INTERFACE
    } IRequestCallbackCancelVtbl;

    interface IRequestCallbackCancel
    {
        CONST_VTBL struct IRequestCallbackCancelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRequestCallbackCancel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRequestCallbackCancel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRequestCallbackCancel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRequestCallbackCancel_OnCancel(This,pWdfRequest)	\
    ( (This)->lpVtbl -> OnCancel(This,pWdfRequest) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRequestCallbackCancel_INTERFACE_DEFINED__ */


#ifndef __IRequestCallbackRequestCompletion_INTERFACE_DEFINED__
#define __IRequestCallbackRequestCompletion_INTERFACE_DEFINED__

/* interface IRequestCallbackRequestCompletion */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRequestCallbackRequestCompletion;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8A7CC8CB-CEB2-46f6-9851-77BD347A15C2")
    IRequestCallbackRequestCompletion : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE OnCompletion( 
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pWdfRequest,
            /* [annotation][in] */ 
            _In_  IWDFIoTarget *pIoTarget,
            /* [annotation][in] */ 
            _In_  IWDFRequestCompletionParams *pParams,
            /* [annotation][in] */ 
            _In_  void *pContext) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRequestCallbackRequestCompletionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRequestCallbackRequestCompletion * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRequestCallbackRequestCompletion * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRequestCallbackRequestCompletion * This);
        
        void ( STDMETHODCALLTYPE *OnCompletion )( 
            IRequestCallbackRequestCompletion * This,
            /* [annotation][in] */ 
            _In_  IWDFIoRequest *pWdfRequest,
            /* [annotation][in] */ 
            _In_  IWDFIoTarget *pIoTarget,
            /* [annotation][in] */ 
            _In_  IWDFRequestCompletionParams *pParams,
            /* [annotation][in] */ 
            _In_  void *pContext);
        
        END_INTERFACE
    } IRequestCallbackRequestCompletionVtbl;

    interface IRequestCallbackRequestCompletion
    {
        CONST_VTBL struct IRequestCallbackRequestCompletionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRequestCallbackRequestCompletion_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRequestCallbackRequestCompletion_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRequestCallbackRequestCompletion_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRequestCallbackRequestCompletion_OnCompletion(This,pWdfRequest,pIoTarget,pParams,pContext)	\
    ( (This)->lpVtbl -> OnCompletion(This,pWdfRequest,pIoTarget,pParams,pContext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRequestCallbackRequestCompletion_INTERFACE_DEFINED__ */


#ifndef __IFileCallbackCleanup_INTERFACE_DEFINED__
#define __IFileCallbackCleanup_INTERFACE_DEFINED__

/* interface IFileCallbackCleanup */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IFileCallbackCleanup;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("35C5F79C-6D81-4819-AA64-D6A8939D94D6")
    IFileCallbackCleanup : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE OnCleanupFile( 
            /* [annotation][in] */ 
            _In_  IWDFFile *pWdfFileObject) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFileCallbackCleanupVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFileCallbackCleanup * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFileCallbackCleanup * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFileCallbackCleanup * This);
        
        void ( STDMETHODCALLTYPE *OnCleanupFile )( 
            IFileCallbackCleanup * This,
            /* [annotation][in] */ 
            _In_  IWDFFile *pWdfFileObject);
        
        END_INTERFACE
    } IFileCallbackCleanupVtbl;

    interface IFileCallbackCleanup
    {
        CONST_VTBL struct IFileCallbackCleanupVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFileCallbackCleanup_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFileCallbackCleanup_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFileCallbackCleanup_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFileCallbackCleanup_OnCleanupFile(This,pWdfFileObject)	\
    ( (This)->lpVtbl -> OnCleanupFile(This,pWdfFileObject) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFileCallbackCleanup_INTERFACE_DEFINED__ */


#ifndef __IFileCallbackClose_INTERFACE_DEFINED__
#define __IFileCallbackClose_INTERFACE_DEFINED__

/* interface IFileCallbackClose */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IFileCallbackClose;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C28FD731-F3F1-4573-97DC-620F72D013A6")
    IFileCallbackClose : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE OnCloseFile( 
            /* [annotation][in] */ 
            _In_  IWDFFile *pWdfFileObject) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFileCallbackCloseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFileCallbackClose * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFileCallbackClose * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFileCallbackClose * This);
        
        void ( STDMETHODCALLTYPE *OnCloseFile )( 
            IFileCallbackClose * This,
            /* [annotation][in] */ 
            _In_  IWDFFile *pWdfFileObject);
        
        END_INTERFACE
    } IFileCallbackCloseVtbl;

    interface IFileCallbackClose
    {
        CONST_VTBL struct IFileCallbackCloseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFileCallbackClose_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFileCallbackClose_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFileCallbackClose_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFileCallbackClose_OnCloseFile(This,pWdfFileObject)	\
    ( (This)->lpVtbl -> OnCloseFile(This,pWdfFileObject) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFileCallbackClose_INTERFACE_DEFINED__ */


#ifndef __IImpersonateCallback_INTERFACE_DEFINED__
#define __IImpersonateCallback_INTERFACE_DEFINED__

/* interface IImpersonateCallback */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IImpersonateCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("99B01D17-9FBD-4aa6-B16D-82DAB6A4107F")
    IImpersonateCallback : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE OnImpersonate( 
            /* [annotation][unique][in] */ 
            _In_opt_  void *Context) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IImpersonateCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IImpersonateCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IImpersonateCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IImpersonateCallback * This);
        
        void ( STDMETHODCALLTYPE *OnImpersonate )( 
            IImpersonateCallback * This,
            /* [annotation][unique][in] */ 
            _In_opt_  void *Context);
        
        END_INTERFACE
    } IImpersonateCallbackVtbl;

    interface IImpersonateCallback
    {
        CONST_VTBL struct IImpersonateCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IImpersonateCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IImpersonateCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IImpersonateCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IImpersonateCallback_OnImpersonate(This,Context)	\
    ( (This)->lpVtbl -> OnImpersonate(This,Context) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IImpersonateCallback_INTERFACE_DEFINED__ */


#ifndef __IPnpCallbackRemoteInterfaceNotification_INTERFACE_DEFINED__
#define __IPnpCallbackRemoteInterfaceNotification_INTERFACE_DEFINED__

/* interface IPnpCallbackRemoteInterfaceNotification */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IPnpCallbackRemoteInterfaceNotification;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F9D48F27-BDBE-4A96-AF96-0E53E2A436EC")
    IPnpCallbackRemoteInterfaceNotification : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE OnRemoteInterfaceArrival( 
            /* [annotation][in] */ 
            _In_  IWDFRemoteInterfaceInitialize *pWdfRemoteInterfaceInit) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPnpCallbackRemoteInterfaceNotificationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPnpCallbackRemoteInterfaceNotification * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPnpCallbackRemoteInterfaceNotification * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPnpCallbackRemoteInterfaceNotification * This);
        
        void ( STDMETHODCALLTYPE *OnRemoteInterfaceArrival )( 
            IPnpCallbackRemoteInterfaceNotification * This,
            /* [annotation][in] */ 
            _In_  IWDFRemoteInterfaceInitialize *pWdfRemoteInterfaceInit);
        
        END_INTERFACE
    } IPnpCallbackRemoteInterfaceNotificationVtbl;

    interface IPnpCallbackRemoteInterfaceNotification
    {
        CONST_VTBL struct IPnpCallbackRemoteInterfaceNotificationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPnpCallbackRemoteInterfaceNotification_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPnpCallbackRemoteInterfaceNotification_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPnpCallbackRemoteInterfaceNotification_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPnpCallbackRemoteInterfaceNotification_OnRemoteInterfaceArrival(This,pWdfRemoteInterfaceInit)	\
    ( (This)->lpVtbl -> OnRemoteInterfaceArrival(This,pWdfRemoteInterfaceInit) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPnpCallbackRemoteInterfaceNotification_INTERFACE_DEFINED__ */


#ifndef __IRemoteInterfaceCallbackRemoval_INTERFACE_DEFINED__
#define __IRemoteInterfaceCallbackRemoval_INTERFACE_DEFINED__

/* interface IRemoteInterfaceCallbackRemoval */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRemoteInterfaceCallbackRemoval;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EE9BAEED-B8D7-4097-BE80-042DF78FFBFD")
    IRemoteInterfaceCallbackRemoval : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE OnRemoteInterfaceRemoval( 
            /* [annotation][in] */ 
            _In_  IWDFRemoteInterface *pWdfRemoteInterface) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRemoteInterfaceCallbackRemovalVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRemoteInterfaceCallbackRemoval * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRemoteInterfaceCallbackRemoval * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRemoteInterfaceCallbackRemoval * This);
        
        void ( STDMETHODCALLTYPE *OnRemoteInterfaceRemoval )( 
            IRemoteInterfaceCallbackRemoval * This,
            /* [annotation][in] */ 
            _In_  IWDFRemoteInterface *pWdfRemoteInterface);
        
        END_INTERFACE
    } IRemoteInterfaceCallbackRemovalVtbl;

    interface IRemoteInterfaceCallbackRemoval
    {
        CONST_VTBL struct IRemoteInterfaceCallbackRemovalVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRemoteInterfaceCallbackRemoval_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRemoteInterfaceCallbackRemoval_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRemoteInterfaceCallbackRemoval_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRemoteInterfaceCallbackRemoval_OnRemoteInterfaceRemoval(This,pWdfRemoteInterface)	\
    ( (This)->lpVtbl -> OnRemoteInterfaceRemoval(This,pWdfRemoteInterface) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRemoteInterfaceCallbackRemoval_INTERFACE_DEFINED__ */


#ifndef __IRemoteInterfaceCallbackEvent_INTERFACE_DEFINED__
#define __IRemoteInterfaceCallbackEvent_INTERFACE_DEFINED__

/* interface IRemoteInterfaceCallbackEvent */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRemoteInterfaceCallbackEvent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C50A4804-7A31-4C81-9AB7-E66082F79956")
    IRemoteInterfaceCallbackEvent : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE OnRemoteInterfaceEvent( 
            /* [annotation][in] */ 
            _In_  IWDFRemoteInterface *pWdfRemoteInterface,
            /* [annotation][in] */ 
            _In_  REFGUID EventGuid,
            /* [annotation][in] */ 
            _In_reads_bytes_opt_(cbDataSize)  BYTE *pbData,
            /* [annotation][in] */ 
            _In_  DWORD cbDataSize,
            /* [annotation][in] */ 
            _In_  DWORD NameBufferOffset) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRemoteInterfaceCallbackEventVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRemoteInterfaceCallbackEvent * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRemoteInterfaceCallbackEvent * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRemoteInterfaceCallbackEvent * This);
        
        void ( STDMETHODCALLTYPE *OnRemoteInterfaceEvent )( 
            IRemoteInterfaceCallbackEvent * This,
            /* [annotation][in] */ 
            _In_  IWDFRemoteInterface *pWdfRemoteInterface,
            /* [annotation][in] */ 
            _In_  REFGUID EventGuid,
            /* [annotation][in] */ 
            _In_reads_bytes_opt_(cbDataSize)  BYTE *pbData,
            /* [annotation][in] */ 
            _In_  DWORD cbDataSize,
            /* [annotation][in] */ 
            _In_  DWORD NameBufferOffset);
        
        END_INTERFACE
    } IRemoteInterfaceCallbackEventVtbl;

    interface IRemoteInterfaceCallbackEvent
    {
        CONST_VTBL struct IRemoteInterfaceCallbackEventVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRemoteInterfaceCallbackEvent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRemoteInterfaceCallbackEvent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRemoteInterfaceCallbackEvent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRemoteInterfaceCallbackEvent_OnRemoteInterfaceEvent(This,pWdfRemoteInterface,EventGuid,pbData,cbDataSize,NameBufferOffset)	\
    ( (This)->lpVtbl -> OnRemoteInterfaceEvent(This,pWdfRemoteInterface,EventGuid,pbData,cbDataSize,NameBufferOffset) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRemoteInterfaceCallbackEvent_INTERFACE_DEFINED__ */


#ifndef __IRemoteTargetCallbackRemoval_INTERFACE_DEFINED__
#define __IRemoteTargetCallbackRemoval_INTERFACE_DEFINED__

/* interface IRemoteTargetCallbackRemoval */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRemoteTargetCallbackRemoval;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B3A0D163-C4DD-49CC-AED2-FF5205C67CE1")
    IRemoteTargetCallbackRemoval : public IUnknown
    {
    public:
        virtual BOOL STDMETHODCALLTYPE OnRemoteTargetQueryRemove( 
            /* [annotation][in] */ 
            _In_  IWDFRemoteTarget *pWdfRemoteTarget) = 0;
        
        virtual void STDMETHODCALLTYPE OnRemoteTargetRemoveCanceled( 
            /* [annotation][in] */ 
            _In_  IWDFRemoteTarget *pWdfRemoteTarget) = 0;
        
        virtual void STDMETHODCALLTYPE OnRemoteTargetRemoveComplete( 
            /* [annotation][in] */ 
            _In_  IWDFRemoteTarget *pWdfRemoteTarget) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRemoteTargetCallbackRemovalVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRemoteTargetCallbackRemoval * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRemoteTargetCallbackRemoval * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRemoteTargetCallbackRemoval * This);
        
        BOOL ( STDMETHODCALLTYPE *OnRemoteTargetQueryRemove )( 
            IRemoteTargetCallbackRemoval * This,
            /* [annotation][in] */ 
            _In_  IWDFRemoteTarget *pWdfRemoteTarget);
        
        void ( STDMETHODCALLTYPE *OnRemoteTargetRemoveCanceled )( 
            IRemoteTargetCallbackRemoval * This,
            /* [annotation][in] */ 
            _In_  IWDFRemoteTarget *pWdfRemoteTarget);
        
        void ( STDMETHODCALLTYPE *OnRemoteTargetRemoveComplete )( 
            IRemoteTargetCallbackRemoval * This,
            /* [annotation][in] */ 
            _In_  IWDFRemoteTarget *pWdfRemoteTarget);
        
        END_INTERFACE
    } IRemoteTargetCallbackRemovalVtbl;

    interface IRemoteTargetCallbackRemoval
    {
        CONST_VTBL struct IRemoteTargetCallbackRemovalVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRemoteTargetCallbackRemoval_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRemoteTargetCallbackRemoval_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRemoteTargetCallbackRemoval_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRemoteTargetCallbackRemoval_OnRemoteTargetQueryRemove(This,pWdfRemoteTarget)	\
    ( (This)->lpVtbl -> OnRemoteTargetQueryRemove(This,pWdfRemoteTarget) ) 

#define IRemoteTargetCallbackRemoval_OnRemoteTargetRemoveCanceled(This,pWdfRemoteTarget)	\
    ( (This)->lpVtbl -> OnRemoteTargetRemoveCanceled(This,pWdfRemoteTarget) ) 

#define IRemoteTargetCallbackRemoval_OnRemoteTargetRemoveComplete(This,pWdfRemoteTarget)	\
    ( (This)->lpVtbl -> OnRemoteTargetRemoveComplete(This,pWdfRemoteTarget) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRemoteTargetCallbackRemoval_INTERFACE_DEFINED__ */


#ifndef __IPnpCallbackHardwareInterrupt_INTERFACE_DEFINED__
#define __IPnpCallbackHardwareInterrupt_INTERFACE_DEFINED__

/* interface IPnpCallbackHardwareInterrupt */
/* [unique][restricted][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IPnpCallbackHardwareInterrupt;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3856FEF1-A858-41fd-9BE4-FA90010999B1")
    IPnpCallbackHardwareInterrupt : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnD0EntryPostInterruptsEnabled( 
            /* [annotation][in] */ 
            _In_  IWDFDevice3 *pDevice,
            /* [annotation][in] */ 
            _In_  WDF_POWER_DEVICE_STATE PreviousState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnD0ExitPreInterruptsDisabled( 
            /* [annotation][in] */ 
            _In_  IWDFDevice3 *pDevice,
            /* [annotation][in] */ 
            _In_  WDF_POWER_DEVICE_STATE TargetState) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPnpCallbackHardwareInterruptVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPnpCallbackHardwareInterrupt * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPnpCallbackHardwareInterrupt * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPnpCallbackHardwareInterrupt * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnD0EntryPostInterruptsEnabled )( 
            IPnpCallbackHardwareInterrupt * This,
            /* [annotation][in] */ 
            _In_  IWDFDevice3 *pDevice,
            /* [annotation][in] */ 
            _In_  WDF_POWER_DEVICE_STATE PreviousState);
        
        HRESULT ( STDMETHODCALLTYPE *OnD0ExitPreInterruptsDisabled )( 
            IPnpCallbackHardwareInterrupt * This,
            /* [annotation][in] */ 
            _In_  IWDFDevice3 *pDevice,
            /* [annotation][in] */ 
            _In_  WDF_POWER_DEVICE_STATE TargetState);
        
        END_INTERFACE
    } IPnpCallbackHardwareInterruptVtbl;

    interface IPnpCallbackHardwareInterrupt
    {
        CONST_VTBL struct IPnpCallbackHardwareInterruptVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPnpCallbackHardwareInterrupt_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPnpCallbackHardwareInterrupt_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPnpCallbackHardwareInterrupt_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPnpCallbackHardwareInterrupt_OnD0EntryPostInterruptsEnabled(This,pDevice,PreviousState)	\
    ( (This)->lpVtbl -> OnD0EntryPostInterruptsEnabled(This,pDevice,PreviousState) ) 

#define IPnpCallbackHardwareInterrupt_OnD0ExitPreInterruptsDisabled(This,pDevice,TargetState)	\
    ( (This)->lpVtbl -> OnD0ExitPreInterruptsDisabled(This,pDevice,TargetState) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPnpCallbackHardwareInterrupt_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_wudfddi_0000_0060 */
/* [local] */ 

#include "wudfddi_hwaccess.h" 


extern RPC_IF_HANDLE __MIDL_itf_wudfddi_0000_0060_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wudfddi_0000_0060_v0_0_s_ifspec;


#ifndef __WUDFDDILib_LIBRARY_DEFINED__
#define __WUDFDDILib_LIBRARY_DEFINED__

/* library WUDFDDILib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_WUDFDDILib;

EXTERN_C const CLSID CLSID_WUDFDDI;

#ifdef __cplusplus

class DECLSPEC_UUID("949BE580-C741-4d0f-B1DE-E5B4A3BC89BD")
WUDFDDI;
#endif
#endif /* __WUDFDDILib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


