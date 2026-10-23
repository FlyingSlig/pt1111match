// FUNCTION: PORT1111 0x0045eff0
// name: FUN_0045eff0
// sig: undefined4 * FUN_0045eff0(void * this, byte param_1)


undefined4 * __thiscall FUN_0045eff0(void *this,byte param_1)

{
  FUN_0045efc0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

