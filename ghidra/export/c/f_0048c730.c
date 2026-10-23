// FUNCTION: PORT1111 0x0048c730
// name: FUN_0048c730
// sig: undefined FUN_0048c730(uint * param_1, int param_2, int param_3, int param_4, uint * param_5, int param_6, ushort param_7)


void __cdecl
FUN_0048c730(uint *param_1,int param_2,int param_3,int param_4,uint *param_5,int param_6,
            ushort param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *local_8;
  int local_4;
  
  if (0 < param_3) {
    local_4 = param_3;
    do {
      puVar5 = param_1;
      param_3 = param_2 >> 2;
      local_8 = param_5;
      if (0 < param_2 >> 2) {
        do {
          uVar4 = *local_8;
          if (uVar4 != 0) {
            uVar3 = *puVar5;
            uVar2 = (uVar3 & 0x7c0) << 0x10 | uVar3 & 0xf81f;
            uVar1 = (param_7 & 0x7c0) << 0x10 | param_7 & 0xf81f;
            uVar2 = uVar2 + ((uVar1 - uVar2) * (uVar4 >> 3 & 0x1f) >> 5);
            uVar3 = uVar3 >> 0x10 & 0xf81f | uVar3 & 0x7c00000;
            uVar3 = uVar3 + ((uVar1 - uVar3) * (uVar4 >> 0xb & 0x1f) >> 5);
            *puVar5 = (uVar3 & 0xfffff81f) << 0x10 | uVar2 >> 0x10 & 0x7c0 | uVar2 & 0xf81f |
                      uVar3 & 0x7c00000;
            uVar4 = puVar5[1];
            uVar3 = (uVar4 & 0x7c0) << 0x10 | uVar4 & 0xf81f;
            uVar3 = uVar3 + ((uVar1 - uVar3) * (*local_8 >> 0x13 & 0x1f) >> 5);
            uVar4 = uVar4 >> 0x10 & 0xf81f | uVar4 & 0x7c00000;
            uVar4 = uVar4 + ((uVar1 - uVar4) * (*local_8 >> 0x1b) >> 5);
            puVar5[1] = (uVar4 & 0xfffff81f) << 0x10 | uVar3 >> 0x10 & 0x7c0 | uVar3 & 0xf81f |
                        uVar4 & 0x7c00000;
          }
          local_8 = local_8 + 1;
          param_3 = param_3 + -1;
          puVar5 = puVar5 + 2;
        } while (param_3 != 0);
      }
      param_5 = (uint *)((int)param_5 + param_6);
      param_1 = (uint *)((int)param_1 + param_4);
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  return;
}

