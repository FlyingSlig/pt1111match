// FUNCTION: PORT1111 0x0047c9b0
// name: FUN_0047c9b0
// sig: undefined FUN_0047c9b0(int param_1)


void __fastcall FUN_0047c9b0(int param_1)

{
  HWND hWnd;
  ushort uVar1;
  int iVar2;
  UINT Msg;
  WPARAM wParam;
  
  if (*(int *)(*(int *)(param_1 + 0x34) + 0x10) == 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x34) + 0x1c);
    if (iVar2 == 0) {
      uVar1 = 0xffff;
    }
    else {
      uVar1 = *(ushort *)(iVar2 + 0x1c);
    }
    wParam = *(WPARAM *)(DAT_004e2b10 + 8);
    iVar2 = (uint)uVar1 << 0x10;
    Msg = 0x87cc;
    hWnd = (HWND)(**(code **)(**(int **)(param_1 + 0x34) + 0x50))();
    PostMessageA(hWnd,Msg,wParam,iVar2);
  }
  return;
}

