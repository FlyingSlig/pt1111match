// FUNCTION: PORT1111 0x0040e1e0
// name: FUN_0040e1e0
// sig: undefined4 * FUN_0040e1e0(void * this, byte param_1)


undefined4 * __thiscall FUN_0040e1e0(void *this,byte param_1)

{
  thunk_FUN_00407050(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

