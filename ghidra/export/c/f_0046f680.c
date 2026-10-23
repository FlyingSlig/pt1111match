// FUNCTION: PORT1111 0x0046f680
// name: FUN_0046f680
// sig: undefined FUN_0046f680(void * this, int param_1)


void __thiscall FUN_0046f680(void *this,int param_1)

{
  HDC hdc;
  HBRUSH h;
  HPEN h_00;
  HGDIOBJ h_01;
  HGDIOBJ unaff_EBX;
  int unaff_retaddr;
  HBRUSH local_1c;
  HPEN local_18;
  tagRECT tStack_14;
  
  local_1c = (HBRUSH)0x0;
  local_18 = (HPEN)0x0;
  if ((*(int *)((int)this + 0x80) == 0) ||
     (local_1c = CreateBrushIndirect((LOGBRUSH *)((int)this + 0x84)), local_1c != (HBRUSH)0x0)) {
    if ((*(int *)((int)this + 0x6c) != 0) &&
       (local_18 = CreatePenIndirect((LOGPEN *)((int)this + 0x70)), local_18 == (HPEN)0x0)) {
      DeleteObject(local_1c);
      return;
    }
    hdc = (HDC)FUN_0047c5b0(*(int *)((int)this + 0x48));
    h = local_1c;
    if (*(int *)((int)this + 0x80) == 0) {
      h = GetStockObject(5);
    }
    tStack_14.left = (LONG)SelectObject(hdc,h);
    h_00 = local_18;
    if (*(int *)((int)this + 0x6c) == 0) {
      h_00 = GetStockObject(8);
    }
    h_01 = SelectObject(hdc,h_00);
    (**(code **)(*(int *)this + 0x30))(&tStack_14.top);
    InflateRect(&tStack_14,1,1);
    OffsetRect(&tStack_14,-unaff_retaddr,-param_1);
    Rectangle(hdc,tStack_14.left,tStack_14.top,tStack_14.right,tStack_14.bottom);
    SelectObject(hdc,local_18);
    SelectObject(hdc,h_01);
    FUN_0047c5c0(*(int *)((int)this + 0x48));
    if (unaff_EBX != (HGDIOBJ)0x0) {
      DeleteObject(unaff_EBX);
    }
    if (local_1c != (HBRUSH)0x0) {
      DeleteObject(local_1c);
    }
  }
  return;
}

