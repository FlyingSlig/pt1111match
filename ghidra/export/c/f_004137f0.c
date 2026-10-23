// FUNCTION: PORT1111 0x004137f0
// name: FUN_004137f0
// sig: undefined FUN_004137f0(void * param_1)


void FUN_004137f0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    FUN_004137f0(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}

