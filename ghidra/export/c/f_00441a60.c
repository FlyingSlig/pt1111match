// FUNCTION: PORT1111 0x00441a60
// name: FUN_00441a60
// sig: undefined4 * FUN_00441a60(void * this, byte param_1)


undefined4 * __thiscall FUN_00441a60(void *this,byte param_1)

{
  FUN_00441990(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

