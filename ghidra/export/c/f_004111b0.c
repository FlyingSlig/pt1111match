// FUNCTION: PORT1111 0x004111b0
// name: FUN_004111b0
// sig: undefined4 * FUN_004111b0(void * this, byte param_1)


undefined4 * __thiscall FUN_004111b0(void *this,byte param_1)

{
  FUN_004111d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

