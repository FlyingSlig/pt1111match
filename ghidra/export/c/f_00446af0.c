// FUNCTION: PORT1111 0x00446af0
// name: FUN_00446af0
// sig: undefined4 * FUN_00446af0(void * this, byte param_1)


undefined4 * __thiscall FUN_00446af0(void *this,byte param_1)

{
  FUN_004468b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

