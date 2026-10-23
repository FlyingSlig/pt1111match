// FUNCTION: PORT1111 0x004968e0
// name: FUN_004968e0
// sig: undefined4 FUN_004968e0(int param_1)


undefined4 __fastcall FUN_004968e0(int param_1)

{
  RECT *lpRect;
  BOOL BVar1;
  int yBottom;
  int xRight;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    lpRect = (RECT *)(param_1 + 0x20);
    GetClientRect(*(HWND *)(param_1 + 0x1c),lpRect);
    BVar1 = IsRectEmpty(lpRect);
    *(BOOL *)(param_1 + 0x38) = BVar1;
    ClientToScreen(*(HWND *)(param_1 + 0x1c),(LPPOINT)lpRect);
    ClientToScreen(*(HWND *)(param_1 + 0x1c),(LPPOINT)(param_1 + 0x28));
    return 0;
  }
  yBottom = GetSystemMetrics(1);
  xRight = GetSystemMetrics(0);
  SetRect((LPRECT)(param_1 + 0x20),0,0,xRight,yBottom);
  return 0;
}

