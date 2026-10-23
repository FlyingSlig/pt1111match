// FUNCTION: PORT1111 0x0048f400
// name: FUN_0048f400
// sig: undefined4 * FUN_0048f400(void * this, byte param_1)


undefined4 * __thiscall FUN_0048f400(void *this,byte param_1)

{
  FUN_0048dfb0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

