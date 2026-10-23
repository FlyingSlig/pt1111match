// FUNCTION: PORT1111 0x00493270
// name: FUN_00493270
// sig: undefined FUN_00493270(void * this, ulonglong * param_1, int param_2, int param_3, int param_4, uint param_5, int param_6)


void __thiscall
FUN_00493270(void *this,ulonglong *param_1,int param_2,int param_3,int param_4,uint param_5,
            int param_6)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  ulonglong *puVar10;
  uint uVar11;
  ulonglong *puVar12;
  char *pcVar13;
  undefined4 local_18;
  void *local_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  uint uStack_4;
  
  local_18 = 0xffffffff;
  local_14 = this;
  iVar3 = (**(code **)(*(int *)this + 4))();
  if (param_4 == iVar3) {
    if (param_3 < (int)param_5) {
      iVar3 = param_3 * 0xe;
      param_3 = param_5 - param_3;
      do {
        if (*(short *)(*(int *)((int)this + 0x3c) + iVar3) != 0) {
          pcVar13 = *(char **)(*(int *)((int)this + 0x3c) + iVar3 + 10);
          cVar1 = *pcVar13;
          puVar12 = param_1;
          while (cVar1 != '\0') {
            if (cVar1 == '\x01') {
              puVar12 = puVar12 + (byte)pcVar13[1];
              pcVar13 = pcVar13 + 2;
            }
            else if (cVar1 == '\x02') {
              bVar2 = pcVar13[1];
              puVar10 = (ulonglong *)(pcVar13 + 2);
              for (uVar11 = (uint)bVar2; uVar11 != 0; uVar11 = uVar11 - 1) {
                FUN_0048ffc0(puVar10,puVar12,&local_18);
                puVar12 = puVar12 + 1;
                puVar10 = puVar10 + 1;
              }
              pcVar13 = pcVar13 + (uint)bVar2 * 8 + 2;
            }
            else if (cVar1 == '\b') {
              FUN_0048ffc0((ulonglong *)(pcVar13 + 1),puVar12,(undefined4 *)(pcVar13 + 9));
              puVar12 = puVar12 + 1;
              pcVar13 = pcVar13 + 0xd;
            }
            this = local_14;
            cVar1 = *pcVar13;
          }
        }
        param_1 = (ulonglong *)((int)param_1 + param_6);
        iVar3 = iVar3 + 0xe;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  else if (param_3 < (int)param_5) {
    iStack_c = param_3 * 0xe;
    iStack_8 = param_5 - param_3;
    do {
      psVar4 = (short *)(*(int *)((int)this + 0x3c) + iStack_c);
      if (*psVar4 != 0) {
        pcVar13 = *(char **)(psVar4 + 5);
        iVar3 = -param_2;
        cVar1 = *pcVar13;
        param_3 = iVar3;
        puVar12 = param_1;
        while (cVar1 != '\0') {
          if (cVar1 == '\x01') {
            iVar8 = (uint)(byte)pcVar13[1] * 4;
            if (iVar3 < 0) {
              if (0 < iVar8 + iVar3) {
                iVar5 = -iVar3;
                goto LAB_0049378d;
              }
            }
            else {
              iVar5 = 0;
LAB_0049378d:
              iVar7 = param_4 - iVar3;
              if (iVar8 < param_4 - iVar3) {
                iVar7 = iVar8;
              }
              puVar12 = (ulonglong *)((int)puVar12 + (iVar7 - iVar5) * 2);
            }
            iVar3 = iVar3 + iVar8;
            pcVar13 = pcVar13 + 2;
LAB_004937a1:
            iVar8 = iVar3 - param_4;
LAB_004937a5:
            param_3 = iVar3;
            if (SBORROW4(iVar3,param_4) == iVar8 < 0) break;
          }
          else {
            if (cVar1 == '\x02') {
              bVar2 = pcVar13[1];
              iStack_10 = (uint)bVar2 * 4;
              if (iVar3 < 0) {
                if (0 < iStack_10 + iVar3) {
                  iVar8 = -iVar3;
                  goto LAB_0049367b;
                }
              }
              else {
                iVar8 = 0;
LAB_0049367b:
                iVar5 = param_4 - iVar3;
                if (iStack_10 < param_4 - iVar3) {
                  iVar5 = iStack_10;
                }
                uVar6 = iVar5 - iVar8;
                uStack_4 = uVar6 & 3;
                puVar9 = (ushort *)(pcVar13 + iVar8 * 2 + 2);
                uVar11 = uStack_4;
                if ((uVar6 != 0) && (param_5 = uVar6 & 0xfffffffc, 0 < (int)param_5)) {
                  do {
                    uVar6 = ((ushort)*puVar12 & 0x7c0) << 0x10 | (ushort)*puVar12 & 0xf81f;
                    uVar6 = uVar6 + ((((*puVar9 & 0x7c0) << 0x10 | *puVar9 & 0xf81f) - uVar6) * 0xf
                                    >> 5) & 0x7c0f81f;
                    *(ushort *)puVar12 = (ushort)(uVar6 >> 0x10) | (ushort)uVar6;
                    puVar12 = (ulonglong *)((int)puVar12 + 2);
                    puVar9 = puVar9 + 1;
                    param_5 = param_5 - 1;
                  } while (param_5 != 0);
                }
                for (; uVar11 != 0; uVar11 = uVar11 - 1) {
                  uVar6 = ((ushort)*puVar12 & 0x7c0) << 0x10 | (ushort)*puVar12 & 0xf81f;
                  uVar6 = uVar6 + ((((*puVar9 & 0x7c0) << 0x10 | *puVar9 & 0xf81f) - uVar6) * 0xf >>
                                  5) & 0x7c0f81f;
                  *(ushort *)puVar12 = (ushort)(uVar6 >> 0x10) | (ushort)uVar6;
                  puVar12 = (ulonglong *)((int)puVar12 + 2);
                  puVar9 = puVar9 + 1;
                  iVar3 = param_3;
                }
              }
              pcVar13 = pcVar13 + (uint)bVar2 * 8 + 2;
              iVar3 = iVar3 + iStack_10;
              goto LAB_004937a1;
            }
            if (cVar1 == '\b') {
              if (iVar3 < 0) {
                if (iVar3 != -4 && -1 < iVar3 + 4) {
                  iVar8 = -iVar3;
                  goto LAB_00493401;
                }
              }
              else {
                iVar8 = 0;
LAB_00493401:
                iVar5 = param_4 - iVar3;
                if (4 < iVar5) {
                  iVar5 = 4;
                }
                switch(iVar5 - iVar8) {
                case 1:
                  uVar11 = ((ushort)*puVar12 & 0x7c0) << 0x10 | (ushort)*puVar12 & 0xf81f;
                  uVar11 = uVar11 + ((((*(ushort *)(pcVar13 + iVar8 * 2 + 1) & 0x7c0) << 0x10 |
                                      *(ushort *)(pcVar13 + iVar8 * 2 + 1) & 0xf81f) - uVar11) *
                                     (uint)((byte)pcVar13[iVar8 + 9] >> 4) >> 5) & 0x7c0f81f;
                  *(ushort *)puVar12 = (ushort)(uVar11 >> 0x10) | (ushort)uVar11;
                  break;
                case 2:
                  uVar11 = (uint)*puVar12;
                  uVar6 = (uVar11 & 0x7c0) << 0x10 | uVar11 & 0xf81f;
                  uVar6 = uVar6 + ((((*(ushort *)(pcVar13 + iVar8 * 2 + 1) & 0x7c0) << 0x10 |
                                    *(ushort *)(pcVar13 + iVar8 * 2 + 1) & 0xf81f) - uVar6) *
                                   (uint)((byte)pcVar13[iVar8 + 9] >> 4) >> 5);
                  uVar11 = uVar11 >> 0x10 & 0xf81f | uVar11 & 0x7c00000;
                  uVar11 = uVar11 + ((((*(ushort *)(pcVar13 + iVar8 * 2 + 3) & 0x7c0) << 0x10 |
                                      *(ushort *)(pcVar13 + iVar8 * 2 + 3) & 0xf81f) - uVar11) *
                                     (uint)((byte)pcVar13[iVar8 + 10] >> 4) >> 5);
                  *(uint *)puVar12 =
                       (uVar11 & 0xfffff81f) << 0x10 | uVar6 >> 0x10 & 0x7c0 | uVar11 & 0x7c00000 |
                       uVar6 & 0xf81f;
                  iVar3 = param_3;
                  break;
                case 3:
                  uVar11 = (uint)*puVar12;
                  uVar6 = (uVar11 & 0x7c0) << 0x10 | uVar11 & 0xf81f;
                  uVar11 = uVar11 >> 0x10 & 0xf81f | uVar11 & 0x7c00000;
                  uVar6 = uVar6 + ((((*(ushort *)(pcVar13 + iVar8 * 2 + 1) & 0x7c0) << 0x10 |
                                    *(ushort *)(pcVar13 + iVar8 * 2 + 1) & 0xf81f) - uVar6) *
                                   (uint)((byte)pcVar13[iVar8 + 9] >> 4) >> 5);
                  uVar11 = uVar11 + ((((*(ushort *)(pcVar13 + iVar8 * 2 + 3) & 0x7c0) << 0x10 |
                                      *(ushort *)(pcVar13 + iVar8 * 2 + 3) & 0xf81f) - uVar11) *
                                     (uint)((byte)pcVar13[iVar8 + 10] >> 4) >> 5);
                  *(uint *)puVar12 =
                       (uVar11 & 0xfffff81f) << 0x10 | uVar6 >> 0x10 & 0x7c0 | uVar11 & 0x7c00000 |
                       uVar6 & 0xf81f;
                  uVar11 = (*(ushort *)((int)puVar12 + 4) & 0x7c0) << 0x10 |
                           *(ushort *)((int)puVar12 + 4) & 0xf81f;
                  uVar11 = uVar11 + ((((*(ushort *)(pcVar13 + iVar8 * 2 + 5) & 0x7c0) << 0x10 |
                                      *(ushort *)(pcVar13 + iVar8 * 2 + 5) & 0xf81f) - uVar11) *
                                     (uint)((byte)pcVar13[iVar8 + 0xb] >> 4) >> 5) & 0x7c0f81f;
                  *(ushort *)((int)puVar12 + 4) = (ushort)(uVar11 >> 0x10) | (ushort)uVar11;
                  iVar3 = param_3;
                  break;
                case 4:
                  FUN_0048ffc0((ulonglong *)(pcVar13 + 1),puVar12,(undefined4 *)(pcVar13 + 9));
                }
                puVar12 = (ulonglong *)((int)puVar12 + (iVar5 - iVar8) * 2);
              }
              iVar3 = iVar3 + 4;
              pcVar13 = pcVar13 + 0xd;
              iVar8 = iVar3 - param_4;
              goto LAB_004937a5;
            }
          }
          cVar1 = *pcVar13;
        }
      }
      param_1 = (ulonglong *)((int)param_1 + param_6);
      iStack_c = iStack_c + 0xe;
      iStack_8 = iStack_8 + -1;
      this = local_14;
    } while (iStack_8 != 0);
  }
  return;
}

