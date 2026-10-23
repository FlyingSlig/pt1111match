// FUNCTION: PORT1111 0x00432c80
// name: FUN_00432c80
// sig: undefined4 * FUN_00432c80(void * this, byte param_1)


undefined4 * __thiscall FUN_00432c80(void *this,byte param_1)

{
  FUN_00432c10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

