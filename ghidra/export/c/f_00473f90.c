// FUNCTION: PORT1111 0x00473f90
// name: FUN_00473f90
// sig: undefined4 * FUN_00473f90(void * this, byte param_1)


undefined4 * __thiscall FUN_00473f90(void *this,byte param_1)

{
  FUN_00473f60(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

