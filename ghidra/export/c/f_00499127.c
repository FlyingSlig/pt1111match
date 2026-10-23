// FUNCTION: PORT1111 0x00499127
// name: FUN_00499127
// sig: undefined FUN_00499127(DWORD * param_1)


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */

void __cdecl FUN_00499127(DWORD *param_1)

{
  int iVar1;
  DWORD DVar2;
  _EXCEPTION_POINTERS *local_18;
  
  iVar1 = (*DAT_004e2d44)(DAT_004dddc4);
  if (iVar1 == 0) {
    iVar1 = (*DAT_004e2d48)(DAT_004dddc4,param_1);
    if (iVar1 == 0) {
      __amsg_exit(0x10);
    }
    DVar2 = GetCurrentThreadId();
    *param_1 = DVar2;
    if (PTR_FUN_004ddb1c != (undefined *)0x0) {
      (*(code *)PTR_FUN_004ddb1c)();
    }
    DVar2 = (*(code *)param_1[0x13])(param_1[0x14]);
    FUN_004990f6(DVar2);
    __XcptFilter(local_18->ExceptionRecord->ExceptionCode,local_18);
    return;
  }
  *(DWORD *)(iVar1 + 0x4c) = param_1[0x13];
  *(DWORD *)(iVar1 + 0x50) = param_1[0x14];
                    /* WARNING: Subroutine does not return */
  _free(param_1);
}

