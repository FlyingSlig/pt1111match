// FUNCTION: PORT1111 0x00408f60
// name: FUN_00408f60
// sig: undefined4 FUN_00408f60(int param_1)


undefined4 __fastcall FUN_00408f60(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00404f70(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00445030(*(void **)(param_1 + 0xb0),0x3ed);
  return 1;
}

