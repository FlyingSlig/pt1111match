// FUNCTION: PORT1111 0x00480b70
// name: FUN_00480b70
// sig: undefined FUN_00480b70(int param_1)


void __fastcall FUN_00480b70(int param_1)

{
  uint wParam;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x34) == 0) {
    if (*(int *)(param_1 + 0x24) == 0) {
      wParam = 0xffffffff;
    }
    else {
      wParam = (uint)*(ushort *)(*(int *)(param_1 + 0x24) + 0x1c);
    }
    lParam = *(LPARAM *)(param_1 + 0x48);
    Msg = 0x87c6;
    hWnd = (HWND)(**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x34) + 0x50))();
    PostMessageA(hWnd,Msg,wParam,lParam);
  }
  *(undefined4 *)(param_1 + 0x34) = 1;
  return;
}

