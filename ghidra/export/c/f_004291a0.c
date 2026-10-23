// FUNCTION: PORT1111 0x004291a0
// name: FUN_004291a0
// sig: undefined FUN_004291a0(void * this, int * param_1, int param_2, int param_3, uint param_4)


void __thiscall FUN_004291a0(void *this,int *param_1,int param_2,int param_3,uint param_4)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  undefined3 extraout_var;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  LONG LVar7;
  int iVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  tagRECT local_10;
  
  local_20 = param_2;
  local_18 = param_2 + 0x40;
  local_1c = param_3;
  local_14 = param_3 + 0x20;
  bVar3 = FUN_0046ca80(param_1,&local_20,&local_28,&param_3,&param_2,&local_2c,&local_10);
  if (CONCAT31(extraout_var,bVar3) != 0) {
    if ((int)param_4 < *(int *)((int)this + 0xc)) {
      puVar4 = (undefined4 *)(*(int *)((int)this + 4) + *(int *)((int)this + 0x10) * param_4 * 2);
    }
    else {
      puVar4 = (undefined4 *)
               (*(int *)this +
               (param_4 - *(int *)((int)this + 0xc)) * *(int *)((int)this + 0x10) * 2);
    }
    if ((local_28 == 0x40) && (param_3 == 0x20)) {
      pbVar9 = (byte *)((int)this + 0x48);
      param_4 = 0x20;
      do {
        uVar6 = (uint)pbVar9[0x20] - (uint)*pbVar9;
        puVar10 = puVar4;
        puVar12 = (undefined4 *)(param_2 + (uint)*pbVar9 * 2);
        for (uVar5 = (uVar6 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar12 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar12 = puVar12 + 1;
        }
        for (uVar5 = uVar6 * 2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
          puVar10 = (undefined4 *)((int)puVar10 + 1);
          puVar12 = (undefined4 *)((int)puVar12 + 1);
        }
        param_2 = param_2 + local_2c;
        pbVar9 = pbVar9 + 1;
        param_4 = param_4 - 1;
        puVar4 = (undefined4 *)((int)puVar4 + uVar6 * 2);
      } while (param_4 != 0);
      (**(code **)(*param_1 + 0x34))();
      return;
    }
    param_4 = local_28 + local_10.left;
    if (0 < local_10.top) {
      pbVar9 = (byte *)((int)this + 0x48);
      LVar7 = local_10.top;
      do {
        pbVar1 = pbVar9 + 0x20;
        bVar2 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        LVar7 = LVar7 + -1;
        puVar4 = (undefined4 *)((int)puVar4 + ((uint)*pbVar1 - (uint)bVar2) * 2);
      } while (LVar7 != 0);
    }
    if (local_10.top < param_3 + local_10.top) {
      local_24 = -0x48 - (int)this;
      pbVar9 = (byte *)((int)this + local_10.top + 0x48);
      do {
        iVar8 = 0;
        iVar11 = (uint)*pbVar9 - local_10.left;
        if (iVar11 < 0) {
          iVar8 = -iVar11;
          iVar11 = 0;
        }
        uVar5 = (uint)pbVar9[0x20];
        if ((int)param_4 < (int)(uint)pbVar9[0x20]) {
          uVar5 = param_4;
        }
        uVar5 = (uVar5 - *pbVar9) - iVar8;
        if (0 < (int)uVar5) {
          puVar10 = (undefined4 *)((int)puVar4 + iVar8 * 2);
          puVar12 = (undefined4 *)(param_2 + iVar11 * 2);
          for (uVar6 = (uVar5 & 0x7fffffff) >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar12 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
          }
          for (uVar5 = uVar5 * 2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
            puVar10 = (undefined4 *)((int)puVar10 + 1);
            puVar12 = (undefined4 *)((int)puVar12 + 1);
          }
        }
        puVar4 = (undefined4 *)((int)puVar4 + ((uint)pbVar9[0x20] - (uint)*pbVar9) * 2);
        param_2 = param_2 + local_2c;
        pbVar9 = pbVar9 + 1;
      } while ((int)(pbVar9 + local_24) < param_3 + local_10.top);
    }
    (**(code **)(*param_1 + 0x34))();
  }
  return;
}

