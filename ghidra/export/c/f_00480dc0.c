// FUNCTION: PORT1111 0x00480dc0
// name: FUN_00480dc0
// sig: undefined4 * FUN_00480dc0(void * this, byte param_1)


undefined4 * __thiscall FUN_00480dc0(void *this,byte param_1)

{
  FUN_00480b10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

