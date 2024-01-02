/* Automation Studio generated header file */
/* Do not edit ! */
/* EasyUaClnt 1.02.0 */

#ifndef _EASYUACLNT_
#define _EASYUACLNT_
#ifdef __cplusplus
extern "C" 
{
#endif
#ifndef _EasyUaClnt_VERSION
#define _EasyUaClnt_VERSION 1.02.0
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
#ifdef _SG3
		#include "AsOpcUac.h"
		#include "standard.h"
		#include "AsBrStr.h"
#endif
#ifdef _SG4
		#include "AsOpcUac.h"
		#include "standard.h"
		#include "AsBrStr.h"
#endif
#ifdef _SGC
		#include "AsOpcUac.h"
		#include "standard.h"
		#include "AsBrStr.h"
#endif


/* Constants */
#ifdef _REPLACE_CONST
 #define EASYUA_EXECUTE_TIMEOUT 5000
#else
 _GLOBAL_CONST plctime EASYUA_EXECUTE_TIMEOUT;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct EasyUaConnGetStatusInternalType
{	plcbit ExecuteOld;
	plcbit Executing;
	plcbit ParametersValid;
	unsigned long Step;
	plcdword ConnectionHdl;
	plcdword StatusID;
	struct UA_Connect UA_Connect_0;
	struct UA_ConnectionGetStatus UA_ConnectionGetStatus_0;
	struct UA_Disconnect UA_Disconnect_0;
} EasyUaConnGetStatusInternalType;

typedef struct EasyUaConnectionGetStatus
{
	/* VAR_INPUT (analog) */
	plcstring ServerEndpointUrl[256];
	struct UASessionConnectInfo* pSessionConnectInfo;
	/* VAR_OUTPUT (analog) */
	plcdword StatusID;
	UAConnectionStatus ConnectionStatus;
	UAServerState ServerState;
	plcbyte ServiceLevel;
	/* VAR (analog) */
	struct EasyUaConnGetStatusInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Execute;
	/* VAR_OUTPUT (digital) */
	plcbit Done;
	plcbit Busy;
	plcbit Active;
	plcbit Error;
} EasyUaConnectionGetStatus_typ;

typedef struct EasyUaMonSrvStatusInternalType
{	plcbit EnableOld;
	plcbit ParametersValid;
	unsigned long Step;
	plctime MonitoringTime;
	struct EasyUaConnectionGetStatus EasyUaConnectionGetStatus;
	struct TON TON_0;
} EasyUaMonSrvStatusInternalType;

typedef struct EasyUaReadInternalType
{	plcbit ExecuteOld;
	plcbit Executing;
	plcbit ParametersValid;
	unsigned long Step;
	plcdword ConnectionHdl;
	plcdword NodeHdl;
	plcstring Variable[256];
	plcdword StatusID;
	struct UA_Connect UA_Connect_0;
	struct UA_GetNamespaceIndex UA_GetNamespaceIndex_0;
	struct UA_NodeGetHandle UA_NodeGetHandle_0;
	struct UA_Read UA_Read_0;
	struct UA_NodeReleaseHandle UA_NodeReleaseHandle_0;
	struct UA_Disconnect UA_Disconnect_0;
} EasyUaReadInternalType;

typedef struct EasyUaReadListInternalType
{	plcbit ExecuteOld;
	plcbit Executing;
	plcbit ParametersValid;
	unsigned long Step;
	plcdword ConnectionHdl;
	plcdword NodeHdls[64];
	plcstring Variables[64][256];
	unsigned long Idx;
	unsigned short NodeIDCount;
	plcdword StatusID;
	struct UA_Connect UA_Connect_0;
	struct UA_GetNamespaceIndex UA_GetNamespaceIndex_0;
	struct UA_NodeGetHandleList UA_NodeGetHandleList_0;
	struct UA_ReadList UA_ReadList_0;
	struct UA_NodeReleaseHandleList UA_NodeReleaseHandleList_0;
	struct UA_Disconnect UA_Disconnect_0;
} EasyUaReadListInternalType;

typedef struct EasyUaReadBulkInternalType
{	plcbit ExecuteOld;
	plcbit Executing;
	plcbit ParametersValid;
	unsigned long Step;
	plcdword ConnectionHdl;
	unsigned short NamespaceIndex;
	unsigned long Idx;
	unsigned long NodeIDsAdr;
	unsigned long NodeIDsLen;
	plcdword StatusID;
	struct UA_Connect UA_Connect_0;
	struct UA_GetNamespaceIndex UA_GetNamespaceIndex_0;
	struct UaClt_ReadBulk UaClt_ReadBulk_0;
	struct UA_Disconnect UA_Disconnect_0;
} EasyUaReadBulkInternalType;

typedef struct EasyUaWriteInternalType
{	plcbit ExecuteOld;
	plcbit Executing;
	plcbit ParametersValid;
	unsigned long Step;
	plcdword ConnectionHdl;
	plcdword NodeHdl;
	plcstring Variable[256];
	plcdword StatusID;
	struct UA_Connect UA_Connect_0;
	struct UA_GetNamespaceIndex UA_GetNamespaceIndex_0;
	struct UA_NodeGetHandle UA_NodeGetHandle_0;
	struct UA_Write UA_Write_0;
	struct UA_NodeReleaseHandle UA_NodeReleaseHandle_0;
	struct UA_Disconnect UA_Disconnect_0;
} EasyUaWriteInternalType;

typedef struct EasyUaWriteListInternalType
{	plcbit ExecuteOld;
	plcbit Executing;
	plcbit ParametersValid;
	unsigned long Step;
	plcdword ConnectionHdl;
	plcdword NodeHdls[64];
	plcstring Variables[64][256];
	unsigned long Idx;
	unsigned short NodeIDCount;
	plcdword StatusID;
	struct UA_Connect UA_Connect_0;
	struct UA_GetNamespaceIndex UA_GetNamespaceIndex_0;
	struct UA_NodeGetHandleList UA_NodeGetHandleList_0;
	struct UA_WriteList UA_WriteList_0;
	struct UA_NodeReleaseHandleList UA_NodeReleaseHandleList_0;
	struct UA_Disconnect UA_Disconnect_0;
} EasyUaWriteListInternalType;

typedef struct EasyUaWriteBulkInternalType
{	plcbit ExecuteOld;
	plcbit Executing;
	plcbit ParametersValid;
	unsigned long Step;
	plcdword ConnectionHdl;
	unsigned short NamespaceIndex;
	unsigned long Idx;
	unsigned long NodeIDsAdr;
	unsigned long NodeIDsLen;
	plcdword StatusID;
	struct UA_Connect UA_Connect_0;
	struct UA_GetNamespaceIndex UA_GetNamespaceIndex_0;
	struct UaClt_WriteBulk UaClt_WriteBulk_0;
	struct UA_Disconnect UA_Disconnect_0;
} EasyUaWriteBulkInternalType;

typedef struct EasyUaSubscriptionInternalType
{	plcbit EnableOld;
	plcbit ParametersValid;
	unsigned long Step;
	plcdword ConnectionHdl;
	plcdword NodeHdl;
	plcstring Variable[256];
	plctime PublishingInterval;
	plcdword SubscriptionHdl;
	struct UAMonitoringSettings MonitoringSettings;
	plcdword MonitoredItemHdl;
	plcdword StatusID;
	unsigned long Disable;
	struct UA_Connect UA_Connect_0;
	struct UA_GetNamespaceIndex UA_GetNamespaceIndex_0;
	struct UA_NodeGetHandle UA_NodeGetHandle_0;
	struct UA_SubscriptionCreate UA_SubscriptionCreate_0;
	struct UA_MonitoredItemAdd UA_MonitoredItemAdd_0;
	struct UA_MonitoredItemOperate UA_MonitoredItemOperate_0;
	struct UA_MonitoredItemRemove UA_MonitoredItemRemove_0;
	struct UA_SubscriptionDelete UA_SubscriptionDelete_0;
	struct UA_NodeReleaseHandle UA_NodeReleaseHandle_0;
	struct UA_Disconnect UA_Disconnect_0;
} EasyUaSubscriptionInternalType;

typedef struct EasyUaSubsListInternalType
{	plcbit EnableOld;
	plcbit ParametersValid;
	unsigned long Step;
	plcdword ConnectionHdl;
	plcdword NodeHdls[64];
	plcstring Variables[64][256];
	plctime PublishingInterval;
	plcdword SubscriptionHdl;
	struct UAMonitoringParameters MonitoringSettings[64];
	plcdword MonitoredItemHdls[64];
	unsigned long Idx;
	unsigned short NodeIDCount;
	plcdword StatusID;
	unsigned long Disable;
	struct UA_Connect UA_Connect_0;
	struct UA_GetNamespaceIndex UA_GetNamespaceIndex_0;
	struct UA_NodeGetHandleList UA_NodeGetHandleList_0;
	struct UA_SubscriptionCreate UA_SubscriptionCreate_0;
	struct UA_MonitoredItemAddList UA_MonitoredItemAddList_0;
	struct UA_MonitoredItemRemoveList UA_MonitoredItemRemoveList_0;
	struct UA_SubscriptionDelete UA_SubscriptionDelete_0;
	struct UA_NodeReleaseHandleList UA_NodeReleaseHandleList_0;
	struct UA_Disconnect UA_Disconnect_0;
} EasyUaSubsListInternalType;

typedef struct EasyUaMethodCallInternalType
{	plcbit ExecuteOld;
	plcbit Executing;
	plcbit ParametersValid;
	unsigned long Step;
	plcdword ConnectionHdl;
	plcdword MethodHdl;
	struct UAMethodArgument InputArguments[10];
	struct UAMethodArgument OutputArguments[10];
	plcdword StatusID;
	struct UA_Connect UA_Connect_0;
	struct UA_GetNamespaceIndex UA_GetNamespaceIndex_0;
	struct UA_MethodGetHandle UA_MethodGetHandle_0;
	struct UA_MethodCall UA_MethodCall_0;
	struct UA_MethodReleaseHandle UA_MethodReleaseHandle_0;
	struct UA_Disconnect UA_Disconnect_0;
} EasyUaMethodCallInternalType;

typedef struct EasyUaRead
{
	/* VAR_INPUT (analog) */
	plcstring ServerEndpointUrl[256];
	struct UASessionConnectInfo* pSessionConnectInfo;
	plcstring NamespaceUri[256];
	struct UANodeID NodeID;
	struct UANodeAdditionalInfo* pNodeAddInfo;
	plcstring Variable[256];
	/* VAR_OUTPUT (analog) */
	plcdword StatusID;
	plcdt TimeStamp;
	/* VAR (analog) */
	struct EasyUaReadInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Execute;
	/* VAR_OUTPUT (digital) */
	plcbit Done;
	plcbit Busy;
	plcbit Active;
	plcbit Error;
} EasyUaRead_typ;

typedef struct EasyUaReadList
{
	/* VAR_INPUT (analog) */
	plcstring ServerEndpointUrl[256];
	struct UASessionConnectInfo* pSessionConnectInfo;
	plcstring NamespaceUri[256];
	unsigned short NodeIDCount;
	struct UANodeID NodeIDs[64];
	struct UANodeAdditionalInfo (*pNodeAddInfo)[64];
	plcstring Variables[64][256];
	/* VAR_OUTPUT (analog) */
	plcdword StatusID;
	/* VAR_IN_OUT (analog and digital) */
	plcdword (*NodeErrorIDs)[64];
	plcdt (*TimeStamps)[64];
	/* VAR (analog) */
	struct EasyUaReadListInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Execute;
	/* VAR_OUTPUT (digital) */
	plcbit Done;
	plcbit Busy;
	plcbit Active;
	plcbit Error;
} EasyUaReadList_typ;

typedef struct EasyUaWrite
{
	/* VAR_INPUT (analog) */
	plcstring ServerEndpointUrl[256];
	struct UASessionConnectInfo* pSessionConnectInfo;
	plcstring NamespaceUri[256];
	struct UANodeID NodeID;
	struct UANodeAdditionalInfo* pNodeAddInfo;
	plcstring Variable[256];
	/* VAR_OUTPUT (analog) */
	plcdword StatusID;
	/* VAR (analog) */
	struct EasyUaWriteInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Execute;
	/* VAR_OUTPUT (digital) */
	plcbit Done;
	plcbit Busy;
	plcbit Active;
	plcbit Error;
} EasyUaWrite_typ;

typedef struct EasyUaWriteList
{
	/* VAR_INPUT (analog) */
	plcstring ServerEndpointUrl[256];
	struct UASessionConnectInfo* pSessionConnectInfo;
	plcstring NamespaceUri[256];
	unsigned short NodeIDCount;
	struct UANodeID NodeIDs[64];
	struct UANodeAdditionalInfo (*pNodeAddInfo)[64];
	plcstring Variables[64][256];
	/* VAR_OUTPUT (analog) */
	plcdword StatusID;
	/* VAR_IN_OUT (analog and digital) */
	plcdword (*NodeErrorIDs)[64];
	/* VAR (analog) */
	struct EasyUaWriteListInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Execute;
	/* VAR_OUTPUT (digital) */
	plcbit Done;
	plcbit Busy;
	plcbit Active;
	plcbit Error;
} EasyUaWriteList_typ;

typedef struct EasyUaSubscription
{
	/* VAR_INPUT (analog) */
	plcstring ServerEndpointUrl[256];
	struct UASessionConnectInfo pSessionConnectInfo;
	plcstring NamespaceUri[256];
	struct UANodeID NodeID;
	struct UANodeAdditionalInfo pNodeAddInfo;
	plcstring Variable[256];
	plctime PublishingInterval;
	plcbyte Priority;
	struct UAMonitoringSettings pMonitoringSettings;
	/* VAR_OUTPUT (analog) */
	plcdword StatusID;
	plcdt TimeStamp;
	/* VAR (analog) */
	struct EasyUaSubscriptionInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
	plcbit SubscriptionActive;
	plcbit ValueChanged;
} EasyUaSubscription_typ;

typedef struct EasyUaSubscriptionList
{
	/* VAR_INPUT (analog) */
	plcstring ServerEndpointUrl[256];
	struct UASessionConnectInfo* pSessionConnectInfo;
	plcstring NamespaceUri[256];
	unsigned short NodeIDCount;
	struct UANodeID NodeIDs[64];
	struct UANodeAdditionalInfo (*pNodeAddInfos)[64];
	plctime PublishingInterval;
	plcbyte Priority;
	plcstring Variables[64][256];
	struct UAMonitoringParameters (*pMonitoringSettings)[64];
	/* VAR_OUTPUT (analog) */
	plcdword StatusID;
	/* VAR_IN_OUT (analog and digital) */
	plcbit (*ValuesChanged)[64];
	unsigned short (*RemainingValueCount)[64];
	plcdt (*TimeStamps)[64];
	plcdword (*NodeErrorIDs)[64];
	plcdword (*NodeQualityIDs)[64];
	/* VAR (analog) */
	struct EasyUaSubsListInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
	plcbit SubscriptionListActive;
} EasyUaSubscriptionList_typ;

typedef struct EasyUaMethodCall
{
	/* VAR_INPUT (analog) */
	plcstring ServerEndpointUrl[256];
	struct UASessionConnectInfo* pSessionConnectInfo;
	plcstring NamespaceUri[256];
	struct UANodeID ObjectNodeID;
	struct UANodeID MethodNodeID;
	struct UAMethodArgument InputArguments[10];
	struct UAMethodArgument OutputArguments[10];
	/* VAR_OUTPUT (analog) */
	plcdword StatusID;
	/* VAR (analog) */
	struct EasyUaMethodCallInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Execute;
	/* VAR_OUTPUT (digital) */
	plcbit Done;
	plcbit Busy;
	plcbit Active;
	plcbit Error;
} EasyUaMethodCall_typ;

typedef struct EasyUaReadBulk
{
	/* VAR_INPUT (analog) */
	plcstring ServerEndpointUrl[256];
	struct UASessionConnectInfo* pSessionConnectInfo;
	plcstring NamespaceUri[256];
	unsigned short NodeIDCount;
	unsigned long NodeIDs;
	unsigned long NodeIDsLen;
	unsigned long NodeAddInfo;
	unsigned long Variables;
	unsigned long NodeErrorIDs;
	unsigned long TimeStamps;
	/* VAR_OUTPUT (analog) */
	plcdword StatusID;
	/* VAR (analog) */
	struct EasyUaReadBulkInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Execute;
	/* VAR_OUTPUT (digital) */
	plcbit Done;
	plcbit Busy;
	plcbit Active;
	plcbit Error;
} EasyUaReadBulk_typ;

typedef struct EasyUaWriteBulk
{
	/* VAR_INPUT (analog) */
	plcstring ServerEndpointUrl[256];
	struct UASessionConnectInfo* pSessionConnectInfo;
	plcstring NamespaceUri[256];
	unsigned short NodeIDCount;
	unsigned long NodeIDs;
	unsigned long NodeIDsLen;
	unsigned long NodeAddInfo;
	unsigned long Variables;
	unsigned long NodeErrorIDs;
	/* VAR_OUTPUT (analog) */
	plcdword StatusID;
	/* VAR (analog) */
	struct EasyUaWriteBulkInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Execute;
	/* VAR_OUTPUT (digital) */
	plcbit Done;
	plcbit Busy;
	plcbit Active;
	plcbit Error;
} EasyUaWriteBulk_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void EasyUaConnectionGetStatus(struct EasyUaConnectionGetStatus* inst);
_BUR_PUBLIC void EasyUaRead(struct EasyUaRead* inst);
_BUR_PUBLIC void EasyUaReadList(struct EasyUaReadList* inst);
_BUR_PUBLIC void EasyUaWrite(struct EasyUaWrite* inst);
_BUR_PUBLIC void EasyUaWriteList(struct EasyUaWriteList* inst);
_BUR_PUBLIC void EasyUaSubscription(struct EasyUaSubscription* inst);
_BUR_PUBLIC void EasyUaSubscriptionList(struct EasyUaSubscriptionList* inst);
_BUR_PUBLIC void EasyUaMethodCall(struct EasyUaMethodCall* inst);
_BUR_PUBLIC void EasyUaReadBulk(struct EasyUaReadBulk* inst);
_BUR_PUBLIC void EasyUaWriteBulk(struct EasyUaWriteBulk* inst);


__asm__(".section \".plc\"");

/* Additional IEC dependencies */
__asm__(".ascii \"iecdep \\\"Logical/Libraries/AsOpcUac/AsOpcUac.var\\\" scope \\\"global\\\"\\n\"");

__asm__(".previous");

#ifdef __cplusplus
};
#endif
#endif /* _EASYUACLNT_ */

