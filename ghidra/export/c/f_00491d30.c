// FUNCTION: PORT1111 0x00491d30
// name: FUN_00491d30
// sig: undefined FUN_00491d30(void * this, ulonglong * param_1, undefined4 param_2, int param_3, undefined4 param_4, int param_5, int param_6, int param_7)


void __thiscall
FUN_00491d30(void *this,ulonglong *param_1,undefined4 param_2,int param_3,undefined4 param_4,
            int param_5,int param_6,int param_7)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  ulonglong *puVar11;
  char *pcVar12;
  uint local_20 [2];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar2 = *(uint *)((int)this + 0x18);
  local_8 = 0;
  local_4 = 0;
  local_10 = 0;
  local_c = 0;
  local_18 = 0;
  local_14 = 0;
  FUN_00487f80((short)uVar2,0,&local_8,&local_10,&local_18,local_20);
  if ((param_7 == 0) && (param_3 < param_5)) {
    iVar6 = param_3 * 0xe;
    param_5 = param_5 - param_3;
    do {
      psVar7 = (short *)(iVar6 + *(int *)((int)this + 0x3c));
      if (*psVar7 != 0) {
        pcVar12 = *(char **)(psVar7 + 5);
        cVar1 = *pcVar12;
        puVar11 = param_1;
        if (cVar1 == '\x06') {
          iVar4 = 0;
          if (psVar7[4] != 0) {
            do {
              uVar8 = (uint)*(ushort *)((int)param_1 + iVar4 * 2);
              uVar8 = (uVar8 & 0x7c0) << 0x10 | uVar8 & 0xf81f;
              uVar8 = uVar8 + ((uint)(byte)pcVar12[iVar4 + 1] *
                               (((uVar2 & 0x7c0) << 0x10 | uVar2 & 0xf81f) - uVar8) >> 5) &
                      0x7c0f81f;
              *(ushort *)((int)param_1 + iVar4 * 2) = (ushort)(uVar8 >> 0x10) | (ushort)uVar8;
              iVar4 = iVar4 + 1;
            } while (iVar4 < (int)(uint)*(ushort *)(iVar6 + 8 + *(int *)((int)this + 0x3c)));
          }
        }
        else {
          while (cVar1 != '\0') {
            if (cVar1 == '\t') {
              local_20[0] = (uint)(byte)pcVar12[1];
              pcVar10 = pcVar12 + 2;
              for (iVar4 = (int)local_20[0] >> 2; iVar4 != 0; iVar4 = iVar4 + -1) {
                FUN_0048fe60(CONCAT44(local_4,local_8),CONCAT44(local_c,local_10),
                             CONCAT44(local_14,local_18),puVar11,*(undefined4 *)pcVar10);
                puVar11 = puVar11 + 1;
                pcVar10 = pcVar10 + 4;
              }
              pcVar12 = pcVar12 + local_20[0] + 2;
            }
            else if (cVar1 == '\n') {
              uVar8 = (uint)(byte)pcVar12[1];
              if (uVar8 == 1) {
                uVar3 = ((ushort)*puVar11 & 0x7c0) << 0x10 | (ushort)*puVar11 & 0xf81f;
                uVar3 = uVar3 + ((((uVar2 & 0x7c0) << 0x10 | uVar2 & 0xf81f) - uVar3) *
                                 (uint)((byte)pcVar12[2] >> 3) >> 5) & 0x7c0f81f;
                *(ushort *)puVar11 = (ushort)(uVar3 >> 0x10) | (ushort)uVar3;
LAB_00492060:
                pcVar12 = pcVar12 + uVar8 + 2;
                puVar11 = (ulonglong *)((int)puVar11 + uVar8 * 2);
              }
              else if (uVar8 == 2) {
                uVar8 = (uint)*puVar11;
                uVar3 = (uVar8 & 0x7c0) << 0x10 | uVar8 & 0xf81f;
                uVar5 = (uVar2 & 0x7c0) << 0x10 | uVar2 & 0xf81f;
                uVar3 = uVar3 + ((uint)((byte)pcVar12[2] >> 3) * (uVar5 - uVar3) >> 5);
                uVar8 = uVar8 >> 0x10 & 0xf81f | uVar8 & 0x7c00000;
                uVar8 = uVar8 + ((uint)((byte)pcVar12[3] >> 3) * (uVar5 - uVar8) >> 5);
                *(uint *)puVar11 =
                     (uVar8 & 0xfffff81f) << 0x10 | uVar3 >> 0x10 & 0x7c0 | uVar3 & 0xf81f |
                     uVar8 & 0x7c00000;
                pcVar12 = pcVar12 + 4;
                puVar11 = (ulonglong *)((int)puVar11 + 4);
              }
              else {
                if (uVar8 != 3) goto LAB_00492060;
                uVar8 = (uint)*puVar11;
                uVar3 = (uVar8 & 0x7c0) << 0x10 | uVar8 & 0xf81f;
                uVar9 = (uVar2 & 0x7c0) << 0x10 | uVar2 & 0xf81f;
                uVar3 = uVar3 + ((uint)((byte)pcVar12[2] >> 3) * (uVar9 - uVar3) >> 5);
                uVar5 = uVar8 >> 0x10 & 0xf81f | uVar8 & 0x7c00000;
                uVar5 = uVar5 + ((uint)((byte)pcVar12[3] >> 3) * (uVar9 - uVar5) >> 5);
                uVar8 = (*(ushort *)((int)puVar11 + 4) & 0x7c0) << 0x10 |
                        *(ushort *)((int)puVar11 + 4) & 0xf81f;
                *(uint *)puVar11 =
                     (uVar5 & 0xfffff81f) << 0x10 | uVar3 >> 0x10 & 0x7c0 | uVar3 & 0xf81f |
                     uVar5 & 0x7c00000;
                uVar8 = uVar8 + ((uint)((byte)pcVar12[4] >> 3) * (uVar9 - uVar8) >> 5) & 0x7c0f81f;
                *(ushort *)((int)puVar11 + 4) = (ushort)(uVar8 >> 0x10) | (ushort)uVar8;
                pcVar12 = pcVar12 + 5;
                puVar11 = (ulonglong *)((int)puVar11 + 6);
              }
            }
            else if (cVar1 == '\v') {
              puVar11 = (ulonglong *)((int)puVar11 + (uint)(byte)pcVar12[1] * 2);
              pcVar12 = pcVar12 + 2;
            }
            cVar1 = *pcVar12;
          }
        }
      }
      param_1 = (ulonglong *)((int)param_1 + param_6);
      iVar6 = iVar6 + 0xe;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}

