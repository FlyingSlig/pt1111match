// FUNCTION: PORT1111 0x004010e0
// name: FUN_004010e0
// sig: undefined4 * FUN_004010e0(void * this, byte param_1)


undefined4 * __thiscall FUN_004010e0(void *this,byte param_1)

{
  FUN_00401000(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

