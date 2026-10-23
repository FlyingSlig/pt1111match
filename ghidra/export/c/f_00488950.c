// FUNCTION: PORT1111 0x00488950
// name: FUN_00488950
// sig: undefined4 FUN_00488950(int * param_1)


undefined4 __fastcall FUN_00488950(int *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004ba988;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  uVar1 = FUN_00465dd0(&stack0x00000004,param_1);
  local_4 = 0xffffffff;
  FUN_00465e40((undefined4 *)&stack0x00000004);
  ExceptionList = local_c;
  return uVar1;
}

