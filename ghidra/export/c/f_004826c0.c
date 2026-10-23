// FUNCTION: PORT1111 0x004826c0
// name: FUN_004826c0
// sig: undefined FUN_004826c0(int param_1, int param_2, int * param_3)


void __cdecl FUN_004826c0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_3;
  iVar1 = param_2;
  while (param_1 != iVar1) {
    *piVar2 = *piVar2 + 1;
    FUN_0040ca50(&param_1);
  }
  return;
}

