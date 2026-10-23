// FUNCTION: PORT1111 0x0042d0f0
// name: FUN_0042d0f0
// sig: undefined4 * FUN_0042d0f0(void * this, byte param_1)


undefined4 * __thiscall FUN_0042d0f0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004bf990;
  if (*(void **)((int)this + 0x6c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x6c));
  }
  if (*(int *)((int)this + 4) != 0) {
    FUN_0042aaf0(*(int *)((int)this + 4));
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

