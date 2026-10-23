// FUNCTION: PORT1111 0x0040eb30
// name: FUN_0040eb30
// sig: undefined4 * FUN_0040eb30(void * this, byte param_1)


undefined4 * __thiscall FUN_0040eb30(void *this,byte param_1)

{
  FUN_004304a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

