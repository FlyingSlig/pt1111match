// FUNCTION: PORT1111 0x0047d6a0
// name: FUN_0047d6a0
// sig: undefined FUN_0047d6a0(void * param_1)


void __fastcall FUN_0047d6a0(void *param_1)

{
  POINT pt;
  HWND pHVar1;
  BOOL BVar2;
  tagPOINT *lpPoint;
  tagRECT *lpRect;
  tagPOINT local_20;
  LONG LStack_18;
  LONG LStack_14;
  tagRECT tStack_10;
  
  GetCursorPos(&local_20);
  lpPoint = &local_20;
  pHVar1 = (HWND)(**(code **)(**(int **)((int)param_1 + 0x34) + 0x4c))();
  ScreenToClient(pHVar1,lpPoint);
  lpRect = &tStack_10;
  pHVar1 = (HWND)(**(code **)(**(int **)((int)param_1 + 0x34) + 0x4c))();
  GetClientRect(pHVar1,lpRect);
  LStack_14 = local_20.y;
  LStack_18 = local_20.x;
  pt.y = local_20.y;
  pt.x = local_20.x;
  BVar2 = PtInRect(&tStack_10,pt);
  if (BVar2 != 0) {
    FUN_0047d120(param_1,&LStack_18);
    return;
  }
  (**(code **)(*DAT_004e2b20 + 4))();
  return;
}

