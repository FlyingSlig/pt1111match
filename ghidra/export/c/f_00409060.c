// FUNCTION: PORT1111 0x00409060
// name: FUN_00409060
// sig: undefined4 * FUN_00409060(void * this, byte param_1)


undefined4 * __thiscall FUN_00409060(void *this,byte param_1)

{
  FUN_00409030(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

