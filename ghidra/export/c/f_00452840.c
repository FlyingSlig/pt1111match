// FUNCTION: PORT1111 0x00452840
// name: FUN_00452840
// sig: undefined4 * FUN_00452840(void * this, byte param_1)


undefined4 * __thiscall FUN_00452840(void *this,byte param_1)

{
  FUN_00452540(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

