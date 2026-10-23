// FUNCTION: PORT1111 0x0040e340
// name: FUN_0040e340
// sig: undefined4 * FUN_0040e340(void * this, byte param_1)


undefined4 * __thiscall FUN_0040e340(void *this,byte param_1)

{
  FUN_0040e330(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

