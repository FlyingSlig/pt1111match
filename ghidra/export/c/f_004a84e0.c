// FUNCTION: PORT1111 0x004a84e0
// name: FUN_004a84e0
// sig: undefined FUN_004a84e0(int * param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004a84e0(int *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  ushort uVar7;
  int *piVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  short sVar13;
  int iVar14;
  byte *pbVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  byte local_20;
  double local_18;
  
  piVar8 = param_1;
  uVar18 = param_1[0x1c];
  bVar4 = *(byte *)((int)param_1 + 0x126);
  if (((uVar18 & 0x100) != 0) && ((uVar18 & 0x1000) != 0)) {
    if ((bVar4 & 2) != 0) {
      if (bVar4 == 3) {
        pbVar15 = (byte *)((uint)*(byte *)(param_1 + 0x4e) * 3 + param_1[0x45]);
        *(ushort *)((int)param_1 + 0x13a) = (ushort)*pbVar15;
        *(ushort *)(param_1 + 0x4f) = (ushort)pbVar15[1];
        *(ushort *)((int)param_1 + 0x13e) = (ushort)pbVar15[2];
      }
      goto switchD_004a852a_caseD_3;
    }
    switch(*(undefined1 *)((int)param_1 + 0x127)) {
    case 1:
      sVar13 = (short)param_1[0x50] * 0xff;
      break;
    case 2:
      sVar13 = (short)param_1[0x50] * 0x55;
      break;
    default:
      goto switchD_004a852a_caseD_3;
    case 4:
      sVar13 = (short)param_1[0x50] * 0x11;
      break;
    case 8:
    case 0x10:
      sVar13 = (short)param_1[0x50];
      goto LAB_004a8544;
    }
    *(short *)(param_1 + 0x50) = sVar13;
LAB_004a8544:
    *(short *)((int)param_1 + 0x13e) = sVar13;
    *(short *)(param_1 + 0x4f) = sVar13;
    *(short *)((int)param_1 + 0x13a) = sVar13;
  }
switchD_004a852a_caseD_3:
  *(int *)((int)param_1 + 0x142) = param_1[0x4e];
  *(int *)((int)param_1 + 0x146) = param_1[0x4f];
  *(short *)((int)param_1 + 0x14a) = (short)param_1[0x50];
  if ((uVar18 & 0x602000) == 0) {
    if (((uVar18 & 0x80) != 0) && (bVar4 == 3)) {
      bVar9 = *(byte *)(param_1 + 0x4f);
      bVar10 = *(byte *)((int)param_1 + 0x13a);
      uVar7 = *(ushort *)((int)param_1 + 0x11a);
      iVar17 = 0;
      bVar11 = *(byte *)((int)param_1 + 0x13e);
      if (uVar7 != 0) {
        pbVar15 = (byte *)(param_1[0x45] + 2);
        do {
          bVar12 = *(byte *)(param_1[0x62] + iVar17);
          if (bVar12 == 0) {
            *(ushort *)(pbVar15 + -2) = CONCAT11(bVar9,bVar10);
            *pbVar15 = bVar11;
          }
          else if (bVar12 != 0xff) {
            uVar18 = (0xff - (uint)bVar12) * (uint)bVar10 + 0x80 + (uint)pbVar15[-2] * (uint)bVar12
                     & 0xffff;
            pbVar15[-2] = (byte)((uVar18 >> 8) + uVar18 >> 8);
            uVar18 = (0xff - (uint)*(byte *)(param_1[0x62] + iVar17)) * (uint)bVar9 + 0x80 +
                     (uint)pbVar15[-1] * (uint)*(byte *)(param_1[0x62] + iVar17) & 0xffff;
            pbVar15[-1] = (byte)((uVar18 >> 8) + uVar18 >> 8);
            uVar18 = (0xff - (uint)*(byte *)(param_1[0x62] + iVar17)) * (uint)bVar11 + 0x80 +
                     (uint)*pbVar15 * (uint)*(byte *)(param_1[0x62] + iVar17) & 0xffff;
            *pbVar15 = (byte)((uVar18 >> 8) + uVar18 >> 8);
          }
          iVar17 = iVar17 + 1;
          pbVar15 = pbVar15 + 3;
        } while (iVar17 < (int)(uint)uVar7);
      }
    }
    goto LAB_004a8a01;
  }
  FUN_004abfb0(param_1);
  if ((*(byte *)(param_1 + 0x1c) & 0x80) == 0) {
    if (bVar4 == 3) {
      uVar18 = (uint)*(ushort *)(param_1 + 0x46);
      if (uVar18 != 0) {
        pbVar15 = (byte *)(param_1[0x45] + 2);
        do {
          pbVar15[-2] = *(byte *)((uint)pbVar15[-2] + param_1[0x59]);
          pbVar15[-1] = *(byte *)((uint)pbVar15[-1] + param_1[0x59]);
          uVar18 = uVar18 - 1;
          *pbVar15 = *(byte *)((uint)*pbVar15 + param_1[0x59]);
          pbVar15 = pbVar15 + 3;
        } while (uVar18 != 0);
      }
    }
    goto LAB_004a8a01;
  }
  if (bVar4 != 3) {
    if ((bVar4 & 2) == 0) {
      FUN_004b3160();
      lVar20 = __ftol();
      *(short *)((int)param_1 + 0x14a) = (short)lVar20;
      FUN_004b3160();
      lVar20 = __ftol();
      *(short *)(param_1 + 0x50) = (short)lVar20;
    }
    else {
      FUN_004b3160();
      lVar20 = __ftol();
      *(short *)(param_1 + 0x51) = (short)lVar20;
      FUN_004b3160();
      lVar20 = __ftol();
      *(short *)((int)param_1 + 0x146) = (short)lVar20;
      FUN_004b3160();
      lVar20 = __ftol();
      *(short *)(param_1 + 0x52) = (short)lVar20;
      FUN_004b3160();
      lVar20 = __ftol();
      *(short *)((int)param_1 + 0x13a) = (short)lVar20;
      FUN_004b3160();
      lVar20 = __ftol();
      *(short *)(param_1 + 0x4f) = (short)lVar20;
      FUN_004b3160();
      lVar20 = __ftol();
      *(short *)((int)param_1 + 0x13e) = (short)lVar20;
    }
    goto LAB_004a8a01;
  }
  cVar5 = (char)param_1[0x4c];
  uVar7 = *(ushort *)(param_1 + 0x46);
  if (cVar5 == '\x02') {
    iVar17 = param_1[0x59];
    puVar1 = (ushort *)((int)param_1 + 0x13a);
    puVar2 = (ushort *)(param_1 + 0x4f);
    puVar3 = (ushort *)((int)param_1 + 0x13e);
    param_1._0_2_ =
         CONCAT11(*(undefined1 *)((uint)*puVar2 + iVar17),*(undefined1 *)((uint)*puVar1 + iVar17));
    bVar9 = *(byte *)((uint)*puVar3 + iVar17);
    iVar17 = piVar8[0x5b];
    bVar10 = *(byte *)(iVar17 + (uint)*puVar1);
    bVar11 = *(byte *)(iVar17 + (uint)*puVar2);
    bVar12 = *(byte *)(iVar17 + (uint)*puVar3);
  }
  else {
    if (cVar5 == '\x01') {
LAB_004a86e8:
      local_18 = 1.0;
    }
    else if (cVar5 == '\x02') {
      local_18 = (double)((float)_DAT_004c8400 / ((float)param_1[0x58] * (float)param_1[0x57]));
    }
    else {
      if (cVar5 != '\x03') goto LAB_004a86e8;
      local_18 = (double)((float)_DAT_004c8400 / ((float)param_1[0x58] * (float)param_1[0x4d]));
    }
    if (_DAT_004c85d0 <= ABS(local_18 - _DAT_004c8400)) {
      FUN_004b3160();
      lVar20 = __ftol();
      FUN_004b3160();
      lVar19 = __ftol();
      param_1._0_2_ = CONCAT11((char)lVar19,(char)lVar20);
      FUN_004b3160();
      lVar20 = __ftol();
      bVar9 = (byte)lVar20;
    }
    else {
      bVar9 = *(byte *)((int)param_1 + 0x13e);
      param_1._0_2_ = CONCAT11((char)param_1[0x4f],*(undefined1 *)((int)param_1 + 0x13a));
    }
    FUN_004b3160();
    lVar20 = __ftol();
    bVar10 = (byte)lVar20;
    FUN_004b3160();
    lVar20 = __ftol();
    bVar11 = (byte)lVar20;
    FUN_004b3160();
    lVar20 = __ftol();
    bVar12 = (byte)lVar20;
  }
  iVar17 = 0;
  if (uVar7 != 0) {
    pbVar15 = (byte *)(piVar8[0x45] + 2);
    do {
      if ((iVar17 < (int)(uint)*(ushort *)((int)piVar8 + 0x11a)) &&
         (bVar6 = *(byte *)(piVar8[0x62] + iVar17), bVar6 != 0xff)) {
        if (bVar6 == 0) {
          *(undefined2 *)(pbVar15 + -2) = param_1._0_2_;
          *pbVar15 = bVar9;
        }
        else {
          uVar18 = (uint)*(byte *)((uint)pbVar15[-2] + piVar8[0x5b]) * (uint)bVar6 + 0x80 +
                   (0xff - (uint)bVar6) * (uint)bVar10 & 0xffff;
          pbVar15[-2] = *(byte *)(((int)((uVar18 >> 8) + uVar18) >> 8 & 0xffU) + piVar8[0x5a]);
          uVar18 = (uint)*(byte *)((uint)pbVar15[-1] + piVar8[0x5b]) *
                   (uint)*(byte *)(piVar8[0x62] + iVar17) + 0x80 +
                   (0xff - (uint)*(byte *)(piVar8[0x62] + iVar17)) * (uint)bVar11 & 0xffff;
          pbVar15[-1] = *(byte *)(((int)((uVar18 >> 8) + uVar18) >> 8 & 0xffU) + piVar8[0x5a]);
          uVar18 = (uint)*(byte *)((uint)*pbVar15 + piVar8[0x5b]) *
                   (uint)*(byte *)(piVar8[0x62] + iVar17) + 0x80 +
                   (0xff - (uint)*(byte *)(piVar8[0x62] + iVar17)) * (uint)bVar12 & 0xffff;
          *pbVar15 = *(byte *)(((int)((uVar18 >> 8) + uVar18) >> 8 & 0xffU) + piVar8[0x5a]);
        }
      }
      else {
        pbVar15[-2] = *(byte *)((uint)pbVar15[-2] + piVar8[0x59]);
        pbVar15[-1] = *(byte *)((uint)pbVar15[-1] + piVar8[0x59]);
        *pbVar15 = *(byte *)((uint)*pbVar15 + piVar8[0x59]);
      }
      iVar17 = iVar17 + 1;
      pbVar15 = pbVar15 + 3;
    } while (iVar17 < (int)(uint)uVar7);
  }
LAB_004a8a01:
  if (((*(byte *)(piVar8 + 0x1c) & 8) != 0) && (bVar4 == 3)) {
    iVar16 = 8 - (uint)*(byte *)(piVar8 + 0x5f);
    param_1 = (int *)(8 - (uint)*(byte *)((int)piVar8 + 0x17d));
    iVar17 = 8 - (uint)*(byte *)((int)piVar8 + 0x17e);
    if ((iVar16 < 0) || (8 < iVar16)) {
      iVar16 = 0;
    }
    if (((int)param_1 < 0) || (8 < (int)param_1)) {
      param_1 = (int *)0x0;
    }
    if ((iVar17 < 0) || (8 < iVar17)) {
      iVar17 = 0;
    }
    if (*(ushort *)(piVar8 + 0x46) != 0) {
      iVar14 = 0;
      uVar18 = (uint)*(ushort *)(piVar8 + 0x46);
      do {
        *(byte *)(piVar8[0x45] + iVar14) = *(byte *)(piVar8[0x45] + iVar14) >> ((byte)iVar16 & 0x1f)
        ;
        pbVar15 = (byte *)(piVar8[0x45] + 1 + iVar14);
        *pbVar15 = *pbVar15 >> ((byte)param_1 & 0x1f);
        pbVar15 = (byte *)(piVar8[0x45] + 2 + iVar14);
        local_20 = (byte)iVar17;
        iVar14 = iVar14 + 3;
        *pbVar15 = *pbVar15 >> (local_20 & 0x1f);
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
  }
  return;
}

