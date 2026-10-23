// FUNCTION: PORT1111 0x00491930
// name: FUN_00491930
// sig: undefined FUN_00491930(void * this, ulonglong * param_1, undefined4 param_2, int param_3, undefined4 param_4, int param_5, int param_6, ushort * param_7)


void __thiscall
FUN_00491930(void *this,ulonglong *param_1,undefined4 param_2,int param_3,undefined4 param_4,
            int param_5,int param_6,ushort *param_7)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  uint uVar8;
  uint uVar9;
  ushort *puVar10;
  ushort *puVar11;
  ulonglong *puVar12;
  int local_4;
  
  uVar1 = *(uint *)((int)this + 0x18);
  if ((param_7 == (ushort *)0x0) && (param_3 < param_5)) {
    iVar6 = param_3 * 0xe;
    local_4 = param_5 - param_3;
    do {
      psVar7 = (short *)(iVar6 + *(int *)((int)this + 0x3c));
      if (*psVar7 != 0) {
        puVar10 = *(ushort **)(psVar7 + 5);
        cVar2 = (char)*puVar10;
        param_7 = puVar10;
        puVar12 = param_1;
        if (cVar2 == '\x06') {
          iVar4 = 0;
          if (psVar7[4] != 0) {
            do {
              uVar8 = (uint)*(ushort *)((int)param_1 + iVar4 * 2);
              uVar8 = (uVar8 & 0x7c0) << 0x10 | uVar8 & 0xf81f;
              uVar8 = uVar8 + (((*(byte *)(iVar4 + 1 + (int)puVar10) & 0xf) * 2 + 1) *
                               (((uVar1 & 0x7c0) << 0x10 | uVar1 & 0xf81f) - uVar8) >> 5) &
                      0x7c0f81f;
              *(ushort *)((int)param_1 + iVar4 * 2) = (ushort)(uVar8 >> 0x10) | (ushort)uVar8;
              iVar4 = iVar4 + 1;
            } while (iVar4 < (int)(uint)*(ushort *)(iVar6 + 8 + *(int *)((int)this + 0x3c)));
          }
        }
        else {
          while (cVar2 != '\0') {
            if (cVar2 == '\t') {
              uVar8 = (uint)(*(byte *)((int)puVar10 + 1) >> 1);
              puVar11 = puVar10;
              for (iVar4 = (int)uVar8 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
                puVar11 = puVar11 + 1;
                uVar3 = (uint)*puVar11;
                FUN_00490080(0,0,0,(((uVar3 & 0xf000) << 4 | uVar3 & 0xf00) << 4 | uVar3 & 0xf0) <<
                                   4 | uVar3 & 0xf,puVar12);
                puVar12 = puVar12 + 1;
              }
              puVar10 = (ushort *)(uVar8 + 2 + (int)puVar10);
              param_7 = puVar10;
            }
            else if (cVar2 == '\n') {
              uVar8 = (uint)*(byte *)((int)puVar10 + 1);
              if (uVar8 == 1) {
                uVar3 = ((ushort)*puVar12 & 0x7c0) << 0x10 | (ushort)*puVar12 & 0xf81f;
                uVar3 = uVar3 + ((((uVar1 & 0x7c0) << 0x10 | uVar1 & 0xf81f) - uVar3) *
                                 (((byte)puVar10[1] & 0xf) * 2 + 1) >> 5) & 0x7c0f81f;
                *(ushort *)puVar12 = (ushort)(uVar3 >> 0x10) | (ushort)uVar3;
LAB_00491c6a:
                puVar10 = (ushort *)(((int)uVar8 >> 1) + 3 + (int)puVar10);
                puVar12 = (ulonglong *)((int)puVar12 + uVar8 * 2);
                param_7 = puVar10;
              }
              else if (uVar8 == 2) {
                uVar8 = (uint)*puVar12;
                uVar5 = (uVar1 & 0x7c0) << 0x10 | uVar1 & 0xf81f;
                uVar3 = (uVar8 & 0x7c0) << 0x10 | uVar8 & 0xf81f;
                uVar3 = uVar3 + ((((byte)puVar10[1] & 0xf) * 2 + 1) * (uVar5 - uVar3) >> 5);
                uVar8 = uVar8 >> 0x10 & 0xf81f | uVar8 & 0x7c00000;
                uVar8 = uVar8 + ((((byte)((byte)puVar10[1] >> 3) & 0x1e) + 1) * (uVar5 - uVar8) >> 5
                                );
                *(uint *)puVar12 =
                     (uVar8 & 0xfffff81f) << 0x10 | uVar3 >> 0x10 & 0x7c0 | uVar3 & 0xf81f |
                     uVar8 & 0x7c00000;
                puVar10 = puVar10 + 2;
                puVar12 = (ulonglong *)((int)puVar12 + 4);
                param_7 = puVar10;
              }
              else {
                if (uVar8 != 3) goto LAB_00491c6a;
                uVar8 = (uint)*puVar12;
                uVar3 = (uVar8 & 0x7c0) << 0x10 | uVar8 & 0xf81f;
                uVar9 = (uVar1 & 0x7c0) << 0x10 | uVar1 & 0xf81f;
                uVar3 = uVar3 + ((((byte)puVar10[1] & 0xf) * 2 + 1) * (uVar9 - uVar3) >> 5);
                uVar5 = uVar8 >> 0x10 & 0xf81f | uVar8 & 0x7c00000;
                uVar5 = uVar5 + ((((byte)((byte)puVar10[1] >> 3) & 0x1e) + 1) * (uVar9 - uVar5) >> 5
                                );
                uVar8 = (*(ushort *)((int)puVar12 + 4) & 0x7c0) << 0x10 |
                        *(ushort *)((int)puVar12 + 4) & 0xf81f;
                *(uint *)puVar12 =
                     (uVar5 & 0xfffff81f) << 0x10 | uVar3 >> 0x10 & 0x7c0 | uVar3 & 0xf81f |
                     uVar5 & 0x7c00000;
                uVar8 = uVar8 + (((*(byte *)((int)param_7 + 3) & 0xf) * 2 + 1) * (uVar9 - uVar8) >>
                                5) & 0x7c0f81f;
                *(ushort *)((int)puVar12 + 4) = (ushort)(uVar8 >> 0x10) | (ushort)uVar8;
                puVar10 = param_7 + 2;
                puVar12 = (ulonglong *)((int)puVar12 + 6);
                param_7 = puVar10;
              }
            }
            else if (cVar2 == '\v') {
              puVar12 = (ulonglong *)((int)puVar12 + (uint)*(byte *)((int)puVar10 + 1) * 2);
              puVar10 = puVar10 + 1;
              param_7 = puVar10;
            }
            cVar2 = (char)*puVar10;
          }
        }
      }
      param_1 = (ulonglong *)((int)param_1 + param_6);
      iVar6 = iVar6 + 0xe;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  return;
}

