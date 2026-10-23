// FUNCTION: PORT1111 0x00417740
// name: FUN_00417740
// sig: undefined FUN_00417740(int param_1)


void __cdecl FUN_00417740(int param_1)

{
  int *piVar1;
  
  piVar1 = FUN_00417480(&DAT_004e0af4,(int *)(param_1 + 0x14));
  *piVar1 = param_1;
  return;
}

