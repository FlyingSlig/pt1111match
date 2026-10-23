// FUNCTION: PORT1111 0x00403220
// name: FUN_00403220
// sig: undefined4 * FUN_00403220(void * this, byte param_1)


undefined4 * __thiscall FUN_00403220(void *this,byte param_1)

{
  FUN_00402b40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

