// FUNCTION: PORT1111 0x00408f20
// name: FUN_00408f20
// sig: undefined4 * FUN_00408f20(void * this, byte param_1)


undefined4 * __thiscall FUN_00408f20(void *this,byte param_1)

{
  FUN_00408f40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

