// FUNCTION: PORT1111 0x0048ee10
// name: FUN_0048ee10
// sig: undefined4 FUN_0048ee10(void * this, int * param_1, int * param_2)


undefined4 __thiscall FUN_0048ee10(void *this,int *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 extraout_var;
  float10 fVar7;
  int local_c;
  int local_8;
  int local_4;
  
  iVar4 = FUN_0048e780(param_1,*(int *)((int)this + 0xc));
  iVar5 = FUN_0048e780(param_1,*(int *)((int)this + 0x10));
  iVar6 = FUN_0048e780(param_1,*(int *)((int)this + 0x14));
  local_c = FUN_0048e780(param_1,*(int *)((int)this + 8));
  fVar7 = (float10)FUN_0048ec80(this,param_1,'\x02',*param_1 + 1,param_1[1],&local_8,iVar4,iVar5,
                                iVar6,local_c);
  fVar1 = (float)fVar7;
  fVar7 = (float10)FUN_0048ec80(this,param_1,'\x01',param_1[2] + 1,param_1[3],&local_4,iVar4,iVar5,
                                iVar6,local_c);
  fVar2 = (float)fVar7;
  fVar7 = (float10)FUN_0048ec80(this,param_1,'\0',param_1[4] + 1,param_1[5],&local_c,iVar4,iVar5,
                                iVar6,local_c);
  fVar3 = (float)fVar7;
  if (fVar2 <= fVar1) {
    if (fVar1 >= fVar3) {
      iVar4 = 2;
      if (local_8 < 0) {
        return CONCAT22(extraout_var,
                        (ushort)(fVar1 < fVar3) << 8 | (ushort)(NAN(fVar1) || NAN(fVar3)) << 10 |
                        (ushort)(fVar1 == fVar3) << 0xe);
      }
      goto LAB_0048ef22;
    }
  }
  if ((fVar2 < fVar1) || (fVar2 < fVar3)) {
    iVar4 = 0;
  }
  else {
    iVar4 = 1;
  }
LAB_0048ef22:
  param_2[1] = param_1[1];
  param_2[3] = param_1[3];
  param_2[5] = param_1[5];
  if (iVar4 == 0) {
    param_1[5] = local_c;
    param_2[4] = local_c;
    *param_2 = *param_1;
    param_2[2] = param_1[2];
  }
  else if (iVar4 == 1) {
    param_1[3] = local_4;
    param_2[2] = local_4;
    *param_2 = *param_1;
    param_2[4] = param_1[4];
  }
  else if (iVar4 == 2) {
    param_1[1] = local_8;
    *param_2 = local_8;
    param_2[2] = param_1[2];
    param_2[4] = param_1[4];
  }
  param_1[6] = (param_1[1] - *param_1) * (param_1[5] - param_1[4]) * (param_1[3] - param_1[2]);
  param_2[6] = (param_2[3] - param_2[2]) * (param_2[5] - param_2[4]) * (param_2[1] - *param_2);
  return CONCAT31((int3)((uint)param_2 >> 8),1);
}

