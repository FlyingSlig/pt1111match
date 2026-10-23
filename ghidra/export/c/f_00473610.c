// FUNCTION: PORT1111 0x00473610
// name: FUN_00473610
// sig: undefined4 * FUN_00473610(void * this, byte param_1)


undefined4 * __thiscall FUN_00473610(void *this,byte param_1)

{
  thunk_FUN_0046f1f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

