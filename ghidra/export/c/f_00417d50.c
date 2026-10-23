// FUNCTION: PORT1111 0x00417d50
// name: FUN_00417d50
// sig: undefined4 * FUN_00417d50(void * this, byte param_1)


undefined4 * __thiscall FUN_00417d50(void *this,byte param_1)

{
  FUN_00417c30(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

