// FUNCTION: PORT1111 0x004af7e0
// name: FUN_004af7e0
// sig: undefined FUN_004af7e0(int * param_1, byte * param_2, byte * param_3)


void __cdecl FUN_004af7e0(int *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  undefined2 uVar5;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  int *piVar12;
  uint local_20 [4];
  int local_10 [4];
  uint uVar6;
  
  pbVar11 = param_2;
  if (*(byte *)(param_1 + 2) != 3) {
    bVar1 = *(byte *)((int)param_1 + 9);
    if ((*(byte *)(param_1 + 2) & 2) == 0) {
      uVar7 = 1;
      local_10[0] = (uint)bVar1 - (uint)param_3[3];
      local_20[0] = (uint)param_3[3];
    }
    else {
      uVar2 = (uint)bVar1;
      uVar7 = 3;
      local_10[0] = uVar2 - *param_3;
      local_20[0] = (uint)*param_3;
      local_20[1] = (uint)param_3[1];
      local_10[1] = uVar2 - param_3[1];
      local_20[2] = (uint)param_3[2];
      local_10[2] = uVar2 - param_3[2];
    }
    piVar12 = param_1;
    if ((*(byte *)(param_1 + 2) & 4) != 0) {
      piVar12 = (int *)(uint)param_3[4];
      local_20[uVar7] = (uint)piVar12;
      local_10[uVar7] = (uint)bVar1 - (int)piVar12;
      uVar7 = uVar7 + 1;
    }
    if (bVar1 < 8) {
      piVar12 = param_1 + 1;
      if ((param_3[3] == 1) && (bVar1 == 2)) {
        param_1._0_1_ = 0x55;
      }
      else if ((bVar1 != 4) || (param_1._0_1_ = 0x11, param_3[3] != 3)) {
        param_1._0_1_ = 0xff;
      }
      param_2 = (byte *)*piVar12;
      if ((byte *)*piVar12 != (byte *)0x0) {
        do {
          bVar1 = *pbVar11;
          *pbVar11 = 0;
          if ((int)-local_20[0] < local_10[0]) {
            iVar8 = -local_10[0];
            iVar10 = local_10[0];
            do {
              if (iVar10 < 1) {
                bVar4 = bVar1 >> ((byte)iVar8 & 0x1f) & (byte)param_1;
              }
              else {
                bVar4 = bVar1 << ((byte)iVar10 & 0x1f);
              }
              iVar8 = iVar8 + local_20[0];
              *pbVar11 = *pbVar11 | bVar4;
              iVar10 = iVar10 - local_20[0];
            } while ((int)-local_20[0] < iVar10);
          }
          param_2 = param_2 + -1;
          pbVar11 = pbVar11 + 1;
        } while (param_2 != (byte *)0x0);
        return;
      }
    }
    else if (bVar1 == 8) {
      iVar10 = *param_1;
      param_2 = (byte *)0x0;
      if ((byte *)(iVar10 * uVar7) != (byte *)0x0) {
        do {
          bVar1 = *pbVar11;
          *pbVar11 = 0;
          iVar8 = local_10[(uint)param_2 % uVar7];
          uVar2 = local_20[(uint)param_2 % uVar7];
          if ((int)-uVar2 < iVar8) {
            param_1 = (int *)-iVar8;
            do {
              if (iVar8 < 1) {
                bVar4 = bVar1 >> ((byte)param_1 & 0x1f);
              }
              else {
                bVar4 = bVar1 << ((byte)iVar8 & 0x1f);
              }
              iVar8 = iVar8 - uVar2;
              param_1 = (int *)((int)param_1 + uVar2);
              *pbVar11 = *pbVar11 | bVar4;
            } while ((int)-uVar2 < iVar8);
          }
          param_2 = param_2 + 1;
          pbVar11 = pbVar11 + 1;
        } while (param_2 < (byte *)(iVar10 * uVar7));
        return;
      }
    }
    else {
      iVar10 = *param_1;
      param_2 = (byte *)0x0;
      if ((byte *)(iVar10 * uVar7) != (byte *)0x0) {
        do {
          uVar6 = 0;
          uVar5 = 0;
          piVar12 = (int *)(CONCAT22((short)((uint)piVar12 >> 0x10),(ushort)*pbVar11) * 0x100 +
                           CONCAT22((short)(ZEXT48(param_2) / (ulonglong)uVar7 >> 0x10),
                                    (ushort)pbVar11[1]));
          iVar8 = local_10[(uint)param_2 % uVar7];
          uVar2 = local_20[(uint)param_2 % uVar7];
          if ((int)-uVar2 < iVar8) {
            iVar3 = -iVar8;
            do {
              if (iVar8 < 1) {
                uVar9 = (uint)(ushort)((ushort)piVar12 >> ((byte)iVar3 & 0x1f));
              }
              else {
                uVar9 = (int)piVar12 << ((byte)iVar8 & 0x1f);
              }
              uVar6 = uVar6 | uVar9;
              uVar5 = (undefined2)uVar6;
              iVar8 = iVar8 - uVar2;
              iVar3 = iVar3 + uVar2;
            } while ((int)-uVar2 < iVar8);
          }
          *pbVar11 = (byte)((ushort)uVar5 >> 8);
          pbVar11[1] = (byte)uVar5;
          pbVar11 = pbVar11 + 2;
          param_2 = param_2 + 1;
        } while (param_2 < (byte *)(iVar10 * uVar7));
      }
    }
  }
  return;
}

