#include "MOTION_DEFINE.h"

#pragma once

//------------------------------------------------------------------
//                 Device Type Defines.
//------------------------------------------------------------------
// Driver Type A group : Ezi-SERVO Plus-R Inc. Family
#ifndef DEVTYPE_EZI_SERVO_PLUS_R_ST
#define	DEVTYPE_EZI_SERVO_PLUS_R_ST			1
#define DEVNAME_EZI_SERVO_PLUS_R_ST			"Ezi-SERVO Plus-R Inc."
#endif


//------------------------------------------------------------------
//                 Axis Status Flag Defines.
//------------------------------------------------------------------

typedef union
{
	uint32_t	dwValue;
	struct
	{
		unsigned	FFLAG_ERRORALL			: 1; // = 0x00000001;
		unsigned	FFLAG_HWPOSILMT			: 1; // = 0x00000002;
		unsigned	FFLAG_HWNEGALMT			: 1; // = 0x00000004;
		unsigned	FFLAG_SWPOGILMT			: 1; // = 0x00000008;
		unsigned	FFLAG_SWNEGALMT			: 1; // = 0x00000010;
		unsigned	FFLAG_RESERVED0			: 1; // = 0x00000020;
		unsigned	FFLAG_ERROVERCURRENT	: 1; // = 0x00000040;
		unsigned	FFLAG_ERROVERSPEED		: 1; // = 0x00000080;
		unsigned	FFLAG_ERRPOSTRACKING	: 1; // = 0x00000100;
		unsigned	FFLAG_ERROVERLOAD		: 1; // = 0x00000200;
		unsigned	FFLAG_ERROVERHEAT		: 1; // = 0x00000400;
		unsigned	FFLAG_ERRBACKEMF		: 1; // = 0x00000800;
		unsigned	FFLAG_ERRMOTORCONNECT	: 1; // = 0x00001000;
		unsigned	FFLAG_ERRENCODERCONNECT	: 1; // = 0x00002000;
		unsigned	FFLAG_ERRMOTORPOWER		: 1; // = 0x00004000;
		unsigned	FFLAG_ERRINPOSITION		: 1; // = 0x00008000;
		unsigned	FFLAG_EMGSTOP			: 1; // = 0x00010000;
		unsigned	FFLAG_SLOWSTOP			: 1; // = 0x00020000;
		unsigned	FFLAG_ORIGINRETURNING	: 1; // = 0x00040000;
		unsigned	FFLAG_INPOSITION		: 1; // = 0x00080000;
		unsigned	FFLAG_SERVOON			: 1; // = 0x00100000;
		unsigned	FFLAG_ALARMRESET		: 1; // = 0x00200000;
		unsigned	FFLAG_PTSTOPPED			: 1; // = 0x00400000;
		unsigned	FFLAG_ORIGINSENSOR		: 1; // = 0x00800000;
		unsigned	FFLAG_ZPULSE			: 1; // = 0x01000000;
		unsigned	FFLAG_ORIGINRETOK		: 1; // = 0x02000000;
		unsigned	FFLAG_MOTIONDIR			: 1; // = 0x04000000;
		unsigned	FFLAG_MOTIONING			: 1; // = 0x08000000;
		unsigned	FFLAG_MOTIONPAUSE		: 1; // = 0x10000000;
		unsigned	FFLAG_MOTIONACCEL		: 1; // = 0x20000000;
		unsigned	FFLAG_MOTIONDECEL		: 1; // = 0x40000000;
		unsigned	FFLAG_MOTIONCONST		: 1; // = 0x80000000;
	};
} EZISERVO_AXISSTATUS;

//------------------------------------------------------------------
//                 Input/Output Defines.
//------------------------------------------------------------------

// Input Bit-mask list.
#define	SERVO_IN_BITMASK_LIMITP				(0x00000001)
#define	SERVO_IN_BITMASK_LIMITN				(0x00000002)
#define	SERVO_IN_BITMASK_ORIGIN				(0x00000004)
#define	SERVO_IN_BITMASK_CLEARPOSITION		(0x00000008)
#define	SERVO_IN_BITMASK_PTA0				(0x00000010)
#define	SERVO_IN_BITMASK_PTA1				(0x00000020)
#define	SERVO_IN_BITMASK_PTA2				(0x00000040)
#define	SERVO_IN_BITMASK_PTA3				(0x00000080)
#define	SERVO_IN_BITMASK_PTA4				(0x00000100)
#define	SERVO_IN_BITMASK_PTA5				(0x00000200)
#define	SERVO_IN_BITMASK_PTA6				(0x00000400)
#define	SERVO_IN_BITMASK_PTA7				(0x00000800)
#define	SERVO_IN_BITMASK_PTSTART			(0x00001000)
#define	SERVO_IN_BITMASK_STOP				(0x00002000)
#define	SERVO_IN_BITMASK_PJOG				(0x00004000)
#define	SERVO_IN_BITMASK_NJOG				(0x00008000)
#define	SERVO_IN_BITMASK_ALARMRESET			(0x00010000)
#define	SERVO_IN_BITMASK_SERVOON			(0x00020000)
#define	SERVO_IN_BITMASK_PAUSE				(0x00040000)
#define	SERVO_IN_BITMASK_ORIGINSEARCH		(0x00080000)
#define	SERVO_IN_BITMASK_TEACHING			(0x00100000)
#define	SERVO_IN_BITMASK_ESTOP				(0x00200000)
#define	SERVO_IN_BITMASK_JPTIN0				(0x00400000)
#define	SERVO_IN_BITMASK_JPTIN1				(0x00800000)
#define	SERVO_IN_BITMASK_JPTIN2				(0x01000000)
#define	SERVO_IN_BITMASK_JPTSTART			(0x02000000)
#define	SERVO_IN_BITMASK_USERIN0			(0x04000000)
#define	SERVO_IN_BITMASK_USERIN1			(0x08000000)
#define	SERVO_IN_BITMASK_USERIN2			(0x10000000)
#define	SERVO_IN_BITMASK_USERIN3			(0x20000000)
#define	SERVO_IN_BITMASK_USERIN4			(0x40000000)
#define	SERVO_IN_BITMASK_USERIN5			(0x80000000)
#define	SERVO_IN_BITMASK_USERIN6			(0x100000000)
#define	SERVO_IN_BITMASK_USERIN7			(0x200000000)
#define	SERVO_IN_BITMASK_USERIN8			(0x400000000)

// Output Bit-mask list.
#define	SERVO_OUT_BITMASK_COMPAREOUT		(0x00000001)
#define	SERVO_OUT_BITMASK_INPOSITION		(0x00000002)
#define	SERVO_OUT_BITMASK_ALARM				(0x00000004)
#define	SERVO_OUT_BITMASK_MOVING			(0x00000008)
#define	SERVO_OUT_BITMASK_ACCDEC			(0x00000010)
#define	SERVO_OUT_BITMASK_PTACK				(0x00000020)
#define	SERVO_OUT_BITMASK_PTEND				(0x00000040)
#define	SERVO_OUT_BITMASK_ALARMBLINK		(0x00000080)
#define	SERVO_OUT_BITMASK_ORGSEARCHOK		(0x00000100)
#define	SERVO_OUT_BITMASK_SERVOREADY		(0x00000200)
//#define	SERVO_OUT_BITMASK_RESERVED		(0x00000400)
#define	SERVO_OUT_BITMASK_BRAKE				(0x00000800)
#define	SERVO_OUT_BITMASK_PTOUT0			(0x00001000)
#define	SERVO_OUT_BITMASK_PTOUT1			(0x00002000)
#define	SERVO_OUT_BITMASK_PTOUT2			(0x00004000)
#define	SERVO_OUT_BITMASK_USEROUT0			(0x00008000)
#define	SERVO_OUT_BITMASK_USEROUT1			(0x00010000)
#define	SERVO_OUT_BITMASK_USEROUT2			(0x00020000)
#define	SERVO_OUT_BITMASK_USEROUT3			(0x00040000)
#define	SERVO_OUT_BITMASK_USEROUT4			(0x00080000)
#define	SERVO_OUT_BITMASK_USEROUT5			(0x00100000)
#define	SERVO_OUT_BITMASK_USEROUT6			(0x00200000)
#define	SERVO_OUT_BITMASK_USEROUT7			(0x00400000)
#define	SERVO_OUT_BITMASK_USEROUT8			(0x00800000)

#pragma pack(1)

typedef union
{
	uint64_t	uValue;
	struct
	{
		unsigned BIT_LIMITP		: 1;
		unsigned BIT_LIMITN		: 1;
		unsigned BIT_ORIGIN		: 1;
		
		unsigned BIT_CLEARPOSITION	: 1;
		unsigned BIT_PTA0			: 1;
		unsigned BIT_PTA1			: 1;
		unsigned BIT_PTA2			: 1;
		unsigned BIT_PTA3			: 1;
		unsigned BIT_PTA4			: 1;
		unsigned BIT_PTA5			: 1;
		unsigned BIT_PTA6			: 1;
		unsigned BIT_PTA7			: 1;
		unsigned BIT_PTSTART		: 1;
		unsigned BIT_STOP			: 1;
		unsigned BIT_PJOG			: 1;
		unsigned BIT_NJOG			: 1;
		unsigned BIT_ALARMRESET		: 1;
		unsigned BIT_SERVOON		: 1;
		unsigned BIT_PAUSE			: 1;
		unsigned BIT_ORIGINSEARCH	: 1;
		unsigned BIT_TEACHING		: 1;
		unsigned BIT_ESTOP			: 1;
		unsigned BIT_JPTIN0			: 1;
		unsigned BIT_JPTIN1			: 1;
		unsigned BIT_JPTIN2			: 1;
		unsigned BIT_JPTSTART		: 1;
		unsigned BIT_USERIN0		: 1;
		unsigned BIT_USERIN1		: 1;
		unsigned BIT_USERIN2		: 1;
		unsigned BIT_USERIN3		: 1;
		unsigned BIT_USERIN4		: 1;
		unsigned BIT_USERIN5		: 1;
		unsigned BIT_USERIN6		: 1;
		unsigned BIT_USERIN7		: 1;
		unsigned BIT_USERIN8		: 1;
	};
} EZISERVO_INPUT;

typedef union
{
	uint32_t dwValue;
	struct
	{
		unsigned BIT_COMPAREOUT		: 1;
		unsigned BIT_INPOSITION		: 1;
		unsigned BIT_ALARM			: 1;
		unsigned BIT_MOVING			: 1;
		unsigned BIT_ACCDEC			: 1;
		unsigned BIT_PTACK			: 1;
		unsigned BIT_PTEND			: 1;
		unsigned BIT_ALARMBLINK		: 1;
		unsigned BIT_ORGSEARCHOK	: 1;
		unsigned BIT_SERVOREADY		: 1;
		unsigned BIT_RESERVED0		: 1;
		unsigned BIT_BRAKE			: 1;
		unsigned BIT_PTOUT0			: 1;
		unsigned BIT_PTOUT1			: 1;
		unsigned BIT_PTOUT2			: 1;
		unsigned BIT_USEROUT0		: 1;
		unsigned BIT_USEROUT1		: 1;
		unsigned BIT_USEROUT2		: 1;
		unsigned BIT_USEROUT3		: 1;
		unsigned BIT_USEROUT4		: 1;
		unsigned BIT_USEROUT5		: 1;
		unsigned BIT_USEROUT6		: 1;
		unsigned BIT_USEROUT7		: 1;
		unsigned BIT_USEROUT8		: 1;
	};
} EZISERVO_OUTPUT;

#pragma pack()

//------------------------------------------------------------------
//                 Input/Output Assigning Defines.
//------------------------------------------------------------------
typedef enum
{
	SERVO_IN_PREASSIGN_LIMITP = 1,
	SERVO_IN_PREASSIGN_LIMITN,
	SERVO_IN_PREASSIGN_ORIGIN,

	SERVO_IN_LOGIC_CLEARPOSITION,
	SERVO_IN_LOGIC_PTA0,
	SERVO_IN_LOGIC_PTA1,
	SERVO_IN_LOGIC_PTA2,
	SERVO_IN_LOGIC_PTA3,
	SERVO_IN_LOGIC_PTA4,
	SERVO_IN_LOGIC_PTA5,
	SERVO_IN_LOGIC_PTA6,
	SERVO_IN_LOGIC_PTA7,
	SERVO_IN_LOGIC_PTSTART,
	SERVO_IN_LOGIC_STOP,
	SERVO_IN_LOGIC_PJOG,
	SERVO_IN_LOGIC_NJOG,
	SERVO_IN_LOGIC_ALARMRESET,
	SERVO_IN_LOGIC_SERVOON,
	SERVO_IN_LOGIC_PAUSE,
	SERVO_IN_LOGIC_ORIGINSEARCH,
	SERVO_IN_LOGIC_TEACHING,
	SERVO_IN_LOGIC_ESTOP,
	SERVO_IN_LOGIC_JPTIN0,
	SERVO_IN_LOGIC_JPTIN1,
	SERVO_IN_LOGIC_JPTIN2,
	SERVO_IN_LOGIC_JPTSTART,
	SERVO_IN_LOGIC_USERIN0,
	SERVO_IN_LOGIC_USERIN1,
	SERVO_IN_LOGIC_USERIN2,
	SERVO_IN_LOGIC_USERIN3,
	SERVO_IN_LOGIC_USERIN4,
	SERVO_IN_LOGIC_USERIN5,
	SERVO_IN_LOGIC_USERIN6,
	SERVO_IN_LOGIC_USERIN7,
	SERVO_IN_LOGIC_USERIN8,

	MAX_SERVO_IN_LOGIC
} EZISERVO_INLOGIC;

typedef enum
{
	SERVO_OUT_PREASSIGN_COMPAREOUT = 1,

	SERVO_OUT_LOGIC_INPOSITION,
	SERVO_OUT_LOGIC_ALARM,
	SERVO_OUT_LOGIC_MOVING,
	SERVO_OUT_LOGIC_ACCDEC,
	SERVO_OUT_LOGIC_PTACK,
	SERVO_OUT_LOGIC_PTEND,
	SERVO_OUT_LOGIC_ALARMBLINK,
	SERVO_OUT_LOGIC_ORGSEARCHOK,
	SERVO_OUT_LOGIC_SERVOREADY,
	SERVO_OUT_LOGIC_RESERVED0,
	SERVO_OUT_LOGIC_BRAKE,
	SERVO_OUT_LOGIC_PTOUT0,
	SERVO_OUT_LOGIC_PTOUT1,
	SERVO_OUT_LOGIC_PTOUT2,
	SERVO_OUT_LOGIC_USEROUT0,
	SERVO_OUT_LOGIC_USEROUT1,
	SERVO_OUT_LOGIC_USEROUT2,
	SERVO_OUT_LOGIC_USEROUT3,
	SERVO_OUT_LOGIC_USEROUT4,
	SERVO_OUT_LOGIC_USEROUT5,
	SERVO_OUT_LOGIC_USEROUT6,
	SERVO_OUT_LOGIC_USEROUT7,
	SERVO_OUT_LOGIC_USEROUT8,

	MAX_SERVO_OUT_LOGIC
} EZISERVO_OUTLOGIC;

#define	IN_LOGIC_CNT		(MAX_SERVO_IN_LOGIC - 1)
#define	MAX_PREASSIGNED_IN	(SERVO_IN_PREASSIGN_ORIGIN)

#define	OUT_LOGIC_CNT		(MAX_SERVO_OUT_LOGIC - 1)
#define	MAX_PREASSIGNED_OUT	(SERVO_OUT_PREASSIGN_COMPAREOUT)
//
//static const char* LOGICLIST_EZISERVO_INPUT[IN_LOGIC_CNT] =
//{
//	"Limit +",
//	"Limit -",
//	"Origin",
//	"Clear Pos",
//	"PT A0",
//	"PT A1",
//	"PT A2",
//	"PT A3",
//	"PT A4",
//	"PT A5",
//	"PT A6",
//	"PT A7",
//	"PT Start",
//	"Stop",
//	"Jog +",
//	"Jog -",
//	"Alarm Reset",
//	"Servo On",
//	"Pause",
//	"Origin Search",
//	"Teaching",
//	"E-Stop",
//	"JPT IN 0",
//	"JPT IN 1",
//	"JPT IN 2",
//	"JPT Start",
//	"User IN 0",
//	"User IN 1",
//	"User IN 2",
//	"User IN 3",
//	"User IN 4",
//	"User IN 5",
//	"User IN 6",
//	"User IN 7",
//	"User IN 8"
//};
//
//static const char* LOGICLIST_EZISERVO_OUTPUT[OUT_LOGIC_CNT] =
//{
//	"Comp. Out",
//	"Inposition",
//	"Alarm",
//	"Moving",
//	"Acc/Dec",
//	"PT ACK",
//	"PT End",
//	"AlarmBlink",
//	"Org Search Ok",
//	"Servo Ready",
//	"Reserved",
//	"Brake",
//	"PT OUT 0",
//	"PT OUT 1",
//	"PT OUT 2",
//	"User OUT 0",
//	"User OUT 1",
//	"User OUT 2",
//	"User OUT 3",
//	"User OUT 4",
//	"User OUT 5",
//	"User OUT 6",
//	"User OUT 7",
//	"User OUT 8"
//};

//------------------------------------------------------------------
//                 Parameters Defines.
//------------------------------------------------------------------

typedef enum
{
	SERVO_PULSEPERREVOLUTION = 0,
	SERVO_AXISMAXSPEED,
	SERVO_AXISSTARTSPEED,
	SERVO_AXISACCTIME,
	SERVO_AXISDECTIME,
	
	SERVO_SPEEDOVERRIDE,
	SERVO_JOGHIGHSPEED,
	SERVO_JOGLOWSPEED,
	SERVO_JOGACCDECTIME,
	
	SERVO_SERVOALARMLOGIC,
	SERVO_SERVOONLOGIC,
	SERVO_SERVORESETLOGIC,
	
	SERVO_SWLMTPLUSVALUE,
	SERVO_SWLMTMINUSVALUE,
	SERVO_SOFTLMTSTOPMETHOD,
	SERVO_HARDLMTSTOPMETHOD,
	SERVO_LIMITSENSORLOGIC,

	SERVO_ORGSPEED,
	SERVO_ORGSEARCHSPEED,
	SERVO_ORGACCDECTIME,
	SERVO_ORGMETHOD,
	SERVO_ORGDIR,
	SERVO_ORGOFFSET,
	SERVO_ORGPOSITIONSET,
	SERVO_ORGSENSORLOGIC,

	SERVO_POSITIONLOOPGAIN,
	SERVO_INPOSITIONVALUE,
	SERVO_POSTRACKINGLIMIT,
	SERVO_MOTIONDIR,

	SERVO_LIMITSENSORDIR,
	SERVO_ORGTORQUERATIO,

	SERVO_MOTORLEAD,
	SERVO_GEARRATIO,

	SERVO_POSERROVERFLOWLIMIT,

	MAX_SERVO_PARAM

} FM_EZISERVO_PARAM;
