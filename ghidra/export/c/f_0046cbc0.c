// FUNCTION: PORT1111 0x0046cbc0
// name: FUN_0046cbc0
// sig: undefined4 FUN_0046cbc0(RECT * param_1, RECT * param_2, int param_3, int param_4, LONG * param_5, int * param_6, int * param_7, LPRECT param_8, LPRECT param_9)


undefined4 __cdecl
FUN_0046cbc0(RECT *param_1,RECT *param_2,int param_3,int param_4,LONG *param_5,int *param_6,
            int *param_7,LPRECT param_8,LPRECT param_9)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  
  if (param_5 == (LONG *)0x0) {
    param_8->left = param_1->left;
    param_8->top = param_1->top;
    param_8->right = param_1->right;
    param_8->bottom = param_1->bottom;
    SetRect(param_9,param_3,param_4,(param_8->right - param_8->left) + param_3,
            (param_8->bottom - param_8->top) + param_4);
    if (param_9->left - param_2->left < 0) {
      param_8->left = param_8->left + (param_2->left - param_9->left);
    }
    if (param_9->top - param_2->top < 0) {
      param_8->top = param_8->top + (param_2->top - param_9->top);
    }
    if (param_8->left < 0) {
      param_9->left = param_9->left - param_8->left;
    }
    if (param_8->top < 0) {
      param_9->top = param_9->top - param_8->top;
    }
    BVar1 = IntersectRect(param_9,param_2,param_9);
    if (BVar1 == 0) {
      return 0;
    }
  }
  else {
    param_8->left = *param_5;
    param_8->top = param_5[1];
    param_8->right = param_5[2];
    param_8->bottom = param_5[3];
    SetRect(param_9,param_3,param_4,(param_8->right - param_8->left) + param_3,
            (param_8->bottom - param_8->top) + param_4);
    if (param_9->left - param_2->left < 0) {
      param_8->left = param_8->left + (param_2->left - param_9->left);
    }
    if (param_9->top - param_2->top < 0) {
      param_8->top = param_8->top + (param_2->top - param_9->top);
    }
    if (param_8->left < 0) {
      param_9->left = param_9->left - param_8->left;
    }
    if (param_8->top < 0) {
      param_9->top = param_9->top - param_8->top;
    }
    BVar1 = IntersectRect(param_9,param_2,param_9);
    if (BVar1 == 0) {
      return 0;
    }
    BVar1 = IntersectRect(param_8,param_1,param_8);
    if (BVar1 == 0) {
      return 0;
    }
  }
  iVar2 = param_8->right - param_8->left;
  iVar3 = param_9->right - param_9->left;
  if (iVar3 < iVar2) {
    iVar2 = iVar3;
  }
  *param_6 = iVar2;
  iVar2 = param_8->bottom - param_8->top;
  iVar3 = param_9->bottom - param_9->top;
  if (iVar3 < iVar2) {
    iVar2 = iVar3;
  }
  *param_7 = iVar2;
  return 1;
}

