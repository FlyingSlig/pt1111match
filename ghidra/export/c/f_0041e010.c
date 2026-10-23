// FUNCTION: PORT1111 0x0041e010
// name: FUN_0041e010
// sig: undefined4 * FUN_0041e010(void * this, byte param_1)


undefined4 * __thiscall FUN_0041e010(void *this,byte param_1)

{
  FUN_0041de80(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

