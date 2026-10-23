// FUNCTION: PORT1111 0x0047c960
// name: FUN_0047c960
// sig: undefined4 * FUN_0047c960(void * this, byte param_1)


undefined4 * __thiscall FUN_0047c960(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004c66b8;
  if (*(void **)((int)this + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 8));
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

