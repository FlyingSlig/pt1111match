// FUNCTION: PORT1111 0x0042a750
// name: FUN_0042a750
// sig: undefined FUN_0042a750(void * this, uint param_1, uint param_2, uint param_3, uint param_4, int param_5, int param_6)


void __thiscall
FUN_0042a750(void *this,uint param_1,uint param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int local_4;
  
  if ((int)param_1 < 0) {
    param_1 = 0;
  }
  if ((int)param_2 < 0) {
    param_2 = 0;
  }
  uVar3 = *(uint *)((int)this + 0x10c);
  if (uVar3 <= param_1) {
    param_1 = uVar3 - 1;
  }
  uVar7 = *(uint *)((int)this + 0x110);
  if (uVar7 <= param_2) {
    param_2 = uVar7 - 1;
  }
  if (uVar3 <= param_3) {
    param_3 = uVar3 - 1;
  }
  if (uVar7 <= param_4) {
    param_4 = uVar7 - 1;
  }
  uVar3 = param_1;
  if (param_5 == -1) {
    param_5 = DAT_004e20bc;
  }
  for (; uVar7 = param_2, (int)uVar3 <= (int)param_3; uVar3 = uVar3 + 1) {
    for (; (int)uVar7 <= (int)param_4; uVar7 = uVar7 + 1) {
      iVar5 = (*(int *)((int)this + 0x10c) * uVar7 + uVar3) * 0x6c;
      pvVar1 = (void *)FUN_00426730(*(int *)((int)this + 0x118) + iVar5);
      FUN_00425da0((int)pvVar1);
      if (*(int *)((int)pvVar1 + 0x28) == 0) {
        pvVar1 = (void *)DAT_004e2158[*(int *)((int)this + 0x114)];
        FUN_00425da0((int)pvVar1);
      }
      iVar2 = FUN_00425900(pvVar1,uVar3,uVar7);
      FUN_00427630((void *)(*(int *)((int)this + 0x118) + iVar5),iVar2,1);
    }
  }
  local_4 = 0;
  for (uVar3 = param_1; uVar7 = param_2, (int)uVar3 <= (int)param_3; uVar3 = uVar3 + 1) {
    for (; (int)uVar7 <= (int)param_4; uVar7 = uVar7 + 1) {
      uVar6 = 2;
      if (2 < param_5) {
        do {
          iVar5 = FUN_00429f40(this,uVar3,uVar7,uVar6,param_6,1);
          if (iVar5 != 0) {
            local_4 = local_4 + 1;
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < param_5);
      }
    }
  }
  FUN_00428f30((undefined4 *)&DAT_004e20c8);
  FUN_00428f00(&DAT_004e20c8,local_4);
  if ((int)param_1 < (int)(param_3 + 1)) {
    uVar3 = param_2;
    do {
      for (; (int)uVar3 < (int)(param_4 + 1); uVar3 = uVar3 + 1) {
        uVar7 = 2;
        if (2 < param_5) {
          do {
            FUN_00429f40(this,param_1,uVar3,uVar7,param_6,0);
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < param_5);
        }
        if (DAT_004e20c4 != 0) {
          FUN_00447190(DAT_004e20c4);
        }
        iVar2 = (*(int *)((int)this + 0x10c) * uVar3 + param_1) * 0x6c;
        iVar5 = *(int *)((int)this + 0x118) + iVar2;
        if (*(char *)(iVar5 + 0x34) == '\0') {
          iVar5 = FUN_00429050(&DAT_004e20c8,*(int **)(*(int *)(iVar5 + 0x30) + 4));
        }
        else {
          pvVar1 = (void *)FUN_00426730(iVar5);
          if (*(int *)((int)pvVar1 + 0x28) == 0) {
            pvVar1 = (void *)DAT_004e2158[*(int *)((int)this + 0x114)];
          }
          iVar5 = FUN_00425970(pvVar1,param_1,uVar3);
        }
        *(int *)(*(int *)((int)this + 0x118) + 0x38 + iVar2) = iVar5;
        FUN_00427630((void *)(*(int *)((int)this + 0x118) + iVar2),0,0);
      }
      param_1 = param_1 + 1;
      uVar3 = param_2;
    } while ((int)param_1 < (int)(param_3 + 1));
  }
  piVar4 = DAT_004e2158;
  if (DAT_004e2158 != DAT_004e215c) {
    do {
      FUN_004258c0(*piVar4);
      piVar4 = piVar4 + 1;
    } while (piVar4 != DAT_004e215c);
  }
  return;
}

