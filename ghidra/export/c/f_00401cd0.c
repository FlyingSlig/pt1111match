// FUNCTION: PORT1111 0x00401cd0
// name: FUN_00401cd0
// sig: undefined4 * FUN_00401cd0(void * this, byte param_1)


undefined4 * __thiscall FUN_00401cd0(void *this,byte param_1)

{
  FUN_00401c90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

