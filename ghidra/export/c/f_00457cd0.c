// FUNCTION: PORT1111 0x00457cd0
// name: FUN_00457cd0
// sig: undefined FUN_00457cd0(void * this, int param_1)


void __thiscall FUN_00457cd0(void *this,int param_1)

{
  int iVar1;
  int *_Dst;
  
  _Dst = *(int **)((int)this + 8);
  iVar1 = 0;
  if (_Dst != *(int **)((int)this + 0xc)) {
    while (iVar1 != param_1) {
      _Dst = _Dst + 1;
      iVar1 = iVar1 + 1;
      if (_Dst == *(int **)((int)this + 0xc)) {
        return;
      }
    }
    if ((undefined4 *)*_Dst != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*_Dst)(1);
      *_Dst = 0;
    }
    _memmove(_Dst,_Dst + 1,(*(int *)((int)this + 0xc) - (int)(_Dst + 1) >> 2) << 2);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -4;
  }
  return;
}

