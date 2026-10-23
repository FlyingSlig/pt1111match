// FUNCTION: PORT1111 0x00480a60
// name: FUN_00480a60
// sig: undefined FUN_00480a60(int * param_1)


void __fastcall FUN_00480a60(int *param_1)

{
  HWND hWnd;
  HDC hDC;
  
  hDC = (HDC)param_1[8];
  hWnd = (HWND)(**(code **)(*param_1 + 0x4c))();
  ReleaseDC(hWnd,hDC);
  param_1[8] = 0;
  return;
}

