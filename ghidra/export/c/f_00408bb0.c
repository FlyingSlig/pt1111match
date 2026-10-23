// FUNCTION: PORT1111 0x00408bb0
// name: FUN_00408bb0
// sig: undefined4 * FUN_00408bb0(void * this, byte param_1)


undefined4 * __thiscall FUN_00408bb0(void *this,byte param_1)

{
  FUN_00408a10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

