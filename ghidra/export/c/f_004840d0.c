// FUNCTION: PORT1111 0x004840d0
// name: FUN_004840d0
// sig: undefined FUN_004840d0(int * param_1)


void __fastcall FUN_004840d0(int *param_1)

{
  HWND pHVar1;
  RECT *lpRect;
  UINT UVar2;
  BOOL bErase;
  
  UVar2 = 0x10;
  pHVar1 = (HWND)(**(code **)(*param_1 + 0x44))();
  FUN_00488b60(pHVar1,UVar2);
  bErase = 1;
  lpRect = (RECT *)0x0;
  pHVar1 = (HWND)(**(code **)(*param_1 + 0x3c))();
  InvalidateRect(pHVar1,lpRect,bErase);
  FUN_0046ab50("Fatal Error",0);
  (**(code **)(*param_1 + 0x34))(0xffffffff);
  return;
}

