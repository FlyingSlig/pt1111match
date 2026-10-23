// FUNCTION: PORT1111 0x00454a90
// name: FUN_00454a90
// sig: undefined4 * FUN_00454a90(void * this, byte param_1)


undefined4 * __thiscall FUN_00454a90(void *this,byte param_1)

{
  FUN_00454a60(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

