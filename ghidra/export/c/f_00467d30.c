// FUNCTION: PORT1111 0x00467d30
// name: FUN_00467d30
// sig: undefined4 * FUN_00467d30(void * this, byte param_1)


undefined4 * __thiscall FUN_00467d30(void *this,byte param_1)

{
  FUN_004677f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

