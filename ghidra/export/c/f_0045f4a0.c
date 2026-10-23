// FUNCTION: PORT1111 0x0045f4a0
// name: FUN_0045f4a0
// sig: undefined4 * FUN_0045f4a0(void * this, byte param_1)


undefined4 * __thiscall FUN_0045f4a0(void *this,byte param_1)

{
  FUN_0045f3e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

