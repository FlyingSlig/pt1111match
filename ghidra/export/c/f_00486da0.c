// FUNCTION: PORT1111 0x00486da0
// name: FUN_00486da0
// sig: undefined4 * FUN_00486da0(void * this, byte param_1)


undefined4 * __thiscall FUN_00486da0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004c6b3c;
  if ((*(int *)((int)this + 0x10) == 0) && (*(void **)((int)this + 8) != (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 8));
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

