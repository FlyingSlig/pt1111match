// FUNCTION: PORT1111 0x00480a40
// name: FUN_00480a40
// sig: undefined FUN_00480a40(int * param_1)


void __fastcall FUN_00480a40(int *param_1)

{
  HWND hWnd;
  HDC pHVar1;
  
  hWnd = (HWND)(**(code **)(*param_1 + 0x4c))();
  pHVar1 = GetDC(hWnd);
  param_1[8] = (int)pHVar1;
  return;
}

