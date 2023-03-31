// Copyright (C) Microsoft Corporation. All rights reserved.

#pragma once

#pragma region System or Desktop App families
#include <winapifamily.h>
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_DESKTOP)

#include <ndis/version.h>
#include <ndis/types.h>
#include <ndis/objectheader.h>

#if (NDIS_SUPPORT_NDIS687)

EXTERN_C_START

//
// The following status codes are used for indicating packet drop reasons in
// NdisMSendNetBufferListsComplete() and NdisMonitorReceiveDrop()
// The miniport driver must set one of the following status codes in the Status 
// member of each NET_BUFFER_LIST structure that the NetBufferLists parameter specifies.
// 
//  NDIS_STATUS_PAUSED
//  NDIS_STATUS_MEDIA_DISCONNECTED
//  NDIS_STATUS_LOW_POWER_STATE
//  NDIS_STATUS_RESET_IN_PROGRESS
//  NDIS_STATUS_SEND_ABORTED
//
#define NDIS_STATUS_HOST_OUT_OF_MEMORY              ((NDIS_STATUS)0x40052001L)
#define NDIS_STATUS_FRAME_TOO_LONG                  ((NDIS_STATUS)0x40052002L)
#define NDIS_STATUS_FRAME_TOO_SHORT                 ((NDIS_STATUS)0x40052003L)
#define NDIS_STATUS_FRAME_LENGTH_ERROR              ((NDIS_STATUS)0x40052004L)
#define NDIS_STATUS_CRC_ERROR                       ((NDIS_STATUS)0x40052005L)
#define NDIS_STATUS_BAD_CHECKSUM                    ((NDIS_STATUS)0x40052006L)
#define NDIS_STATUS_FCS_ERROR                       ((NDIS_STATUS)0x40052007L)
#define NDIS_STATUS_SYMBOL_ERROR                    ((NDIS_STATUS)0x40052008L)
#define NDIS_STATUS_HEAD_OF_QUEUE_TIMEOUT           ((NDIS_STATUS)0x40052009L)
#define NDIS_STATUS_STALLED_STATE_DISCARD           ((NDIS_STATUS)0x40052010L)
#define NDIS_STATUS_RX_QUEUE_FULL                   ((NDIS_STATUS)0x40052011L)
#define NDIS_STATUS_PHYSICAL_LAYER_ERROR            ((NDIS_STATUS)0x40052012L)
#define NDIS_STATUS_DMA_ERROR                       ((NDIS_STATUS)0x40052013L)
#define NDIS_STATUS_FIRMWARE_ERROR                  ((NDIS_STATUS)0x40052014L)
#define NDIS_STATUS_DECRYPTION_FAILED               ((NDIS_STATUS)0x40052015L)
#define NDIS_STATUS_BAD_SIGNATURE                   ((NDIS_STATUS)0x40052016L)
#define NDIS_STATUS_COALESCING_ERROR                ((NDIS_STATUS)0x40052017L)
#define NDIS_STATUS_MAC_SPOOFING_FAILURE            ((NDIS_STATUS)0x40052018L)
#define NDIS_STATUS_VLAN_SPOOFING_FAILURE           ((NDIS_STATUS)0x40052019L)
#define NDIS_STATUS_UNALLOWED_ETHERTYPE             ((NDIS_STATUS)0x40052020L)
#define NDIS_STATUS_VPORT_DOWN                      ((NDIS_STATUS)0x40052021L)
#define NDIS_STATUS_STEERING_MISMATCH               ((NDIS_STATUS)0x40052022L)

#define NDIS_STATUS_RESERVED_DROP_BEGIN             ((NDIS_STATUS)0x40052023L)
#define NDIS_STATUS_RESERVED_DROP_END               ((NDIS_STATUS)0x40053000L)

//
// Values in the custom range can be used for specifying unpublished drop reasons
//
#define NDIS_STATUS_DRIVER_INTERNAL_DROP_BEGIN      ((NDIS_STATUS)0x40053000L)
#define NDIS_STATUS_DRIVER_INTERNAL_DROP_END        ((NDIS_STATUS)0x40054000L)

//
// OID for packet monitoring configuration
//
#define OID_GEN_PACKET_MONITOR                      0x000102D1  // query and set

//
// The following structure is used in OID_GEN_PACKET_MONITOR
//
#define NDIS_MONITOR_CONFIG_REVISION_1      1

typedef struct _NDIS_MONITOR_CONFIG
{
    NDIS_OBJECT_HEADER  Header;

    BOOLEAN             RxDropReportEnable;

} NDIS_MONITOR_CONFIG, * PNDIS_MONITOR_CONFIG;

#define NDIS_SIZEOF_MONITOR_CONFIG_REVISION_1    \
        RTL_SIZEOF_THROUGH_FIELD(NDIS_MONITOR_CONFIG, RxDropReportEnable)

//
// Miniport driver calls this function for reporting RX packet drops.
// Packet drop reporting is disabled by default and must be explicitly
// enabled by OID_GEN_PACKET_MONITOR.
// Packet types not specified in OID_GEN_CURRENT_PACKET_FILTER
// should not be reported as dropped.
// Status field of NET_BUFFER_LIST structure must indicate the drop reason.
// NetBufferList argument must contain dropped packets only.
// This API is executed synchronously. 
//
_IRQL_requires_max_(DISPATCH_LEVEL)
NDIS_EXPORTED_ROUTINE
VOID
NdisMonitorReceiveDrop(
    _In_ NDIS_HANDLE NdisHandle,
    _In_ NET_BUFFER_LIST const * NetBufferLists,
    _Reserved_ ULONG Flags
    );

EXTERN_C_END

#endif // NDIS_SUPPORT_NDIS687
#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_DESKTOP)

#pragma endregion
