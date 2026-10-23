// FUNCTION: PORT1111 0x004780c0
// name: FUN_004780c0
// sig: undefined4 FUN_004780c0(void * this, int param_1)


undefined4 __thiscall FUN_004780c0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004ba1d6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0047a320((int)this);
  FUN_0047a2f0((int)this);
  *(undefined2 *)((int)this + 0x52) = 0xffff;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0xffffffff;
  *(undefined2 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x56) = 0;
  *(undefined2 *)((int)this + 0x50) = 0;
  *(undefined2 *)((int)this + 0x58) = 0x96;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  iVar1 = FUN_0047ac30(this,param_1);
  if (iVar1 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  *(byte *)((int)this + 0x2c) = *(byte *)((int)this + 0x2c) | 0x20;
  *(undefined2 *)((int)this + 0x56) = *(undefined2 *)(param_1 + 0x56);
  *(undefined2 *)((int)this + 0x58) = *(undefined2 *)(param_1 + 0x58);
  if (*(int *)(param_1 + 0x5c) != 0) {
    puVar2 = operator_new(0x38);
    local_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_0047a370(puVar2);
    }
    *(undefined4 **)((int)this + 0x5c) = puVar2;
    local_4 = 0xffffffff;
    iVar1 = FUN_0047ac30(puVar2,*(int *)(param_1 + 0x5c));
    if (iVar1 == 0) {
      ExceptionList = local_c;
      return 0;
    }
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    puVar2 = operator_new(0x38);
    local_4 = 1;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_0047a370(puVar2);
    }
    *(undefined4 **)((int)this + 0x60) = puVar2;
    local_4 = 0xffffffff;
    iVar1 = FUN_0047ac30(puVar2,*(int *)(param_1 + 0x60));
    if (iVar1 == 0) {
      ExceptionList = local_c;
      return 0;
    }
  }
  ExceptionList = local_c;
  return 1;
}

