/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1704183978_4_
#define _BUR_1704183978_4_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
 #define MAX_OPCUA_CLIENTS 9U
#else
 _LOCAL_CONST unsigned char MAX_OPCUA_CLIENTS;
#endif


/* Variables */
_BUR_LOCAL plcstring myString[81];
_BUR_LOCAL float myReal;
_BUR_LOCAL unsigned long myUdint;
_BUR_LOCAL signed long myDint;
_BUR_LOCAL signed short myInt;
_BUR_LOCAL unsigned short myUint;
_BUR_LOCAL signed char mySint;
_BUR_LOCAL unsigned char myUsint;
_BUR_LOCAL plcbit myBool;
_BUR_LOCAL unsigned char i;
_BUR_LOCAL plcbit Test;
_BUR_LOCAL struct TON TON_0;
_BUR_LOCAL struct EasyUaRead EasyUaReads[10];





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/uaCltTest/Variables.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/EasyUaClnt/EasyUaClnt.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1704183978_4_ */

