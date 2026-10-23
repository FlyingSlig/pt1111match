// FUNCTION: PORT1111 0x00429050
// name: FUN_00429050
// sig: int FUN_00429050(void * this, int * param_1)


int __thiscall FUN_00429050(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iStack_10;
  int *piStack_8;
  
  iVar1 = (**(code **)(*param_1 + 0x30))();
  if (iVar1 == 0) {
    return -1;
  }
  iVar1 = (**(code **)(*param_1 + 0x2c))(iVar1,0,0);
  iVar2 = (**(code **)(*param_1 + 0x24))();
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_1 + 0x14))();
    iVar2 = -iVar2;
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x14))();
  }
  iVar9 = *(int *)((int)this + 0x88);
  if (iVar9 < *(int *)((int)this + 0xc)) {
    puVar6 = (undefined4 *)(*(int *)((int)this + 4) + *(int *)((int)this + 0x10) * iVar9 * 2);
  }
  else {
    puVar6 = (undefined4 *)
             (*(int *)this + (iVar9 - *(int *)((int)this + 0xc)) * *(int *)((int)this + 0x10) * 2);
  }
  pbVar5 = (byte *)((int)this + 0x48);
  iVar9 = 0x20;
  do {
    uVar3 = (uint)pbVar5[0x20] - (uint)*pbVar5;
    puVar7 = (undefined4 *)(iVar1 + (uint)*pbVar5 * 2);
    puVar8 = puVar6;
    for (uVar4 = (uVar3 & 0x7fffffff) >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar4 = uVar3 * 2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    puVar6 = (undefined4 *)((int)puVar6 + uVar3 * 2);
    iVar1 = iVar1 + (iVar2 >> 1) * 2;
    pbVar5 = pbVar5 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  (**(code **)(*piStack_8 + 0x34))();
  iVar1 = *(int *)(iStack_10 + 0x88);
  *(int *)(iStack_10 + 0x88) = iVar1 + 1;
  return iVar1;
}

