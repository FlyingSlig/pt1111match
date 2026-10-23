// FUNCTION: PORT1111 0x0042f6f0
// name: FUN_0042f6f0
// sig: undefined4 * FUN_0042f6f0(void * this, byte param_1)


undefined4 * __thiscall FUN_0042f6f0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004bf9fc;
  if (*(void **)((int)this + 0x10) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x10));
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

