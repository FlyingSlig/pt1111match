// FUNCTION: PORT1111 0x0041bd30
// name: FUN_0041bd30
// sig: undefined4 * FUN_0041bd30(void * this, byte param_1)


undefined4 * __thiscall FUN_0041bd30(void *this,byte param_1)

{
  FUN_0041b890(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

