// FUNCTION: PORT1111 0x004749f0
// name: FUN_004749f0
// sig: undefined4 * FUN_004749f0(void * this, int param_1)


/* WARNING: Removing unreachable block (ram,0x00474a42) */

undefined4 * __thiscall FUN_004749f0(void *this,int param_1)

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
  undefined4 *local_c;
  
  local_c = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)local_c[1] + 0x2d) == '\0') {
    uVar1 = *(uint *)(param_1 + 0x14);
    puVar5 = (undefined4 *)local_c[1];
    do {
      uVar2 = puVar5[8];
      if ((uint)puVar5[9] < 0x10) {
        pbVar8 = (byte *)(puVar5 + 4);
      }
      else {
        pbVar8 = (byte *)puVar5[4];
      }
      if (uVar1 == 0) {
LAB_00474a70:
        if (uVar2 <= uVar1) {
          uVar4 = (uint)(uVar1 != uVar2);
          goto LAB_00474a7d;
        }
LAB_00474a7f:
        puVar6 = (undefined4 *)*puVar5;
        local_c = puVar5;
      }
      else {
        uVar3 = uVar1;
        if (uVar2 <= uVar1) {
          uVar3 = uVar2;
        }
        if (*(uint *)(param_1 + 0x18) < 0x10) {
          pbVar7 = (byte *)(param_1 + 4);
        }
        else {
          pbVar7 = *(byte **)(param_1 + 4);
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
        if (uVar4 == 0) goto LAB_00474a70;
LAB_00474a7d:
        if ((int)uVar4 < 0) goto LAB_00474a7f;
        puVar6 = (undefined4 *)puVar5[2];
      }
      puVar5 = puVar6;
    } while (*(char *)((int)puVar6 + 0x2d) == '\0');
  }
  return local_c;
}

