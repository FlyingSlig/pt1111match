// FUNCTION: PORT1111 0x0046ca80
// name: FUN_0046ca80
// sig: bool FUN_0046ca80(int * param_1, int * param_2, int * param_3, int * param_4, undefined4 param_5, int * param_6, LPRECT param_7)


bool __cdecl
FUN_0046ca80(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6,
            LPRECT param_7)

{
  int iVar1;
  int xRight;
  BOOL BVar2;
  tagRECT tStack_20;
  tagRECT tStack_10;
  
  iVar1 = (**(code **)(*param_1 + 8))();
  xRight = (**(code **)(*param_1 + 4))();
  SetRect(&tStack_10,0,0,xRight,iVar1);
  SetRect(param_7,0,0,param_2[2] - *param_2,param_2[3] - param_2[1]);
  SetRect(&tStack_20,*param_2,param_2[1],(param_7->right - param_7->left) + *param_2,
          (param_7->bottom - param_7->top) + param_2[1]);
  if (tStack_20.left - tStack_10.left < 0) {
    param_7->left = param_7->left + (tStack_10.left - tStack_20.left);
  }
  if (tStack_20.top - tStack_10.top < 0) {
    param_7->top = param_7->top + (tStack_10.top - tStack_20.top);
  }
  if (param_7->left < 0) {
    tStack_20.left = tStack_20.left - param_7->left;
  }
  if (param_7->top < 0) {
    tStack_20.top = tStack_20.top - param_7->top;
  }
  BVar2 = IntersectRect(&tStack_20,&tStack_10,&tStack_20);
  if (BVar2 == 0) {
    return false;
  }
  iVar1 = param_7->right - param_7->left;
  if (tStack_20.right - tStack_20.left < iVar1) {
    iVar1 = tStack_20.right - tStack_20.left;
  }
  *param_3 = iVar1;
  iVar1 = param_7->bottom - param_7->top;
  if (tStack_20.bottom - tStack_20.top < iVar1) {
    iVar1 = tStack_20.bottom - tStack_20.top;
  }
  *param_4 = iVar1;
  iVar1 = FUN_0046b000(param_1,&tStack_20.left,param_5,param_6);
  return iVar1 != 0;
}

