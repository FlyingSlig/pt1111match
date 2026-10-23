// FUNCTION: PORT1111 0x0048cb70
// name: FUN_0048cb70
// sig: undefined FUN_0048cb70(uint * param_1, uint * param_2, uint param_3, int param_4, int param_5, int param_6, uint * param_7, int param_8, int param_9)


void __cdecl
FUN_0048cb70(uint *param_1,uint *param_2,uint param_3,int param_4,int param_5,int param_6,
            uint *param_7,int param_8,int param_9)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 local_18;
  uint *local_14;
  uint *local_10;
  int local_c;
  int local_8;
  
  if ((((uint)param_1 & 3) == 0) || (DAT_004e2cb8 == 0)) {
    iVar2 = *(int *)(param_9 + 0x14);
    uVar3 = param_3 & 3;
    if (0 < param_4) {
      local_8 = param_4;
      do {
        local_10 = param_2;
        puVar9 = param_1;
        local_14 = param_7;
        local_c = (int)param_3 >> 2;
        if (0 < (int)param_3 >> 2) {
          do {
            uVar6 = *local_14;
            if (uVar6 != 0) {
              if (uVar6 == 0xffffffff) {
                uVar6 = *local_10;
                *puVar9 = CONCAT22(*(undefined2 *)(iVar2 + (uVar6 >> 8 & 0xff) * 2),
                                   *(undefined2 *)(iVar2 + (uVar6 & 0xff) * 2));
                puVar9[1] = CONCAT22(*(undefined2 *)(iVar2 + (uVar6 >> 0x18) * 2),
                                     *(undefined2 *)(iVar2 + (uVar6 >> 0x10 & 0xff) * 2));
              }
              else {
                uVar12 = *local_10;
                uVar8 = *puVar9;
                uVar4 = (uVar8 & 0x7c0) << 0x10 | uVar8 & 0xf81f;
                uVar7 = (uint)*(ushort *)(iVar2 + (uVar12 & 0xff) * 2);
                uVar8 = uVar8 >> 0x10 & 0xf81f | uVar8 & 0x7c00000;
                uVar11 = (uint)*(ushort *)(iVar2 + (uVar12 >> 8 & 0xff) * 2);
                uVar4 = uVar4 + ((((uVar7 & 0x7c0) << 0x10 | uVar7 & 0xf81f) - uVar4) *
                                 (uVar6 >> 3 & 0x1f) >> 5);
                uVar8 = uVar8 + ((((uVar11 & 0x7c0) << 0x10 | uVar11 & 0xf81f) - uVar8) *
                                 (uVar6 >> 0xb & 0x1f) >> 5);
                *puVar9 = (uVar8 & 0xfffff81f) << 0x10 | uVar4 >> 0x10 & 0x7c0 | uVar4 & 0xf81f |
                          uVar8 & 0x7c00000;
                uVar6 = puVar9[1];
                uVar8 = (uVar6 & 0x7c0) << 0x10 | uVar6 & 0xf81f;
                uVar4 = (uint)*(ushort *)(iVar2 + (uVar12 >> 0x10 & 0xff) * 2);
                uVar8 = uVar8 + ((((uVar4 & 0x7c0) << 0x10 | uVar4 & 0xf81f) - uVar8) *
                                 (*local_14 >> 0x13 & 0x1f) >> 5);
                uVar6 = uVar6 >> 0x10 & 0xf81f | uVar6 & 0x7c00000;
                uVar12 = (uint)*(ushort *)(iVar2 + (uVar12 >> 0x18) * 2);
                uVar6 = uVar6 + ((((uVar12 & 0x7c0) << 0x10 | uVar12 & 0xf81f) - uVar6) *
                                 (*local_14 >> 0x1b) >> 5);
                puVar9[1] = (uVar6 & 0xfffff81f) << 0x10 | uVar8 >> 0x10 & 0x7c0 | uVar8 & 0xf81f |
                            uVar6 & 0x7c00000;
              }
            }
            local_14 = local_14 + 1;
            local_10 = local_10 + 1;
            puVar9 = puVar9 + 2;
            local_c = local_c + -1;
          } while (local_c != 0);
        }
        if (uVar3 == 1) {
          if ((byte)*local_14 != 0) {
            uVar6 = (uint)*(ushort *)(iVar2 + (uint)(byte)*local_10 * 2);
            uVar12 = ((ushort)*puVar9 & 0x7c0) << 0x10 | (ushort)*puVar9 & 0xf81f;
            uVar6 = uVar12 + ((((uVar6 & 0x7c0) << 0x10 | uVar6 & 0xf81f) - uVar12) *
                              (uint)(byte)((byte)*local_14 >> 3) >> 5) & 0x7c0f81f;
            *(ushort *)puVar9 = (ushort)(uVar6 >> 0x10) | (ushort)uVar6;
          }
        }
        else if (uVar3 == 2) {
          uVar5 = (ushort)*local_14;
          if (uVar5 != 0) {
            uVar6 = *puVar9;
            local_18 = (uint)(ushort)*local_10;
            uVar12 = (uVar6 & 0x7c0) << 0x10 | uVar6 & 0xf81f;
            uVar8 = (uint)*(ushort *)(iVar2 + (local_18 & 0xff) * 2);
            uVar6 = uVar6 >> 0x10 & 0xf81f | uVar6 & 0x7c00000;
            local_18._1_1_ = (byte)((ushort)*local_10 >> 8);
            uVar4 = (uint)*(ushort *)(iVar2 + (uint)local_18._1_1_ * 2);
            uVar12 = uVar12 + ((((uVar8 & 0x7c0) << 0x10 | uVar8 & 0xf81f) - uVar12) *
                               (uVar5 >> 3 & 0x1f) >> 5);
            uVar6 = uVar6 + ((((uVar4 & 0x7c0) << 0x10 | uVar4 & 0xf81f) - uVar6) *
                             (uint)(uVar5 >> 0xb) >> 5);
            *puVar9 = (uVar6 & 0xfffff81f) << 0x10 | uVar12 >> 0x10 & 0x7c0 | uVar6 & 0x7c00000 |
                      uVar12 & 0xf81f;
          }
        }
        else if ((uVar3 == 3) && (uVar6 = *local_14, uVar6 != 0)) {
          bVar1 = *(byte *)((int)local_10 + 2);
          uVar12 = *puVar9;
          local_18 = (uint)(uint3)*local_10;
          uVar8 = (uVar12 & 0x7c0) << 0x10 | uVar12 & 0xf81f;
          uVar4 = (uint)*(ushort *)(iVar2 + (local_18 & 0xff) * 2);
          uVar12 = uVar12 >> 0x10 & 0xf81f | uVar12 & 0x7c00000;
          local_18._1_1_ = (byte)((ushort)*local_10 >> 8);
          uVar7 = (uint)*(ushort *)(iVar2 + (uint)local_18._1_1_ * 2);
          uVar8 = uVar8 + ((((uVar4 & 0x7c0) << 0x10 | uVar4 & 0xf81f) - uVar8) *
                           (uVar6 >> 3 & 0x1f) >> 5);
          uVar12 = uVar12 + ((((uVar7 & 0x7c0) << 0x10 | uVar7 & 0xf81f) - uVar12) *
                             (uVar6 >> 0xb & 0x1f) >> 5);
          *puVar9 = (uVar12 & 0xfffff81f) << 0x10 | uVar8 >> 0x10 & 0x7c0 | uVar12 & 0x7c00000 |
                    uVar8 & 0xf81f;
          uVar6 = ((ushort)puVar9[1] & 0x7c0) << 0x10 | (ushort)puVar9[1] & 0xf81f;
          uVar12 = (uint)*(ushort *)(iVar2 + (uint)bVar1 * 2);
          uVar6 = uVar6 + ((((uVar12 & 0x7c0) << 0x10 | uVar12 & 0xf81f) - uVar6) *
                           (*local_14 >> 0x13 & 0x1f) >> 5) & 0x7c0f81f;
          *(ushort *)(puVar9 + 1) = (ushort)(uVar6 >> 0x10) | (ushort)uVar6;
        }
        param_1 = (uint *)((int)param_1 + param_5);
        param_2 = (uint *)((int)param_2 + param_6);
        param_7 = (uint *)((int)param_7 + param_8);
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
  }
  else {
    iVar2 = *(int *)(param_9 + 0x14);
    if (0 < param_4) {
      local_14 = (uint *)param_4;
      do {
        if (0 < (int)param_3) {
          local_10 = (uint *)param_3;
          puVar9 = param_1;
          puVar10 = param_2;
          do {
            bVar1 = *(byte *)(((int)param_7 - (int)param_2) + (int)puVar10);
            if (bVar1 != 0) {
              if (bVar1 == 0xff) {
                uVar5 = *(ushort *)(iVar2 + (uint)(byte)*puVar10 * 2);
              }
              else {
                uVar3 = ((ushort)*puVar9 & 0x7c0) << 0x10 | (ushort)*puVar9 & 0xf81f;
                uVar6 = (uint)*(ushort *)(iVar2 + (uint)(byte)*puVar10 * 2);
                uVar3 = uVar3 + ((((uVar6 & 0x7c0) << 0x10 | uVar6 & 0xf81f) - uVar3) *
                                 (uint)(bVar1 >> 3) >> 5) & 0x7c0f81f;
                uVar5 = (ushort)(uVar3 >> 0x10) | (ushort)uVar3;
              }
              *(ushort *)puVar9 = uVar5;
            }
            puVar10 = (uint *)((int)puVar10 + 1);
            puVar9 = (uint *)((int)puVar9 + 2);
            local_10 = (uint *)((int)local_10 - 1);
          } while (local_10 != (uint *)0x0);
        }
        param_1 = (uint *)((int)param_1 + param_5);
        param_7 = (uint *)((int)param_7 + param_8);
        param_2 = (uint *)((int)param_2 + param_6);
        local_14 = (uint *)((int)local_14 + -1);
      } while (local_14 != (uint *)0x0);
      return;
    }
  }
  return;
}

