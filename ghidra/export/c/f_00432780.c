// FUNCTION: PORT1111 0x00432780
// name: FUN_00432780
// sig: undefined4 * FUN_00432780(void * this, byte param_1)


undefined4 * __thiscall FUN_00432780(void *this,byte param_1)

{
  FUN_00432710(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

