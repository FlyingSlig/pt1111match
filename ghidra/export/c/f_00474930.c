// FUNCTION: PORT1111 0x00474930
// name: FUN_00474930
// sig: undefined4 * FUN_00474930(void * this, int param_1)


undefined4 * __thiscall FUN_00474930(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  bool bVar10;
  undefined4 *local_8;
  
  local_8 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)local_8[1] + 0x2d) == '\0') {
    uVar1 = *(uint *)(param_1 + 0x14);
    puVar5 = (undefined4 *)local_8[1];
    do {
      pbVar8 = (byte *)(param_1 + 4);
      if (0xf < *(uint *)(param_1 + 0x18)) {
        pbVar8 = *(byte **)(param_1 + 4);
      }
      uVar2 = puVar5[8];
      if (uVar2 == 0) {
LAB_004749b4:
        if (uVar1 <= uVar2) {
          uVar4 = (uint)(uVar2 != uVar1);
          goto LAB_004749c1;
        }
LAB_004749c3:
        puVar6 = (undefined4 *)puVar5[2];
      }
      else {
        uVar3 = uVar2;
        if (uVar1 <= uVar2) {
          uVar3 = uVar1;
        }
        if ((uint)puVar5[9] < 0x10) {
          pbVar7 = (byte *)(puVar5 + 4);
        }
        else {
          pbVar7 = (byte *)puVar5[4];
        }
        bVar9 = false;
        uVar4 = 0;
        bVar10 = true;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          bVar9 = *pbVar7 < *pbVar8;
          bVar10 = *pbVar7 == *pbVar8;
          pbVar7 = pbVar7 + 1;
          pbVar8 = pbVar8 + 1;
        } while (bVar10);
        if (!bVar10) {
          uVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        }
        if (uVar4 == 0) goto LAB_004749b4;
LAB_004749c1:
        if ((int)uVar4 < 0) goto LAB_004749c3;
        puVar6 = (undefined4 *)*puVar5;
        local_8 = puVar5;
      }
      puVar5 = puVar6;
    } while (*(char *)((int)puVar6 + 0x2d) == '\0');
  }
  return local_8;
}

