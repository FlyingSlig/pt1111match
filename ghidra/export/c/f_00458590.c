// FUNCTION: PORT1111 0x00458590
// name: FUN_00458590
// sig: undefined4 * FUN_00458590(void * this, byte param_1)


undefined4 * __thiscall FUN_00458590(void *this,byte param_1)

{
  FUN_00458350(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

