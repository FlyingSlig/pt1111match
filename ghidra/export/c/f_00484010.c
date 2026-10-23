// FUNCTION: PORT1111 0x00484010
// name: FUN_00484010
// sig: undefined FUN_00484010(int param_1)


void __fastcall FUN_00484010(int param_1)

{
  HWND hWnd;
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 5;
  hWnd = (HWND)(**(code **)(*(int *)(param_1 + -0x10) + 4))();
  ShowWindow(hWnd,iVar2);
  (**(code **)(**(int **)(param_1 + 0x18) + 0x68))();
  iVar2 = **(int **)(param_1 + 0x18);
  uVar1 = (**(code **)(*(int *)(param_1 + -0x10) + 4))();
  (**(code **)(iVar2 + 0x6c))(uVar1);
  return;
}

