// FUNCTION: PORT1111 0x0041ed70
// name: FUN_0041ed70
// sig: undefined4 * FUN_0041ed70(void * this, byte param_1)


undefined4 * __thiscall FUN_0041ed70(void *this,byte param_1)

{
  FUN_0041ebb0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

