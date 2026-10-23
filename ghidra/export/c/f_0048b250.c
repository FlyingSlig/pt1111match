// FUNCTION: PORT1111 0x0048b250
// name: FUN_0048b250
// sig: undefined FUN_0048b250(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, uint param_7)


void __cdecl
FUN_0048b250(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,uint param_7)

{
  uint uVar1;
  int iVar2;
  
  if (0 < param_4) {
    do {
      iVar2 = 0;
      if (0 < param_3) {
        do {
          if (param_7 != *(ushort *)(param_2 + iVar2 * 2)) {
            uVar1 = (uint)*(ushort *)(param_2 + iVar2 * 2);
            *(uint *)(param_1 + iVar2 * 4) =
                 (((uVar1 & 0xfffff800) << 3 | uVar1 & 0x7e0) << 2 | uVar1 & 0x1f) << 3;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < param_3);
      }
      param_1 = param_1 + param_5;
      param_2 = param_2 + param_6;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

