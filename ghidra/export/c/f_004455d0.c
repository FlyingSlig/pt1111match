// FUNCTION: PORT1111 0x004455d0
// name: FUN_004455d0
// sig: undefined4 * FUN_004455d0(void * this, byte param_1)


undefined4 * __thiscall FUN_004455d0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004c376c;
  if (*(int **)((int)this + 4) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 4) + 8))();
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

