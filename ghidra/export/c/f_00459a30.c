// FUNCTION: PORT1111 0x00459a30
// name: FUN_00459a30
// sig: undefined4 * FUN_00459a30(void * this, byte param_1)


undefined4 * __thiscall FUN_00459a30(void *this,byte param_1)

{
  FUN_00459a50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

