// FUNCTION: PORT1111 0x00489380
// name: FUN_00489380
// sig: undefined4 * FUN_00489380(void * this, byte param_1)


undefined4 * __thiscall FUN_00489380(void *this,byte param_1)

{
  FUN_00488d10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

