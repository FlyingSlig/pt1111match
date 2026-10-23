// FUNCTION: PORT1111 0x00435ce0
// name: FUN_00435ce0
// sig: undefined FUN_00435ce0(int * param_1, int param_2)


void __cdecl FUN_00435ce0(int *param_1,int param_2)

{
  int iVar1;
  
  FUN_00435bb0(param_1);
  *param_1 = param_2;
  param_1[8] = 1;
  if (param_2 != 0) {
    iVar1 = FUN_004b3066(param_2);
    iVar1 = __isatty(iVar1);
    param_1[6] = (uint)(0 < iVar1);
    return;
  }
  param_1[6] = 0;
  return;
}

