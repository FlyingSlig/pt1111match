// FUNCTION: PORT1111 0x00483ee0
// name: FUN_00483ee0
// sig: undefined4 * FUN_00483ee0(void * this, byte param_1)


undefined4 * __thiscall FUN_00483ee0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_LAB_004c6918;
  FUN_00483ad0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

