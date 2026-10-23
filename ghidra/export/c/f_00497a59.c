// FUNCTION: PORT1111 0x00497a59
// name: FUN_00497a59
// sig: undefined4 * FUN_00497a59(void * this, byte param_1)


undefined4 * __thiscall FUN_00497a59(void *this,byte param_1)

{
  FUN_00497a13(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

