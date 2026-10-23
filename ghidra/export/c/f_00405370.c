// FUNCTION: PORT1111 0x00405370
// name: FUN_00405370
// sig: undefined4 * FUN_00405370(void * this, byte param_1)


undefined4 * __thiscall FUN_00405370(void *this,byte param_1)

{
  FUN_00404f90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

