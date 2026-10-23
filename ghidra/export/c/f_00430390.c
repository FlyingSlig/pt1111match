// FUNCTION: PORT1111 0x00430390
// name: FUN_00430390
// sig: undefined4 * FUN_00430390(void * this, byte param_1)


undefined4 * __thiscall FUN_00430390(void *this,byte param_1)

{
  FUN_00430320(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

