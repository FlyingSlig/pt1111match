// FUNCTION: PORT1111 0x004651c0
// name: FUN_004651c0
// sig: undefined4 FUN_004651c0(int param_1, uint param_2, int param_3, int param_4, int param_5, int * param_6)


undefined4 __cdecl
FUN_004651c0(int param_1,uint param_2,int param_3,int param_4,int param_5,int *param_6)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  uint local_14;
  undefined1 *local_10;
  byte *local_c;
  
  pbVar11 = (byte *)*param_6;
  local_14 = param_6[1];
  uVar8 = *(uint *)(param_5 + 0x20);
  puVar15 = *(undefined1 **)(param_5 + 0x34);
  uVar3 = *(uint *)(param_5 + 0x1c);
  if (puVar15 < *(undefined1 **)(param_5 + 0x30)) {
    local_10 = *(undefined1 **)(param_5 + 0x30) + (-1 - (int)puVar15);
  }
  else {
    local_10 = (undefined1 *)(*(int *)(param_5 + 0x2c) - (int)puVar15);
  }
  uVar7 = *(uint *)(&DAT_004dd918 + param_1 * 4);
  uVar2 = *(uint *)(&DAT_004dd918 + param_2 * 4);
  local_c = pbVar11;
  do {
    for (; uVar3 < 0x14; uVar3 = uVar3 + 8) {
      local_14 = local_14 - 1;
      uVar8 = uVar8 | (uint)*pbVar11 << ((byte)uVar3 & 0x1f);
      pbVar11 = pbVar11 + 1;
      local_c = pbVar11;
    }
    bVar1 = *(byte *)(param_3 + (uVar7 & uVar8) * 8);
    uVar10 = (uint)bVar1;
    iVar6 = param_3 + (uVar7 & uVar8) * 8;
    if (uVar10 == 0) {
LAB_00465415:
      uVar8 = uVar8 >> (*(byte *)(iVar6 + 1) & 0x1f);
      uVar3 = uVar3 - *(byte *)(iVar6 + 1);
      *puVar15 = *(undefined1 *)(iVar6 + 4);
      puVar15 = puVar15 + 1;
      local_10 = local_10 + -1;
    }
    else {
      uVar8 = uVar8 >> (*(byte *)(iVar6 + 1) & 0x1f);
      uVar3 = uVar3 - *(byte *)(iVar6 + 1);
      while ((bVar1 & 0x10) == 0) {
        if ((uVar10 & 0x40) != 0) {
          if ((uVar10 & 0x20) != 0) {
            uVar7 = param_6[1] - local_14;
            if (uVar3 >> 3 < param_6[1] - local_14) {
              uVar7 = uVar3 >> 3;
            }
            *(uint *)(param_5 + 0x20) = uVar8;
            *(uint *)(param_5 + 0x1c) = uVar3 + uVar7 * -8;
            iVar6 = *param_6;
            param_6[1] = uVar7 + local_14;
            *param_6 = (int)pbVar11 - uVar7;
            param_6[2] = param_6[2] + (((int)pbVar11 - uVar7) - iVar6);
            *(undefined1 **)(param_5 + 0x34) = puVar15;
            return 1;
          }
          param_6[6] = (int)s_invalid_literal_length_code_004dc704;
          param_2 = uVar3 >> 3;
          uVar7 = param_6[1] - local_14;
          if (param_6[1] - local_14 <= param_2) goto LAB_00465544;
          goto LAB_00465548;
        }
        iVar4 = (*(uint *)(&DAT_004dd918 + uVar10 * 4) & uVar8) + *(int *)(iVar6 + 4);
        bVar1 = *(byte *)(iVar6 + iVar4 * 8);
        uVar10 = (uint)bVar1;
        iVar6 = iVar6 + iVar4 * 8;
        if (uVar10 == 0) goto LAB_00465415;
        uVar8 = uVar8 >> (*(byte *)(iVar6 + 1) & 0x1f);
        uVar3 = uVar3 - *(byte *)(iVar6 + 1);
      }
      uVar10 = uVar10 & 0xf;
      uVar5 = (*(uint *)(&DAT_004dd918 + uVar10 * 4) & uVar8) + *(int *)(iVar6 + 4);
      uVar9 = uVar8 >> (sbyte)uVar10;
      for (uVar3 = uVar3 - uVar10; uVar3 < 0xf; uVar3 = uVar3 + 8) {
        local_14 = local_14 - 1;
        uVar9 = uVar9 | (uint)*pbVar11 << ((byte)uVar3 & 0x1f);
        pbVar11 = pbVar11 + 1;
        local_c = pbVar11;
      }
      iVar6 = param_4 + (uVar2 & uVar9) * 8;
      uVar8 = uVar9 >> (*(byte *)(iVar6 + 1) & 0x1f);
      uVar3 = uVar3 - *(byte *)(iVar6 + 1);
      bVar1 = *(byte *)(param_4 + (uVar2 & uVar9) * 8);
      while ((bVar1 & 0x10) == 0) {
        if ((bVar1 & 0x40) != 0) {
          param_6[6] = (int)s_invalid_distance_code_004dc6ec;
          param_2 = uVar3 >> 3;
          uVar7 = param_6[1] - local_14;
          if (param_6[1] - local_14 <= param_2) {
LAB_00465544:
            param_2 = uVar7;
          }
LAB_00465548:
          *(uint *)(param_5 + 0x20) = uVar8;
          *(uint *)(param_5 + 0x1c) = uVar3 + param_2 * -8;
          param_6[1] = param_2 + local_14;
          iVar6 = *param_6;
          *param_6 = (int)pbVar11 - param_2;
          param_6[2] = param_6[2] + (((int)pbVar11 - param_2) - iVar6);
          *(undefined1 **)(param_5 + 0x34) = puVar15;
          return 0xfffffffd;
        }
        iVar4 = (*(uint *)(&DAT_004dd918 + (uint)bVar1 * 4) & uVar8) + *(int *)(iVar6 + 4);
        pbVar12 = (byte *)(iVar6 + iVar4 * 8);
        iVar6 = iVar6 + iVar4 * 8;
        uVar8 = uVar8 >> (*(byte *)(iVar6 + 1) & 0x1f);
        uVar3 = uVar3 - *(byte *)(iVar6 + 1);
        bVar1 = *pbVar12;
      }
      uVar10 = bVar1 & 0xf;
      pbVar12 = pbVar11;
      pbVar11 = local_c;
      for (; uVar3 < uVar10; uVar3 = uVar3 + 8) {
        local_14 = local_14 - 1;
        uVar8 = uVar8 | (uint)*pbVar12 << ((byte)uVar3 & 0x1f);
        pbVar12 = pbVar11 + 1;
        pbVar11 = pbVar12;
      }
      uVar9 = *(uint *)(&DAT_004dd918 + uVar10 * 4) & uVar8;
      uVar8 = uVar8 >> (sbyte)uVar10;
      uVar3 = uVar3 - uVar10;
      local_10 = local_10 + -uVar5;
      puVar13 = puVar15 + -(uVar9 + *(int *)(iVar6 + 4));
      puVar14 = *(undefined1 **)(param_5 + 0x28);
      local_c = pbVar11;
      if (puVar13 < puVar14) {
        do {
          puVar13 = puVar13 + (*(int *)(param_5 + 0x2c) - (int)puVar14);
        } while (puVar13 < puVar14);
        uVar10 = *(int *)(param_5 + 0x2c) - (int)puVar13;
        if (uVar10 < uVar5) {
          iVar6 = uVar5 - uVar10;
          do {
            *puVar15 = *puVar13;
            puVar15 = puVar15 + 1;
            puVar13 = puVar13 + 1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
          puVar14 = *(undefined1 **)(param_5 + 0x28);
          do {
            *puVar15 = *puVar14;
            puVar15 = puVar15 + 1;
            puVar14 = puVar14 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        else {
          *puVar15 = *puVar13;
          puVar15[1] = puVar13[1];
          puVar15 = puVar15 + 2;
          puVar13 = puVar13 + 2;
          iVar6 = uVar5 - 2;
          do {
            *puVar15 = *puVar13;
            puVar15 = puVar15 + 1;
            puVar13 = puVar13 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
      else {
        *puVar15 = *puVar13;
        puVar15[1] = puVar13[1];
        puVar15 = puVar15 + 2;
        puVar13 = puVar13 + 2;
        iVar6 = uVar5 - 2;
        do {
          *puVar15 = *puVar13;
          puVar15 = puVar15 + 1;
          puVar13 = puVar13 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    if ((local_10 < (undefined1 *)0x102) || (local_14 < 10)) {
      uVar7 = param_6[1] - local_14;
      if (uVar3 >> 3 < param_6[1] - local_14) {
        uVar7 = uVar3 >> 3;
      }
      *(uint *)(param_5 + 0x20) = uVar8;
      *(uint *)(param_5 + 0x1c) = uVar3 + uVar7 * -8;
      iVar6 = *param_6;
      param_6[1] = uVar7 + local_14;
      *param_6 = (int)pbVar11 - uVar7;
      param_6[2] = param_6[2] + (((int)pbVar11 - uVar7) - iVar6);
      *(undefined1 **)(param_5 + 0x34) = puVar15;
      return 0;
    }
  } while( true );
}

