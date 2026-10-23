// FUNCTION: PORT1111 0x00428240
// name: FUN_00428240
// sig: undefined4 FUN_00428240(void * this, int param_1)


undefined4 __thiscall FUN_00428240(void *this,int param_1)

{
  int *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *this_01;
  int iVar6;
  int iVar7;
  
  this_00 = *(int **)((int)this + 0x18);
  if (this_00 == (int *)0x0) {
    this_01 = FUN_00428080(0x4e2064);
    *(undefined4 **)((int)this + 0x18) = this_01;
    FUN_004275e0(this_01,param_1);
    return 1;
  }
  iVar6 = *this_00;
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0xc);
  FUN_004275e0(this_00,param_1);
  iVar4 = *(int *)(*(int *)((int)this + 0x18) + 8);
  iVar7 = 0;
  if (0 < iVar6) {
    while( true ) {
      iVar5 = *(int *)(iVar4 + iVar7 * 4);
      if ((iVar3 < *(int *)(iVar5 + 0xc)) ||
         ((iVar3 == *(int *)(iVar5 + 0xc) &&
          ((iVar2 < *(int *)(iVar5 + 8) ||
           ((iVar2 == *(int *)(iVar5 + 8) && (iVar1 < *(int *)(iVar5 + 4))))))))) break;
      iVar7 = iVar7 + 1;
      if (iVar6 <= iVar7) {
        return 1;
      }
    }
    for (; iVar7 < iVar6; iVar6 = iVar6 + -1) {
      *(undefined4 *)(iVar4 + iVar6 * 4) = *(undefined4 *)(iVar4 + -4 + iVar6 * 4);
    }
    *(int *)(iVar4 + iVar7 * 4) = param_1;
  }
  return 1;
}

