// FUNCTION: PORT1111 0x00445890
// name: FUN_00445890
// sig: undefined4 * FUN_00445890(void * this, byte param_1)


undefined4 * __thiscall FUN_00445890(void *this,byte param_1)

{
  FUN_004457a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

