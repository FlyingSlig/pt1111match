// FUNCTION: PORT1111 0x0045abf0
// name: FUN_0045abf0
// sig: undefined FUN_0045abf0(void * param_1)


void __fastcall FUN_0045abf0(void *param_1)

{
  undefined4 *puVar1;
  void *this;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b93f6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x10);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    this = (void *)0x0;
  }
  else {
    this = (void *)FUN_00457530(puVar1);
  }
  local_4 = 0xffffffff;
  puVar1 = operator_new(0x18);
  local_4 = 1;
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00457b80(puVar1);
  }
  local_4 = 0xffffffff;
  FUN_00457550(this,uVar2);
  puVar1 = operator_new(0xc);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)((int)param_1 + 0xd0) + 0x14);
    *puVar1 = &PTR_FUN_004c46ec;
    puVar1[1] = 0x8d;
    puVar1[2] = uVar2;
  }
  FUN_00457580(this,puVar1);
  FUN_00458090(*(int *)(*(int *)((int)param_1 + 0xd0) + 0x10));
  FUN_0045a670(param_1,0,0xffffffff,-1);
  ExceptionList = local_c;
  return;
}

