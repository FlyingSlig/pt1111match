// FUNCTION: PORT1111 0x00403ba0
// name: FUN_00403ba0
// sig: undefined4 * FUN_00403ba0(void * this, byte param_1)


undefined4 * __thiscall FUN_00403ba0(void *this,byte param_1)

{
  FUN_00403a30(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

