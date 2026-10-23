// FUNCTION: PORT1111 0x004759a0
// name: FUN_004759a0
// sig: undefined FUN_004759a0(void * param_1)


void FUN_004759a0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x2d) == '\0') {
    FUN_004759a0(*(void **)((int)param_1 + 8));
    FUN_00436d80((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}

