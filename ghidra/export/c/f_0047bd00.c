// FUNCTION: PORT1111 0x0047bd00
// name: FUN_0047bd00
// sig: undefined FUN_0047bd00(int param_1)


void __fastcall FUN_0047bd00(int param_1)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004ba39b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)(*(int *)(param_1 + 0xc) + 0x14) = *(int *)(*(int *)(param_1 + 0xc) + 0x14) + 1;
  this = operator_new(0x10);
  local_4 = 0;
  if (this == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_0047bc60(this,*(int *)(param_1 + 0xc));
  }
  *(undefined2 *)((int)puVar1 + 6) = 0;
  *(undefined2 *)(puVar1 + 2) = 0;
  *(undefined2 *)(puVar1 + 1) = 0xffff;
  *(undefined2 *)((int)puVar1 + 6) = *(undefined2 *)(param_1 + 6);
  *(undefined2 *)(puVar1 + 2) = *(undefined2 *)(param_1 + 8);
  ExceptionList = local_c;
  return;
}

