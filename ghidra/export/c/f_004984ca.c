// FUNCTION: PORT1111 0x004984ca
// name: doexit
// sig: undefined doexit(UINT param_1, int param_2, int param_3)


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x0049857e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _doexit
   
   Library: Visual Studio 2003 Release */

void __cdecl doexit(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  UINT uExitCode;
  
  __lock(8);
  if (DAT_004e2d28 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  _DAT_004e2d24 = 1;
  DAT_004e2d20 = (undefined1)param_3;
  if (param_2 == 0) {
    if (DAT_004e458c != (undefined4 *)0x0) {
      while (DAT_004e4588 = DAT_004e4588 + -1, DAT_004e458c <= DAT_004e4588) {
        if ((code *)*DAT_004e4588 != (code *)0x0) {
          (*(code *)*DAT_004e4588)();
        }
      }
    }
    __initterm((undefined4 *)&DAT_004d50bc);
  }
  __initterm((undefined4 *)&DAT_004d50c8);
  FUN_00498579();
  if (param_3 != 0) {
    return;
  }
  DAT_004e2d28 = 1;
  ___crtExitProcess(param_1);
  return;
}

