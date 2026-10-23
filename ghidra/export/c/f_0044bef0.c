// FUNCTION: PORT1111 0x0044bef0
// name: FUN_0044bef0
// sig: undefined4 * FUN_0044bef0(void * this, byte param_1)


undefined4 * __thiscall FUN_0044bef0(void *this,byte param_1)

{
  FUN_0044bbc0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

