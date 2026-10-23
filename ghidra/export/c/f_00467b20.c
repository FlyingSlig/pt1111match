// FUNCTION: PORT1111 0x00467b20
// name: FUN_00467b20
// sig: undefined FUN_00467b20(void * this, int * param_1, int param_2, int param_3, int * param_4)


void __thiscall FUN_00467b20(void *this,int *param_1,int param_2,int param_3,int *param_4)

{
  LONG LVar1;
  int iVar2;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  tagRECT tStack_40;
  tagRECT tStack_30;
  RECT RStack_20;
  RECT RStack_10;
  
  iVar5 = *(int *)((int)this + 0x1c);
  LVar1 = (**(code **)(*param_1 + 8))();
  RStack_20.right = (**(code **)(*param_1 + 4))();
  RStack_20.left = 0;
  RStack_20.top = 0;
  RStack_20.bottom = LVar1;
  iVar2 = (**(code **)(*(int *)this + 8))();
  tStack_40.right = (**(code **)(*(int *)this + 4))();
  RStack_10.left = 0;
  RStack_10.top = 0;
  RStack_10.right = tStack_40.right;
  RStack_10.bottom = iVar2;
  if (param_4 == (int *)0x0) {
    tStack_40.left = 0;
    tStack_40.top = 0;
    tStack_40.bottom = iVar2;
    SetRect(&tStack_30,param_2,param_3,tStack_40.right + param_2,iVar2 + param_3);
    if (tStack_30.left < 0) {
      tStack_40.left = tStack_40.left - tStack_30.left;
    }
    if (tStack_30.top < 0) {
      tStack_40.top = tStack_40.top - tStack_30.top;
    }
    if (tStack_40.left < 0) {
      tStack_30.left = tStack_30.left - tStack_40.left;
    }
    if (tStack_40.top < 0) {
      tStack_30.top = tStack_30.top - tStack_40.top;
    }
    iVar2 = IntersectRect(&tStack_30,&RStack_20,&tStack_30);
  }
  else {
    tStack_40.left = *param_4;
    tStack_40.top = param_4[1];
    tStack_40.bottom = param_4[3];
    tStack_40.right = param_4[2];
    SetRect(&tStack_30,param_2,param_3,(param_4[2] - tStack_40.left) + param_2,
            (tStack_40.bottom - tStack_40.top) + param_3);
    if (tStack_30.left < 0) {
      tStack_40.left = tStack_40.left - tStack_30.left;
    }
    if (tStack_30.top < 0) {
      tStack_40.top = tStack_40.top - tStack_30.top;
    }
    if (tStack_40.left < 0) {
      tStack_30.left = tStack_30.left - tStack_40.left;
    }
    if (tStack_40.top < 0) {
      tStack_30.top = tStack_30.top - tStack_40.top;
    }
    BVar3 = IntersectRect(&tStack_30,&RStack_20,&tStack_30);
    if (BVar3 == 0) {
      return;
    }
    iVar2 = IntersectRect(&tStack_40,&RStack_10,&tStack_40);
  }
  if (iVar2 != 0) {
    iVar2 = tStack_30.right - tStack_30.left;
    if (tStack_40.right - tStack_40.left <= tStack_30.right - tStack_30.left) {
      iVar2 = tStack_40.right - tStack_40.left;
    }
    iVar4 = tStack_40.bottom - tStack_40.top;
    if (tStack_30.bottom - tStack_30.top < tStack_40.bottom - tStack_40.top) {
      iVar4 = tStack_30.bottom - tStack_30.top;
    }
    tStack_40.right = iVar2 + tStack_40.left;
    tStack_40.bottom = iVar4 + tStack_40.top;
    iVar5 = (**(code **)(*(int *)param_1[0xb] + 0x1c))
                      ((int *)param_1[0xb],tStack_30.left,tStack_30.top,
                       *(undefined4 *)((int)this + 0x2c),&tStack_40,(iVar5 != -1) + '\x10');
    *(int *)((int)this + 0x28) = iVar5;
    if (iVar5 == -0x7789fe3e) {
      iVar5 = (**(code **)(*(int *)param_1[0xb] + 0x6c))((int *)param_1[0xb]);
      param_1[10] = iVar5;
    }
  }
  return;
}

