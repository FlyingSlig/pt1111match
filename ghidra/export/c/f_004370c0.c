// FUNCTION: PORT1111 0x004370c0
// name: FUN_004370c0
// sig: undefined4 * FUN_004370c0(void * this, byte param_1)


undefined4 * __thiscall FUN_004370c0(void *this,byte param_1)

{
  FUN_00436f70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

