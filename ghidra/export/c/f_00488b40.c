// FUNCTION: PORT1111 0x00488b40
// name: FUN_00488b40
// sig: undefined4 * FUN_00488b40(void * this, byte param_1)


undefined4 * __thiscall FUN_00488b40(void *this,byte param_1)

{
  FUN_00488ad0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

