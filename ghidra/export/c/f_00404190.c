// FUNCTION: PORT1111 0x00404190
// name: FUN_00404190
// sig: undefined FUN_00404190(int param_1)


void __fastcall FUN_00404190(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b58cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00405d00(*(void **)(param_1 + 0x34),1);
  puVar1 = operator_new(0x34);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00431350(puVar1);
  }
  piVar2[1] = *(int *)(*(int *)(param_1 + 0x34) + 0x10);
  local_4 = 0xffffffff;
  FUN_00412e90(piVar2);
  ExceptionList = local_c;
  return;
}

