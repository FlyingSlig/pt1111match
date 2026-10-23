// FUNCTION: PORT1111 0x00493800
// name: FUN_00493800
// sig: undefined FUN_00493800(void * this, uint * param_1, int param_2, int param_3, int param_4, int param_5, int param_6)


void __thiscall
FUN_00493800(void *this,uint *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  uint *puVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  int iStack_8;
  
  iVar3 = (**(code **)(*(int *)this + 4))();
  if (param_4 == iVar3) {
    if (param_3 < param_5) {
      iVar3 = param_3 * 0xe;
      param_3 = param_5 - param_3;
      do {
        if (*(short *)(iVar3 + *(int *)((int)this + 0x3c)) != 0) {
          pcVar9 = *(char **)(iVar3 + *(int *)((int)this + 0x3c) + 10);
          cVar1 = *pcVar9;
          puVar10 = param_1;
          while (cVar1 != '\0') {
            if (cVar1 == '\x01') {
              puVar10 = puVar10 + (uint)(byte)pcVar9[1] * 2;
              pcVar9 = pcVar9 + 2;
            }
            else if (cVar1 == '\x02') {
              uVar5 = (uint)(byte)pcVar9[1];
              puVar13 = (uint *)(pcVar9 + 2);
              puVar12 = puVar10;
              for (iVar6 = uVar5 << 1; iVar6 != 0; iVar6 = iVar6 + -1) {
                *puVar12 = *puVar13;
                puVar13 = puVar13 + 1;
                puVar12 = puVar12 + 1;
              }
              for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                *(char *)puVar12 = (char)*puVar13;
                puVar13 = (uint *)((int)puVar13 + 1);
                puVar12 = (uint *)((int)puVar12 + 1);
              }
              puVar10 = puVar10 + uVar5 * 2;
              pcVar9 = pcVar9 + uVar5 * 8 + 2;
            }
            else if (cVar1 == '\b') {
              uVar5 = *puVar10;
              uVar4 = (uVar5 & 0x7c0) << 0x10 | uVar5 & 0xf81f;
              uVar4 = uVar4 + ((((*(ushort *)(pcVar9 + 1) & 0x7c0) << 0x10 |
                                *(ushort *)(pcVar9 + 1) & 0xf81f) - uVar4) *
                               (*(uint *)(pcVar9 + 9) >> 3 & 0x1f) >> 5);
              uVar5 = uVar5 >> 0x10 & 0xf81f | uVar5 & 0x7c00000;
              uVar5 = uVar5 + ((((*(ushort *)(pcVar9 + 3) & 0x7c0) << 0x10 |
                                *(ushort *)(pcVar9 + 3) & 0xf81f) - uVar5) *
                               (*(uint *)(pcVar9 + 9) >> 0xb & 0x1f) >> 5);
              *puVar10 = (uVar5 & 0xfffff81f) << 0x10 | uVar4 >> 0x10 & 0x7c0 | uVar4 & 0xf81f |
                         uVar5 & 0x7c00000;
              uVar5 = puVar10[1];
              uVar4 = (uVar5 & 0x7c0) << 0x10 | uVar5 & 0xf81f;
              uVar5 = uVar5 >> 0x10 & 0xf81f | uVar5 & 0x7c00000;
              uVar4 = uVar4 + ((((*(ushort *)(pcVar9 + 5) & 0x7c0) << 0x10 |
                                *(ushort *)(pcVar9 + 5) & 0xf81f) - uVar4) *
                               (*(uint *)(pcVar9 + 9) >> 0x13 & 0x1f) >> 5);
              uVar5 = uVar5 + ((((*(ushort *)(pcVar9 + 7) & 0x7c0) << 0x10 |
                                *(ushort *)(pcVar9 + 7) & 0xf81f) - uVar5) *
                               (*(uint *)(pcVar9 + 9) >> 0x1b) >> 5);
              puVar10[1] = (uVar5 & 0xfffff81f) << 0x10 | uVar4 >> 0x10 & 0x7c0 | uVar4 & 0xf81f |
                           uVar5 & 0x7c00000;
              puVar10 = puVar10 + 2;
              pcVar9 = pcVar9 + 0xd;
            }
            cVar1 = *pcVar9;
          }
        }
        param_1 = (uint *)((int)param_1 + param_6);
        iVar3 = iVar3 + 0xe;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      return;
    }
  }
  else if (param_3 < param_5) {
    iVar3 = param_3 * 0xe;
    iStack_8 = param_5 - param_3;
    do {
      if (*(short *)(iVar3 + *(int *)((int)this + 0x3c)) != 0) {
        pcVar9 = *(char **)(iVar3 + *(int *)((int)this + 0x3c) + 10);
        iVar6 = -param_2;
        cVar1 = *pcVar9;
        param_3 = iVar6;
        puVar10 = param_1;
        while (cVar1 != '\0') {
          if (cVar1 == '\x01') {
            iVar11 = (uint)(byte)pcVar9[1] * 4;
            if (iVar6 < 0) {
              if (0 < iVar11 + iVar6) {
                iVar7 = -iVar6;
                goto LAB_00493f43;
              }
            }
            else {
              iVar7 = 0;
LAB_00493f43:
              iVar8 = param_4 - iVar6;
              if (iVar11 < param_4 - iVar6) {
                iVar8 = iVar11;
              }
              puVar10 = (uint *)((int)puVar10 + (iVar8 - iVar7) * 2);
            }
            pcVar9 = pcVar9 + 2;
LAB_00493f55:
            iVar6 = iVar6 + iVar11;
LAB_00493f59:
            param_3 = iVar6;
            if (param_4 <= iVar6) break;
          }
          else {
            if (cVar1 == '\x02') {
              bVar2 = pcVar9[1];
              iVar11 = (uint)bVar2 * 4;
              if (iVar6 < 0) {
                if (0 < iVar11 + iVar6) {
                  iVar7 = -iVar6;
                  goto LAB_00493eb3;
                }
              }
              else {
                iVar7 = 0;
LAB_00493eb3:
                iVar8 = param_4 - iVar6;
                if (iVar11 < param_4 - iVar6) {
                  iVar8 = iVar11;
                }
                uVar5 = iVar8 - iVar7;
                uVar4 = uVar5 & 3;
                puVar13 = (uint *)(pcVar9 + iVar7 * 2 + 2);
                if (uVar5 != 0) {
                  iVar7 = (uVar5 & 0xfffffffc) * 2;
                  puVar12 = puVar13;
                  puVar14 = puVar10;
                  for (uVar5 = (uVar5 & 0x7ffffffc) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
                    *puVar14 = *puVar12;
                    puVar12 = puVar12 + 1;
                    puVar14 = puVar14 + 1;
                  }
                  for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
                    *(char *)puVar14 = (char)*puVar12;
                    puVar12 = (uint *)((int)puVar12 + 1);
                    puVar14 = (uint *)((int)puVar14 + 1);
                  }
                  puVar10 = (uint *)((int)puVar10 + iVar7);
                  puVar13 = (uint *)((int)puVar13 + iVar7);
                }
                if (uVar4 != 0) {
                  puVar12 = puVar10;
                  for (uVar5 = uVar4 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
                    *puVar12 = *puVar13;
                    puVar13 = puVar13 + 1;
                    puVar12 = puVar12 + 1;
                  }
                  for (uVar5 = uVar4 * 2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                    *(char *)puVar12 = (char)*puVar13;
                    puVar13 = (uint *)((int)puVar13 + 1);
                    puVar12 = (uint *)((int)puVar12 + 1);
                  }
                  puVar10 = (uint *)((int)puVar10 + uVar4 * 2);
                }
              }
              pcVar9 = pcVar9 + (uint)bVar2 * 8 + 2;
              goto LAB_00493f55;
            }
            if (cVar1 == '\b') {
              if (iVar6 < 0) {
                if (iVar6 != -4 && -1 < iVar6 + 4) {
                  iVar11 = -iVar6;
                  goto LAB_00493ac1;
                }
LAB_00493e8a:
                iVar6 = iVar6 + 4;
                pcVar9 = pcVar9 + 0xd;
              }
              else {
                iVar11 = 0;
LAB_00493ac1:
                iVar7 = param_4 - iVar6;
                if (4 < iVar7) {
                  iVar7 = 4;
                }
                iVar7 = iVar7 - iVar11;
                switch(iVar7) {
                case 1:
                  uVar5 = ((ushort)*puVar10 & 0x7c0) << 0x10 | (ushort)*puVar10 & 0xf81f;
                  uVar5 = uVar5 + ((((*(ushort *)(pcVar9 + iVar11 * 2 + 1) & 0x7c0) << 0x10 |
                                    *(ushort *)(pcVar9 + iVar11 * 2 + 1) & 0xf81f) - uVar5) *
                                   (uint)((byte)pcVar9[iVar11 + 9] >> 3) >> 5) & 0x7c0f81f;
                  *(ushort *)puVar10 = (ushort)(uVar5 >> 0x10) | (ushort)uVar5;
                default:
                  puVar10 = (uint *)((int)puVar10 + iVar7 * 2);
                  goto LAB_00493e8a;
                case 2:
                  uVar5 = *puVar10;
                  uVar4 = (uVar5 & 0x7c0) << 0x10 | uVar5 & 0xf81f;
                  uVar4 = uVar4 + ((((*(ushort *)(pcVar9 + iVar11 * 2 + 1) & 0x7c0) << 0x10 |
                                    *(ushort *)(pcVar9 + iVar11 * 2 + 1) & 0xf81f) - uVar4) *
                                   (uint)((byte)pcVar9[iVar11 + 9] >> 3) >> 5);
                  uVar5 = uVar5 >> 0x10 & 0xf81f | uVar5 & 0x7c00000;
                  uVar5 = uVar5 + ((((*(ushort *)(pcVar9 + iVar11 * 2 + 3) & 0x7c0) << 0x10 |
                                    *(ushort *)(pcVar9 + iVar11 * 2 + 3) & 0xf81f) - uVar5) *
                                   (uint)((byte)pcVar9[iVar11 + 10] >> 3) >> 5);
                  *puVar10 = (uVar5 & 0xfffff81f) << 0x10 | uVar4 >> 0x10 & 0x7c0 |
                             uVar5 & 0x7c00000 | uVar4 & 0xf81f;
                  iVar6 = param_3 + 4;
                  puVar10 = (uint *)((int)puVar10 + iVar7 * 2);
                  pcVar9 = pcVar9 + 0xd;
                  break;
                case 3:
                  uVar5 = *puVar10;
                  uVar4 = (uVar5 & 0x7c0) << 0x10 | uVar5 & 0xf81f;
                  uVar5 = uVar5 >> 0x10 & 0xf81f | uVar5 & 0x7c00000;
                  uVar4 = uVar4 + ((((*(ushort *)(pcVar9 + iVar11 * 2 + 1) & 0x7c0) << 0x10 |
                                    *(ushort *)(pcVar9 + iVar11 * 2 + 1) & 0xf81f) - uVar4) *
                                   (uint)((byte)pcVar9[iVar11 + 9] >> 3) >> 5);
                  uVar5 = uVar5 + ((((*(ushort *)(pcVar9 + iVar11 * 2 + 3) & 0x7c0) << 0x10 |
                                    *(ushort *)(pcVar9 + iVar11 * 2 + 3) & 0xf81f) - uVar5) *
                                   (uint)((byte)pcVar9[iVar11 + 10] >> 3) >> 5);
                  *puVar10 = (uVar5 & 0xfffff81f) << 0x10 | uVar4 >> 0x10 & 0x7c0 |
                             uVar5 & 0x7c00000 | uVar4 & 0xf81f;
                  uVar5 = ((ushort)puVar10[1] & 0x7c0) << 0x10 | (ushort)puVar10[1] & 0xf81f;
                  uVar5 = uVar5 + ((((*(ushort *)(pcVar9 + iVar11 * 2 + 5) & 0x7c0) << 0x10 |
                                    *(ushort *)(pcVar9 + iVar11 * 2 + 5) & 0xf81f) - uVar5) *
                                   (uint)((byte)pcVar9[iVar11 + 0xb] >> 3) >> 5) & 0x7c0f81f;
                  *(ushort *)(puVar10 + 1) = (ushort)(uVar5 >> 0x10) | (ushort)uVar5;
                  iVar6 = param_3 + 4;
                  puVar10 = (uint *)((int)puVar10 + iVar7 * 2);
                  pcVar9 = pcVar9 + 0xd;
                  break;
                case 4:
                  uVar5 = *puVar10;
                  uVar4 = (uVar5 & 0x7c0) << 0x10 | uVar5 & 0xf81f;
                  uVar4 = uVar4 + ((((*(ushort *)(pcVar9 + 1) & 0x7c0) << 0x10 |
                                    *(ushort *)(pcVar9 + 1) & 0xf81f) - uVar4) *
                                   (*(uint *)(pcVar9 + 9) >> 3 & 0x1f) >> 5);
                  uVar5 = uVar5 >> 0x10 & 0xf81f | uVar5 & 0x7c00000;
                  uVar5 = uVar5 + ((((*(ushort *)(pcVar9 + 3) & 0x7c0) << 0x10 |
                                    *(ushort *)(pcVar9 + 3) & 0xf81f) - uVar5) *
                                   (*(uint *)(pcVar9 + 9) >> 0xb & 0x1f) >> 5);
                  *puVar10 = (uVar5 & 0xfffff81f) << 0x10 | uVar4 >> 0x10 & 0x7c0 |
                             uVar5 & 0x7c00000 | uVar4 & 0xf81f;
                  uVar5 = puVar10[1];
                  uVar4 = (uVar5 & 0x7c0) << 0x10 | uVar5 & 0xf81f;
                  uVar5 = uVar5 >> 0x10 & 0xf81f | uVar5 & 0x7c00000;
                  uVar4 = uVar4 + ((((*(ushort *)(pcVar9 + 5) & 0x7c0) << 0x10 |
                                    *(ushort *)(pcVar9 + 5) & 0xf81f) - uVar4) *
                                   (*(uint *)(pcVar9 + 9) >> 0x13 & 0x1f) >> 5);
                  uVar5 = uVar5 + ((((*(ushort *)(pcVar9 + 7) & 0x7c0) << 0x10 |
                                    *(ushort *)(pcVar9 + 7) & 0xf81f) - uVar5) *
                                   (*(uint *)(pcVar9 + 9) >> 0x1b) >> 5);
                  puVar10[1] = (uVar5 & 0xfffff81f) << 0x10 | uVar4 >> 0x10 & 0x7c0 |
                               uVar5 & 0x7c00000 | uVar4 & 0xf81f;
                  iVar6 = param_3 + 4;
                  puVar10 = (uint *)((int)puVar10 + iVar7 * 2);
                  pcVar9 = pcVar9 + 0xd;
                }
              }
              goto LAB_00493f59;
            }
          }
          cVar1 = *pcVar9;
        }
      }
      param_1 = (uint *)((int)param_1 + param_6);
      iVar3 = iVar3 + 0xe;
      iStack_8 = iStack_8 + -1;
    } while (iStack_8 != 0);
  }
  return;
}

