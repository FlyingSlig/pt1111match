// FUNCTION: PORT1111 0x0048b180
// name: FUN_0048b180
// sig: undefined FUN_0048b180(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, uint param_7, int param_8)


void __cdecl
FUN_0048b180(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,uint param_7,
            int param_8)

{
  int iVar1;
  
  if (0 < param_4) {
    do {
      iVar1 = 0;
      if (0 < param_3) {
        do {
          if (param_7 != *(byte *)(iVar1 + param_2)) {
            *(undefined4 *)(param_1 + iVar1 * 4) =
                 *(undefined4 *)(param_8 + (uint)*(byte *)(iVar1 + param_2) * 4);
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < param_3);
      }
      param_1 = param_1 + param_5;
      param_2 = param_2 + param_6;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

