// FUNCTION: PORT1111 0x0047ca30
// name: FUN_0047ca30
// sig: undefined FUN_0047ca30(void * this, WPARAM param_1, int param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)


void __thiscall
FUN_0047ca30(void *this,WPARAM param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  HWND hWnd;
  uint lParam;
  ushort unaff_SI;
  UINT Msg;
  
  if (*(int *)(*(int *)((int)this + 0x34) + 8) == 0) {
    FUN_0047c870(this,1);
    iVar1 = (**(code **)(**(int **)((int)this + 0x34) + 0x24))(param_1,param_2,param_4,param_5);
    if (iVar1 == 0) {
      lParam = param_2 << 0x10 | (uint)unaff_SI;
      Msg = 0x87cc;
      hWnd = (HWND)(**(code **)(**(int **)((int)this + 0x34) + 0x50))();
      PostMessageA(hWnd,Msg,param_1,lParam);
    }
  }
  return;
}

