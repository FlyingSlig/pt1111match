// FUNCTION: PORT1111 0x0043c5b0
// name: FUN_0043c5b0
// sig: undefined FUN_0043c5b0(void * this, int * param_1)


void __thiscall FUN_0043c5b0(void *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *this_00;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  ulonglong uVar10;
  uint uStack_28;
  uint uStack_24;
  int iStack_1c;
  
  iVar3 = (**(code **)(*param_1 + 0x88))();
  iVar3 = *(int *)(iVar3 + 0x34);
  iVar4 = (int)*(short *)(param_1[0x10] + 0x4e);
  iVar5 = (int)*(short *)(param_1[0x10] + 0x4c);
  uVar8 = (int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3;
  uVar7 = (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3;
  iStack_1c = 999999;
  param_1 = (int *)0xf423f;
  uStack_24 = 0xffffffff;
  uStack_28 = 0xffffffff;
  uVar6 = ((int)(uVar8 - 1) < 0) - 1 & uVar8 - 1;
  iVar4 = *(int *)((int)this + 0x10) + -1;
  if ((int)(uVar8 + 1) <= iVar4) {
    iVar4 = uVar8 + 1;
  }
  iVar5 = *(int *)((int)this + 0x14) + -1;
  if ((int)(uVar7 + 1) <= iVar5) {
    iVar5 = uVar7 + 1;
  }
  iVar1 = iStack_1c;
  for (; uVar2 = ((int)(uVar7 - 1) < 0) - 1 & uVar7 - 1, (int)uVar6 < iVar4 + 1; uVar6 = uVar6 + 1)
  {
    for (; (int)uVar2 < iVar5 + 1; uVar2 = uVar2 + 1) {
      if ((uVar6 != uVar8) || (iStack_1c = iVar1, uVar2 != uVar7)) {
        if (((int)uVar6 < 0) ||
           ((((int)uVar2 < 0 || (*(int *)((int)this + 0x10) <= (int)uVar6)) ||
            (*(int *)((int)this + 0x14) <= (int)uVar2)))) {
          this_00 = (void *)0x0;
        }
        else {
          this_00 = (void *)((*(int *)((int)this + 0x10) * uVar2 + uVar6) * 0x30 +
                            *(int *)((int)this + 4));
        }
        iStack_1c = FUN_0043cb30(this_00,iVar3);
        uVar10 = FUN_00497d88();
        bVar9 = iStack_1c == iVar1;
        if ((iStack_1c < iVar1) ||
           ((iStack_1c = iVar1, bVar9 && ((int)(int *)uVar10 < (int)param_1)))) {
          param_1 = (int *)uVar10;
          uStack_28 = uVar2;
          uStack_24 = uVar6;
        }
      }
      iVar1 = iStack_1c;
    }
  }
  FUN_00429ac0(DAT_004e2404,uStack_24 * 8 + 4,uStack_28 * 8 + 4);
  return;
}

