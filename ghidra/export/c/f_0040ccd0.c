// FUNCTION: PORT1111 0x0040ccd0
// name: FUN_0040ccd0
// sig: undefined4 FUN_0040ccd0(int param_1)


undefined4 __fastcall FUN_0040ccd0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b5e4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0x30);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004535d0(puVar2);
  }
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  iVar1 = *(int *)(*(int *)(param_1 + 0x34) + 0x50);
  local_4 = 0xffffffff;
  iVar4 = FUN_00412720(*(int *)(param_1 + 0x34));
  FUN_004534f0(*(void **)(param_1 + 0xc),0x14,2,*(int *)(iVar1 + 0xa8),iVar4);
  FUN_0040d6c0(*(void **)(param_1 + 0x34),(int *)(param_1 + 0x10),(int *)(param_1 + 0x14));
  ExceptionList = local_c;
  return 1;
}

