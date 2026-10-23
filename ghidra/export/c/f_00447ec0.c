// FUNCTION: PORT1111 0x00447ec0
// name: FUN_00447ec0
// sig: undefined4 * FUN_00447ec0(void * this, byte param_1)


undefined4 * __thiscall FUN_00447ec0(void *this,byte param_1)

{
  FUN_00447ea0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

