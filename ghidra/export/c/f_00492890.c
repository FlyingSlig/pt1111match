// FUNCTION: PORT1111 0x00492890
// name: FUN_00492890
// sig: undefined FUN_00492890(void * this, uint * param_1, int param_2, int param_3, int param_4, int param_5, int param_6)


void __thiscall
FUN_00492890(void *this,uint *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  char *pcVar13;
  int iVar14;
  uint *puVar15;
  int iStack_8;
  
  iVar3 = *(int *)((int)this + 0x14);
  iVar5 = (**(code **)(*(int *)this + 4))();
  if (param_4 == iVar5) {
    if (param_3 < param_5) {
      iVar5 = param_3 * 0xe;
      param_3 = param_5 - param_3;
      do {
        if (*(short *)(iVar5 + *(int *)((int)this + 0x3c)) != 0) {
          pbVar12 = *(byte **)(iVar5 + *(int *)((int)this + 0x3c) + 10);
          bVar1 = *pbVar12;
          puVar15 = param_1;
          while (bVar1 != 0) {
            if (bVar1 == 1) {
              puVar15 = puVar15 + pbVar12[1];
              pbVar12 = pbVar12 + 2;
            }
            else if (bVar1 == 2) {
              bVar1 = pbVar12[1];
              pbVar4 = pbVar12;
              for (uVar9 = (uint)bVar1; uVar9 != 0; uVar9 = uVar9 - 1) {
                *puVar15 = CONCAT22(*(undefined2 *)(iVar3 + (uint)pbVar4[3] * 2),
                                    *(undefined2 *)(iVar3 + (uint)pbVar4[2] * 2));
                puVar15 = puVar15 + 1;
                pbVar4 = pbVar4 + 2;
              }
              pbVar12 = pbVar12 + (uint)bVar1 * 2 + 2;
            }
            else if (bVar1 == 3) {
              uVar9 = *puVar15;
              uVar6 = (uVar9 & 0x3e0) << 0x10 | uVar9 & 0x7c1f;
              uVar8 = (uint)*(ushort *)(iVar3 + (uint)pbVar12[1] * 2);
              uVar6 = uVar6 + ((((uVar8 & 0x3e0) << 0x10 | uVar8 & 0x7c1f) - uVar6) *
                               ((pbVar12[3] & 0xf) * 2 + 1) >> 5);
              uVar9 = uVar9 >> 0x10 & 0x7c1f | uVar9 & 0x3e00000;
              uVar8 = (uint)*(ushort *)(iVar3 + (uint)pbVar12[2] * 2);
              uVar9 = uVar9 + ((((uVar8 & 0x3e0) << 0x10 | uVar8 & 0x7c1f) - uVar9) *
                               ((pbVar12[3] >> 3 & 0x1e) + 1) >> 5);
              *puVar15 = (uVar9 & 0x7c1f) << 0x10 | uVar6 >> 0x10 & 0x3e0 | uVar6 & 0x7c1f |
                         uVar9 & 0x3e00000;
              puVar15 = puVar15 + 1;
              pbVar12 = pbVar12 + 4;
            }
            bVar1 = *pbVar12;
          }
        }
        param_1 = (uint *)((int)param_1 + param_6);
        iVar5 = iVar5 + 0xe;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      return;
    }
  }
  else if (param_3 < param_5) {
    iVar5 = param_3 * 0xe;
    iStack_8 = param_5 - param_3;
    do {
      if (*(short *)(iVar5 + *(int *)((int)this + 0x3c)) != 0) {
        pcVar13 = *(char **)(iVar5 + *(int *)((int)this + 0x3c) + 10);
        iVar14 = -param_2;
        cVar2 = *pcVar13;
        param_3 = iVar14;
        puVar15 = param_1;
        while (cVar2 != '\0') {
          if (cVar2 == '\x01') {
            iVar10 = (uint)(byte)pcVar13[1] * 2;
            if (iVar14 < 0) {
              if (0 < iVar10 + iVar14) {
                param_3 = -iVar14;
                goto LAB_00492d20;
              }
            }
            else {
              param_3 = 0;
LAB_00492d20:
              iVar7 = param_4 - iVar14;
              if (iVar10 < param_4 - iVar14) {
                iVar7 = iVar10;
              }
              puVar15 = (uint *)((int)puVar15 + (iVar7 - param_3) * 2);
            }
            iVar14 = iVar14 + iVar10;
            pcVar13 = pcVar13 + 2;
LAB_00492d36:
            param_3 = iVar14;
            if (param_4 <= iVar14) break;
          }
          else {
            if (cVar2 == '\x02') {
              iVar10 = (uint)(byte)pcVar13[1] * 2;
              if (iVar14 < 0) {
                if (0 < iVar10 + iVar14) {
                  iVar7 = -iVar14;
                  goto LAB_00492c90;
                }
              }
              else {
                iVar7 = 0;
LAB_00492c90:
                iVar11 = iVar10;
                if (param_4 - iVar14 <= iVar10) {
                  iVar11 = param_4 - iVar14;
                }
                param_3 = iVar11 - iVar7 >> 1;
                pbVar12 = (byte *)(pcVar13 + iVar7 + 2);
                if (0 < param_3) {
                  do {
                    *puVar15 = CONCAT22(*(undefined2 *)(iVar3 + (uint)pbVar12[1] * 2),
                                        *(undefined2 *)(iVar3 + (uint)*pbVar12 * 2));
                    puVar15 = puVar15 + 1;
                    pbVar12 = pbVar12 + 2;
                    param_3 = param_3 + -1;
                  } while (param_3 != 0);
                }
                if ((iVar11 - iVar7 & 1U) != 0) {
                  *(ushort *)puVar15 = *(ushort *)(iVar3 + (uint)*pbVar12 * 2);
                  puVar15 = (uint *)((int)puVar15 + 2);
                }
              }
              pcVar13 = pcVar13 + iVar10 + 2;
              iVar14 = iVar14 + iVar10;
              goto LAB_00492d36;
            }
            if (cVar2 == '\x03') {
              if (iVar14 < 0) {
                if (iVar14 != -2 && -1 < iVar14 + 2) {
                  iVar10 = -iVar14;
                  goto LAB_00492adf;
                }
LAB_00492c68:
                iVar14 = iVar14 + 2;
                pcVar13 = pcVar13 + 4;
              }
              else {
                iVar10 = 0;
LAB_00492adf:
                iVar7 = param_4 - iVar14;
                if (2 < iVar7) {
                  iVar7 = 2;
                }
                if (iVar7 - iVar10 != 2) {
                  uVar9 = (uint)(ushort)*puVar15;
                  if (iVar10 == 0) {
                    uVar6 = (uVar9 & 0x3e0) << 0x10 | uVar9 & 0x7c1f;
                    uVar9 = (uint)*(ushort *)(iVar3 + (uint)(byte)pcVar13[1] * 2);
                    iVar10 = ((uVar9 & 0x3e0) << 0x10 | uVar9 & 0x7c1f) - uVar6;
                    uVar9 = ((byte)pcVar13[3] & 0xf) * 2;
                  }
                  else {
                    uVar6 = (uVar9 & 0x3e0) << 0x10 | uVar9 & 0x7c1f;
                    uVar9 = (uint)*(ushort *)(iVar3 + (uint)(byte)pcVar13[2] * 2);
                    iVar10 = ((uVar9 & 0x3e0) << 0x10 | uVar9 & 0x7c1f) - uVar6;
                    uVar9 = ((byte)pcVar13[3] & 0xf0) >> 3;
                  }
                  uVar9 = uVar6 + (iVar10 * (uVar9 + 1) >> 5) & 0x3e07c1f;
                  *(ushort *)puVar15 = (ushort)(uVar9 >> 0x10) | (ushort)uVar9;
                  puVar15 = (uint *)((int)puVar15 + 2);
                  goto LAB_00492c68;
                }
                uVar9 = *puVar15;
                uVar6 = (uVar9 & 0x3e0) << 0x10 | uVar9 & 0x7c1f;
                uVar8 = (uint)*(ushort *)(iVar3 + (uint)(byte)pcVar13[1] * 2);
                uVar6 = uVar6 + ((((uVar8 & 0x3e0) << 0x10 | uVar8 & 0x7c1f) - uVar6) *
                                 (((byte)pcVar13[3] & 0xf) * 2 + 1) >> 5);
                uVar9 = uVar9 >> 0x10 & 0x7c1f | uVar9 & 0x3e00000;
                uVar8 = (uint)*(ushort *)(iVar3 + (uint)(byte)pcVar13[2] * 2);
                uVar9 = uVar9 + ((((uVar8 & 0x3e0) << 0x10 | uVar8 & 0x7c1f) - uVar9) *
                                 (((byte)pcVar13[3] >> 3 & 0x1e) + 1) >> 5);
                *puVar15 = uVar6 >> 0x10 & 0x3e0 | (uVar9 & 0x7c1f) << 0x10 | uVar9 & 0x3e00000 |
                           uVar6 & 0x7c1f;
                puVar15 = puVar15 + 1;
                iVar14 = param_3 + 2;
                pcVar13 = pcVar13 + 4;
              }
              goto LAB_00492d36;
            }
          }
          cVar2 = *pcVar13;
        }
      }
      param_1 = (uint *)((int)param_1 + param_6);
      iVar5 = iVar5 + 0xe;
      iStack_8 = iStack_8 + -1;
    } while (iStack_8 != 0);
  }
  return;
}

