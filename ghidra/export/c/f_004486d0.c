// FUNCTION: PORT1111 0x004486d0
// name: FUN_004486d0
// sig: undefined FUN_004486d0(WPARAM param_1)


void __cdecl FUN_004486d0(WPARAM param_1)

{
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  if (DAT_004e27e8 == 0) {
    lParam = 0;
    DAT_004e27e8 = 1;
    Msg = 0x800b;
    hWnd = (HWND)(**(code **)(*DAT_004e2b10 + 0x3c))();
    PostMessageA(hWnd,Msg,param_1,lParam);
  }
  return;
}

