// FUNCTION: PORT1111 0x00496220
// name: FUN_00496220
// sig: bool FUN_00496220(int param_1)


bool __fastcall FUN_00496220(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uStack_50;
  int *piStack_4c;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 local_14 [4];
  undefined1 local_10 [8];
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  uStack_20 = 0;
  puStack_24 = local_8;
  puStack_28 = local_4;
  puStack_2c = local_14;
  uStack_34 = *(undefined4 *)(param_1 + 0x1c);
  piStack_3c = *(int **)(param_1 + 0x48);
  puStack_30 = local_10;
  uStack_38 = 0;
  uStack_40 = 0x49624c;
  iVar2 = (**(code **)(*piStack_3c + 0x2c))();
  *(int *)(param_1 + 0x14) = iVar2;
  if (iVar2 < 0) {
    return false;
  }
  piStack_4c = *(int **)(param_1 + 0x3c);
  uStack_40 = 0;
  puStack_44 = puStack_30;
  uStack_48 = uStack_34;
  uStack_50 = 0x496270;
  (**(code **)(*piStack_4c + 0xc))();
  piVar8 = *(int **)(param_1 + 0x34);
  uStack_50 = 0;
  uVar3 = (**(code **)(*piVar8 + 0x18))(piVar8,0,*(undefined4 *)(param_1 + 0x28),0);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  WaitForSingleObject(*(HANDLE *)(param_1 + 0x28),0xffffffff);
  puVar7 = &uStack_50;
  iVar2 = 0;
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x10))(*(int **)(param_1 + 0x3c),0);
  uVar4 = iVar2 - (int)piVar8;
  if (uVar4 != 0) {
    bVar1 = (*(short *)(param_1 + 0x5a) != 8) - 1;
    puVar6 = (uint *)((int)puVar7 + (int)piVar8);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar6 = CONCAT22(CONCAT11(bVar1,bVar1),CONCAT11(bVar1,bVar1)) & 0x80808080;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(byte *)puVar6 = bVar1 & 0x80;
      puVar6 = (uint *)((int)puVar6 + 1);
    }
  }
  (**(code **)(**(int **)(param_1 + 0x48) + 0x4c))(*(int **)(param_1 + 0x48),puVar7,iVar2,0,0);
  return -1 < *(int *)(param_1 + 0x14);
}

