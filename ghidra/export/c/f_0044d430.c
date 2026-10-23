// FUNCTION: PORT1111 0x0044d430
// name: FUN_0044d430
// sig: undefined4 * FUN_0044d430(void * this, byte param_1)


undefined4 * __thiscall FUN_0044d430(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004c452c;
  FUN_00486190((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

