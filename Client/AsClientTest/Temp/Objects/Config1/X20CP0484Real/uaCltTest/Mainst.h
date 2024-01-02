#ifndef __AS__TYPE_
#define __AS__TYPE_
typedef struct {
	unsigned char bit0  : 1;
	unsigned char bit1  : 1;
	unsigned char bit2  : 1;
	unsigned char bit3  : 1;
	unsigned char bit4  : 1;
	unsigned char bit5  : 1;
	unsigned char bit6  : 1;
	unsigned char bit7  : 1;
} _1byte_bit_field_;

typedef struct {
	unsigned short bit0  : 1;
	unsigned short bit1  : 1;
	unsigned short bit2  : 1;
	unsigned short bit3  : 1;
	unsigned short bit4  : 1;
	unsigned short bit5  : 1;
	unsigned short bit6  : 1;
	unsigned short bit7  : 1;
	unsigned short bit8  : 1;
	unsigned short bit9  : 1;
	unsigned short bit10 : 1;
	unsigned short bit11 : 1;
	unsigned short bit12 : 1;
	unsigned short bit13 : 1;
	unsigned short bit14 : 1;
	unsigned short bit15 : 1;
} _2byte_bit_field_;

typedef struct {
	unsigned long bit0  : 1;
	unsigned long bit1  : 1;
	unsigned long bit2  : 1;
	unsigned long bit3  : 1;
	unsigned long bit4  : 1;
	unsigned long bit5  : 1;
	unsigned long bit6  : 1;
	unsigned long bit7  : 1;
	unsigned long bit8  : 1;
	unsigned long bit9  : 1;
	unsigned long bit10 : 1;
	unsigned long bit11 : 1;
	unsigned long bit12 : 1;
	unsigned long bit13 : 1;
	unsigned long bit14 : 1;
	unsigned long bit15 : 1;
	unsigned long bit16 : 1;
	unsigned long bit17 : 1;
	unsigned long bit18 : 1;
	unsigned long bit19 : 1;
	unsigned long bit20 : 1;
	unsigned long bit21 : 1;
	unsigned long bit22 : 1;
	unsigned long bit23 : 1;
	unsigned long bit24 : 1;
	unsigned long bit25 : 1;
	unsigned long bit26 : 1;
	unsigned long bit27 : 1;
	unsigned long bit28 : 1;
	unsigned long bit29 : 1;
	unsigned long bit30 : 1;
	unsigned long bit31 : 1;
} _4byte_bit_field_;
#endif

#ifndef __AS__TYPE_UASecurityMsgMode
#define __AS__TYPE_UASecurityMsgMode
typedef enum UASecurityMsgMode
{	UASecurityMsgMode_BestAvailable = 0,
	UASecurityMsgMode_None = 1,
	UASecurityMsgMode_Sign = 2,
	UASecurityMsgMode_SignEncrypt = 3,
} UASecurityMsgMode;
#endif

#ifndef __AS__TYPE_UASecurityPolicy
#define __AS__TYPE_UASecurityPolicy
typedef enum UASecurityPolicy
{	UASecurityPolicy_BestAvailable = 0,
	UASecurityPolicy_None = 1,
	UASecurityPolicy_Basic128Rsa15 = 2,
	UASecurityPolicy_Basic256 = 3,
	UASecurityPolicy_Basic256Sha256 = 4,
} UASecurityPolicy;
#endif

#ifndef __AS__TYPE_UATransportProfile
#define __AS__TYPE_UATransportProfile
typedef enum UATransportProfile
{	UATP_UATcp = 1,
	UATP_WSHttpBinary = 2,
	UATP_WSHttpXmlOrBinary = 3,
	UATP_WSHttpXml = 4,
} UATransportProfile;
#endif

#ifndef __AS__TYPE_UAUserIdentityTokenTtype
#define __AS__TYPE_UAUserIdentityTokenTtype
typedef enum UAUserIdentityTokenTtype
{	UAUITT_Anonymous = 0,
	UAUITT_Username = 1,
	UAUITT_x509 = 2,
} UAUserIdentityTokenTtype;
#endif

#ifndef __AS__TYPE_UAUserIdentityToken
#define __AS__TYPE_UAUserIdentityToken
typedef struct UAUserIdentityToken
{	UAUserIdentityTokenTtype UserIdentityTokenType;
	plcstring TokenParam1[256];
	plcstring TokenParam2[256];
} UAUserIdentityToken;
#endif

#ifndef __AS__TYPE_UASessionConnectInfo
#define __AS__TYPE_UASessionConnectInfo
typedef struct UASessionConnectInfo
{	plcstring SessionName[256];
	plcstring ApplicationName[256];
	UASecurityMsgMode SecurityMsgMode;
	UASecurityPolicy SecurityPolicy;
	plcstring CertificateStore[256];
	plcstring ClientCertificateName[256];
	plcstring ServerUri[256];
	plcbit CheckServerCertificate;
	UATransportProfile TransportProfile;
	UAUserIdentityToken UserIdentityToken;
	plcstring VendorSpecificParameter[256];
	plctime SessionTimeout;
	plctime MonitorConnection;
	plcstring LocaleIDs[5][7];
} UASessionConnectInfo;
#endif

struct UA_Connect
{	plcstring ServerEndpointUrl[256];
	UASessionConnectInfo SessionConnectInfo;
	plctime Timeout;
	plcdword ConnectionHdl;
	plcdword ErrorID;
	plcbit Execute;
	plcbit Done;
	plcbit Busy;
	plcbit Error;
	plcbit i_busy;
};
_BUR_PUBLIC void UA_Connect(struct UA_Connect* inst);
struct UA_GetNamespaceIndex
{	plcdword ConnectionHdl;
	plcstring NamespaceUri[256];
	plctime Timeout;
	unsigned short NamespaceIndex;
	plcdword ErrorID;
	plcbit Execute;
	plcbit Done;
	plcbit Busy;
	plcbit Error;
	plcbit i_busy;
};
_BUR_PUBLIC void UA_GetNamespaceIndex(struct UA_GetNamespaceIndex* inst);
#ifndef __AS__TYPE_UAIdentifierType
#define __AS__TYPE_UAIdentifierType
typedef enum UAIdentifierType
{	UAIdentifierType_String = 1,
	UAIdentifierType_Numeric = 2,
	UAIdentifierType_GUID = 3,
	UAIdentifierType_Opaque = 4,
} UAIdentifierType;
#endif

#ifndef __AS__TYPE_UANodeID
#define __AS__TYPE_UANodeID
typedef struct UANodeID
{	unsigned short NamespaceIndex;
	plcstring Identifier[256];
	UAIdentifierType IdentifierType;
} UANodeID;
#endif

struct UA_NodeGetHandle
{	plcdword ConnectionHdl;
	UANodeID NodeID;
	plctime Timeout;
	plcdword NodeHdl;
	plcdword ErrorID;
	plcbit Execute;
	plcbit Done;
	plcbit Busy;
	plcbit Error;
	plcbit i_busy;
};
_BUR_PUBLIC void UA_NodeGetHandle(struct UA_NodeGetHandle* inst);
#ifndef __AS__TYPE_UAAttributeId
#define __AS__TYPE_UAAttributeId
typedef enum UAAttributeId
{	UAAI_Default = 0,
	UAAI_NodeId = 1,
	UAAI_NodeClass = 2,
	UAAI_BrowseName = 3,
	UAAI_DisplayName = 4,
	UAAI_Description = 5,
	UAAI_WriteMask = 6,
	UAAI_UserWriteMask = 7,
	UAAI_IsAbstract = 8,
	UAAI_Symmetric = 9,
	UAAI_InverseName = 10,
	UAAI_ContainsNoLoops = 11,
	UAAI_EventNotifier = 12,
	UAAI_Value = 13,
	UAAI_DataType = 14,
	UAAI_ValueRank = 15,
	UAAI_ArrayDimensions = 16,
	UAAI_AccessLevel = 17,
	UAAI_UserAccessLevel = 18,
	UAAI_MinimumSamplingInterval = 19,
	UAAI_Historizing = 20,
	UAAI_Executable = 21,
	UAAI_UserExecutable = 22,
} UAAttributeId;
#endif

#ifndef __AS__TYPE_UAIndexRange
#define __AS__TYPE_UAIndexRange
typedef struct UAIndexRange
{	unsigned short StartIndex;
	unsigned short EndIndex;
} UAIndexRange;
#endif

#ifndef __AS__TYPE_UANodeAdditionalInfo
#define __AS__TYPE_UANodeAdditionalInfo
typedef struct UANodeAdditionalInfo
{	UAAttributeId AttributeId;
	unsigned short IndexRangeCount;
	struct UAIndexRange IndexRange[8];
} UANodeAdditionalInfo;
#endif

struct UA_Read
{	plcdword ConnectionHdl;
	plcdword NodeHdl;
	UANodeAdditionalInfo NodeAddInfo;
	plctime Timeout;
	plcdword ErrorID;
	plcdt TimeStamp;
	plcstring(* Variable)[256];
	unsigned long i_tid;
	plcbit Execute;
	plcbit Done;
	plcbit Busy;
	plcbit Error;
	plcbit i_busy;
};
_BUR_PUBLIC void UA_Read(struct UA_Read* inst);
struct UA_NodeReleaseHandle
{	plcdword ConnectionHdl;
	plcdword NodeHdl;
	plctime Timeout;
	plcdword ErrorID;
	plcbit Execute;
	plcbit Done;
	plcbit Busy;
	plcbit Error;
	plcbit i_busy;
};
_BUR_PUBLIC void UA_NodeReleaseHandle(struct UA_NodeReleaseHandle* inst);
struct UA_Disconnect
{	plcdword ConnectionHdl;
	plctime Timeout;
	plcdword ErrorID;
	plcbit Execute;
	plcbit Done;
	plcbit Busy;
	plcbit Error;
	plcbit i_busy;
};
_BUR_PUBLIC void UA_Disconnect(struct UA_Disconnect* inst);
#ifndef __AS__TYPE_EasyUaReadInternalType
#define __AS__TYPE_EasyUaReadInternalType
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
#endif

struct EasyUaRead
{	plcstring ServerEndpointUrl[256];
	struct UASessionConnectInfo(* pSessionConnectInfo);
	plcstring NamespaceUri[256];
	UANodeID NodeID;
	struct UANodeAdditionalInfo(* pNodeAddInfo);
	plcstring Variable[256];
	plcdword StatusID;
	plcdt TimeStamp;
	EasyUaReadInternalType Internal;
	plcbit Execute;
	plcbit Done;
	plcbit Busy;
	plcbit Active;
	plcbit Error;
};
_BUR_PUBLIC void EasyUaRead(struct EasyUaRead* inst);
struct TON
{	plctime PT;
	plctime ET;
	plctime StartTime;
	unsigned long Restart;
	plcbit IN;
	plcbit Q;
	plcbit M;
};
_BUR_PUBLIC void TON(struct TON* inst);
_BUR_LOCAL unsigned char MAX_OPCUA_CLIENTS;
_BUR_LOCAL struct EasyUaRead EasyUaReads[10];
_BUR_LOCAL struct TON TON_0;
_BUR_LOCAL unsigned char i;
_BUR_LOCAL plcbit myBool;
_BUR_LOCAL unsigned char myUsint;
_BUR_LOCAL signed char mySint;
_BUR_LOCAL unsigned short myUint;
_BUR_LOCAL signed short myInt;
_BUR_LOCAL signed long myDint;
_BUR_LOCAL unsigned long myUdint;
_BUR_LOCAL float myReal;
_BUR_LOCAL plcstring myString[81];
_GLOBAL unsigned short MAX_ELEMENTS_INDEXRANGE;
_GLOBAL unsigned short MAX_INDEX_INDEXRANGE;
