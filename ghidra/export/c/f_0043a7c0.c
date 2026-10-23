// FUNCTION: PORT1111 0x0043a7c0
// name: FUN_0043a7c0
// sig: undefined4 FUN_0043a7c0(int param_1)


undefined4 __fastcall FUN_0043a7c0(int param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7d56;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x28);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_0042d3d0(puVar1);
  }
  local_4 = 0xffffffff;
  *(undefined4 **)(param_1 + 0x24) = puVar1;
  puVar1 = operator_new(0x2c);
  local_4 = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_0042cc20(puVar1);
  }
  *(undefined4 **)(param_1 + 0x28) = puVar1;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x24);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)*(undefined4 *)(param_1 + 0x24) >> 8),1);
}

