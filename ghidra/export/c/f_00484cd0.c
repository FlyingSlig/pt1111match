// FUNCTION: PORT1111 0x00484cd0
// name: FUN_00484cd0
// sig: int * FUN_00484cd0(void * this, byte param_1)


int * __thiscall FUN_00484cd0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004c6a40;
  if (*(HWND *)((int)this + 4) != (HWND)0x0) {
    if (*(int *)((int)this + 8) == 0) {
      DestroyWindow(*(HWND *)((int)this + 4));
    }
    (**(code **)(*(int *)this + 0x20))();
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

