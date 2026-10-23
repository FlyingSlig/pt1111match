// FUNCTION: PORT1111 0x004338a0
// name: FUN_004338a0
// sig: undefined4 * FUN_004338a0(void * this, byte param_1)


undefined4 * __thiscall FUN_004338a0(void *this,byte param_1)

{
  FUN_00433830(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

