// FUNCTION: PORT1111 0x004a129d
// name: ___crtInitCritSecAndSpinCount
// sig: undefined ___crtInitCritSecAndSpinCount(undefined4 param_1, undefined4 param_2)


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___crtInitCritSecAndSpinCount
   
   Library: Visual Studio 2003 Release */

void __cdecl ___crtInitCritSecAndSpinCount(undefined4 param_1,undefined4 param_2)

{
  HMODULE hModule;
  
  if (DAT_004e2fe0 == (code *)0x0) {
    if (DAT_004e2ce8 != 1) {
      hModule = GetModuleHandleA("kernel32.dll");
      if (hModule != (HMODULE)0x0) {
        DAT_004e2fe0 = GetProcAddress(hModule,"InitializeCriticalSectionAndSpinCount");
        if (DAT_004e2fe0 != (FARPROC)0x0) goto LAB_004a12e9;
      }
    }
    DAT_004e2fe0 = ___crtInitCritSecNoSpinCount_8;
  }
LAB_004a12e9:
  (*DAT_004e2fe0)(param_1,param_2);
  return;
}

