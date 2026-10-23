// FUNCTION: PORT1111 0x0049708c
// name: FUN_0049708c
// sig: undefined FUN_0049708c(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049708c(void)

{
  undefined **local_14 [3];
  char *local_8;
  
  if ((_DAT_004e2cd4 & 1) == 0) {
    _DAT_004e2cd4 = _DAT_004e2cd4 | 1;
    local_8 = "bad allocation";
    exception::exception((exception *)&DAT_004e2cc8,&local_8);
    _DAT_004e2cc8 = &PTR_FUN_004c6e60;
    _atexit((_func_4879 *)&LAB_004bbf9b);
  }
  exception::exception((exception *)local_14,(exception *)&DAT_004e2cc8);
  local_14[0] = &PTR_FUN_004c6e60;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_14,&DAT_004d3b70);
}

