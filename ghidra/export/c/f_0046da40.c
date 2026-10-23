// FUNCTION: PORT1111 0x0046da40
// name: FUN_0046da40
// sig: undefined4 * FUN_0046da40(void * this, byte param_1)


undefined4 * __thiscall FUN_0046da40(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004c6028;
  if (*(void **)((int)this + 0x14) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x14));
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

