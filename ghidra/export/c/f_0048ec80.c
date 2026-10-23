// FUNCTION: PORT1111 0x0048ec80
// name: FUN_0048ec80
// sig: undefined FUN_0048ec80(void * this, int * param_1, char param_2, int param_3, int param_4, int * param_5, int param_6, int param_7, int param_8, int param_9)


void __thiscall
FUN_0048ec80(void *this,int *param_1,char param_2,int param_3,int param_4,int *param_5,int param_6,
            int param_7,int param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 extraout_ST0;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  
  iVar1 = FUN_0048e870(param_1,param_2,*(int *)((int)this + 0xc));
  iVar2 = FUN_0048e870(param_1,param_2,*(int *)((int)this + 0x10));
  iVar3 = FUN_0048e870(param_1,param_2,*(int *)((int)this + 0x14));
  iVar4 = FUN_0048e870(param_1,param_2,*(int *)((int)this + 8));
  *param_5 = -1;
  for (; param_3 < param_4; param_3 = param_3 + 1) {
    iVar5 = FUN_0048e9d0(param_1,param_2,param_3,*(int *)((int)this + 0xc));
    iVar6 = FUN_0048e9d0(param_1,param_2,param_3,*(int *)((int)this + 0x10));
    iVar7 = FUN_0048e9d0(param_1,param_2,param_3,*(int *)((int)this + 0x14));
    iVar8 = FUN_0048e9d0(param_1,param_2,param_3,*(int *)((int)this + 8));
    iVar8 = iVar8 + iVar4;
    if (iVar8 != 0) {
      fVar9 = (float10)(iVar7 + iVar3);
      fVar10 = (float10)(iVar6 + iVar2);
      fVar11 = (float10)(iVar5 + iVar1);
      if ((param_9 - iVar8 != 0) &&
         (fVar12 = (float10)(param_8 - (iVar7 + iVar3)),
         fVar13 = (float10)(param_7 - (iVar6 + iVar2)),
         fVar14 = (float10)(param_6 - (iVar5 + iVar1)),
         extraout_ST0 <
         (fVar12 * fVar12 + fVar13 * fVar13 + fVar14 * fVar14) / (float10)(param_9 - iVar8) +
         (fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11) / (float10)iVar8)) {
        *param_5 = param_3;
      }
    }
  }
  return;
}

