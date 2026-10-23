// FUNCTION: PORT1111 0x00488e90
// name: FUN_00488e90
// sig: undefined FUN_00488e90(void * this, RECT * param_1)


void __thiscall FUN_00488e90(void *this,RECT *param_1)

{
  RECT *lprc;
  LONG x1;
  LONG y1;
  int iVar1;
  int iVar2;
  BOOL BVar3;
  HDC pHVar4;
  HGDIOBJ pvVar5;
  HDC hdc;
  int cx;
  int cy;
  HDC hdc_00;
  int x;
  int y;
  DWORD rop;
  tagRECT local_20;
  tagRECT local_10;
  
  if (*(int *)((int)this + 8) == 0) {
    if (*(int *)((int)this + 0x81c) != 0) {
      iVar1 = FUN_0047e870(*(int *)((int)this + 0x830));
      iVar2 = FUN_0047e810(*(int *)((int)this + 0x830));
      SetRect(&local_10,0,0,iVar2,iVar1);
      if (param_1 == (RECT *)0x0) {
        local_20.left = local_10.left;
        local_20.top = local_10.top;
        local_20.right = local_10.right;
        local_20.bottom = local_10.bottom;
      }
      else {
        IntersectRect(&local_20,param_1,&local_10);
        BVar3 = IsRectEmpty(&local_20);
        if (BVar3 != 0) {
          return;
        }
      }
      y1 = local_20.top;
      x1 = local_20.left;
      lprc = (RECT *)((int)this + 0x820);
      BVar3 = IsRectEmpty(lprc);
      if (BVar3 == 0) {
        OffsetRect(&local_20,lprc->left,*(int *)((int)this + 0x824));
        IntersectRect(&local_20,&local_20,lprc);
      }
      pHVar4 = CreateCompatibleDC(*(HDC *)((int)this + 0x814));
      pvVar5 = SelectObject(pHVar4,*(HGDIOBJ *)(*(int *)(*(int *)((int)this + 0x830) + 4) + 0x20));
      BitBlt(*(HDC *)((int)this + 0x814),local_20.left,local_20.top,local_20.right - local_20.left,
             local_20.bottom - local_20.top,pHVar4,x1,y1,0xcc0020);
      SelectObject(pHVar4,pvVar5);
      DeleteDC(pHVar4);
      return;
    }
    hdc = CreateCompatibleDC(*(HDC *)((int)this + 0x814));
    pvVar5 = SelectObject(hdc,*(HGDIOBJ *)(*(int *)(*(int *)((int)this + 0x830) + 4) + 0x20));
    rop = 0xcc0020;
    iVar2 = 0;
    iVar1 = 0;
    pHVar4 = hdc;
    if (param_1 == (RECT *)0x0) {
      cy = FUN_0047e870(*(int *)((int)this + 0x830));
      cx = FUN_0047e810(*(int *)((int)this + 0x830));
      hdc_00 = *(HDC *)((int)this + 0x814);
      y = 0;
      x = 0;
    }
    else {
      y = param_1->top;
      x = param_1->left;
      cy = param_1->bottom - y;
      cx = param_1->right - x;
      hdc_00 = *(HDC *)((int)this + 0x814);
    }
    BitBlt(hdc_00,x,y,cx,cy,pHVar4,iVar1,iVar2,rop);
    SelectObject(hdc,pvVar5);
    DeleteDC(hdc);
  }
  return;
}

