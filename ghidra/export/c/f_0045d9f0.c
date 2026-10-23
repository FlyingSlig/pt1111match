// FUNCTION: PORT1111 0x0045d9f0
// name: FUN_0045d9f0
// sig: undefined4 * FUN_0045d9f0(void * this, byte param_1)


undefined4 * __thiscall FUN_0045d9f0(void *this,byte param_1)

{
  FUN_0045d860(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

