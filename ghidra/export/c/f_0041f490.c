// FUNCTION: PORT1111 0x0041f490
// name: FUN_0041f490
// sig: undefined FUN_0041f490(void * param_1)


void FUN_0041f490(void *param_1)

{
  if (*(char *)((int)param_1 + 0x11) == '\0') {
    FUN_0041f490(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}

