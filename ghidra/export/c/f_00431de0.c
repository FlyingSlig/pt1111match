// FUNCTION: PORT1111 0x00431de0
// name: FUN_00431de0
// sig: undefined4 * FUN_00431de0(void * this, byte param_1)


undefined4 * __thiscall FUN_00431de0(void *this,byte param_1)

{
  thunk_FUN_0042f7d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

