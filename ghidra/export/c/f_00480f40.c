// FUNCTION: PORT1111 0x00480f40
// name: FUN_00480f40
// sig: undefined4 * FUN_00480f40(void * this, byte param_1)


undefined4 * __thiscall FUN_00480f40(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004c68ec;
  FUN_00480e90((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

