// FUNCTION: PORT1111 0x004048a0
// name: FUN_004048a0
// sig: undefined4 * FUN_004048a0(void * this, byte param_1)


undefined4 * __thiscall FUN_004048a0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004bc9f0;
  FUN_00404500((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

