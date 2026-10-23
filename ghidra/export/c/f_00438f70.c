// FUNCTION: PORT1111 0x00438f70
// name: FUN_00438f70
// sig: undefined4 * FUN_00438f70(void * this, byte param_1)


undefined4 * __thiscall FUN_00438f70(void *this,byte param_1)

{
  FUN_00438d20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

