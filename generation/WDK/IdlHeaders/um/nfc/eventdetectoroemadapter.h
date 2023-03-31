

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 501
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __eventdetectoroemadapter_h__
#define __eventdetectoroemadapter_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __IEventDetectorOemAdapter_FWD_DEFINED__
#define __IEventDetectorOemAdapter_FWD_DEFINED__
typedef interface IEventDetectorOemAdapter IEventDetectorOemAdapter;

#endif 	/* __IEventDetectorOemAdapter_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"
#include "objidl.h"
#include "mmreg.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_eventdetectoroemadapter_0000_0000 */
/* [local] */ 

#define _IKsControl_
#include "ks.h"
#include "ksmedia.h"
#include "mmreg.h"
#ifndef _KS_
#define _
typedef /* [public][public][public][public] */ struct __MIDL___MIDL_itf_eventdetectoroemadapter_0000_0000_0001
    {
    ULONG Size;
    GUID PatternType;
    } 	SOUNDDETECTOR_PATTERNHEADER;

#endif
typedef GUID DETECTIONEVENTID;

typedef GUID EVENTPROVIDERID;

typedef unsigned short LANGID;

typedef /* [public][public][public][public][public][public][public][public][public] */ 
enum __MIDL___MIDL_itf_eventdetectoroemadapter_0000_0000_0002
    {
        EVENTFEATURES_NoEventFeatures	= 0,
        EVENTFEATURES_SupportsUserTraining	= 0x1,
        EVENTFEATURES_SupportUserCustomization	= 0x2,
        EVENTFEATURES_ArmPatternRequiresArmState	= 0x4,
        EVENTFEATURES_SupportsSingleLanguage	= 0x8
    } 	EVENTFEATURES;

typedef /* [public][public][public][public][public][public][public] */ struct __MIDL___MIDL_itf_eventdetectoroemadapter_0000_0000_0003
    {
    DETECTIONEVENTID EventId;
    EVENTFEATURES EventFeat;
    EVENTPROVIDERID ProviderId;
    WCHAR DisplayName[ 100 ];
    BOOL UserModelValid;
    } 	DETECTIONEVENT;

typedef /* [public][public][public][public][public][public] */ struct __MIDL___MIDL_itf_eventdetectoroemadapter_0000_0000_0004
    {
    DETECTIONEVENT Event;
    LANGID LangId;
    ULONG UserId;
    BOOL Armed;
    } 	DETECTIONEVENTSELECTOR;

typedef /* [public][public][public][public] */ 
enum __MIDL___MIDL_itf_eventdetectoroemadapter_0000_0000_0005
    {
        EVENTACTIONTYPE_Accept	= 0,
        EVENTACTIONTYPE_Reject	= 1,
        EVENTACTIONTYPE_Error	= 3
    } 	EVENTACTIONTYPE;

typedef /* [public][public][public][public] */ 
enum __MIDL___MIDL_itf_eventdetectoroemadapter_0000_0000_0006
    {
        EVENTACTIONCONTEXTTYPE_None	= 0,
        EVENTACTIONCONTEXTTYPE_Confidence	= 1,
        EVENTACTIONCONTEXTTYPE_Scale	= 2,
        EVENTACTIONCONTEXTTYPE_ErrorCode	= 3
    } 	EVENTACTIONCONTEXTTYPE;

typedef /* [public][public][public][public] */ 
enum __MIDL___MIDL_itf_eventdetectoroemadapter_0000_0000_0007
    {
        EVENTACTIONSCALE_High	= 0,
        EVENTACTIONSCALE_Medium	= 1,
        EVENTACTIONSCALE_Low	= 2
    } 	EVENTACTIONSCALE;

typedef /* [public][public][public] */ struct __MIDL___MIDL_itf_eventdetectoroemadapter_0000_0000_0008
    {
    EVENTACTIONTYPE EventdActionType;
    EVENTACTIONCONTEXTTYPE EventActionContextType;
    union 
        {
        float Confidence;
        EVENTACTIONSCALE Scale;
        HRESULT ErrorCode;
        } 	;
    } 	EVENTACTION;



extern RPC_IF_HANDLE __MIDL_itf_eventdetectoroemadapter_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_eventdetectoroemadapter_0000_0000_v0_0_s_ifspec;

#ifndef __IEventDetectorOemAdapter_INTERFACE_DEFINED__
#define __IEventDetectorOemAdapter_INTERFACE_DEFINED__

/* interface IEventDetectorOemAdapter */
/* [unique][version][uuid][local][object] */ 


EXTERN_C const IID IID_IEventDetectorOemAdapter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3B650B60-F000-45D3-B49E-B9091C7286EA")
    IEventDetectorOemAdapter : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCapabilities( 
            /* [ref][out] */ EVENTFEATURES *GlobalFeatureSupport,
            /* [full][out] */ LANGID **LangIds,
            /* [ref][out] */ ULONG *NumLanguages,
            /* [full][out] */ ULONG *NumUserRecordings,
            /* [full][out] */ WAVEFORMATEX **ppFormat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCapabilitiesForLanguage( 
            /* [in] */ LANGID LangId,
            /* [full][out] */ DETECTIONEVENT **EventIds,
            /* [ref][out] */ ULONG *NumEvents) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE VerifyUserEventData( 
            /* [full][in] */ IStream *ModelData,
            /* [full][in] */ WAVEFORMATEX *UserRecording,
            /* [in] */ DETECTIONEVENTSELECTOR EventSelector,
            /* [in] */ LONG EventEndBytePos) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ComputeAndAddUserModelData( 
            /* [full][out][in] */ IStream *ModelData,
            /* [in] */ DETECTIONEVENTSELECTOR EventSelector,
            /* [full][in] */ LONG *EventEndBytePos,
            /* [full][in] */ WAVEFORMATEX **UserRecordings,
            /* [in] */ ULONG NumUserRecordings) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BuildArmingPatternData( 
            /* [full][in] */ IStream *UserModelData,
            /* [full][in] */ DETECTIONEVENTSELECTOR *EventSelectors,
            /* [in] */ ULONG NumEventSelectors,
            /* [full][out] */ SOUNDDETECTOR_PATTERNHEADER **PatternData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ParseDetectionResultData( 
            /* [full][in] */ IStream *UserModelData,
            /* [full][in] */ SOUNDDETECTOR_PATTERNHEADER *Result,
            /* [full][out] */ SOUNDDETECTOR_PATTERNHEADER **AssistantContext,
            /* [full][out] */ DETECTIONEVENTSELECTOR *EventSelector,
            /* [full][out] */ EVENTACTION *EventAction,
            /* [full][out] */ ULONG64 *EventStartPerformanceCounterValue,
            /* [full][out] */ ULONG64 *EventEndPerformanceCounterValue,
            /* [string][full][out] */ WCHAR **DebugOutput) = 0;
        
        virtual void STDMETHODCALLTYPE ReportOSDetectionResult( 
            /* [in] */ DETECTIONEVENTSELECTOR EventSelector,
            /* [in] */ EVENTACTION EventAction) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEventDetectorOemAdapterVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEventDetectorOemAdapter * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEventDetectorOemAdapter * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEventDetectorOemAdapter * This);
        
        DECLSPEC_XFGVIRT(IEventDetectorOemAdapter, GetCapabilities)
        HRESULT ( STDMETHODCALLTYPE *GetCapabilities )( 
            IEventDetectorOemAdapter * This,
            /* [ref][out] */ EVENTFEATURES *GlobalFeatureSupport,
            /* [full][out] */ LANGID **LangIds,
            /* [ref][out] */ ULONG *NumLanguages,
            /* [full][out] */ ULONG *NumUserRecordings,
            /* [full][out] */ WAVEFORMATEX **ppFormat);
        
        DECLSPEC_XFGVIRT(IEventDetectorOemAdapter, GetCapabilitiesForLanguage)
        HRESULT ( STDMETHODCALLTYPE *GetCapabilitiesForLanguage )( 
            IEventDetectorOemAdapter * This,
            /* [in] */ LANGID LangId,
            /* [full][out] */ DETECTIONEVENT **EventIds,
            /* [ref][out] */ ULONG *NumEvents);
        
        DECLSPEC_XFGVIRT(IEventDetectorOemAdapter, VerifyUserEventData)
        HRESULT ( STDMETHODCALLTYPE *VerifyUserEventData )( 
            IEventDetectorOemAdapter * This,
            /* [full][in] */ IStream *ModelData,
            /* [full][in] */ WAVEFORMATEX *UserRecording,
            /* [in] */ DETECTIONEVENTSELECTOR EventSelector,
            /* [in] */ LONG EventEndBytePos);
        
        DECLSPEC_XFGVIRT(IEventDetectorOemAdapter, ComputeAndAddUserModelData)
        HRESULT ( STDMETHODCALLTYPE *ComputeAndAddUserModelData )( 
            IEventDetectorOemAdapter * This,
            /* [full][out][in] */ IStream *ModelData,
            /* [in] */ DETECTIONEVENTSELECTOR EventSelector,
            /* [full][in] */ LONG *EventEndBytePos,
            /* [full][in] */ WAVEFORMATEX **UserRecordings,
            /* [in] */ ULONG NumUserRecordings);
        
        DECLSPEC_XFGVIRT(IEventDetectorOemAdapter, BuildArmingPatternData)
        HRESULT ( STDMETHODCALLTYPE *BuildArmingPatternData )( 
            IEventDetectorOemAdapter * This,
            /* [full][in] */ IStream *UserModelData,
            /* [full][in] */ DETECTIONEVENTSELECTOR *EventSelectors,
            /* [in] */ ULONG NumEventSelectors,
            /* [full][out] */ SOUNDDETECTOR_PATTERNHEADER **PatternData);
        
        DECLSPEC_XFGVIRT(IEventDetectorOemAdapter, ParseDetectionResultData)
        HRESULT ( STDMETHODCALLTYPE *ParseDetectionResultData )( 
            IEventDetectorOemAdapter * This,
            /* [full][in] */ IStream *UserModelData,
            /* [full][in] */ SOUNDDETECTOR_PATTERNHEADER *Result,
            /* [full][out] */ SOUNDDETECTOR_PATTERNHEADER **AssistantContext,
            /* [full][out] */ DETECTIONEVENTSELECTOR *EventSelector,
            /* [full][out] */ EVENTACTION *EventAction,
            /* [full][out] */ ULONG64 *EventStartPerformanceCounterValue,
            /* [full][out] */ ULONG64 *EventEndPerformanceCounterValue,
            /* [string][full][out] */ WCHAR **DebugOutput);
        
        DECLSPEC_XFGVIRT(IEventDetectorOemAdapter, ReportOSDetectionResult)
        void ( STDMETHODCALLTYPE *ReportOSDetectionResult )( 
            IEventDetectorOemAdapter * This,
            /* [in] */ DETECTIONEVENTSELECTOR EventSelector,
            /* [in] */ EVENTACTION EventAction);
        
        END_INTERFACE
    } IEventDetectorOemAdapterVtbl;

    interface IEventDetectorOemAdapter
    {
        CONST_VTBL struct IEventDetectorOemAdapterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEventDetectorOemAdapter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEventDetectorOemAdapter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEventDetectorOemAdapter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEventDetectorOemAdapter_GetCapabilities(This,GlobalFeatureSupport,LangIds,NumLanguages,NumUserRecordings,ppFormat)	\
    ( (This)->lpVtbl -> GetCapabilities(This,GlobalFeatureSupport,LangIds,NumLanguages,NumUserRecordings,ppFormat) ) 

#define IEventDetectorOemAdapter_GetCapabilitiesForLanguage(This,LangId,EventIds,NumEvents)	\
    ( (This)->lpVtbl -> GetCapabilitiesForLanguage(This,LangId,EventIds,NumEvents) ) 

#define IEventDetectorOemAdapter_VerifyUserEventData(This,ModelData,UserRecording,EventSelector,EventEndBytePos)	\
    ( (This)->lpVtbl -> VerifyUserEventData(This,ModelData,UserRecording,EventSelector,EventEndBytePos) ) 

#define IEventDetectorOemAdapter_ComputeAndAddUserModelData(This,ModelData,EventSelector,EventEndBytePos,UserRecordings,NumUserRecordings)	\
    ( (This)->lpVtbl -> ComputeAndAddUserModelData(This,ModelData,EventSelector,EventEndBytePos,UserRecordings,NumUserRecordings) ) 

#define IEventDetectorOemAdapter_BuildArmingPatternData(This,UserModelData,EventSelectors,NumEventSelectors,PatternData)	\
    ( (This)->lpVtbl -> BuildArmingPatternData(This,UserModelData,EventSelectors,NumEventSelectors,PatternData) ) 

#define IEventDetectorOemAdapter_ParseDetectionResultData(This,UserModelData,Result,AssistantContext,EventSelector,EventAction,EventStartPerformanceCounterValue,EventEndPerformanceCounterValue,DebugOutput)	\
    ( (This)->lpVtbl -> ParseDetectionResultData(This,UserModelData,Result,AssistantContext,EventSelector,EventAction,EventStartPerformanceCounterValue,EventEndPerformanceCounterValue,DebugOutput) ) 

#define IEventDetectorOemAdapter_ReportOSDetectionResult(This,EventSelector,EventAction)	\
    ( (This)->lpVtbl -> ReportOSDetectionResult(This,EventSelector,EventAction) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEventDetectorOemAdapter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_eventdetectoroemadapter_0000_0001 */
/* [local] */ 

DEFINE_GUID(CLSID_ExprKeywordDetectorOemAdapter, 0x2c09bb8, 0x574a, 0x42c1, 0xb0, 0x63, 0x55, 0xf6, 0xf2, 0x91, 0xef, 0x5b);


extern RPC_IF_HANDLE __MIDL_itf_eventdetectoroemadapter_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_eventdetectoroemadapter_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


