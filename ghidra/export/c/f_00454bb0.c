// FUNCTION: PORT1111 0x00454bb0
// name: FUN_00454bb0
// sig: undefined FUN_00454bb0(int param_1)


void __fastcall FUN_00454bb0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8d28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_0041dc00(param_1 + 0xc);
  iVar3 = 7;
  do {
    FUN_00466af0(&local_10,"",0xffffffff);
    iVar1 = **(int **)(param_1 + 0x10);
    local_4 = 0;
    puVar2 = FUN_0041d3c0(iVar1,*(undefined4 *)(iVar1 + 4),&local_10);
    FUN_0041e280((void *)(param_1 + 0xc),1);
    *(undefined4 **)(iVar1 + 4) = puVar2;
    *(undefined4 **)puVar2[1] = puVar2;
    local_4 = 0xffffffff;
    FUN_00465e40(&local_10);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  ExceptionList = local_c;
  return;
}

