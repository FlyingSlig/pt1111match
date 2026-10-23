// FUNCTION: PORT1111 0x004015a0
// name: FUN_004015a0
// sig: undefined4 * FUN_004015a0(void * this, byte param_1)


undefined4 * __thiscall FUN_004015a0(void *this,byte param_1)

{
  FUN_00401840(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

