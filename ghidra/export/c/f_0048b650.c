// FUNCTION: PORT1111 0x0048b650
// name: FUN_0048b650
// sig: undefined FUN_0048b650(uint param_1, byte * param_2, int param_3, int param_4, int param_5, int param_6, int param_7)


void __cdecl
FUN_0048b650(uint param_1,byte *param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  
  iVar4 = param_3 >> 1;
  puVar3 = (uint *)(param_1 - (param_1 & 3));
  if ((param_1 & 3) == 2) {
    if (0 < param_4) {
      param_3 = param_4;
      do {
        *puVar3 = (uint)*(ushort *)(param_7 + (uint)*param_2 * 2) << 0x10 | *puVar3 & 0xffff;
        iVar1 = 1;
        if (1 < iVar4) {
          do {
            puVar3[iVar1] =
                 CONCAT22(*(undefined2 *)(param_7 + (uint)param_2[iVar1 * 2] * 2),
                          *(undefined2 *)(param_7 + (uint)param_2[iVar1 * 2 + -1] * 2));
            iVar1 = iVar1 + 1;
          } while (iVar1 < iVar4);
        }
        puVar3[iVar1] =
             (uint)*(ushort *)(param_7 + (uint)param_2[iVar1 * 2 + -1] * 2) |
             puVar3[iVar1] & 0xffff0000;
        puVar3 = (uint *)((int)puVar3 + param_5);
        param_2 = param_2 + param_6;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      return;
    }
  }
  else if (0 < param_4) {
    uVar7 = (uint)((byte)param_3 & 1);
    param_1 = param_4;
    do {
      iVar1 = 0;
      if (0 < iVar4) {
        do {
          puVar3[iVar1] =
               CONCAT22(*(undefined2 *)(param_7 + (uint)param_2[iVar1 * 2 + 1] * 2),
                        *(undefined2 *)(param_7 + (uint)param_2[iVar1 * 2] * 2));
          iVar1 = iVar1 + 1;
        } while (iVar1 < iVar4);
      }
      if (uVar7 != 0) {
        pbVar5 = param_2 + iVar1 * 2;
        puVar2 = puVar3 + iVar1;
        uVar6 = uVar7;
        do {
          *(undefined2 *)puVar2 = *(undefined2 *)(param_7 + (uint)*pbVar5 * 2);
          puVar2 = (uint *)((int)puVar2 + 2);
          pbVar5 = pbVar5 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      puVar3 = (uint *)((int)puVar3 + param_5);
      param_2 = param_2 + param_6;
      param_1 = param_1 - 1;
    } while (param_1 != 0);
  }
  return;
}

