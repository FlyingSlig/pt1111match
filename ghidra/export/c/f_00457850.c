// FUNCTION: PORT1111 0x00457850
// name: FUN_00457850
// sig: undefined4 FUN_00457850(void * this, int param_1)


undefined4 __thiscall FUN_00457850(void *this,int param_1)

{
  undefined4 uVar1;
  void *_Dst;
  int iVar2;
  
  _Dst = *(void **)((int)this + 8);
  uVar1 = 0;
  iVar2 = 0;
  if (_Dst != *(void **)((int)this + 0xc)) {
    while (iVar2 != param_1) {
      _Dst = (void *)((int)_Dst + 4);
      iVar2 = iVar2 + 1;
      if (_Dst == *(void **)((int)this + 0xc)) {
        return uVar1;
      }
    }
    _memmove(_Dst,(void *)((int)_Dst + 4),(*(int *)((int)this + 0xc) - ((int)_Dst + 4) >> 2) << 2);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -4;
    uVar1 = 1;
  }
  return uVar1;
}

