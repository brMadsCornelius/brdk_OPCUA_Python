#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/projects/brdk_OPCUA_Python/Client/AsClientTest/Temp/Objects/Config1/X20CP0484/uaCltTest/Mainst.h"
#line 1 "C:/projects/brdk_OPCUA_Python/Client/AsClientTest/Logical/uaCltTest/Main.nodebug"
#line 3 "C:/projects/brdk_OPCUA_Python/Client/AsClientTest/Logical/uaCltTest/Main.st"
void __BUR__ENTRY_INIT_FUNCT__(void){int __AS__Local0_00000;plcstring* __AS__Local3_00000;plcstring* __AS__Local4_00000;{

for((i=0);i<=MAX_OPCUA_CLIENTS;i+=1){
__AS__Local3_00000=(plcstring*)EasyUaReads[i].ServerEndpointUrl; __AS__Local4_00000=(plcstring*)"opc.tcp://127.0.0.2:4840"; for(__AS__Local0_00000=0; __AS__Local0_00000<24l && __AS__Local4_00000[__AS__Local0_00000]!=0; __AS__Local0_00000++) __AS__Local3_00000[__AS__Local0_00000] = __AS__Local4_00000[__AS__Local0_00000]; __AS__Local3_00000[__AS__Local0_00000] = 0;
__AS__Local3_00000=(plcstring*)EasyUaReads[i].NamespaceUri; __AS__Local4_00000=(plcstring*)"http://brdk.opcua.com"; for(__AS__Local0_00000=0; __AS__Local0_00000<21l && __AS__Local4_00000[__AS__Local0_00000]!=0; __AS__Local0_00000++) __AS__Local3_00000[__AS__Local0_00000] = __AS__Local4_00000[__AS__Local0_00000]; __AS__Local3_00000[__AS__Local0_00000] = 0;
(EasyUaReads[i].NodeID.IdentifierType=1);
}imp32769_endfor0_0:;


*((char volatile*)&(myBool)) = *((char*)&(myBool));
__AS__Local3_00000=(plcstring*)EasyUaReads[0].NodeID.Identifier; __AS__Local4_00000=(plcstring*)"myBool"; for(__AS__Local0_00000=0; __AS__Local0_00000<6l && __AS__Local4_00000[__AS__Local0_00000]!=0; __AS__Local0_00000++) __AS__Local3_00000[__AS__Local0_00000] = __AS__Local4_00000[__AS__Local0_00000]; __AS__Local3_00000[__AS__Local0_00000] = 0;
__AS__Local3_00000=(plcstring*)EasyUaReads[0].Variable; __AS__Local4_00000=(plcstring*)"::uaCltTest:myBool"; for(__AS__Local0_00000=0; __AS__Local0_00000<18l && __AS__Local4_00000[__AS__Local0_00000]!=0; __AS__Local0_00000++) __AS__Local3_00000[__AS__Local0_00000] = __AS__Local4_00000[__AS__Local0_00000]; __AS__Local3_00000[__AS__Local0_00000] = 0;

*((char volatile*)&(myUsint)) = *((char*)&(myUsint));
__AS__Local3_00000=(plcstring*)EasyUaReads[1].NodeID.Identifier; __AS__Local4_00000=(plcstring*)"myUsint"; for(__AS__Local0_00000=0; __AS__Local0_00000<7l && __AS__Local4_00000[__AS__Local0_00000]!=0; __AS__Local0_00000++) __AS__Local3_00000[__AS__Local0_00000] = __AS__Local4_00000[__AS__Local0_00000]; __AS__Local3_00000[__AS__Local0_00000] = 0;
__AS__Local3_00000=(plcstring*)EasyUaReads[1].Variable; __AS__Local4_00000=(plcstring*)"::uaCltTest:myUsint"; for(__AS__Local0_00000=0; __AS__Local0_00000<19l && __AS__Local4_00000[__AS__Local0_00000]!=0; __AS__Local0_00000++) __AS__Local3_00000[__AS__Local0_00000] = __AS__Local4_00000[__AS__Local0_00000]; __AS__Local3_00000[__AS__Local0_00000] = 0;

*((char volatile*)&(mySint)) = *((char*)&(mySint));
__AS__Local3_00000=(plcstring*)EasyUaReads[2].NodeID.Identifier; __AS__Local4_00000=(plcstring*)"mySint"; for(__AS__Local0_00000=0; __AS__Local0_00000<6l && __AS__Local4_00000[__AS__Local0_00000]!=0; __AS__Local0_00000++) __AS__Local3_00000[__AS__Local0_00000] = __AS__Local4_00000[__AS__Local0_00000]; __AS__Local3_00000[__AS__Local0_00000] = 0;
__AS__Local3_00000=(plcstring*)EasyUaReads[2].Variable; __AS__Local4_00000=(plcstring*)"::uaCltTest:mySint"; for(__AS__Local0_00000=0; __AS__Local0_00000<18l && __AS__Local4_00000[__AS__Local0_00000]!=0; __AS__Local0_00000++) __AS__Local3_00000[__AS__Local0_00000] = __AS__Local4_00000[__AS__Local0_00000]; __AS__Local3_00000[__AS__Local0_00000] = 0;

*((char volatile*)&(myUint)) = *((char*)&(myUint));
__AS__Local3_00000=(plcstring*)EasyUaReads[3].NodeID.Identifier; __AS__Local4_00000=(plcstring*)"myUint"; for(__AS__Local0_00000=0; __AS__Local0_00000<6l && __AS__Local4_00000[__AS__Local0_00000]!=0; __AS__Local0_00000++) __AS__Local3_00000[__AS__Local0_00000] = __AS__Local4_00000[__AS__Local0_00000]; __AS__Local3_00000[__AS__Local0_00000] = 0;
__AS__Local3_00000=(plcstring*)EasyUaReads[3].Variable; __AS__Local4_00000=(plcstring*)"::uaCltTest:myUint"; for(__AS__Local0_00000=0; __AS__Local0_00000<18l && __AS__Local4_00000[__AS__Local0_00000]!=0; __AS__Local0_00000++) __AS__Local3_00000[__AS__Local0_00000] = __AS__Local4_00000[__AS__Local0_00000]; __AS__Local3_00000[__AS__Local0_00000] = 0;

*((char volatile*)&(myInt)) = *((char*)&(myInt));
__AS__Local3_00000=(plcstring*)EasyUaReads[4].NodeID.Identifier; __AS__Local4_00000=(plcstring*)"myInt"; for(__AS__Local0_00000=0; __AS__Local0_00000<5l && __AS__Local4_00000[__AS__Local0_00000]!=0; __AS__Local0_00000++) __AS__Local3_00000[__AS__Local0_00000] = __AS__Local4_00000[__AS__Local0_00000]; __AS__Local3_00000[__AS__Local0_00000] = 0;
__AS__Local3_00000=(plcstring*)EasyUaReads[4].Variable; __AS__Local4_00000=(plcstring*)"::uaCltTest:myInt"; for(__AS__Local0_00000=0; __AS__Local0_00000<17l && __AS__Local4_00000[__AS__Local0_00000]!=0; __AS__Local0_00000++) __AS__Local3_00000[__AS__Local0_00000] = __AS__Local4_00000[__AS__Local0_00000]; __AS__Local3_00000[__AS__Local0_00000] = 0;

*((char volatile*)&(myDint)) = *((char*)&(myDint));
__AS__Local3_00000=(plcstring*)EasyUaReads[5].NodeID.Identifier; __AS__Local4_00000=(plcstring*)"myDint"; for(__AS__Local0_00000=0; __AS__Local0_00000<6l && __AS__Local4_00000[__AS__Local0_00000]!=0; __AS__Local0_00000++) __AS__Local3_00000[__AS__Local0_00000] = __AS__Local4_00000[__AS__Local0_00000]; __AS__Local3_00000[__AS__Local0_00000] = 0;
__AS__Local3_00000=(plcstring*)EasyUaReads[5].Variable; __AS__Local4_00000=(plcstring*)"::uaCltTest:myDint"; for(__AS__Local0_00000=0; __AS__Local0_00000<18l && __AS__Local4_00000[__AS__Local0_00000]!=0; __AS__Local0_00000++) __AS__Local3_00000[__AS__Local0_00000] = __AS__Local4_00000[__AS__Local0_00000]; __AS__Local3_00000[__AS__Local0_00000] = 0;

*((char volatile*)&(myUdint)) = *((char*)&(myUdint));
__AS__Local3_00000=(plcstring*)EasyUaReads[6].NodeID.Identifier; __AS__Local4_00000=(plcstring*)"myUdint"; for(__AS__Local0_00000=0; __AS__Local0_00000<7l && __AS__Local4_00000[__AS__Local0_00000]!=0; __AS__Local0_00000++) __AS__Local3_00000[__AS__Local0_00000] = __AS__Local4_00000[__AS__Local0_00000]; __AS__Local3_00000[__AS__Local0_00000] = 0;
__AS__Local3_00000=(plcstring*)EasyUaReads[6].Variable; __AS__Local4_00000=(plcstring*)"::uaCltTest:myUdint"; for(__AS__Local0_00000=0; __AS__Local0_00000<19l && __AS__Local4_00000[__AS__Local0_00000]!=0; __AS__Local0_00000++) __AS__Local3_00000[__AS__Local0_00000] = __AS__Local4_00000[__AS__Local0_00000]; __AS__Local3_00000[__AS__Local0_00000] = 0;

*((char volatile*)&(myReal)) = *((char*)&(myReal));
__AS__Local3_00000=(plcstring*)EasyUaReads[7].NodeID.Identifier; __AS__Local4_00000=(plcstring*)"myReal"; for(__AS__Local0_00000=0; __AS__Local0_00000<6l && __AS__Local4_00000[__AS__Local0_00000]!=0; __AS__Local0_00000++) __AS__Local3_00000[__AS__Local0_00000] = __AS__Local4_00000[__AS__Local0_00000]; __AS__Local3_00000[__AS__Local0_00000] = 0;
__AS__Local3_00000=(plcstring*)EasyUaReads[7].Variable; __AS__Local4_00000=(plcstring*)"::uaCltTest:myReal"; for(__AS__Local0_00000=0; __AS__Local0_00000<18l && __AS__Local4_00000[__AS__Local0_00000]!=0; __AS__Local0_00000++) __AS__Local3_00000[__AS__Local0_00000] = __AS__Local4_00000[__AS__Local0_00000]; __AS__Local3_00000[__AS__Local0_00000] = 0;

*((char volatile*)&(myString)) = *((char*)&(myString));
__AS__Local3_00000=(plcstring*)EasyUaReads[8].NodeID.Identifier; __AS__Local4_00000=(plcstring*)"myString"; for(__AS__Local0_00000=0; __AS__Local0_00000<8l && __AS__Local4_00000[__AS__Local0_00000]!=0; __AS__Local0_00000++) __AS__Local3_00000[__AS__Local0_00000] = __AS__Local4_00000[__AS__Local0_00000]; __AS__Local3_00000[__AS__Local0_00000] = 0;
__AS__Local3_00000=(plcstring*)EasyUaReads[8].Variable; __AS__Local4_00000=(plcstring*)"::uaCltTest:myString"; for(__AS__Local0_00000=0; __AS__Local0_00000<20l && __AS__Local4_00000[__AS__Local0_00000]!=0; __AS__Local0_00000++) __AS__Local3_00000[__AS__Local0_00000] = __AS__Local4_00000[__AS__Local0_00000]; __AS__Local3_00000[__AS__Local0_00000] = 0;

(TON_0.PT=(2000));

}}
#line 50 "C:/projects/brdk_OPCUA_Python/Client/AsClientTest/Logical/uaCltTest/Main.nodebug"
#line 52 "C:/projects/brdk_OPCUA_Python/Client/AsClientTest/Logical/uaCltTest/Main.st"
void _CYCLIC __BUR__ENTRY_CYCLIC_FUNCT__(void){{

for((i=0);i<=MAX_OPCUA_CLIENTS;i+=1){
EasyUaRead(&EasyUaReads[i]);
}imp1_endfor1_0:;

}}
#line 58 "C:/projects/brdk_OPCUA_Python/Client/AsClientTest/Logical/uaCltTest/Main.nodebug"
#line 60 "C:/projects/brdk_OPCUA_Python/Client/AsClientTest/Logical/uaCltTest/Main.st"
void _EXIT __BUR__ENTRY_EXIT_FUNCT__(void){{
for((i=0);i<=MAX_OPCUA_CLIENTS;i+=1){
(EasyUaReads[i].Execute=0);
EasyUaRead(&EasyUaReads[i]);
}imp16385_endfor2_0:;
}}
#line 65 "C:/projects/brdk_OPCUA_Python/Client/AsClientTest/Logical/uaCltTest/Main.nodebug"

void __AS__ImplInitMain_st(void){__BUR__ENTRY_INIT_FUNCT__();}

__asm__(".section \".plc\"");
__asm__(".ascii \"iecfile \\\"Logical/Global.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/astime/astime.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/EasyUaClnt/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsOpcUac/AsOpcUac.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsBrStr/AsBrStr.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/astime/astime.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/EasyUaClnt/EasyUaClnt.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsOpcUac/AsOpcUac.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsBrStr/AsBrStr.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Global.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/astime/astime.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/EasyUaClnt/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsOpcUac/AsOpcUac.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsBrStr/AsBrStr.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/uaCltTest/Types.typ\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/uaCltTest/Variables.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"C:/projects/brdk_OPCUA_Python/Client/AsClientTest/Temp/Objects/Config1/X20CP0484/uaCltTest/Main.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/projects/brdk_OPCUA_Python/Client/AsClientTest/Temp/Objects/Config1/X20CP0484/uaCltTest/Main.st.c\\\" \\\"C:/projects/brdk_OPCUA_Python/Client/AsClientTest/Logical/uaCltTest/Main.st\\\"\\n\"");
__asm__(".previous");

__asm__(".section \".plciec\"");
__asm__(".ascii \"plcdata_const 'MAX_OPCUA_CLIENTS'\\n\"");
__asm__(".ascii \"plcdata_const 'myBool'\\n\"");
__asm__(".ascii \"plcdata_const 'myUsint'\\n\"");
__asm__(".ascii \"plcdata_const 'mySint'\\n\"");
__asm__(".ascii \"plcdata_const 'myUint'\\n\"");
__asm__(".ascii \"plcdata_const 'myInt'\\n\"");
__asm__(".ascii \"plcdata_const 'myDint'\\n\"");
__asm__(".ascii \"plcdata_const 'myUdint'\\n\"");
__asm__(".ascii \"plcdata_const 'myReal'\\n\"");
__asm__(".ascii \"plcdata_const 'myString'\\n\"");
__asm__(".ascii \"plcdata_const 'MAX_ELEMENTS_INDEXRANGE'\\n\"");
__asm__(".ascii \"plcdata_const 'MAX_INDEX_INDEXRANGE'\\n\"");
__asm__(".previous");
