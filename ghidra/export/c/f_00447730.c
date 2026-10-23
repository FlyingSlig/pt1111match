// FUNCTION: PORT1111 0x00447730
// name: FUN_00447730
// sig: undefined4 * FUN_00447730(void * this, byte param_1)


undefined4 * __thiscall FUN_00447730(void *this,byte param_1)

{
  FUN_004474f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

