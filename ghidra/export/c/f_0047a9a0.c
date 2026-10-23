// FUNCTION: PORT1111 0x0047a9a0
// name: FUN_0047a9a0
// sig: undefined4 * FUN_0047a9a0(void * this, undefined4 param_1)


undefined4 * __thiscall FUN_0047a9a0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 *this_00;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004ba30b;
  local_c = ExceptionList;
  if ((*(byte *)((int)this + 0x2c) & 2) != 0) {
    return (undefined4 *)0x0;
  }
  ExceptionList = &local_c;
  local_10 = this;
  local_10 = operator_new(0x10);
  local_4 = 0;
  if (local_10 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    this_00 = FUN_0047bc60(local_10,0);
  }
  local_4 = 0xffffffff;
  local_10 = this_00;
  FUN_0047bad0(this_00,param_1);
  iVar1 = *(int *)(*(int *)((int)this + 0x14) + 4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (undefined2)(*(int *)(*(int *)((int)this + 0x14) + 8) - iVar1 >> 2);
  }
  *(undefined2 *)(this_00 + 1) = uVar2;
  FUN_004792f0(*(void **)((int)this + 0x14),&local_10);
  ExceptionList = local_c;
  return this_00;
}

