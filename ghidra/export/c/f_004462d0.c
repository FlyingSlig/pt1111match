// FUNCTION: PORT1111 0x004462d0
// name: FUN_004462d0
// sig: undefined4 * FUN_004462d0(void * this, byte param_1)


undefined4 * __thiscall FUN_004462d0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004c3b98;
  (**(code **)(**(int **)((int)this + 4) + 4))();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

