// FUNCTION: PORT1111 0x00444e50
// name: FUN_00444e50
// sig: undefined4 * FUN_00444e50(void * this, byte param_1)


undefined4 * __thiscall FUN_00444e50(void *this,byte param_1)

{
  FUN_00444c40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

