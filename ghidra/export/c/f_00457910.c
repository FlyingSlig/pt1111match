// FUNCTION: PORT1111 0x00457910
// name: FUN_00457910
// sig: undefined4 * FUN_00457910(void * this, byte param_1)


undefined4 * __thiscall FUN_00457910(void *this,byte param_1)

{
  FUN_004578b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

