// FUNCTION: PORT1111 0x004b2530
// name: FUN_004b2530
// sig: undefined FUN_004b2530(uint param_1)


void __cdecl FUN_004b2530(uint param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  byte *pbVar15;
  uint local_18;
  byte *local_14;
  uint local_10;
  uint local_c;
  uint local_8 [2];
  
  uVar5 = param_1;
  uVar7 = *(uint *)(param_1 + 0x70);
  iVar6 = *(int *)(param_1 + 0xec) + 1;
  uVar10 = 0;
  puVar1 = (uint *)(param_1 + 0x100);
  if ((iVar6 != 0) && (puVar1 != (uint *)0x0)) {
    uVar3 = *puVar1;
    uVar4 = (&DAT_004c8510)[*(byte *)(param_1 + 0x124)];
    uVar8 = uVar3 * uVar4;
    bVar2 = *(byte *)(param_1 + 0x10b);
    if (bVar2 == 1) {
      local_14 = (byte *)((uVar3 - 1 >> 3) + iVar6);
      pbVar15 = (byte *)((uVar8 - 1 >> 3) + iVar6);
      if ((uVar7 & 0x10000) == 0) {
        param_1 = 7 - (uVar3 - 1 & 7);
        local_10 = 0;
        uVar7 = 7 - (uVar8 - 1 & 7);
        uVar10 = 7;
        local_18 = 1;
      }
      else {
        param_1 = uVar3 - 1 & 7;
        uVar7 = uVar8 - 1 & 7;
        local_10 = 7;
        local_18 = -1;
      }
      local_c = 0;
      if (uVar3 != 0) {
        do {
          bVar2 = *local_14;
          local_8[0] = uVar4;
          if (0 < (int)uVar4) {
            do {
              *pbVar15 = (byte)(0x7f7f >> (7 - (byte)uVar7 & 0x1f)) & *pbVar15 |
                         (bVar2 >> ((byte)param_1 & 0x1f) & 1) << ((byte)uVar7 & 0x1f);
              if (uVar7 == uVar10) {
                pbVar15 = pbVar15 + -1;
                uVar7 = local_10;
              }
              else {
                uVar7 = uVar7 + local_18;
              }
              local_8[0] = local_8[0] - 1;
            } while (local_8[0] != 0);
          }
          if (param_1 == uVar10) {
            local_14 = local_14 + -1;
            param_1 = local_10;
          }
          else {
            param_1 = param_1 + local_18;
          }
          local_c = local_c + 1;
        } while (local_c < *puVar1);
      }
    }
    else if (bVar2 == 2) {
      local_14 = (byte *)((uVar3 - 1 >> 2) + iVar6);
      pbVar15 = (byte *)((uVar8 - 1 >> 2) + iVar6);
      if ((uVar7 & 0x10000) == 0) {
        local_10 = 0;
        uVar10 = 6;
        uVar7 = (3 - (uVar3 - 1 & 3)) * 2;
        uVar13 = (3 - (uVar8 - 1 & 3)) * 2;
        local_18 = 2;
      }
      else {
        uVar7 = uVar3 * 2 - 1 & 6;
        uVar13 = uVar8 * 2 - 1 & 6;
        local_10 = 6;
        local_18 = -2;
      }
      local_c = 0;
      if (uVar3 != 0) {
        do {
          bVar2 = *local_14;
          local_8[0] = uVar4;
          if (0 < (int)uVar4) {
            do {
              *pbVar15 = (byte)(0x3f3f >> (6 - (byte)uVar13 & 0x1f)) & *pbVar15 |
                         (bVar2 >> ((byte)uVar7 & 0x1f) & 3) << ((byte)uVar13 & 0x1f);
              if (uVar13 == uVar10) {
                pbVar15 = pbVar15 + -1;
                uVar13 = local_10;
              }
              else {
                uVar13 = uVar13 + local_18;
              }
              local_8[0] = local_8[0] - 1;
            } while (local_8[0] != 0);
          }
          if (uVar7 == uVar10) {
            local_14 = local_14 + -1;
            uVar7 = local_10;
          }
          else {
            uVar7 = uVar7 + local_18;
          }
          local_c = local_c + 1;
        } while (local_c < *puVar1);
      }
    }
    else if (bVar2 == 4) {
      local_14 = (byte *)((uVar3 - 1 >> 1) + iVar6);
      pbVar15 = (byte *)((uVar8 - 1 >> 1) + iVar6);
      if ((uVar7 & 0x10000) == 0) {
        local_18 = 0;
        uVar7 = (uVar3 - 1 & 1) * -4 + 4;
        uVar10 = 4;
        uVar13 = (uVar8 - 1 & 1) * -4 + 4;
        local_10 = 4;
      }
      else {
        uVar7 = uVar3 * -4 - 1 & 4;
        uVar13 = uVar8 * -4 - 1 & 4;
        local_18 = 4;
        local_10 = -4;
      }
      local_8[0] = 0;
      if (uVar3 != 0) {
        do {
          bVar2 = *local_14;
          local_c = uVar4;
          if (0 < (int)uVar4) {
            do {
              *pbVar15 = (byte)(0xf0f >> (4 - (byte)uVar13 & 0x1f)) & *pbVar15 |
                         (bVar2 >> ((byte)uVar7 & 0x1f) & 0xf) << ((byte)uVar13 & 0x1f);
              if (uVar13 == uVar10) {
                pbVar15 = pbVar15 + -1;
                uVar13 = local_18;
              }
              else {
                uVar13 = uVar13 + local_10;
              }
              local_c = local_c - 1;
            } while (local_c != 0);
          }
          if (uVar7 == uVar10) {
            local_14 = local_14 + -1;
            uVar7 = local_18;
          }
          else {
            uVar7 = uVar7 + local_10;
          }
          local_8[0] = local_8[0] + 1;
        } while (local_8[0] < *puVar1);
      }
    }
    else {
      uVar7 = (uint)(bVar2 >> 3);
      local_10 = 0;
      puVar11 = (uint *)((uVar3 - 1) * uVar7 + iVar6);
      puVar9 = (uint *)((uVar8 - 1) * uVar7 + iVar6);
      if (uVar3 != 0) {
        do {
          puVar12 = puVar11;
          puVar14 = local_8;
          for (uVar10 = (uint)(bVar2 >> 5); uVar10 != 0; uVar10 = uVar10 - 1) {
            *puVar14 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar14 = puVar14 + 1;
          }
          for (uVar10 = uVar7 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(char *)puVar14 = (char)*puVar12;
            puVar12 = (uint *)((int)puVar12 + 1);
            puVar14 = (uint *)((int)puVar14 + 1);
          }
          param_1 = uVar4;
          if (0 < (int)uVar4) {
            do {
              puVar12 = local_8;
              puVar14 = puVar9;
              for (uVar10 = (uint)(bVar2 >> 5); uVar10 != 0; uVar10 = uVar10 - 1) {
                *puVar14 = *puVar12;
                puVar12 = puVar12 + 1;
                puVar14 = puVar14 + 1;
              }
              puVar9 = (uint *)((int)puVar9 - uVar7);
              param_1 = param_1 - 1;
              for (uVar10 = uVar7 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                *(char *)puVar14 = (char)*puVar12;
                puVar12 = (uint *)((int)puVar12 + 1);
                puVar14 = (uint *)((int)puVar14 + 1);
              }
            } while (param_1 != 0);
          }
          puVar11 = (uint *)((int)puVar11 - uVar7);
          local_10 = local_10 + 1;
        } while (local_10 < *puVar1);
      }
    }
    bVar2 = *(byte *)(uVar5 + 0x10b);
    *puVar1 = uVar8;
    *(uint *)(uVar5 + 0x104) = bVar2 * uVar8 + 7 >> 3;
  }
  return;
}

