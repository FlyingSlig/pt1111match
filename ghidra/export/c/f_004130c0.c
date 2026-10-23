// FUNCTION: PORT1111 0x004130c0
// name: FUN_004130c0
// sig: undefined4 * FUN_004130c0(void * this, byte param_1)


undefined4 * __thiscall FUN_004130c0(void *this,byte param_1)

{
  thunk_FUN_004120f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

