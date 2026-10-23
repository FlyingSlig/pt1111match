// FUNCTION: PORT1111 0x0048c210
// name: FUN_0048c210
// sig: undefined FUN_0048c210(uint * param_1, uint * param_2, uint param_3, int param_4, int param_5, int param_6, uint * param_7, int param_8)


void __cdecl
FUN_0048c210(uint *param_1,uint *param_2,uint param_3,int param_4,int param_5,int param_6,
            uint *param_7,int param_8)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  int local_14;
  uint *local_10;
  int local_c;
  int local_8;
  
  if ((((uint)param_1 & 3) == 0) || (DAT_004e2cb8 == 0)) {
    uVar2 = param_3 & 3;
    if (0 < param_4) {
      local_8 = param_4;
      do {
        puVar8 = param_1;
        puVar7 = param_2;
        local_10 = param_7;
        local_c = (int)param_3 >> 2;
        if (0 < (int)param_3 >> 2) {
          do {
            uVar6 = *local_10;
            if (uVar6 != 0) {
              if (uVar6 == 0xffffffff) {
                *puVar8 = *puVar7;
                puVar8[1] = puVar7[1];
              }
              else {
                uVar5 = *puVar8;
                uVar4 = *puVar7;
                uVar3 = (uVar5 & 0x3e0) << 0x10 | uVar5 & 0x7c1f;
                uVar3 = uVar3 + ((((uVar4 & 0x3e0) << 0x10 | uVar4 & 0x7c1f) - uVar3) *
                                 (uVar6 >> 3 & 0x1f) >> 5);
                uVar5 = uVar5 >> 0x10 & 0x7c1f | uVar5 & 0x3e00000;
                uVar5 = uVar5 + (((uVar4 >> 0x10 & 0x7c1f | uVar4 & 0x3e00000) - uVar5) *
                                 (uVar6 >> 0xb & 0x1f) >> 5);
                *puVar8 = (uVar5 & 0x7c1f) << 0x10 | uVar3 >> 0x10 & 0x3e0 | uVar3 & 0x7c1f |
                          uVar5 & 0x3e00000;
                uVar6 = puVar8[1];
                uVar5 = puVar7[1];
                uVar4 = (uVar6 & 0x3e0) << 0x10 | uVar6 & 0x7c1f;
                uVar4 = uVar4 + ((((uVar5 & 0x3e0) << 0x10 | uVar5 & 0x7c1f) - uVar4) *
                                 (*local_10 >> 0x13 & 0x1f) >> 5);
                uVar6 = uVar6 >> 0x10 & 0x7c1f | uVar6 & 0x3e00000;
                uVar6 = uVar6 + (((uVar5 >> 0x10 & 0x7c1f | uVar5 & 0x3e00000) - uVar6) *
                                 (*local_10 >> 0x1b) >> 5);
                puVar8[1] = (uVar6 & 0x7c1f) << 0x10 | uVar4 >> 0x10 & 0x3e0 | uVar4 & 0x7c1f |
                            uVar6 & 0x3e00000;
              }
            }
            puVar7 = puVar7 + 2;
            puVar8 = puVar8 + 2;
            local_10 = local_10 + 1;
            local_c = local_c + -1;
          } while (local_c != 0);
        }
        if (uVar2 == 1) {
          if ((byte)*local_10 != 0) {
            uVar6 = (uint)(byte)((byte)*local_10 >> 3);
LAB_0048c69e:
            uVar5 = ((ushort)*puVar8 & 0x3e0) << 0x10 | (ushort)*puVar8 & 0x7c1f;
            uVar6 = uVar5 + ((((*puVar7 & 0x3e0) << 0x10 | *puVar7 & 0x7c1f) - uVar5) * uVar6 >> 5)
                    & 0x3e07c1f;
            *(ushort *)puVar8 = (ushort)(uVar6 >> 0x10) | (ushort)uVar6;
          }
        }
        else if (uVar2 == 2) {
          uVar1 = (ushort)*local_10;
          if (uVar1 != 0) {
            uVar6 = *puVar8;
            uVar5 = *puVar7;
            uVar4 = (uVar6 & 0x3e0) << 0x10 | uVar6 & 0x7c1f;
            uVar4 = uVar4 + ((((uVar5 & 0x3e0) << 0x10 | uVar5 & 0x7c1f) - uVar4) *
                             (uVar1 >> 3 & 0x1f) >> 5);
            uVar6 = uVar6 >> 0x10 & 0x7c1f | uVar6 & 0x3e00000;
            uVar6 = uVar6 + (((uVar5 >> 0x10 & 0x7c1f | uVar5 & 0x3e00000) - uVar6) *
                             (uint)(uVar1 >> 0xb) >> 5);
            *puVar8 = (uVar6 & 0x7c1f) << 0x10 | uVar4 >> 0x10 & 0x3e0 | uVar4 & 0x7c1f |
                      uVar6 & 0x3e00000;
          }
        }
        else if ((uVar2 == 3) && (uVar6 = *local_10, uVar6 != 0)) {
          uVar5 = *puVar8;
          uVar4 = *puVar7;
          uVar3 = (uVar5 & 0x3e0) << 0x10 | uVar5 & 0x7c1f;
          uVar3 = uVar3 + ((((uVar4 & 0x3e0) << 0x10 | uVar4 & 0x7c1f) - uVar3) *
                           (uVar6 >> 3 & 0x1f) >> 5);
          uVar5 = uVar5 >> 0x10 & 0x7c1f | uVar5 & 0x3e00000;
          uVar5 = uVar5 + (((uVar4 >> 0x10 & 0x7c1f | uVar4 & 0x3e00000) - uVar5) *
                           (uVar6 >> 0xb & 0x1f) >> 5);
          *puVar8 = uVar3 >> 0x10 & 0x3e0 | (uVar5 & 0x7c1f) << 0x10 | uVar5 & 0x3e00000 |
                    uVar3 & 0x7c1f;
          puVar8 = puVar8 + 1;
          puVar7 = puVar7 + 1;
          uVar6 = *local_10 >> 0x13 & 0x1f;
          goto LAB_0048c69e;
        }
        param_7 = (uint *)((int)param_7 + param_8);
        param_1 = (uint *)((int)param_1 + param_5);
        param_2 = (uint *)((int)param_2 + param_6);
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
  }
  else if (0 < param_4) {
    local_14 = param_4;
    do {
      if (0 < (int)param_3) {
        local_10 = (uint *)param_3;
        puVar8 = param_1;
        do {
          uVar1 = *(ushort *)(((int)param_7 - (int)param_1) + (int)puVar8);
          if (uVar1 != 0) {
            if (uVar1 == 0xff) {
              *(ushort *)puVar8 = *(ushort *)(((int)param_2 - (int)param_1) + (int)puVar8);
            }
            else {
              uVar2 = ((ushort)*puVar8 & 0x3e0) << 0x10 | (ushort)*puVar8 & 0x7c1f;
              uVar6 = (uint)*(ushort *)(((int)param_2 - (int)param_1) + (int)puVar8);
              uVar2 = uVar2 + ((((uVar6 & 0x3e0) << 0x10 | uVar6 & 0x7c1f) - uVar2) *
                               (uVar1 >> 3 & 0x1f) >> 5) & 0x3e07c1f;
              *(ushort *)puVar8 = (ushort)(uVar2 >> 0x10) | (ushort)uVar2;
            }
          }
          puVar8 = (uint *)((int)puVar8 + 2);
          local_10 = (uint *)((int)local_10 - 1);
        } while (local_10 != (uint *)0x0);
      }
      param_2 = (uint *)((int)param_2 + param_6);
      param_7 = (uint *)((int)param_7 + param_8);
      param_1 = (uint *)((int)param_1 + param_5);
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    return;
  }
  return;
}

