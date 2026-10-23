// FUNCTION: PORT1111 0x0048d160
// name: FUN_0048d160
// sig: undefined FUN_0048d160(ulonglong * param_1, ulonglong * param_2, uint param_3, int param_4, int param_5, int param_6, int * param_7, int param_8)


void __cdecl
FUN_0048d160(ulonglong *param_1,ulonglong *param_2,uint param_3,int param_4,int param_5,int param_6,
            int *param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  int iVar6;
  byte *pbVar7;
  ulonglong *local_14;
  uint local_10;
  int local_8;
  
  iVar6 = (int)param_3 >> 2;
  uVar1 = param_3 & 3;
  if (iVar6 != 0) {
    if (uVar1 == 0) {
      if (0 < param_4) {
        param_3 = param_4;
        do {
          FUN_0048bb30(param_2,param_1,param_7,iVar6);
          param_1 = (ulonglong *)((int)param_1 + param_5);
          param_2 = (ulonglong *)((int)param_2 + param_6);
          param_7 = (int *)((int)param_7 + param_8);
          param_3 = param_3 - 1;
        } while (param_3 != 0);
      }
    }
    else if (0 < param_4) {
      puVar5 = param_1 + iVar6;
      local_14 = param_2 + iVar6;
      local_8 = param_4;
      do {
        FUN_0048bb30(param_2,param_1,param_7,iVar6);
        pbVar7 = (byte *)(param_7 + iVar6);
        if (uVar1 != 0) {
          puVar4 = puVar5;
          local_10 = uVar1;
          do {
            if (*pbVar7 != 0) {
              uVar2 = ((ushort)*puVar4 & 0x7c0) << 0x10 | (ushort)*puVar4 & 0xf81f;
              uVar3 = (uint)*(ushort *)(((int)local_14 - (int)puVar5) + (int)puVar4);
              uVar2 = uVar2 + ((((uVar3 & 0x7c0) << 0x10 | uVar3 & 0xf81f) - uVar2) *
                               (uint)(*pbVar7 >> 3) >> 5) & 0x7c0f81f;
              *(ushort *)puVar4 = (ushort)(uVar2 >> 0x10) | (ushort)uVar2;
            }
            puVar4 = (ulonglong *)((int)puVar4 + 2);
            pbVar7 = pbVar7 + 1;
            local_10 = local_10 - 1;
          } while (local_10 != 0);
        }
        param_1 = (ulonglong *)((int)param_1 + param_5);
        puVar5 = (ulonglong *)((int)puVar5 + param_5);
        param_2 = (ulonglong *)((int)param_2 + param_6);
        local_14 = (ulonglong *)((int)local_14 + param_6);
        param_7 = (int *)((int)param_7 + param_8);
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
  }
  return;
}

