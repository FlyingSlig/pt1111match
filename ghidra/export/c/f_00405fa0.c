// FUNCTION: PORT1111 0x00405fa0
// name: FUN_00405fa0
// sig: undefined FUN_00405fa0(int param_1)


void __fastcall FUN_00405fa0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b594b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  puVar1 = operator_new(0x34);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00432e30(puVar1);
  }
  piVar2[1] = *(int *)(param_1 + 0x10);
  local_4 = 0xffffffff;
  FUN_00412e90(piVar2);
  ExceptionList = local_c;
  return;
}

