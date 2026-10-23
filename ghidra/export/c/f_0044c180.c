// FUNCTION: PORT1111 0x0044c180
// name: FUN_0044c180
// sig: undefined FUN_0044c180(void * param_1)


void FUN_0044c180(void *param_1)

{
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    FUN_0044c180(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}

