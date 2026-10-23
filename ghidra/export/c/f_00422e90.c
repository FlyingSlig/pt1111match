// FUNCTION: PORT1111 0x00422e90
// name: FUN_00422e90
// sig: undefined4 * FUN_00422e90(void * this, byte param_1)


undefined4 * __thiscall FUN_00422e90(void *this,byte param_1)

{
  FUN_004225f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

