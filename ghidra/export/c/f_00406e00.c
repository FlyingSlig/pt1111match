// FUNCTION: PORT1111 0x00406e00
// name: FUN_00406e00
// sig: undefined4 * FUN_00406e00(void * this, byte param_1)


undefined4 * __thiscall FUN_00406e00(void *this,byte param_1)

{
  FUN_00406a10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

