// FUNCTION: PORT1111 0x00480d10
// name: FUN_00480d10
// sig: undefined4 FUN_00480d10(ushort param_1, int param_2)


undefined4 __cdecl FUN_00480d10(ushort param_1,int param_2)

{
  HWND hWnd;
  int *this;
  tagRECT *lpRect;
  tagRECT local_20;
  tagRECT tStack_10;
  
  lpRect = &local_20;
  hWnd = (HWND)(**(code **)(*DAT_004e2b10 + 0x3c))();
  GetWindowRect(hWnd,lpRect);
  this = (int *)FUN_00468ef0(DAT_004e2b14,param_1);
  if (this == (int *)0x0) {
    return 0;
  }
  FUN_0047de00(this);
  if (param_2 != 0) {
    SetRect(&tStack_10,0,0,this[0x25],this[0x26]);
    FUN_0047d0e0(this,(((local_20.right - tStack_10.right) - local_20.left) + tStack_10.left) / 2,
                 (((tStack_10.top - local_20.top) - tStack_10.bottom) + local_20.bottom) / 2);
  }
  return 1;
}

