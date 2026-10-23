// FUNCTION: PORT1111 0x0048b110
// name: FUN_0048b110
// sig: undefined FUN_0048b110(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8)


void __cdecl
FUN_0048b110(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_8;
  sVar1 = *(short *)(param_8 + param_7 * 2);
  if (0 < param_4) {
    param_8 = param_4;
    do {
      iVar4 = 0;
      if (0 < param_3) {
        do {
          sVar2 = *(short *)(iVar3 + (uint)*(byte *)(iVar4 + param_2) * 2);
          if (sVar2 != sVar1) {
            *(short *)(param_1 + iVar4 * 2) = sVar2;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < param_3);
      }
      param_1 = param_1 + param_5;
      param_2 = param_2 + param_6;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}

