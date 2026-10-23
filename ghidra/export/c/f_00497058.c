// FUNCTION: PORT1111 0x00497058
// name: FUN_00497058
// sig: undefined4 * FUN_00497058(void * this, byte param_1)


undefined4 * __thiscall FUN_00497058(void *this,byte param_1)

{
  FUN_0049704d(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

