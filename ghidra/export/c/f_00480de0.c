// FUNCTION: PORT1111 0x00480de0
// name: FUN_00480de0
// sig: int FUN_00480de0(int * param_1)


int __fastcall FUN_00480de0(int *param_1)

{
  int iVar1;
  uint wParam;
  HWND hWnd;
  undefined4 uVar2;
  DWORD DVar3;
  UINT Msg;
  
  iVar1 = FUN_00480380(param_1);
  if (iVar1 == 0) {
    param_1[0x11] = param_1[0xc];
    if (param_1[0xd] == 0) {
      if (param_1[9] == 0) {
        wParam = 0xffffffff;
      }
      else {
        wParam = (uint)*(ushort *)(param_1[9] + 0x1c);
      }
      iVar1 = param_1[0x12];
      Msg = 0x87c6;
      hWnd = (HWND)(**(code **)(**(int **)(param_1[3] + 0x34) + 0x50))();
      PostMessageA(hWnd,Msg,wParam,iVar1);
    }
    param_1[0xd] = 1;
    return 0;
  }
  uVar2 = (**(code **)(*param_1 + 0x54))();
  FUN_0047d8c0((void *)param_1[9],uVar2);
  (**(code **)(*param_1 + 0x58))();
  DVar3 = GetTickCount();
  param_1[0xf] = DVar3;
  return iVar1;
}

