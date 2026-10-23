// FUNCTION: PORT1111 0x00492110
// name: FUN_00492110
// sig: undefined FUN_00492110(void * this, uint * param_1, undefined4 param_2, ushort * param_3, undefined4 param_4, int param_5, int param_6)


void __thiscall
FUN_00492110(void *this,uint *param_1,undefined4 param_2,ushort *param_3,undefined4 param_4,
            int param_5,int param_6)

{
  char *pcVar1;
  ushort *puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  ushort *puVar10;
  int local_c;
  
  if ((int)param_3 < param_5) {
    iVar6 = (int)param_3 * 0xe;
    local_c = param_5 - (int)param_3;
    do {
      if (*(short *)(iVar6 + *(int *)((int)this + 0x3c)) != 0) {
        puVar10 = *(ushort **)(iVar6 + *(int *)((int)this + 0x3c) + 10);
        cVar3 = (char)*puVar10;
        puVar2 = puVar10;
        puVar7 = param_1;
        while (cVar3 != '\0') {
          param_3 = puVar2;
          switch(cVar3) {
          case '\x01':
            puVar7 = puVar7 + *(byte *)((int)puVar10 + 1);
            puVar10 = puVar10 + 1;
            param_3 = puVar10;
            break;
          case '\x02':
            uVar4 = (uint)*(byte *)((int)puVar10 + 1);
            puVar8 = (uint *)(puVar10 + 1);
            puVar9 = puVar7;
            for (uVar5 = uVar4; uVar5 != 0; uVar5 = uVar5 - 1) {
              *puVar9 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar9 = puVar9 + 1;
            }
            puVar7 = puVar7 + uVar4;
            puVar10 = puVar10 + uVar4 * 2 + 1;
            param_3 = puVar10;
            break;
          case '\x03':
            uVar5 = *puVar7;
            uVar4 = (uVar5 & 0x7c0) << 0x10 | uVar5 & 0xf81f;
            uVar4 = uVar4 + ((((*(ushort *)((int)puVar10 + 1) & 0x7c0) << 0x10 |
                              *(ushort *)((int)puVar10 + 1) & 0xf81f) - uVar4) *
                             ((*(byte *)((int)puVar10 + 5) & 0xf) * 2 + 1) >> 5);
            uVar5 = uVar5 >> 0x10 & 0xf81f | uVar5 & 0x7c00000;
            uVar5 = uVar5 + ((((*(ushort *)((int)puVar10 + 3) & 0x7c0) << 0x10 |
                              *(ushort *)((int)puVar10 + 3) & 0xf81f) - uVar5) *
                             ((*(byte *)((int)puVar10 + 5) >> 3 & 0x1e) + 1) >> 5);
            *puVar7 = (uVar5 & 0xfffff81f) << 0x10 | uVar4 >> 0x10 & 0x7c0 | uVar4 & 0xf81f |
                      uVar5 & 0x7c00000;
            puVar7 = puVar7 + 1;
            puVar10 = puVar10 + 3;
            param_3 = puVar10;
            break;
          case '\x04':
            pcVar1 = (char *)((int)puVar10 + 1);
            puVar10 = puVar10 + 1;
            param_5 = 0;
            param_3 = puVar10;
            if (*pcVar1 != '\0') {
              do {
                uVar5 = *puVar7;
                uVar4 = (uVar5 & 0x7c0) << 0x10 | uVar5 & 0xf81f;
                uVar4 = uVar4 + ((((*puVar10 & 0x7c0) << 0x10 | *puVar10 & 0xf81f) - uVar4) *
                                 (((byte)puVar10[2] & 0xf) * 2 + 1) >> 5);
                uVar5 = uVar5 >> 0x10 & 0xf81f | uVar5 & 0x7c00000;
                uVar5 = uVar5 + ((((puVar10[1] & 0x7c0) << 0x10 | puVar10[1] & 0xf81f) - uVar5) *
                                 (((byte)((byte)puVar10[2] >> 3) & 0x1e) + 1) >> 5);
                *puVar7 = (uVar5 & 0xfffff81f) << 0x10 | uVar4 >> 0x10 & 0x7c0 | uVar4 & 0xf81f |
                          uVar5 & 0x7c00000;
                puVar10 = (ushort *)((int)puVar10 + 5);
                puVar7 = puVar7 + 1;
                param_5 = param_5 + 1;
                param_3 = puVar10;
              } while (param_5 < (int)(uint)*(byte *)((int)puVar2 + 1));
            }
          }
          puVar2 = param_3;
          cVar3 = (char)*puVar10;
        }
      }
      param_1 = (uint *)((int)param_1 + param_6);
      iVar6 = iVar6 + 0xe;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}

