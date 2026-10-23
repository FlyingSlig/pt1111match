// FUNCTION: PORT1111 0x0048b1e0
// name: FUN_0048b1e0
// sig: undefined FUN_0048b1e0(byte * param_1, int param_2, int param_3, int param_4, int param_5, int param_6, uint param_7)


void __cdecl
FUN_0048b1e0(byte *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,uint param_7)

{
  byte *pbVar1;
  int iVar2;
  
  if (0 < param_4) {
    do {
      if (0 < param_3) {
        pbVar1 = param_1;
        iVar2 = param_3;
        do {
          if (pbVar1[param_2 - (int)param_1] != param_7) {
            *pbVar1 = pbVar1[param_2 - (int)param_1];
          }
          pbVar1 = pbVar1 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      param_1 = param_1 + param_5;
      param_2 = param_2 + param_6;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

