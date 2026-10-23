// FUNCTION: PORT1111 0x004272c0
// name: FUN_004272c0
// sig: void * FUN_004272c0(int param_1)


void * __fastcall FUN_004272c0(int param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  void *this_00;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b6f9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x30);
  this_00 = (void *)0x0;
  local_4 = 0;
  if (this != (void *)0x0) {
    this_00 = (void *)FUN_0047e2c0(this,0);
  }
  local_4 = 0xffffffff;
  iVar1 = FUN_0047e870(*(int *)(param_1 + 0x30));
  iVar2 = FUN_0047e810(*(int *)(param_1 + 0x30));
  FUN_0047e3d0(this_00,(undefined1)DAT_004dd964,iVar2,iVar1,DAT_004dd960);
  local_1c = 0;
  local_18 = 0;
  local_14 = iVar2;
  local_10 = iVar1;
  FUN_0047e8d0(*(void **)(param_1 + 0x30),(int)this_00,0,0,(int)&local_1c);
  ExceptionList = local_c;
  return this_00;
}

