// FUNCTION: PORT1111 0x00446f70
// name: FUN_00446f70
// sig: undefined FUN_00446f70(void * this, int param_1)


void __thiscall FUN_00446f70(void *this,int param_1)

{
  LPRECT lprc;
  int iVar1;
  HWND hWnd;
  undefined4 *puVar2;
  uchar *puVar3;
  tagRECT *lpRect;
  tagRECT tStack_5c;
  tagRECT local_4c;
  undefined4 local_3c [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8490;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0047e2c0(local_3c,0);
  local_4 = 0;
  iVar1 = FUN_0047e4d0(local_3c,(uchar *)"preloader.png",*(undefined4 *)((int)DAT_004e2b14 + 0x60),0
                      );
  if (iVar1 != 0) {
    lpRect = &local_4c;
    hWnd = (HWND)(**(code **)(*DAT_004e2b10 + 0x3c))();
    GetWindowRect(hWnd,lpRect);
    iVar1 = FUN_0047e870((int)local_3c);
    tStack_5c.right = FUN_0047e810((int)local_3c);
    tStack_5c.left = 0;
    tStack_5c.top = 0;
    tStack_5c.bottom = iVar1;
    OffsetRect(&tStack_5c,((local_4c.right - tStack_5c.right) - local_4c.left) / 2,
               ((local_4c.bottom - local_4c.top) - iVar1) / 2);
    if (param_1 == 0) {
      (**(code **)(**(int **)((int)DAT_004e2b14 + 0x5c) + 0x28))
                (local_3c,tStack_5c.left,tStack_5c.top,0);
    }
    else {
      (**(code **)(**(int **)((int)DAT_004e2b14 + 0x5c) + 0x34))
                (local_3c,tStack_5c.left,tStack_5c.top);
    }
    lprc = (LPRECT)((int)this + 0x74);
    SetRect(lprc,0,0,0xd8,0x1c);
    OffsetRect(lprc,tStack_5c.left + 2,tStack_5c.top + 0x14);
    puVar2 = FUN_00468080(DAT_004e2b14,&param_1,"preloader1.png");
    local_4._0_1_ = 1;
    puVar3 = (uchar *)FUN_00465e00(puVar2);
    FUN_00451f70((void *)((int)this + 4),lprc->left,*(int *)((int)this + 0x78),
                 *(int *)((int)this + 0x7c),*(int *)((int)this + 0x80),100,1,puVar3);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00465e40(&param_1);
  }
  local_4 = 0xffffffff;
  FUN_0047e300(local_3c);
  ExceptionList = pvStack_c;
  return;
}

