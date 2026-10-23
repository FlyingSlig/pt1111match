// FUNCTION: PORT1111 0x00496f80
// name: FUN_00496f80
// sig: undefined4 * FUN_00496f80(void * this, byte param_1)


undefined4 * __thiscall FUN_00496f80(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004c6e08;
  FUN_00496780((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

