// FUNCTION: PORT1111 0x00424930
// name: FUN_00424930
// sig: undefined4 * FUN_00424930(void * this, byte param_1)


undefined4 * __thiscall FUN_00424930(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004bf794;
  if (*(void **)((int)this + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x18));
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

