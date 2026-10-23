// FUNCTION: PORT1111 0x00449a30
// name: FUN_00449a30
// sig: undefined4 FUN_00449a30(undefined4 param_1, uint param_2, int param_3)


undefined4 __cdecl FUN_00449a30(undefined4 param_1,uint param_2,int param_3)

{
  POINT pt;
  HWND hWnd;
  BOOL BVar1;
  tagPOINT *lpPoint;
  tagPOINT local_18;
  RECT local_10;
  
  lpPoint = &local_18;
  local_10.left = *(LONG *)(param_3 + 0x290);
  local_10.top = *(LONG *)(param_3 + 0x294);
  local_10.right = *(LONG *)(param_3 + 0x298);
  local_10.bottom = *(LONG *)(param_3 + 0x29c);
  local_18.x = param_2 & 0xffff;
  local_18.y = param_2 >> 0x10;
  hWnd = (HWND)FUN_0047c5a0(*(int *)(param_3 + 0x28c));
  ScreenToClient(hWnd,lpPoint);
  pt.y = local_18.y;
  pt.x = local_18.x;
  BVar1 = PtInRect(&local_10,pt);
  if (BVar1 == 0) {
    return 0;
  }
  if (0 < (short)((uint)param_1 >> 0x10)) {
    FUN_004818b0(*(void **)(param_3 + 0x2a8),0x26);
    return 1;
  }
  FUN_004818b0(*(void **)(param_3 + 0x2a8),0x28);
  return 1;
}

