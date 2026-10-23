// FUNCTION: PORT1111 0x00412040
// name: FUN_00412040
// sig: undefined4 * FUN_00412040(void * this, byte param_1)


undefined4 * __thiscall FUN_00412040(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004bea64;
  if (*(int *)((int)this + 0xc) != 0) {
    if (*(int *)((int)this + 0x10) == 0) {
      FUN_004765a0(*(void **)(DAT_004e2b14 + 0xf8),*(int *)(*(int *)((int)this + 0xc) + 4));
    }
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

