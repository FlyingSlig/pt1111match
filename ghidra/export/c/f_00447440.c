// FUNCTION: PORT1111 0x00447440
// name: FUN_00447440
// sig: undefined FUN_00447440(int param_1)


void __fastcall FUN_00447440(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b8508;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x328) != 0) {
    ExceptionList = &local_c;
    uVar1 = FUN_00466450(&stack0x00000004,'.');
    if (uVar1 != 0xffffffff) {
      iVar2 = FUN_00465d00((undefined4 *)(param_1 + 800));
      piVar3 = FUN_00466bc0(&stack0x00000004,uVar1,iVar2 + uVar1);
      FUN_00466a50(&stack0x00000004,piVar3);
    }
  }
  FUN_00466a50((void *)(param_1 + 0x318),(undefined4 *)&stack0x00000004);
  local_4 = 0xffffffff;
  FUN_00465e40((undefined4 *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}

