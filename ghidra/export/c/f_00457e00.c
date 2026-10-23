// FUNCTION: PORT1111 0x00457e00
// name: FUN_00457e00
// sig: undefined4 * FUN_00457e00(void * this, byte param_1)


undefined4 * __thiscall FUN_00457e00(void *this,byte param_1)

{
  FUN_00457da0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

