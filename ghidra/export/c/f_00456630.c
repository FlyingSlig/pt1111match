// FUNCTION: PORT1111 0x00456630
// name: FUN_00456630
// sig: undefined FUN_00456630(void * param_1)


void FUN_00456630(void *param_1)

{
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    FUN_00456630(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}

