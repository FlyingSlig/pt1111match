// FUNCTION: PORT1111 0x0049cb8a
// name: FUN_0049cb8a
// sig: undefined FUN_0049cb8a(void * param_1)


void FUN_0049cb8a(void *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (((*(int *)((int)param_1 + 0x3c) != DAT_004e3070) && (*(int *)((int)param_1 + 0x3c) != 0)) &&
     (**(int **)((int)param_1 + 0x2c) == 0)) {
    piVar1 = *(int **)((int)param_1 + 0x34);
    if (((piVar1 != (int *)0x0) && (*piVar1 == 0)) && (piVar1 != DAT_004e31e8)) {
                    /* WARNING: Subroutine does not return */
      _free(piVar1);
    }
    piVar1 = *(int **)((int)param_1 + 0x30);
    if (((piVar1 != (int *)0x0) && (*piVar1 == 0)) && (piVar1 != DAT_004e31ec)) {
                    /* WARNING: Subroutine does not return */
      _free(piVar1);
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x2c));
  }
  piVar1 = *(int **)((int)param_1 + 0x40);
  if (((piVar1 != DAT_004e31e4) && (piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    _free(piVar1);
  }
  iVar2 = *(int *)((int)param_1 + 0x50);
  if (((iVar2 != DAT_004e306c) && (iVar2 != 0)) && (*(int *)(iVar2 + 0xb4) == 0)) {
    FUN_004a1a2e(iVar2);
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x50));
  }
                    /* WARNING: Subroutine does not return */
  _free(param_1);
}

