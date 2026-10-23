// FUNCTION: PORT1111 0x00448710
// name: FUN_00448710
// sig: undefined FUN_00448710(void)


void FUN_00448710(void)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  if (DAT_004e27e8 == 0) {
    lParam = 0;
    wParam = 0;
    DAT_004e27e8 = 1;
    Msg = 0x800c;
    hWnd = (HWND)(**(code **)(*DAT_004e2b10 + 0x3c))();
    PostMessageA(hWnd,Msg,wParam,lParam);
  }
  return;
}

