// FUNCTION: PORT1111 0x00490130
// name: FUN_00490130
// sig: undefined FUN_00490130(void * this, uint * param_1, int param_2, char * param_3, int param_4, int param_5, int param_6, int param_7)


void __thiscall
FUN_00490130(void *this,uint *param_1,int param_2,char *param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  short *psVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  byte *pbVar13;
  int iVar14;
  int local_14;
  int local_c;
  int local_4;
  
  uVar7 = *(uint *)((int)this + 0x18);
  if (param_7 == 0) {
    if (uVar7 == 0) {
      if ((int)param_3 < param_5) {
        iVar14 = (int)param_3 * 0xe;
        param_5 = param_5 - (int)param_3;
        do {
          iVar10 = iVar14 + *(int *)((int)this + 0x3c);
          if (*(short *)(iVar14 + *(int *)((int)this + 0x3c)) != 0) {
            pcVar12 = *(char **)(iVar10 + 10);
            cVar1 = *pcVar12;
            puVar2 = param_1;
            if (cVar1 == '\x06') {
              iVar3 = 0;
              if (*(short *)(iVar10 + 8) != 0) {
                do {
                  uVar7 = (uint)*(ushort *)((int)param_1 + iVar3 * 2);
                  uVar7 = (uVar7 & 0x7c0) << 0x10 | uVar7 & 0xf81f;
                  uVar7 = uVar7 - ((((byte)pcVar12[iVar3 + 1] & 0xf) * 2 + 1) * uVar7 >> 5) &
                          0x7c0f81f;
                  *(ushort *)((int)param_1 + iVar3 * 2) = (ushort)(uVar7 >> 0x10) | (ushort)uVar7;
                  iVar3 = iVar3 + 1;
                } while (iVar3 < (int)(uint)*(ushort *)(iVar14 + 8 + *(int *)((int)this + 0x3c)));
              }
            }
            else {
              while (cVar1 != '\0') {
                if (cVar1 == '\x01') {
                  puVar2 = (uint *)((int)puVar2 + (uint)(byte)pcVar12[1] * 2);
LAB_004905b4:
                  pcVar12 = pcVar12 + 2;
                }
                else if (cVar1 == '\x04') {
                  uVar7 = (uint)((byte)pcVar12[1] >> 1);
                  iVar10 = 0;
                  if (uVar7 != 0) {
                    do {
                      uVar5 = puVar2[iVar10];
                      uVar4 = (uVar5 & 0x7c0) << 0x10 | uVar5 & 0xf81f;
                      uVar4 = uVar4 - ((((byte)pcVar12[iVar10 + 2] & 0xf) * 2 + 1) * uVar4 >> 5);
                      uVar5 = uVar5 >> 0x10 & 0xf81f | uVar5 & 0x7c00000;
                      uVar5 = uVar5 - ((((byte)pcVar12[iVar10 + 2] >> 3 & 0x1e) + 1) * uVar5 >> 5);
                      puVar2[iVar10] =
                           (uVar5 & 0xfffff81f) << 0x10 | uVar4 >> 0x10 & 0x7c0 | uVar5 & 0x7c00000
                           | uVar4 & 0xf81f;
                      iVar10 = iVar10 + 1;
                    } while (iVar10 < (int)uVar7);
                  }
                  puVar2 = (uint *)((int)puVar2 + (uint)(byte)pcVar12[1] * 2);
                  pcVar12 = pcVar12 + uVar7 + 2;
                }
                else if (cVar1 == '\x05') {
                  uVar7 = ((ushort)*puVar2 & 0x7c0) << 0x10 | (ushort)*puVar2 & 0xf81f;
                  uVar7 = uVar7 - ((((byte)pcVar12[1] & 0xf) * 2 + 1) * uVar7 >> 5) & 0x7c0f81f;
                  *(ushort *)puVar2 = (ushort)(uVar7 >> 0x10) | (ushort)uVar7;
                  puVar2 = (uint *)((int)puVar2 + 2);
                  goto LAB_004905b4;
                }
                cVar1 = *pcVar12;
              }
            }
          }
          param_1 = (uint *)((int)param_1 + param_6);
          iVar14 = iVar14 + 0xe;
          param_5 = param_5 + -1;
          if (param_5 == 0) {
            return;
          }
        } while( true );
      }
    }
    else if ((int)param_3 < param_5) {
      iVar14 = (int)param_3 * 0xe;
      param_2 = param_5 - (int)param_3;
      do {
        iVar10 = iVar14 + *(int *)((int)this + 0x3c);
        if (*(short *)(iVar14 + *(int *)((int)this + 0x3c)) != 0) {
          pcVar12 = *(char **)(iVar10 + 10);
          cVar1 = *pcVar12;
          param_3 = pcVar12;
          puVar2 = param_1;
          if (cVar1 == '\x06') {
            iVar3 = 0;
            if (*(short *)(iVar10 + 8) != 0) {
              do {
                uVar5 = (uint)*(ushort *)((int)param_1 + iVar3 * 2);
                uVar5 = (uVar5 & 0x7c0) << 0x10 | uVar5 & 0xf81f;
                uVar5 = uVar5 + ((((byte)pcVar12[iVar3 + 1] & 0xf) * 2 + 1) *
                                 (((uVar7 & 0x7c0) << 0x10 | uVar7 & 0xf81f) - uVar5) >> 5) &
                        0x7c0f81f;
                *(ushort *)((int)param_1 + iVar3 * 2) = (ushort)(uVar5 >> 0x10) | (ushort)uVar5;
                iVar3 = iVar3 + 1;
              } while (iVar3 < (int)(uint)*(ushort *)(iVar14 + 8 + *(int *)((int)this + 0x3c)));
            }
          }
          else {
            while (cVar1 != '\0') {
              if (cVar1 == '\x01') {
                puVar2 = (uint *)((int)puVar2 + (uint)(byte)pcVar12[1] * 2);
LAB_004903a2:
                pcVar12 = pcVar12 + 2;
                param_3 = pcVar12;
              }
              else if (cVar1 == '\x04') {
                uVar5 = (uint)((byte)pcVar12[1] >> 1);
                iVar10 = 0;
                if (uVar5 != 0) {
                  uVar4 = (uVar7 & 0x7c0) << 0x10 | uVar7 & 0xf81f;
                  do {
                    uVar11 = puVar2[iVar10];
                    uVar6 = (uVar11 & 0x7c0) << 0x10 | uVar11 & 0xf81f;
                    uVar6 = uVar6 + ((((byte)pcVar12[iVar10 + 2] & 0xf) * 2 + 1) * (uVar4 - uVar6)
                                    >> 5);
                    uVar11 = uVar11 >> 0x10 & 0xf81f | uVar11 & 0x7c00000;
                    uVar11 = uVar11 + ((((byte)pcVar12[iVar10 + 2] >> 3 & 0x1e) + 1) *
                                       (uVar4 - uVar11) >> 5);
                    puVar2[iVar10] =
                         (uVar11 & 0xfffff81f) << 0x10 | uVar6 >> 0x10 & 0x7c0 | uVar6 & 0xf81f |
                         uVar11 & 0x7c00000;
                    iVar10 = iVar10 + 1;
                    pcVar12 = param_3;
                  } while (iVar10 < (int)uVar5);
                }
                puVar2 = (uint *)((int)puVar2 + (uint)(byte)pcVar12[1] * 2);
                pcVar12 = pcVar12 + uVar5 + 2;
                param_3 = pcVar12;
              }
              else if (cVar1 == '\x05') {
                uVar5 = ((ushort)*puVar2 & 0x7c0) << 0x10 | (ushort)*puVar2 & 0xf81f;
                uVar5 = uVar5 + ((((uVar7 & 0x7c0) << 0x10 | uVar7 & 0xf81f) - uVar5) *
                                 (((byte)pcVar12[1] & 0xf) * 2 + 1) >> 5) & 0x7c0f81f;
                *(ushort *)puVar2 = (ushort)(uVar5 >> 0x10) | (ushort)uVar5;
                puVar2 = (uint *)((int)puVar2 + 2);
                goto LAB_004903a2;
              }
              cVar1 = *pcVar12;
            }
          }
        }
        param_1 = (uint *)((int)param_1 + param_6);
        iVar14 = iVar14 + 0xe;
        param_2 = param_2 + -1;
        if (param_2 == 0) {
          return;
        }
      } while( true );
    }
  }
  else if (uVar7 == 0) {
    if ((int)param_3 < param_5) {
      local_14 = (int)param_3 * 0xe;
      local_4 = param_5 - (int)param_3;
      do {
        psVar8 = (short *)(local_14 + *(int *)((int)this + 0x3c));
        if (*psVar8 != 0) {
          pcVar12 = *(char **)(psVar8 + 5);
          cVar1 = *pcVar12;
          iVar14 = -param_2;
          param_3 = pcVar12;
          param_5 = iVar14;
          puVar2 = param_1;
          if (cVar1 == '\x06') {
            iVar14 = param_2;
            uVar7 = param_2 + param_4;
            if ((int)(uint)(ushort)psVar8[4] <= param_2 + param_4) {
              uVar7 = (uint)(ushort)psVar8[4];
            }
            for (; iVar14 < (int)uVar7; iVar14 = iVar14 + 1) {
              uVar5 = ((ushort)*puVar2 & 0x7c0) << 0x10 | (ushort)*puVar2 & 0xf81f;
              uVar5 = uVar5 - ((((byte)pcVar12[iVar14 + 1] & 0xf) * 2 + 1) * uVar5 >> 5) & 0x7c0f81f
              ;
              *(ushort *)puVar2 = (ushort)(uVar5 >> 0x10) | (ushort)uVar5;
              puVar2 = (uint *)((int)puVar2 + 2);
            }
          }
          else {
            while (cVar1 != '\0') {
              if (cVar1 == '\x01') {
                uVar7 = (uint)(byte)pcVar12[1];
                if (iVar14 < 0) {
                  if (0 < (int)(uVar7 + iVar14)) {
                    iVar10 = -iVar14;
                    goto LAB_00490ccd;
                  }
                }
                else {
                  iVar10 = 0;
LAB_00490ccd:
                  uVar5 = param_4 - iVar14;
                  if ((int)uVar7 < param_4 - iVar14) {
                    uVar5 = uVar7;
                  }
                  puVar2 = (uint *)((int)puVar2 + (uVar5 - iVar10) * 2);
                }
                iVar14 = iVar14 + uVar7;
LAB_00490cde:
                pcVar12 = pcVar12 + 2;
LAB_00490ce1:
                param_3 = pcVar12;
                param_5 = iVar14;
                if (param_4 <= iVar14) break;
              }
              else {
                if (cVar1 == '\x04') {
                  uVar7 = (uint)(byte)pcVar12[1];
                  if (iVar14 < 0) {
                    if (0 < (int)(iVar14 + uVar7)) {
                      uVar5 = -iVar14;
                      goto LAB_00490b4a;
                    }
                  }
                  else {
                    uVar5 = 0;
LAB_00490b4a:
                    uVar4 = uVar7;
                    if (param_4 - iVar14 <= (int)uVar7) {
                      uVar4 = param_4 - iVar14;
                    }
                    uVar11 = uVar5 & 1;
                    uVar4 = (uVar4 - uVar5) - uVar11;
                    iVar14 = (int)uVar4 >> 1;
                    if (uVar11 != 0) {
                      uVar6 = ((ushort)*puVar2 & 0x7c0) << 0x10 | (ushort)*puVar2 & 0xf81f;
                      uVar6 = uVar6 - ((((byte)pcVar12[((int)uVar5 >> 1) + 2] >> 3 & 0x1e) + 1) *
                                       uVar6 >> 5) & 0x7c0f81f;
                      *(ushort *)puVar2 = (ushort)(uVar6 >> 0x10) | (ushort)uVar6;
                      puVar2 = (uint *)((int)puVar2 + 2);
                      uVar5 = uVar5 + uVar11;
                    }
                    pbVar13 = (byte *)(pcVar12 + ((int)uVar5 >> 1) + 2);
                    if (0 < iVar14) {
                      do {
                        uVar5 = *puVar2;
                        uVar11 = (uVar5 & 0x7c0) << 0x10 | uVar5 & 0xf81f;
                        uVar11 = uVar11 - (((*pbVar13 & 0xf) * 2 + 1) * uVar11 >> 5);
                        uVar5 = uVar5 >> 0x10 & 0xf81f | uVar5 & 0x7c00000;
                        uVar5 = uVar5 - (((*pbVar13 >> 3 & 0x1e) + 1) * uVar5 >> 5);
                        *puVar2 = (uVar5 & 0xfffff81f) << 0x10 | uVar11 >> 0x10 & 0x7c0 |
                                  uVar5 & 0x7c00000 | uVar11 & 0xf81f;
                        puVar2 = puVar2 + 1;
                        pbVar13 = pbVar13 + 1;
                        iVar14 = iVar14 + -1;
                      } while (iVar14 != 0);
                    }
                    if ((uVar4 & 1) != 0) {
                      uVar5 = ((ushort)*puVar2 & 0x7c0) << 0x10 | (ushort)*puVar2 & 0xf81f;
                      uVar5 = uVar5 - (((*pbVar13 & 0xf) * 2 + 1) * uVar5 >> 5) & 0x7c0f81f;
                      *(ushort *)puVar2 = (ushort)(uVar5 >> 0x10) | (ushort)uVar5;
                      puVar2 = (uint *)((int)puVar2 + 2);
                    }
                  }
                  pcVar12 = param_3 + ((int)uVar7 >> 1) + 2;
                  iVar14 = param_5 + uVar7;
                  goto LAB_00490ce1;
                }
                if (cVar1 == '\x05') {
                  if ((-1 < iVar14) && (iVar14 < param_4)) {
                    uVar7 = ((ushort)*puVar2 & 0x7c0) << 0x10 | (ushort)*puVar2 & 0xf81f;
                    uVar7 = uVar7 - ((((byte)pcVar12[1] & 0xf) * 2 + 1) * uVar7 >> 5) & 0x7c0f81f;
                    *(ushort *)puVar2 = (ushort)(uVar7 >> 0x10) | (ushort)uVar7;
                    puVar2 = (uint *)((int)puVar2 + 2);
                  }
                  iVar14 = iVar14 + 1;
                  goto LAB_00490cde;
                }
              }
              cVar1 = *pcVar12;
            }
          }
        }
        param_1 = (uint *)((int)param_1 + param_6);
        local_14 = local_14 + 0xe;
        local_4 = local_4 + -1;
      } while (local_4 != 0);
    }
  }
  else if ((int)param_3 < param_5) {
    iVar14 = (int)param_3 * 0xe;
    local_4 = param_5 - (int)param_3;
    do {
      psVar8 = (short *)(iVar14 + *(int *)((int)this + 0x3c));
      if (*psVar8 != 0) {
        pcVar12 = *(char **)(psVar8 + 5);
        cVar1 = *pcVar12;
        iVar10 = -param_2;
        param_3 = pcVar12;
        param_5 = iVar10;
        puVar2 = param_1;
        if (cVar1 == '\x06') {
          uVar5 = (uint)(ushort)psVar8[4];
          if (param_2 + param_4 < (int)(uint)(ushort)psVar8[4]) {
            uVar5 = param_2 + param_4;
          }
          if (param_2 < (int)uVar5) {
            iVar10 = param_2;
            do {
              uVar4 = ((ushort)*puVar2 & 0x7c0) << 0x10 | (ushort)*puVar2 & 0xf81f;
              uVar4 = uVar4 + ((((byte)pcVar12[iVar10 + 1] & 0xf) * 2 + 1) *
                               (((uVar7 & 0x7c0) << 0x10 | uVar7 & 0xf81f) - uVar4) >> 5) &
                      0x7c0f81f;
              *(ushort *)puVar2 = (ushort)(uVar4 >> 0x10) | (ushort)uVar4;
              iVar10 = iVar10 + 1;
              puVar2 = (uint *)((int)puVar2 + 2);
            } while (iVar10 < (int)uVar5);
          }
        }
        else {
          while (cVar1 != '\0') {
            if (cVar1 == '\x01') {
              uVar5 = (uint)(byte)pcVar12[1];
              if (iVar10 < 0) {
                if (0 < (int)(uVar5 + iVar10)) {
                  iVar3 = -iVar10;
                  goto LAB_00490988;
                }
              }
              else {
                iVar3 = 0;
LAB_00490988:
                uVar4 = param_4 - iVar10;
                if ((int)uVar5 < param_4 - iVar10) {
                  uVar4 = uVar5;
                }
                puVar2 = (uint *)((int)puVar2 + (uVar4 - iVar3) * 2);
              }
              iVar10 = iVar10 + uVar5;
LAB_0049099b:
              pcVar12 = pcVar12 + 2;
LAB_0049099e:
              param_3 = pcVar12;
              param_5 = iVar10;
              if (param_4 <= iVar10) break;
            }
            else {
              if (cVar1 == '\x04') {
                uVar5 = (uint)(byte)pcVar12[1];
                if (iVar10 < 0) {
                  if (0 < (int)(uVar5 + iVar10)) {
                    uVar4 = -iVar10;
                    goto LAB_00490797;
                  }
                }
                else {
                  uVar4 = 0;
LAB_00490797:
                  uVar11 = uVar5;
                  if (param_4 - iVar10 <= (int)uVar5) {
                    uVar11 = param_4 - iVar10;
                  }
                  uVar6 = uVar4 & 1;
                  uVar11 = (uVar11 - uVar6) - uVar4;
                  local_c = (int)uVar11 >> 1;
                  if (uVar6 != 0) {
                    uVar9 = ((ushort)*puVar2 & 0x7c0) << 0x10 | (ushort)*puVar2 & 0xf81f;
                    uVar9 = uVar9 + ((((uVar7 & 0x7c0) << 0x10 | uVar7 & 0xf81f) - uVar9) *
                                     (((byte)pcVar12[((int)uVar4 >> 1) + 2] >> 3 & 0x1e) + 1) >> 5)
                            & 0x7c0f81f;
                    *(ushort *)puVar2 = (ushort)(uVar9 >> 0x10) | (ushort)uVar9;
                    puVar2 = (uint *)((int)puVar2 + 2);
                    uVar4 = uVar4 + uVar6;
                  }
                  pbVar13 = (byte *)(pcVar12 + ((int)uVar4 >> 1) + 2);
                  if (0 < local_c) {
                    uVar4 = (uVar7 & 0x7c0) << 0x10 | uVar7 & 0xf81f;
                    do {
                      uVar6 = *puVar2;
                      uVar9 = (uVar6 & 0x7c0) << 0x10 | uVar6 & 0xf81f;
                      uVar9 = uVar9 + (((*pbVar13 & 0xf) * 2 + 1) * (uVar4 - uVar9) >> 5);
                      uVar6 = uVar6 >> 0x10 & 0xf81f | uVar6 & 0x7c00000;
                      uVar6 = uVar6 + (((*pbVar13 >> 3 & 0x1e) + 1) * (uVar4 - uVar6) >> 5);
                      *puVar2 = (uVar6 & 0xfffff81f) << 0x10 | uVar9 >> 0x10 & 0x7c0 |
                                uVar6 & 0x7c00000 | uVar9 & 0xf81f;
                      puVar2 = puVar2 + 1;
                      pbVar13 = pbVar13 + 1;
                      local_c = local_c + -1;
                      pcVar12 = param_3;
                    } while (local_c != 0);
                  }
                  iVar10 = param_5;
                  if ((uVar11 & 1) != 0) {
                    uVar4 = ((ushort)*puVar2 & 0x7c0) << 0x10 | (ushort)*puVar2 & 0xf81f;
                    uVar4 = uVar4 + ((((uVar7 & 0x7c0) << 0x10 | uVar7 & 0xf81f) - uVar4) *
                                     ((*pbVar13 & 0xf) * 2 + 1) >> 5) & 0x7c0f81f;
                    *(ushort *)puVar2 = (ushort)(uVar4 >> 0x10) | (ushort)uVar4;
                    puVar2 = (uint *)((int)puVar2 + 2);
                  }
                }
                pcVar12 = pcVar12 + ((int)uVar5 >> 1) + 2;
                iVar10 = iVar10 + uVar5;
                goto LAB_0049099e;
              }
              if (cVar1 == '\x05') {
                if ((-1 < iVar10) && (iVar10 < param_4)) {
                  uVar5 = ((ushort)*puVar2 & 0x7c0) << 0x10 | (ushort)*puVar2 & 0xf81f;
                  uVar5 = uVar5 + ((((uVar7 & 0x7c0) << 0x10 | uVar7 & 0xf81f) - uVar5) *
                                   (((byte)pcVar12[1] & 0xf) * 2 + 1) >> 5) & 0x7c0f81f;
                  *(ushort *)puVar2 = (ushort)(uVar5 >> 0x10) | (ushort)uVar5;
                  puVar2 = (uint *)((int)puVar2 + 2);
                }
                iVar10 = iVar10 + 1;
                goto LAB_0049099b;
              }
            }
            cVar1 = *pcVar12;
          }
        }
      }
      param_1 = (uint *)((int)param_1 + param_6);
      iVar14 = iVar14 + 0xe;
      local_4 = local_4 + -1;
      if (local_4 == 0) {
        return;
      }
    } while( true );
  }
  return;
}

