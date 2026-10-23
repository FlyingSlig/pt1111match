// FUNCTION: PORT1111 0x0042dfc0
// name: FUN_0042dfc0
// sig: undefined4 * FUN_0042dfc0(void * this, byte param_1)


undefined4 * __thiscall FUN_0042dfc0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004bf9e4;
  if (*(void **)((int)this + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 8));
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

