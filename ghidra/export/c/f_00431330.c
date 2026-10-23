// FUNCTION: PORT1111 0x00431330
// name: FUN_00431330
// sig: undefined4 * FUN_00431330(void * this, byte param_1)


undefined4 * __thiscall FUN_00431330(void *this,byte param_1)

{
  FUN_00431260(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

