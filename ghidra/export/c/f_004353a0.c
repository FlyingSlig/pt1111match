// FUNCTION: PORT1111 0x004353a0
// name: FUN_004353a0
// sig: undefined FUN_004353a0(undefined4 param_1)


void FUN_004353a0(undefined4 param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b79bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x34);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_0042f760(puVar1);
    *puVar1 = &PTR_FUN_004bfd88;
    puVar1[3] = 0x13;
  }
  local_4 = 0xffffffff;
  FUN_00412ec0(puVar1,param_1);
  ExceptionList = local_c;
  return;
}

