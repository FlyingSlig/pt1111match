// FUNCTION: PORT1111 0x0041bf30
// name: FUN_0041bf30
// sig: undefined FUN_0041bf30(int param_1)


void __fastcall FUN_0041bf30(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b675b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x34);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_00431450(puVar1);
  }
  piVar2[1] = *(int *)(param_1 + -4);
  local_4 = 0xffffffff;
  FUN_00412e90(piVar2);
  ExceptionList = local_c;
  return;
}

