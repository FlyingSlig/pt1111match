// FUNCTION: PORT1111 0x0049b413
// name: FUN_0049b413
// sig: undefined FUN_0049b413(void * param_1)


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

void FUN_0049b413(void *param_1)

{
  int *piVar1;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  if (*(void **)((int)param_1 + 0x24) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x24));
  }
  if (*(void **)((int)param_1 + 0x2c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x2c));
  }
  if (*(void **)((int)param_1 + 0x34) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x34));
  }
  if (*(void **)((int)param_1 + 0x3c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x3c));
  }
  if (*(void **)((int)param_1 + 0x44) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x44));
  }
  if (*(void **)((int)param_1 + 0x48) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x48));
  }
  if (*(undefined **)((int)param_1 + 0x54) != &DAT_004de340) {
                    /* WARNING: Subroutine does not return */
    _free(*(undefined **)((int)param_1 + 0x54));
  }
  __lock(0xd);
  piVar1 = *(int **)((int)param_1 + 0x60);
  if (((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) && (piVar1 != DAT_004e31f4)
     ) {
                    /* WARNING: Subroutine does not return */
    _free(piVar1);
  }
  FUN_0049b545();
  __lock(0xc);
  piVar1 = *(int **)((int)param_1 + 100);
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + -1;
    if (piVar1[0xb] != 0) {
      *(int *)piVar1[0xb] = *(int *)piVar1[0xb] + -1;
    }
    if (piVar1[0xd] != 0) {
      *(int *)piVar1[0xd] = *(int *)piVar1[0xd] + -1;
    }
    if (piVar1[0xc] != 0) {
      *(int *)piVar1[0xc] = *(int *)piVar1[0xc] + -1;
    }
    if (piVar1[0x10] != 0) {
      *(int *)piVar1[0x10] = *(int *)piVar1[0x10] + -1;
    }
    *(int *)(piVar1[0x13] + 0xb4) = *(int *)(piVar1[0x13] + 0xb4) + -1;
    if (((piVar1 != (int *)PTR_DAT_004ddf54) && (piVar1 != &DAT_004ddf00)) && (*piVar1 == 0)) {
      FUN_0049cb8a(piVar1);
    }
  }
  FUN_0049b551();
                    /* WARNING: Subroutine does not return */
  _free(param_1);
}

