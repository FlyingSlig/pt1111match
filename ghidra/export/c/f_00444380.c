// FUNCTION: PORT1111 0x00444380
// name: FUN_00444380
// sig: undefined4 * FUN_00444380(void * this, byte param_1)


undefined4 * __thiscall FUN_00444380(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004c3740;
  if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 4));
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

