// FUNCTION: PORT1111 0x004ae8d0
// name: FUN_004ae8d0
// sig: undefined FUN_004ae8d0(int * param_1, byte * param_2)


void __cdecl FUN_004ae8d0(int *param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  byte *pbVar4;
  int *piVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  byte *pbVar10;
  byte bVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  undefined1 *puVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  int iVar19;
  byte *pbVar20;
  char *pcVar21;
  int iVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *local_28;
  undefined1 *local_20;
  int local_14;
  byte *local_10;
  byte *local_c;
  byte *local_8;
  
  piVar5 = param_1;
  pbVar4 = *(byte **)(param_2 + 4);
  uVar16 = (uint)*(byte *)((int)param_1 + 0x1f9);
  bVar1 = *(byte *)((int)param_1 + 0x125);
  puVar15 = (undefined1 *)param_1[0x3b];
  iVar22 = param_1[0x3a];
  pbVar23 = (byte *)((int)(param_2[0xb] + 7) >> 3);
  local_28 = (byte *)0x7fffffff;
  if (((bVar1 & 8) != 0) && (bVar1 != 8)) {
    local_28 = (byte *)0x0;
    pbVar20 = (byte *)0x0;
    if (pbVar4 != (byte *)0x0) {
      do {
        uVar7 = (uint)(byte)(puVar15 + 1)[(int)pbVar20];
        if (0x7f < uVar7) {
          uVar7 = 0x100 - uVar7;
        }
        local_28 = local_28 + uVar7;
        pbVar20 = pbVar20 + 1;
      } while (pbVar20 < pbVar4);
    }
    if ((char)param_1[0x7e] == '\x02') {
      iVar12 = 0;
      uVar7 = (uint)local_28 >> 10 & 0x3fffc0;
      uVar17 = (uint)local_28 & 0xffff;
      if (uVar16 != 0) {
        do {
          if (*(char *)(param_1[0x7f] + iVar12) == '\0') {
            uVar8 = (uint)*(ushort *)(param_1[0x80] + iVar12 * 2);
            uVar17 = uVar8 * uVar17 >> 8;
            uVar7 = uVar8 * uVar7 >> 8;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < (int)uVar16);
      }
      uVar7 = *(ushort *)param_1[0x82] * uVar7 >> 3;
      if (uVar7 < 0x3fffc1) {
        local_28 = (byte *)((*(ushort *)param_1[0x82] * uVar17 >> 3) + uVar7 * 0x400);
      }
      else {
        local_28 = (byte *)0x7fffffff;
      }
    }
  }
  if (bVar1 == 0x10) {
    pcVar21 = puVar15 + 1;
    pcVar9 = (char *)(param_1[0x3c] + 1);
    pbVar18 = (byte *)0x0;
    pcVar13 = pcVar21;
    for (pbVar20 = pbVar23; pbVar20 != (byte *)0x0; pbVar20 = pbVar20 + -1) {
      cVar2 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      *pcVar9 = cVar2;
      pcVar9 = pcVar9 + 1;
      pbVar18 = pbVar23;
    }
    if (pbVar18 < pbVar4) {
      iVar12 = (int)pbVar4 - (int)pbVar18;
      do {
        cVar2 = *pcVar13;
        cVar3 = *pcVar21;
        pcVar13 = pcVar13 + 1;
        pcVar21 = pcVar21 + 1;
        *pcVar9 = cVar2 - cVar3;
        pcVar9 = pcVar9 + 1;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    local_20 = (undefined1 *)param_1[0x3c];
LAB_004aea49:
    if ((bVar1 & 0x20) != 0) {
      pbVar20 = (byte *)0x0;
      param_2 = local_28;
      if ((char)param_1[0x7e] == '\x02') {
        uVar17 = (uint)local_28 & 0xffff;
        uVar7 = (uint)local_28 >> 10 & 0x3fffc0;
        iVar12 = 0;
        if (uVar16 != 0) {
          do {
            if (*(char *)(iVar12 + param_1[0x7f]) == '\x02') {
              uVar8 = (uint)*(ushort *)(param_1[0x81] + iVar12 * 2);
              uVar17 = uVar17 * uVar8 >> 8;
              uVar7 = uVar7 * uVar8 >> 8;
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < (int)uVar16);
        }
        uVar7 = *(ushort *)(param_1[0x83] + 4) * uVar7 >> 3;
        if (uVar7 < 0x3fffc1) {
          param_2 = (byte *)((*(ushort *)(param_1[0x83] + 4) * uVar17 >> 3) + uVar7 * 0x400);
        }
        else {
          param_2 = (byte *)0x7fffffff;
        }
      }
      local_8 = (byte *)0x0;
      pcVar13 = puVar15 + 1;
      pbVar18 = (byte *)param_1[0x3d];
      if (pbVar4 != (byte *)0x0) {
        iVar12 = (iVar22 + 1) - (int)pcVar13;
        do {
          pbVar18 = pbVar18 + 1;
          cVar2 = *pcVar13;
          cVar3 = pcVar13[iVar12];
          *pbVar18 = cVar2 - cVar3;
          uVar7 = (uint)(byte)(cVar2 - cVar3);
          pcVar13 = pcVar13 + 1;
          if (0x7f < uVar7) {
            uVar7 = 0x100 - uVar7;
          }
          pbVar20 = pbVar20 + uVar7;
        } while ((pbVar20 <= param_2) && (local_8 = local_8 + 1, local_8 < pbVar4));
      }
      if ((char)param_1[0x7e] == '\x02') {
        uVar7 = (uint)pbVar20 & 0xffff;
        uVar17 = (uint)pbVar20 >> 10 & 0x3fffc0;
        iVar12 = 0;
        if (uVar16 != 0) {
          do {
            if (*(char *)(iVar12 + param_1[0x7f]) == '\x02') {
              uVar8 = (uint)*(ushort *)(param_1[0x80] + iVar12 * 2);
              uVar7 = uVar7 * uVar8 >> 8;
              uVar17 = uVar17 * uVar8 >> 8;
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < (int)uVar16);
        }
        uVar17 = *(ushort *)(param_1[0x82] + 4) * uVar17 >> 3;
        if (uVar17 < 0x3fffc1) {
          pbVar20 = (byte *)((*(ushort *)(param_1[0x82] + 4) * uVar7 >> 3) + uVar17 * 0x400);
        }
        else {
          pbVar20 = (byte *)0x7fffffff;
        }
      }
      if (pbVar20 < local_28) {
        local_20 = (undefined1 *)param_1[0x3d];
        local_28 = pbVar20;
      }
    }
    if (bVar1 != 0x40) goto LAB_004aed00;
    pcVar13 = (char *)(param_1[0x3e] + 1);
    pbVar20 = puVar15 + 1;
    pbVar18 = (byte *)(iVar22 + 1);
    pbVar25 = (byte *)0x0;
    pbVar24 = pbVar20;
    for (pbVar10 = pbVar23; pbVar10 != (byte *)0x0; pbVar10 = pbVar10 + -1) {
      *pcVar13 = *pbVar24 - (*pbVar18 >> 1);
      pcVar13 = pcVar13 + 1;
      pbVar18 = pbVar18 + 1;
      pbVar24 = pbVar24 + 1;
      pbVar25 = pbVar23;
    }
    if (pbVar25 < pbVar4) {
      param_1 = (int *)(pbVar4 + -(int)pbVar25);
      do {
        *pcVar13 = *pbVar24 - (char)(((uint)*pbVar18 + (uint)*pbVar20) / 2);
        pcVar13 = pcVar13 + 1;
        pbVar20 = pbVar20 + 1;
        pbVar18 = pbVar18 + 1;
        pbVar24 = pbVar24 + 1;
        param_1 = (int *)((int)param_1 + -1);
      } while (param_1 != (int *)0x0);
    }
    local_20 = (undefined1 *)piVar5[0x3e];
  }
  else {
    local_20 = puVar15;
    if ((bVar1 & 0x10) != 0) {
      pbVar20 = (byte *)0x0;
      local_c = local_28;
      if ((char)param_1[0x7e] == '\x02') {
        uVar17 = (uint)local_28 & 0xffff;
        uVar7 = (uint)local_28 >> 10 & 0x3fffc0;
        iVar12 = 0;
        if (uVar16 != 0) {
          do {
            if (*(char *)(param_1[0x7f] + iVar12) == '\x01') {
              uVar8 = (uint)*(ushort *)(param_1[0x81] + iVar12 * 2);
              uVar17 = uVar8 * uVar17 >> 8;
              uVar7 = uVar8 * uVar7 >> 8;
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < (int)uVar16);
        }
        uVar7 = *(ushort *)(param_1[0x83] + 2) * uVar7 >> 3;
        if (uVar7 < 0x3fffc1) {
          local_c = (byte *)((*(ushort *)(param_1[0x83] + 2) * uVar17 >> 3) + uVar7 * 0x400);
        }
        else {
          local_c = (byte *)0x7fffffff;
        }
      }
      local_10 = (byte *)0x0;
      pbVar18 = puVar15 + 1;
      pbVar24 = (byte *)(param_1[0x3c] + 1);
      pbVar25 = pbVar18;
      for (pbVar10 = pbVar23; pbVar10 != (byte *)0x0; pbVar10 = pbVar10 + -1) {
        bVar6 = *pbVar25;
        *pbVar24 = bVar6;
        uVar7 = (uint)bVar6;
        if (0x7f < uVar7) {
          uVar7 = 0x100 - uVar7;
        }
        pbVar20 = pbVar20 + uVar7;
        pbVar25 = pbVar25 + 1;
        pbVar24 = pbVar24 + 1;
        local_10 = pbVar23;
      }
      if (local_10 < *(byte **)(param_2 + 4)) {
        do {
          bVar6 = *pbVar25;
          bVar11 = *pbVar18;
          *pbVar24 = bVar6 - bVar11;
          uVar7 = (uint)(byte)(bVar6 - bVar11);
          if (0x7f < uVar7) {
            uVar7 = 0x100 - uVar7;
          }
          pbVar20 = pbVar20 + uVar7;
          if (local_c < pbVar20) break;
          local_10 = local_10 + 1;
          pbVar25 = pbVar25 + 1;
          pbVar18 = pbVar18 + 1;
          pbVar24 = pbVar24 + 1;
        } while (local_10 < *(byte **)(param_2 + 4));
      }
      if ((char)param_1[0x7e] == '\x02') {
        uVar7 = (uint)pbVar20 & 0xffff;
        uVar17 = (uint)pbVar20 >> 10 & 0x3fffc0;
        iVar12 = 0;
        if (uVar16 != 0) {
          do {
            if (*(char *)(iVar12 + param_1[0x7f]) == '\x01') {
              uVar8 = (uint)*(ushort *)(param_1[0x81] + iVar12 * 2);
              uVar7 = uVar7 * uVar8 >> 8;
              uVar17 = uVar17 * uVar8 >> 8;
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < (int)uVar16);
        }
        uVar17 = *(ushort *)(param_1[0x83] + 2) * uVar17 >> 3;
        if (uVar17 < 0x3fffc1) {
          pbVar20 = (byte *)((*(ushort *)(param_1[0x83] + 2) * uVar7 >> 3) + uVar17 * 0x400);
        }
        else {
          pbVar20 = (byte *)0x7fffffff;
        }
      }
      if (pbVar20 < local_28) {
        local_20 = (undefined1 *)param_1[0x3c];
        local_28 = pbVar20;
      }
    }
    if (bVar1 != 0x20) goto LAB_004aea49;
    pcVar13 = (char *)param_1[0x3d];
    pbVar20 = (byte *)0x0;
    if (pbVar4 != (byte *)0x0) {
      pcVar9 = puVar15 + 1 + (iVar22 - (int)puVar15);
      do {
        pcVar13 = pcVar13 + 1;
        pbVar18 = pbVar20 + (int)(puVar15 + 1);
        cVar2 = *pcVar9;
        pbVar20 = pbVar20 + 1;
        pcVar9 = pcVar9 + 1;
        *pcVar13 = *pbVar18 - cVar2;
      } while (pbVar20 < pbVar4);
    }
    local_20 = (undefined1 *)param_1[0x3d];
LAB_004aed00:
    if ((bVar1 & 0x40) != 0) {
      iVar12 = 0;
      param_2 = (byte *)0x0;
      local_c = local_28;
      if ((char)param_1[0x7e] == '\x02') {
        uVar17 = (uint)local_28 & 0xffff;
        uVar7 = (uint)local_28 >> 10 & 0x3fffc0;
        if (uVar16 != 0) {
          do {
            if (*(char *)(iVar12 + param_1[0x7f]) == '\x03') {
              uVar8 = (uint)*(ushort *)(param_1[0x81] + iVar12 * 2);
              uVar17 = uVar8 * uVar17 >> 8;
              uVar7 = uVar8 * uVar7 >> 8;
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < (int)uVar16);
        }
        uVar7 = *(ushort *)(param_1[0x83] + 6) * uVar7 >> 3;
        if (uVar7 < 0x3fffc1) {
          local_c = (byte *)((*(ushort *)(param_1[0x83] + 6) * uVar17 >> 3) + uVar7 * 0x400);
        }
        else {
          local_c = (byte *)0x7fffffff;
        }
      }
      local_10 = (byte *)0x0;
      pbVar20 = puVar15 + 1;
      pbVar10 = (byte *)(param_1[0x3e] + 1);
      pbVar18 = (byte *)(iVar22 + 1);
      pbVar25 = pbVar20;
      for (pbVar24 = pbVar23; pbVar24 != (byte *)0x0; pbVar24 = pbVar24 + -1) {
        bVar6 = *pbVar25 - (*pbVar18 >> 1);
        *pbVar10 = bVar6;
        uVar7 = (uint)bVar6;
        pbVar10 = pbVar10 + 1;
        pbVar18 = pbVar18 + 1;
        pbVar25 = pbVar25 + 1;
        if (0x7f < uVar7) {
          uVar7 = 0x100 - uVar7;
        }
        param_2 = param_2 + uVar7;
        local_10 = pbVar23;
      }
      for (; local_10 < pbVar4; local_10 = local_10 + 1) {
        bVar6 = *pbVar25 - (char)(((uint)*pbVar20 + (uint)*pbVar18) / 2);
        *pbVar10 = bVar6;
        uVar7 = (uint)bVar6;
        pbVar10 = pbVar10 + 1;
        pbVar20 = pbVar20 + 1;
        pbVar18 = pbVar18 + 1;
        pbVar25 = pbVar25 + 1;
        if (0x7f < uVar7) {
          uVar7 = 0x100 - uVar7;
        }
        param_2 = param_2 + uVar7;
        if (local_c < param_2) break;
      }
      if ((char)param_1[0x7e] == '\x02') {
        iVar12 = 0;
        uVar7 = (uint)param_2 & 0xffff;
        uVar17 = (uint)param_2 >> 10 & 0x3fffc0;
        if (uVar16 != 0) {
          do {
            if (*(char *)(iVar12 + param_1[0x7f]) == '\0') {
              uVar8 = (uint)*(ushort *)(param_1[0x80] + iVar12 * 2);
              uVar7 = uVar7 * uVar8 >> 8;
              uVar17 = uVar17 * uVar8 >> 8;
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < (int)uVar16);
        }
        uVar17 = *(ushort *)(param_1[0x82] + 6) * uVar17 >> 3;
        if (uVar17 < 0x3fffc1) {
          param_2 = (byte *)((*(ushort *)(param_1[0x82] + 6) * uVar7 >> 3) + uVar17 * 0x400);
        }
        else {
          param_2 = (byte *)0x7fffffff;
        }
      }
      if (param_2 < local_28) {
        local_20 = (undefined1 *)param_1[0x3e];
        local_28 = param_2;
      }
    }
    if (bVar1 == 0x80) {
      pbVar20 = puVar15 + 1;
      local_10 = (byte *)0x0;
      param_2 = pbVar20;
      pcVar13 = (char *)(param_1[0x3f] + 1);
      pbVar10 = (byte *)(iVar22 + 1);
      for (pbVar18 = pbVar23; pbVar18 != (byte *)0x0; pbVar18 = pbVar18 + -1) {
        bVar1 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        *pcVar13 = *param_2 - bVar1;
        param_2 = param_2 + 1;
        local_10 = pbVar23;
        pcVar13 = pcVar13 + 1;
      }
      if (local_10 < pbVar4) {
        iVar22 = (iVar22 + 1) - (int)pbVar20;
        local_10 = (byte *)((int)pbVar4 - (int)local_10);
        do {
          bVar1 = pbVar20[iVar22];
          bVar6 = *pbVar10;
          bVar11 = *pbVar20;
          pbVar10 = pbVar10 + 1;
          iVar12 = (uint)bVar6 - (uint)bVar1;
          pbVar20 = pbVar20 + 1;
          iVar14 = (uint)bVar11 - (uint)bVar1;
          local_8 = (byte *)iVar12;
          if (iVar12 < 0) {
            local_8 = (byte *)-iVar12;
          }
          iVar19 = iVar14;
          if (iVar14 < 0) {
            iVar19 = -iVar14;
          }
          iVar12 = iVar12 + iVar14;
          if (iVar12 < 0) {
            iVar12 = -iVar12;
          }
          if (((iVar19 < (int)local_8) || (iVar12 < (int)local_8)) &&
             (bVar11 = bVar1, iVar19 <= iVar12)) {
            bVar11 = bVar6;
          }
          *pcVar13 = *param_2 - bVar11;
          pcVar13 = pcVar13 + 1;
          param_2 = param_2 + 1;
          local_10 = (byte *)((int)local_10 + -1);
        } while (local_10 != (byte *)0x0);
      }
      local_20 = (undefined1 *)param_1[0x3f];
      goto LAB_004af434;
    }
  }
  if ((bVar1 & 0x80) != 0) {
    iVar12 = 0;
    param_1 = (int *)0x0;
    local_8 = local_28;
    if ((char)piVar5[0x7e] == '\x02') {
      uVar17 = (uint)local_28 & 0xffff;
      uVar7 = (uint)local_28 >> 10 & 0x3fffc0;
      if (uVar16 != 0) {
        do {
          if (*(char *)(iVar12 + piVar5[0x7f]) == '\x04') {
            uVar8 = (uint)*(ushort *)(piVar5[0x81] + iVar12 * 2);
            uVar17 = uVar17 * uVar8 >> 8;
            uVar7 = uVar7 * uVar8 >> 8;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < (int)uVar16);
      }
      uVar7 = *(ushort *)(piVar5[0x83] + 8) * uVar7 >> 3;
      if (uVar7 < 0x3fffc1) {
        local_8 = (byte *)((*(ushort *)(piVar5[0x83] + 8) * uVar17 >> 3) + uVar7 * 0x400);
      }
      else {
        local_8 = (byte *)0x7fffffff;
      }
    }
    param_2 = (byte *)0x0;
    pbVar20 = puVar15 + 1;
    pbVar25 = (byte *)(piVar5[0x3f] + 1);
    pbVar10 = (byte *)(iVar22 + 1);
    local_10 = pbVar20;
    for (pbVar18 = pbVar23; pbVar18 != (byte *)0x0; pbVar18 = pbVar18 + -1) {
      bVar1 = *local_10;
      bVar6 = *pbVar10;
      *pbVar25 = bVar1 - bVar6;
      uVar7 = (uint)(byte)(bVar1 - bVar6);
      pbVar25 = pbVar25 + 1;
      pbVar10 = pbVar10 + 1;
      local_10 = local_10 + 1;
      if (0x7f < uVar7) {
        uVar7 = 0x100 - uVar7;
      }
      param_1 = (int *)((int)param_1 + uVar7);
      param_2 = pbVar23;
    }
    if (param_2 < pbVar4) {
      iVar22 = (iVar22 + 1) - (int)pbVar20;
      do {
        bVar1 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        bVar6 = pbVar20[iVar22];
        bVar11 = *pbVar20;
        iVar12 = (uint)bVar1 - (uint)bVar6;
        pbVar20 = pbVar20 + 1;
        iVar14 = (uint)bVar11 - (uint)bVar6;
        local_14 = iVar12;
        if (iVar12 < 0) {
          local_14 = -iVar12;
        }
        iVar19 = iVar14;
        if (iVar14 < 0) {
          iVar19 = -iVar14;
        }
        iVar12 = iVar12 + iVar14;
        if (iVar12 < 0) {
          iVar12 = -iVar12;
        }
        if (((iVar19 < local_14) || (iVar12 < local_14)) && (bVar11 = bVar1, iVar12 < iVar19)) {
          bVar11 = bVar6;
        }
        bVar1 = *local_10;
        *pbVar25 = bVar1 - bVar11;
        uVar7 = (uint)(byte)(bVar1 - bVar11);
        pbVar25 = pbVar25 + 1;
        local_10 = local_10 + 1;
        if (0x7f < uVar7) {
          uVar7 = 0x100 - uVar7;
        }
        param_1 = (int *)((int)param_1 + uVar7);
      } while ((param_1 <= local_8) && (param_2 = param_2 + 1, param_2 < pbVar4));
    }
    if ((char)piVar5[0x7e] == '\x02') {
      uVar7 = (uint)param_1 & 0xffff;
      uVar17 = (uint)param_1 >> 10 & 0x3fffc0;
      iVar22 = 0;
      if (uVar16 != 0) {
        do {
          if (*(char *)(iVar22 + piVar5[0x7f]) == '\x04') {
            uVar8 = (uint)*(ushort *)(piVar5[0x80] + iVar22 * 2);
            uVar7 = uVar7 * uVar8 >> 8;
            uVar17 = uVar17 * uVar8 >> 8;
          }
          iVar22 = iVar22 + 1;
        } while (iVar22 < (int)uVar16);
      }
      uVar17 = *(ushort *)(piVar5[0x82] + 8) * uVar17 >> 3;
      if (uVar17 < 0x3fffc1) {
        param_1 = (int *)((*(ushort *)(piVar5[0x82] + 8) * uVar7 >> 3) + uVar17 * 0x400);
      }
      else {
        param_1 = (int *)0x7fffffff;
      }
    }
    if (param_1 < local_28) {
      local_20 = (undefined1 *)piVar5[0x3f];
    }
  }
LAB_004af434:
  FUN_004af490(piVar5,(int)local_20);
  if (*(char *)((int)piVar5 + 0x1f9) != '\0') {
    iVar22 = 1;
    if (1 < uVar16) {
      do {
        puVar15 = (undefined1 *)(piVar5[0x7f] + iVar22);
        iVar22 = iVar22 + 1;
        *puVar15 = puVar15[-1];
      } while (iVar22 < (int)uVar16);
    }
    *(undefined1 *)(piVar5[0x7f] + iVar22) = *local_20;
  }
  return;
}

