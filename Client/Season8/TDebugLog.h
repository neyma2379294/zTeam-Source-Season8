//---------------------------------------------------------------------------
#define TDebugLog_H
#ifdef TDebugLog_H
//---------------------------------------------------------------------------

#include <windows.h>
#include <stdio.h>
//---------------------------------------------------------------------------

#define DEBUGLOG
//---------------------------------------------------------------------------

void WINAPI DebugPrint(const PCHAR fmt, ...);
//---------------------------------------------------------------------------

#ifdef DEBUGLOG
#define TDEBUG DebugPrint
#else
#define TDEBUG
#endif
//---------------------------------------------------------------------------

#endif
//---------------------------------------------------------------------------


