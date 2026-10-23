// FUNCTION: PORT1111 0x00446370
// name: FUN_00446370
// sig: undefined4 * FUN_00446370(void * this, byte param_1)


undefined4 * __thiscall FUN_00446370(void *this,byte param_1)

{
  FUN_00446260(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

