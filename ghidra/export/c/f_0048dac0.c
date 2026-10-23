// FUNCTION: PORT1111 0x0048dac0
// name: FUN_0048dac0
// sig: undefined FUN_0048dac0(uint * param_1, uint * param_2, int param_3, int param_4, int param_5, int param_6, uint * param_7, int param_8)


void __cdecl
FUN_0048dac0(uint *param_1,uint *param_2,int param_3,int param_4,int param_5,int param_6,
            uint *param_7,int param_8)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int local_10;
  int local_c;
  
  iVar4 = param_3 >> 2;
  if ((iVar4 != 0) && (0 < param_4)) {
    local_c = param_4;
    do {
      puVar1 = param_1;
      puVar2 = param_2;
      puVar3 = param_7;
      local_10 = iVar4;
      if (0 < iVar4) {
        do {
          uVar6 = *puVar3;
          if (uVar6 != 0) {
            if (uVar6 == 0xffffffff) {
              uVar6 = *puVar2;
              *puVar1 = (((uVar6 & 0xf800) << 3 | uVar6 & 0x7e0) << 2 | uVar6 & 0x1f) << 3;
              uVar6 = *puVar2;
              puVar1[1] = ((uVar6 >> 2 & 0x7c000 | uVar6 & 0x7e00000) >> 3 | uVar6 & 0xf80000ff) >>
                          8;
              uVar6 = puVar2[1];
              puVar1[2] = (((uVar6 & 0xf800) << 3 | uVar6 & 0x7e0) << 2 | uVar6 & 0x1f) << 3;
              uVar6 = puVar2[1];
              puVar1[3] = ((uVar6 >> 2 & 0x7c000 | uVar6 & 0x7e00000) >> 3 | uVar6 & 0xf80000ff) >>
                          8;
            }
            else {
              uVar7 = *puVar2;
              uVar5 = *puVar1 & 0xff00;
              uVar8 = *puVar1 & 0xff00ff;
              *puVar1 = ((((uVar7 & 0xf800) << 5 | uVar7 & 0x1f) * 8 - uVar8) * (uVar6 & 0xff) >> 8)
                        + uVar8 & 0xff00ff |
                        (((uVar7 & 0x7e0) * 0x20 - uVar5) * (uVar6 & 0xff) >> 8) + uVar5 & 0xff00;
              uVar6 = (uint)*(ushort *)((int)puVar2 + 2);
              uVar7 = puVar1[1] & 0xff00;
              uVar5 = puVar1[1] & 0xff00ff;
              puVar1[1] = ((((uVar6 & 0xf800) << 5 | uVar6 & 0x1f) * 8 - uVar5) *
                           (uint)*(byte *)((int)puVar3 + 1) >> 8) + uVar5 & 0xff00ff |
                          (((uVar6 & 0x7e0) * 0x20 - uVar7) * (uint)*(byte *)((int)puVar3 + 1) >> 8)
                          + uVar7 & 0xff00;
              uVar6 = puVar2[1];
              uVar7 = puVar1[2];
              uVar5 = uVar7 & 0xff00;
              uVar7 = uVar7 & 0xff00ff;
              puVar1[2] = ((((uVar6 & 0xf800) << 5 | uVar6 & 0x1f) * 8 - uVar7) *
                           (uint)*(byte *)((int)puVar3 + 2) >> 8) + uVar7 & 0xff00ff |
                          (((uVar6 & 0x7e0) * 0x20 - uVar5) * (uint)*(byte *)((int)puVar3 + 2) >> 8)
                          + uVar5 & 0xff00;
              uVar6 = (uint)*(ushort *)((int)puVar2 + 6);
              uVar7 = puVar1[3] & 0xff00;
              uVar5 = puVar1[3] & 0xff00ff;
              puVar1[3] = ((((uVar6 & 0xf800) << 5 | uVar6 & 0x1f) * 8 - uVar5) *
                           (uint)*(byte *)((int)puVar3 + 3) >> 8) + uVar5 & 0xff00ff |
                          (((uVar6 & 0x7e0) * 0x20 - uVar7) * (uint)*(byte *)((int)puVar3 + 3) >> 8)
                          + uVar7 & 0xff00;
            }
          }
          local_10 = local_10 + -1;
          puVar1 = puVar1 + 4;
          puVar2 = puVar2 + 2;
          puVar3 = puVar3 + 1;
        } while (local_10 != 0);
      }
      param_1 = (uint *)((int)param_1 + param_5);
      param_2 = (uint *)((int)param_2 + param_6);
      param_7 = (uint *)((int)param_7 + param_8);
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}

