// FUNCTION: PORT1111 0x004783d0
// name: FUN_004783d0
// sig: undefined FUN_004783d0(void * this, RECT * param_1)


void __thiscall FUN_004783d0(void *this,RECT *param_1)

{
  LONG *_Memory;
  LPRECT lprcDst;
  
  _Memory = *(LONG **)((int)this + 0x44);
  if (param_1 == (RECT *)0x0) {
    if (_Memory != (LONG *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    return;
  }
  if (_Memory != (LONG *)0x0) {
    *_Memory = param_1->left;
    _Memory[1] = param_1->top;
    _Memory[2] = param_1->right;
    _Memory[3] = param_1->bottom;
    return;
  }
  lprcDst = operator_new(0x10);
  if (lprcDst != (LPRECT)0x0) {
    CopyRect(lprcDst,param_1);
    *(LPRECT *)((int)this + 0x44) = lprcDst;
    return;
  }
  *(undefined4 *)((int)this + 0x44) = 0;
  return;
}

