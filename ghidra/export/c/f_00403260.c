// FUNCTION: PORT1111 0x00403260
// name: FUN_00403260
// sig: undefined4 * FUN_00403260(void)


undefined4 * FUN_00403260(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b57fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x88);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_00420f20(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

