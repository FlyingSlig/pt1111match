// FUNCTION: PORT1111 0x00435ca0
// name: FUN_00435ca0
// sig: undefined FUN_00435ca0(void * param_1)


void __cdecl FUN_00435ca0(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  if (param_1 == DAT_004e21dc) {
    DAT_004e21dc = (void *)0x0;
  }
  if (*(int *)((int)param_1 + 0x14) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 4));
  }
                    /* WARNING: Subroutine does not return */
  _free(param_1);
}

