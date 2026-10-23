// FUNCTION: PORT1111 0x00492d80
// name: FUN_00492d80
// sig: undefined FUN_00492d80(void * this, ulonglong * param_1, int param_2, int param_3, int param_4, int param_5, int param_6)


void __thiscall
FUN_00492d80(void *this,ulonglong *param_1,int param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  int local_1c;
  ulonglong *local_8;
  
  iVar3 = (**(code **)(*(int *)this + 4))();
  if (param_4 == iVar3) {
    if (param_3 < param_5) {
      iVar3 = param_3 * 0xe;
      param_3 = param_5 - param_3;
      do {
        if (*(short *)(iVar3 + *(int *)((int)this + 0x3c)) != 0) {
          pcVar10 = *(char **)(iVar3 + *(int *)((int)this + 0x3c) + 10);
          cVar1 = *pcVar10;
          puVar13 = param_1;
          local_8 = param_1;
          while (cVar1 != '\0') {
            if (cVar1 == '\x01') {
              puVar13 = puVar13 + (byte)pcVar10[1];
              pcVar10 = pcVar10 + 2;
              local_8 = puVar13;
            }
            else if (cVar1 == '\x02') {
              uVar4 = (uint)(byte)pcVar10[1];
              puVar13 = (ulonglong *)(pcVar10 + 2);
              uVar6 = uVar4;
              puVar14 = local_8;
              do {
                *puVar14 = *puVar13;
                puVar14 = puVar14 + 1;
                puVar13 = puVar13 + 1;
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
              puVar13 = local_8 + uVar4;
              pcVar10 = pcVar10 + uVar4 * 8 + 2;
              local_8 = puVar13;
            }
            else if (cVar1 == '\b') {
              FUN_0048ff00((ulonglong *)(pcVar10 + 1),puVar13,(undefined4 *)(pcVar10 + 9));
              puVar13 = puVar13 + 1;
              pcVar10 = pcVar10 + 0xd;
              local_8 = puVar13;
            }
            cVar1 = *pcVar10;
          }
        }
        param_1 = (ulonglong *)((int)param_1 + param_6);
        iVar3 = iVar3 + 0xe;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  else if (param_3 < param_5) {
    iVar3 = param_3 * 0xe;
    local_1c = param_5 - param_3;
    do {
      if (*(short *)(iVar3 + *(int *)((int)this + 0x3c)) != 0) {
        pcVar10 = *(char **)(iVar3 + *(int *)((int)this + 0x3c) + 10);
        iVar9 = -param_2;
        cVar1 = *pcVar10;
        param_3 = iVar9;
        puVar13 = param_1;
        local_8 = param_1;
        while (cVar1 != '\0') {
          if (cVar1 == '\x01') {
            iVar11 = (uint)(byte)pcVar10[1] * 4;
            if (iVar9 < 0) {
              if (0 < iVar11 + iVar9) {
                iVar5 = -iVar9;
                goto LAB_00493203;
              }
            }
            else {
              iVar5 = 0;
LAB_00493203:
              iVar7 = param_4 - iVar9;
              if (iVar11 < param_4 - iVar9) {
                iVar7 = iVar11;
              }
              puVar13 = (ulonglong *)((int)puVar13 + (iVar7 - iVar5) * 2);
              local_8 = puVar13;
            }
            iVar9 = iVar9 + iVar11;
            pcVar10 = pcVar10 + 2;
LAB_0049321d:
            param_3 = iVar9;
            if (param_4 <= iVar9) break;
          }
          else {
            if (cVar1 == '\x02') {
              bVar2 = pcVar10[1];
              iVar11 = (uint)bVar2 * 4;
              if (iVar9 < 0) {
                if (0 < iVar11 + iVar9) {
                  iVar5 = -iVar9;
                  goto LAB_0049316b;
                }
              }
              else {
                iVar5 = 0;
LAB_0049316b:
                iVar7 = iVar11;
                if (param_4 - iVar9 <= iVar11) {
                  iVar7 = param_4 - iVar9;
                }
                uVar6 = iVar7 - iVar5;
                uVar4 = uVar6 & 3;
                pcVar8 = pcVar10 + iVar5 * 2 + 2;
                if (uVar6 != 0) {
                  iVar5 = (uVar6 & 0xfffffffc) * 2;
                  pcVar12 = pcVar8;
                  for (uVar6 = (uVar6 & 0x7ffffffc) >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
                    *(undefined4 *)puVar13 = *(undefined4 *)pcVar12;
                    pcVar12 = pcVar12 + 4;
                    puVar13 = (ulonglong *)((int)puVar13 + 4);
                  }
                  for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
                    *(char *)puVar13 = *pcVar12;
                    pcVar12 = pcVar12 + 1;
                    puVar13 = (ulonglong *)((int)puVar13 + 1);
                  }
                  puVar13 = (ulonglong *)((int)local_8 + iVar5);
                  pcVar8 = pcVar8 + iVar5;
                  local_8 = puVar13;
                }
                if (uVar4 != 0) {
                  for (uVar6 = uVar4 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
                    *(undefined4 *)puVar13 = *(undefined4 *)pcVar8;
                    pcVar8 = pcVar8 + 4;
                    puVar13 = (ulonglong *)((int)puVar13 + 4);
                  }
                  for (uVar6 = uVar4 * 2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                    *(char *)puVar13 = *pcVar8;
                    pcVar8 = pcVar8 + 1;
                    puVar13 = (ulonglong *)((int)puVar13 + 1);
                  }
                  puVar13 = (ulonglong *)((int)local_8 + uVar4 * 2);
                  local_8 = puVar13;
                }
              }
              pcVar10 = pcVar10 + (uint)bVar2 * 8 + 2;
              iVar9 = iVar9 + iVar11;
              goto LAB_0049321d;
            }
            if (cVar1 == '\b') {
              if (iVar9 < 0) {
                if (iVar9 != -4 && -1 < iVar9 + 4) {
                  iVar11 = -iVar9;
                  goto LAB_00492ef7;
                }
              }
              else {
                iVar11 = 0;
LAB_00492ef7:
                iVar5 = param_4 - iVar9;
                if (4 < iVar5) {
                  iVar5 = 4;
                }
                switch(iVar5 - iVar11) {
                case 1:
                  uVar6 = ((ushort)*puVar13 & 0x7c0) << 0x10 | (ushort)*puVar13 & 0xf81f;
                  uVar6 = uVar6 + ((((*(ushort *)(pcVar10 + iVar11 * 2 + 1) & 0x7c0) << 0x10 |
                                    *(ushort *)(pcVar10 + iVar11 * 2 + 1) & 0xf81f) - uVar6) *
                                   (uint)((byte)pcVar10[iVar11 + 9] >> 3) >> 5) & 0x7c0f81f;
                  *(ushort *)puVar13 = (ushort)(uVar6 >> 0x10) | (ushort)uVar6;
                  iVar9 = param_3;
                  break;
                case 2:
                  uVar6 = (uint)*puVar13;
                  uVar4 = (uVar6 & 0x7c0) << 0x10 | uVar6 & 0xf81f;
                  uVar4 = uVar4 + ((((*(ushort *)(pcVar10 + iVar11 * 2 + 1) & 0x7c0) << 0x10 |
                                    *(ushort *)(pcVar10 + iVar11 * 2 + 1) & 0xf81f) - uVar4) *
                                   (uint)((byte)pcVar10[iVar11 + 9] >> 3) >> 5);
                  uVar6 = uVar6 >> 0x10 & 0xf81f | uVar6 & 0x7c00000;
                  uVar6 = uVar6 + ((((*(ushort *)(pcVar10 + iVar11 * 2 + 3) & 0x7c0) << 0x10 |
                                    *(ushort *)(pcVar10 + iVar11 * 2 + 3) & 0xf81f) - uVar6) *
                                   (uint)((byte)pcVar10[iVar11 + 10] >> 3) >> 5);
                  *(uint *)local_8 =
                       (uVar6 & 0xfffff81f) << 0x10 | uVar4 >> 0x10 & 0x7c0 | uVar6 & 0x7c00000 |
                       uVar4 & 0xf81f;
                  iVar9 = param_3;
                  puVar13 = local_8;
                  break;
                case 3:
                  uVar6 = (uint)*puVar13;
                  uVar4 = (uVar6 & 0x7c0) << 0x10 | uVar6 & 0xf81f;
                  uVar4 = uVar4 + ((((*(ushort *)(pcVar10 + iVar11 * 2 + 1) & 0x7c0) << 0x10 |
                                    *(ushort *)(pcVar10 + iVar11 * 2 + 1) & 0xf81f) - uVar4) *
                                   (uint)((byte)pcVar10[iVar11 + 9] >> 3) >> 5);
                  uVar6 = uVar6 >> 0x10 & 0xf81f | uVar6 & 0x7c00000;
                  uVar6 = uVar6 + ((((*(ushort *)(pcVar10 + iVar11 * 2 + 3) & 0x7c0) << 0x10 |
                                    *(ushort *)(pcVar10 + iVar11 * 2 + 3) & 0xf81f) - uVar6) *
                                   (uint)((byte)pcVar10[iVar11 + 10] >> 3) >> 5);
                  *(uint *)local_8 =
                       (uVar6 & 0xfffff81f) << 0x10 | uVar4 >> 0x10 & 0x7c0 | uVar4 & 0xf81f |
                       uVar6 & 0x7c00000;
                  uVar6 = (*(ushort *)((int)local_8 + 4) & 0x7c0) << 0x10 |
                          *(ushort *)((int)local_8 + 4) & 0xf81f;
                  uVar6 = uVar6 + ((((*(ushort *)(pcVar10 + iVar11 * 2 + 5) & 0x7c0) << 0x10 |
                                    *(ushort *)(pcVar10 + iVar11 * 2 + 5) & 0xf81f) - uVar6) *
                                   (uint)((byte)pcVar10[iVar11 + 0xb] >> 3) >> 5) & 0x7c0f81f;
                  *(ushort *)((int)local_8 + 4) = (ushort)(uVar6 >> 0x10) | (ushort)uVar6;
                  iVar9 = param_3;
                  puVar13 = local_8;
                  break;
                case 4:
                  FUN_0048ff00((ulonglong *)(pcVar10 + 1),puVar13,(undefined4 *)(pcVar10 + 9));
                  iVar9 = param_3;
                }
                puVar13 = (ulonglong *)((int)puVar13 + (iVar5 - iVar11) * 2);
                local_8 = puVar13;
              }
              iVar9 = iVar9 + 4;
              pcVar10 = pcVar10 + 0xd;
              goto LAB_0049321d;
            }
          }
          cVar1 = *pcVar10;
        }
      }
      param_1 = (ulonglong *)((int)param_1 + param_6);
      iVar3 = iVar3 + 0xe;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  return;
}

