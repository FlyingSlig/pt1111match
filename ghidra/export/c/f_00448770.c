// FUNCTION: PORT1111 0x00448770
// name: FUN_00448770
// sig: undefined FUN_00448770(int * param_1)


void __fastcall FUN_00448770(int *param_1)

{
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  POINT pt_03;
  POINT pt_04;
  POINT pt_05;
  POINT pt_06;
  POINT pt_07;
  HWND pHVar1;
  BOOL BVar2;
  tagRECT *lpRect;
  tagPOINT *lpPoint;
  int iVar3;
  tagPOINT local_30;
  tagPOINT tStack_28;
  tagRECT local_20;
  tagRECT tStack_10;
  
  if (*(int *)(param_1[9] + 0x38) != 0) {
    GetCursorPos(&local_30);
    lpRect = &local_20;
    pHVar1 = (HWND)(**(code **)(*param_1 + 0x4c))();
    GetClientRect(pHVar1,lpRect);
    InflateRect(&local_20,-5,-5);
    lpPoint = &tStack_28;
    tStack_28.x = 0;
    tStack_28.y = 0;
    pHVar1 = (HWND)(**(code **)(*param_1 + 0x4c))();
    ClientToScreen(pHVar1,lpPoint);
    OffsetRect(&local_20,tStack_28.x,tStack_28.y);
    InflateRect(&local_20,-5,-5);
    pt.y = local_30.y;
    pt.x = local_30.x;
    BVar2 = PtInRect(&local_20,pt);
    if (BVar2 == 0) {
      SetRect(&tStack_10,0,0,local_20.left,local_20.top);
      pt_00.y = local_30.y;
      pt_00.x = local_30.x;
      BVar2 = PtInRect(&tStack_10,pt_00);
      if (BVar2 != 0) {
        FUN_0043a320(0x20,0x20);
        FUN_00448740();
        return;
      }
      SetRect(&tStack_10,local_20.right,0,2000,local_20.top);
      pt_01.y = local_30.y;
      pt_01.x = local_30.x;
      BVar2 = PtInRect(&tStack_10,pt_01);
      if (BVar2 != 0) {
        FUN_0043a320(-0x20,0x20);
        FUN_00448740();
        return;
      }
      SetRect(&tStack_10,local_20.right,local_20.bottom,2000,2000);
      pt_02.y = local_30.y;
      pt_02.x = local_30.x;
      BVar2 = PtInRect(&tStack_10,pt_02);
      if (BVar2 != 0) {
        FUN_0043a320(-0x20,-0x20);
        FUN_00448740();
        return;
      }
      SetRect(&tStack_10,0,local_20.bottom,local_20.left,2000);
      pt_03.y = local_30.y;
      pt_03.x = local_30.x;
      BVar2 = PtInRect(&tStack_10,pt_03);
      if (BVar2 != 0) {
        FUN_0043a320(0x20,-0x20);
        FUN_00448740();
        return;
      }
      SetRect(&tStack_10,0,local_20.top,local_20.left,local_20.bottom);
      pt_04.y = local_30.y;
      pt_04.x = local_30.x;
      BVar2 = PtInRect(&tStack_10,pt_04);
      if (BVar2 != 0) {
        FUN_0043a320(0x20,0);
        FUN_00448740();
        return;
      }
      SetRect(&tStack_10,local_20.right,local_20.top,2000,local_20.bottom);
      pt_05.y = local_30.y;
      pt_05.x = local_30.x;
      BVar2 = PtInRect(&tStack_10,pt_05);
      if (BVar2 != 0) {
        FUN_0043a320(-0x20,0);
        FUN_00448740();
        return;
      }
      SetRect(&tStack_10,local_20.left,0,local_20.right,local_20.top);
      pt_06.y = local_30.y;
      pt_06.x = local_30.x;
      BVar2 = PtInRect(&tStack_10,pt_06);
      if (BVar2 == 0) {
        SetRect(&tStack_10,local_20.left,local_20.bottom,local_20.right,2000);
        pt_07.y = local_30.y;
        pt_07.x = local_30.x;
        BVar2 = PtInRect(&tStack_10,pt_07);
        if (BVar2 == 0) {
          return;
        }
        iVar3 = -0x20;
      }
      else {
        iVar3 = 0x20;
      }
      FUN_0043a320(0,iVar3);
      FUN_00448740();
    }
  }
  return;
}

