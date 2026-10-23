// FUNCTION: PORT1111 0x004822d0
// name: FUN_004822d0
// sig: undefined4 * FUN_004822d0(void * this, byte param_1)


undefined4 * __thiscall FUN_004822d0(void *this,byte param_1)

{
  FUN_00481fe0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

