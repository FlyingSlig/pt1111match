// FUNCTION: PORT1111 0x0043a550
// name: FUN_0043a550
// sig: undefined4 FUN_0043a550(int param_1)


undefined4 __fastcall FUN_0043a550(int param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7d0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x34);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_0042e320(puVar1);
    *(undefined4 **)(param_1 + 0x10) = puVar1;
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)puVar1 >> 8),1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  ExceptionList = local_c;
  return 1;
}

