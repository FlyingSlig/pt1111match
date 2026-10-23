// FUNCTION: PORT1111 0x004698b0
// name: FUN_004698b0
// sig: undefined4 * FUN_004698b0(void)


undefined4 * FUN_004698b0(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9b3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x3c);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_004745a0(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

