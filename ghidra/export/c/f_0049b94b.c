// FUNCTION: PORT1111 0x0049b94b
// name: FUN_0049b94b
// sig: undefined4 FUN_0049b94b(int param_1)


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

undefined4 __cdecl FUN_0049b94b(int param_1)

{
  void *_Memory;
  int *piVar1;
  int iVar2;
  
  piVar1 = &DAT_004dddd0 + param_1 * 2;
  if (*piVar1 == 0) {
    _Memory = _malloc(0x18);
    if (_Memory == (void *)0x0) {
      piVar1 = FUN_0049fc4d();
      *piVar1 = 0xc;
      return 0;
    }
    __lock(10);
    if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    iVar2 = ___crtInitCritSecAndSpinCount(_Memory,4000);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    *piVar1 = (int)_Memory;
    FUN_0049b9e2();
  }
  return 1;
}

