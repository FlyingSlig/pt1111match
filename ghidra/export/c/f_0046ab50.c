// FUNCTION: PORT1111 0x0046ab50
// name: FUN_0046ab50
// sig: undefined FUN_0046ab50(LPCSTR param_1, UINT param_2)


void __cdecl FUN_0046ab50(LPCSTR param_1,UINT param_2)

{
  HWND hWnd;
  LPCSTR lpCaption;
  
  if (DAT_004e2b10 != (int *)0x0) {
    lpCaption = (LPCSTR)0x0;
    hWnd = (HWND)(**(code **)(*DAT_004e2b10 + 0x3c))();
    MessageBoxA(hWnd,param_1,lpCaption,param_2);
    return;
  }
  MessageBoxA((HWND)0x0,param_1,(LPCSTR)0x0,param_2);
  return;
}

