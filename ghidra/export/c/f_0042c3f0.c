// FUNCTION: PORT1111 0x0042c3f0
// name: FUN_0042c3f0
// sig: undefined FUN_0042c3f0(int param_1)


void __cdecl FUN_0042c3f0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_1;
  param_1 = *(int *)(param_1 + 0x34) * 0x10000 + *(int *)(param_1 + 0x24);
  piVar2 = FUN_0042c280(&DAT_004e2174,&param_1);
  *piVar2 = iVar1;
  return;
}

