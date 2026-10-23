// FUNCTION: PORT1111 0x00495210
// name: FUN_00495210
// sig: undefined4 * FUN_00495210(void * this, byte param_1)


undefined4 * __thiscall FUN_00495210(void *this,byte param_1)

{
  FUN_00495190(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

