// FUNCTION: PORT1111 0x00468da0
// name: FUN_00468da0
// sig: undefined FUN_00468da0(void * param_1)


void FUN_00468da0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    FUN_00468da0(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}

