/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1704183978_3_
#define _BUR_1704183978_3_

#include <bur/plctypes.h>

/* Datatypes and datatypes of function blocks */
typedef struct Sweep_input_typ
{	double StartFrequency;
	double StopFrequency;
	signed long SweepPoints;
	double SourceLevel;
} Sweep_input_typ;

typedef struct Sweep_output_typ
{	double QFactor;
	double ResonanceFrequency;
	double Bandwidth;
} Sweep_output_typ;

typedef struct Sweep_typ
{	struct Sweep_input_typ input;
	struct Sweep_output_typ output;
} Sweep_typ;






__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/uaCltTest/Types.typ\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1704183978_3_ */

