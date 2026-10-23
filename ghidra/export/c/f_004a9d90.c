// FUNCTION: PORT1111 0x004a9d90
// name: FUN_004a9d90
// sig: undefined4 FUN_004a9d90(uint param_1, int * param_2, byte * param_3)


undefined4 __cdecl FUN_004a9d90(uint param_1,int *param_2,byte *param_3)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  char cVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 local_24;
  uint local_8;
  uint local_4;
  
  iVar1 = *param_2;
  local_24 = 0;
  if ((*(byte *)(param_2 + 2) & 2) == 0) {
    return 0;
  }
  uVar11 = (uint)*(ushort *)(param_1 + 0x22a);
  uVar14 = (uint)*(ushort *)(param_1 + 0x22c);
  uVar13 = (uint)*(ushort *)(param_1 + 0x22e);
  if (*(byte *)(param_2 + 2) == 2) {
    if (*(char *)((int)param_2 + 9) == '\b') {
      iVar5 = iVar1;
      pbVar6 = param_3;
      pbVar7 = param_3;
      if ((*(int *)(param_1 + 0x168) == 0) || (*(int *)(param_1 + 0x16c) == 0)) {
        for (; iVar5 != 0; iVar5 = iVar5 + -1) {
          bVar10 = *pbVar6;
          local_4 = (uint)bVar10;
          if ((bVar10 == pbVar6[1]) && (bVar10 == pbVar6[2])) {
            *pbVar7 = pbVar6[2];
          }
          else {
            local_24 = 1;
            *pbVar7 = (byte)(pbVar6[2] * uVar13 + pbVar6[1] * uVar14 + local_4 * uVar11 >> 0xf);
          }
          pbVar6 = pbVar6 + 3;
          pbVar7 = pbVar7 + 1;
        }
      }
      else {
        for (; iVar5 != 0; iVar5 = iVar5 + -1) {
          iVar2 = *(int *)(param_1 + 0x16c);
          bVar10 = *(byte *)((uint)*pbVar6 + iVar2);
          local_4 = (uint)bVar10;
          if ((bVar10 == *(byte *)((uint)pbVar6[1] + iVar2)) &&
             (bVar10 == *(byte *)((uint)pbVar6[2] + iVar2))) {
            *pbVar7 = pbVar6[2];
          }
          else {
            local_24 = 1;
            *pbVar7 = *(byte *)((*(byte *)((uint)pbVar6[2] + iVar2) * uVar13 +
                                 *(byte *)((uint)pbVar6[1] + iVar2) * uVar14 + local_4 * uVar11 >>
                                0xf) + *(int *)(param_1 + 0x168));
          }
          pbVar6 = pbVar6 + 3;
          pbVar7 = pbVar7 + 1;
        }
      }
    }
    else {
      iVar5 = iVar1;
      pbVar6 = param_3;
      pbVar7 = param_3;
      if ((*(int *)(param_1 + 0x178) == 0) || (*(int *)(param_1 + 0x174) == 0)) {
        for (; iVar5 != 0; iVar5 = iVar5 + -1) {
          uVar12 = CONCAT11(*pbVar6,pbVar6[1]);
          if ((uVar12 != CONCAT11(pbVar6[2],pbVar6[3])) || (uVar12 != CONCAT11(pbVar6[4],pbVar6[5]))
             ) {
            local_24 = 1;
          }
          uVar9 = CONCAT11(pbVar6[4],pbVar6[5]) * uVar13 + CONCAT11(pbVar6[2],pbVar6[3]) * uVar14 +
                  uVar12 * uVar11 >> 0xf;
          *pbVar7 = (byte)(uVar9 >> 8);
          pbVar7[1] = (byte)uVar9;
          pbVar6 = pbVar6 + 6;
          pbVar7 = pbVar7 + 2;
        }
      }
      else {
        for (; iVar5 != 0; iVar5 = iVar5 + -1) {
          uVar12 = CONCAT11(*pbVar6,pbVar6[1]);
          uVar3 = CONCAT11(pbVar6[2],pbVar6[3]);
          uVar4 = CONCAT11(pbVar6[4],pbVar6[5]);
          if ((uVar12 != uVar3) || (uVar12 != uVar4)) {
            bVar10 = (byte)*(undefined2 *)(param_1 + 0x158);
            uVar9 = *(ushort *)
                     (*(int *)(*(int *)(param_1 + 0x178) + ((uVar12 & 0xff) >> (bVar10 & 0x1f)) * 4)
                     + (uint)*pbVar6 * 2) * uVar11 +
                    *(ushort *)
                     (*(int *)(*(int *)(param_1 + 0x178) + ((uVar3 & 0xff) >> (bVar10 & 0x1f)) * 4)
                     + (uint)pbVar6[2] * 2) * uVar14 +
                    *(ushort *)
                     (*(int *)(*(int *)(param_1 + 0x178) + ((uVar4 & 0xff) >> (bVar10 & 0x1f)) * 4)
                     + (uint)pbVar6[4] * 2) * uVar13 >> 0xf;
            uVar12 = *(ushort *)
                      (*(int *)(*(int *)(param_1 + 0x174) + ((uVar9 & 0xff) >> (bVar10 & 0x1f)) * 4)
                      + ((uVar9 & 0xffff) >> 8) * 2);
            local_24 = 1;
          }
          *pbVar7 = (byte)(uVar12 >> 8);
          pbVar7[1] = (byte)uVar12;
          pbVar6 = pbVar6 + 6;
          pbVar7 = pbVar7 + 2;
        }
      }
    }
  }
  if ((char)param_2[2] == '\x06') {
    if (*(char *)((int)param_2 + 9) == '\b') {
      iVar5 = iVar1;
      pbVar6 = param_3;
      if ((*(int *)(param_1 + 0x168) == 0) || (pbVar7 = param_3, *(int *)(param_1 + 0x16c) == 0)) {
        for (; iVar5 != 0; iVar5 = iVar5 + -1) {
          bVar10 = *pbVar6;
          local_4 = (uint)bVar10;
          param_1 = (uint)pbVar6[1];
          local_8 = (uint)pbVar6[2];
          if ((bVar10 != pbVar6[1]) || (bVar10 != pbVar6[2])) {
            local_24 = 1;
          }
          *param_3 = (byte)((param_1 + local_4) * uVar14 + local_8 * uVar13 >> 8);
          param_3[1] = pbVar6[3];
          param_3 = param_3 + 2;
          pbVar6 = pbVar6 + 4;
        }
      }
      else {
        for (; iVar5 != 0; iVar5 = iVar5 + -1) {
          iVar2 = *(int *)(param_1 + 0x16c);
          bVar10 = *(byte *)((uint)*pbVar6 + iVar2);
          local_4 = (uint)bVar10;
          param_3 = (byte *)(uint)*(byte *)((uint)pbVar6[2] + iVar2);
          if ((bVar10 != *(byte *)((uint)pbVar6[1] + iVar2)) ||
             (bVar10 != *(byte *)((uint)pbVar6[2] + iVar2))) {
            local_24 = 1;
          }
          *pbVar7 = *(byte *)(((int)param_3 * uVar13 + *(byte *)((uint)pbVar6[1] + iVar2) * uVar14 +
                               local_4 * uVar11 >> 0xf) + *(int *)(param_1 + 0x168));
          pbVar7[1] = pbVar6[3];
          pbVar6 = pbVar6 + 4;
          pbVar7 = pbVar7 + 2;
        }
      }
    }
    else {
      iVar5 = iVar1;
      pbVar6 = param_3;
      if ((*(int *)(param_1 + 0x178) == 0) || (*(int *)(param_1 + 0x174) == 0)) {
        for (; iVar5 != 0; iVar5 = iVar5 + -1) {
          uVar12 = CONCAT11(*pbVar6,pbVar6[1]);
          if ((uVar12 != CONCAT11(pbVar6[2],pbVar6[3])) || (uVar12 != CONCAT11(pbVar6[4],pbVar6[5]))
             ) {
            local_24 = 1;
          }
          uVar9 = CONCAT11(pbVar6[4],pbVar6[5]) * uVar13 + CONCAT11(pbVar6[2],pbVar6[3]) * uVar14 +
                  uVar12 * uVar11 >> 0xf;
          *param_3 = (byte)(uVar9 >> 8);
          param_3[1] = (byte)uVar9;
          param_3[2] = pbVar6[6];
          param_3[3] = pbVar6[7];
          param_3 = param_3 + 4;
          pbVar6 = pbVar6 + 8;
        }
      }
      else {
        for (; iVar5 != 0; iVar5 = iVar5 + -1) {
          uVar12 = CONCAT11(*pbVar6,pbVar6[1]);
          uVar3 = CONCAT11(pbVar6[2],pbVar6[3]);
          uVar4 = CONCAT11(pbVar6[4],pbVar6[5]);
          if ((uVar12 != uVar3) || (uVar12 != uVar4)) {
            bVar10 = (byte)*(undefined2 *)(param_1 + 0x158);
            uVar9 = *(ushort *)
                     (*(int *)(*(int *)(param_1 + 0x178) + ((uVar12 & 0xff) >> (bVar10 & 0x1f)) * 4)
                     + (uint)*pbVar6 * 2) * uVar11 +
                    *(ushort *)
                     (*(int *)(*(int *)(param_1 + 0x178) + ((uVar3 & 0xff) >> (bVar10 & 0x1f)) * 4)
                     + (uint)pbVar6[2] * 2) * uVar14 +
                    *(ushort *)
                     (*(int *)(*(int *)(param_1 + 0x178) + ((uVar4 & 0xff) >> (bVar10 & 0x1f)) * 4)
                     + (uint)pbVar6[4] * 2) * uVar13 >> 0xf;
            uVar12 = *(ushort *)
                      (*(int *)(*(int *)(param_1 + 0x174) + ((uVar9 & 0xff) >> (bVar10 & 0x1f)) * 4)
                      + ((uVar9 & 0xffff) >> 8) * 2);
            local_24 = 1;
          }
          *param_3 = (byte)(uVar12 >> 8);
          param_3[1] = (byte)uVar12;
          param_3[2] = pbVar6[6];
          param_3[3] = pbVar6[7];
          param_3 = param_3 + 4;
          pbVar6 = pbVar6 + 8;
        }
      }
    }
  }
  cVar8 = *(char *)((int)param_2 + 10) + -2;
  *(char *)((int)param_2 + 10) = cVar8;
  *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) & 0xfd;
  bVar10 = *(char *)((int)param_2 + 9) * cVar8;
  *(byte *)((int)param_2 + 0xb) = bVar10;
  param_2[1] = (uint)bVar10 * iVar1 + 7 >> 3;
  return local_24;
}

