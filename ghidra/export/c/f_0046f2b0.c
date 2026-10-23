// FUNCTION: PORT1111 0x0046f2b0
// name: FUN_0046f2b0
// sig: undefined FUN_0046f2b0(int * param_1)


void __fastcall FUN_0046f2b0(int *param_1)

{
  undefined4 *unaff_retaddr;
  tagRECT tStack_14;
  
  tStack_14.left = (LONG)&tStack_14.top;
  (**(code **)(*param_1 + 0x30))();
  OffsetRect(&tStack_14,-tStack_14.left,-tStack_14.top);
  *unaff_retaddr = tStack_14.left;
  unaff_retaddr[1] = tStack_14.top;
  unaff_retaddr[2] = tStack_14.right;
  unaff_retaddr[3] = tStack_14.bottom;
  return;
}

