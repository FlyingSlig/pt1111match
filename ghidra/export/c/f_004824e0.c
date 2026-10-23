// FUNCTION: PORT1111 0x004824e0
// name: FUN_004824e0
// sig: undefined FUN_004824e0(void * param_1)


void FUN_004824e0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x11) == '\0') {
    FUN_004824e0(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}

