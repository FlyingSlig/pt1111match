// FUNCTION: PORT1111 0x00401550
// name: FUN_00401550
// sig: undefined FUN_00401550(void * param_1)


void FUN_00401550(void *param_1)

{
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    FUN_00401550(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}

