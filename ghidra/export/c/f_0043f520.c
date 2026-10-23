// FUNCTION: PORT1111 0x0043f520
// name: FUN_0043f520
// sig: undefined FUN_0043f520(int param_1, undefined4 param_2)


void FUN_0043f520(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7f5b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0x34);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_00432bf0(puVar2);
  }
  puVar2[0xc] = 1;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  puVar2[5] = param_2;
  puVar2[1] = uVar1;
  puVar2[6] = 0;
  ExceptionList = local_c;
  return;
}

