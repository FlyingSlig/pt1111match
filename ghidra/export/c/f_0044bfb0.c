// FUNCTION: PORT1111 0x0044bfb0
// name: FUN_0044bfb0
// sig: undefined FUN_0044bfb0(void)


void FUN_0044bfb0(void)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b89fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x34);
  local_4 = 0;
  if (this == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)FUN_00434a30(this,1);
  }
  local_4 = 0xffffffff;
  FUN_00412ec0(puVar1,2000);
  ExceptionList = local_c;
  return;
}

