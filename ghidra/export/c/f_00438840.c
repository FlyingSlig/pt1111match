// FUNCTION: PORT1111 0x00438840
// name: FUN_00438840
// sig: undefined FUN_00438840(void * this, undefined4 * param_1, undefined4 * param_2)


/* WARNING: Removing unreachable block (ram,0x004388a3) */

void __thiscall FUN_00438840(void *this,undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  bool bVar10;
  bool bVar11;
  bool local_14;
  
  puVar2 = param_2;
  puVar4 = *(undefined4 **)((int)this + 4);
  local_14 = true;
  if (*(char *)((int)puVar4[1] + 0x2d) == '\0') {
    uVar6 = param_2[5];
    puVar8 = (undefined4 *)puVar4[1];
    do {
      puVar4 = puVar8;
      uVar1 = puVar4[8];
      if ((uint)puVar4[9] < 0x10) {
        pbVar5 = (byte *)(puVar4 + 4);
      }
      else {
        pbVar5 = (byte *)puVar4[4];
      }
      if (uVar6 == 0) {
LAB_004388d3:
        if (uVar6 < uVar1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (uint)(uVar6 != uVar1);
        }
      }
      else {
        uVar7 = uVar6;
        if (uVar1 <= uVar6) {
          uVar7 = uVar1;
        }
        if ((uint)param_2[6] < 0x10) {
          pbVar9 = (byte *)(param_2 + 1);
        }
        else {
          pbVar9 = (byte *)param_2[1];
        }
        bVar10 = false;
        uVar3 = 0;
        bVar11 = true;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar10 = *pbVar9 < *pbVar5;
          bVar11 = *pbVar9 == *pbVar5;
          pbVar9 = pbVar9 + 1;
          pbVar5 = pbVar5 + 1;
        } while (bVar11);
        if (!bVar11) {
          uVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        }
        if (uVar3 == 0) goto LAB_004388d3;
      }
      local_14 = (int)uVar3 < 0;
      if (local_14) {
        puVar8 = (undefined4 *)*puVar4;
      }
      else {
        puVar8 = (undefined4 *)puVar4[2];
      }
    } while (*(char *)((int)puVar8 + 0x2d) == '\0');
  }
  param_2 = puVar4;
  if (local_14) {
    if (puVar4 == (undefined4 *)**(int **)((int)this + 4)) {
      puVar4 = (undefined4 *)FUN_00438350(this,&param_2,'\x01',puVar4,puVar2);
      *param_1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_00474650((int *)&param_2);
  }
  puVar8 = param_2;
  if ((uint)puVar2[6] < 0x10) {
    pbVar5 = (byte *)(puVar2 + 1);
  }
  else {
    pbVar5 = (byte *)puVar2[1];
  }
  uVar6 = FUN_004366b0(param_2 + 3,0,param_2[8],pbVar5,puVar2[5]);
  if ((int)uVar6 < 0) {
    puVar4 = (undefined4 *)FUN_00438350(this,&param_2,local_14,puVar4,puVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar8;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}

