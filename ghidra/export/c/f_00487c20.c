// FUNCTION: PORT1111 0x00487c20
// name: FUN_00487c20
// sig: undefined4 * FUN_00487c20(void * this, byte param_1)


undefined4 * __thiscall FUN_00487c20(void *this,byte param_1)

{
  FUN_00487660(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

