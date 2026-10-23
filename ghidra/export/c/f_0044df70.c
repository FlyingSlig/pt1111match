// FUNCTION: PORT1111 0x0044df70
// name: FUN_0044df70
// sig: undefined FUN_0044df70(void * param_1)


void FUN_0044df70(void *param_1)

{
  if (*(char *)((int)param_1 + 0x2d) == '\0') {
    FUN_0044df70(*(void **)((int)param_1 + 8));
    FUN_00436d80((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}

