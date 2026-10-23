// FUNCTION: PORT1111 0x0048b2d0
// name: FUN_0048b2d0
// sig: undefined FUN_0048b2d0(int param_1, ushort * param_2, int param_3, int param_4, int param_5, int param_6, uint param_7)


void __cdecl
FUN_0048b2d0(int param_1,ushort *param_2,int param_3,int param_4,int param_5,int param_6,
            uint param_7)

{
  ushort *puVar1;
  int iVar2;
  
  if (0 < param_4) {
    do {
      if (0 < param_3) {
        puVar1 = param_2;
        iVar2 = param_3;
        do {
          if (*puVar1 != param_7) {
            *(ushort *)((param_1 - (int)param_2) + (int)puVar1) = *puVar1;
          }
          puVar1 = puVar1 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      param_1 = param_1 + param_5;
      param_2 = (ushort *)((int)param_2 + param_6);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

