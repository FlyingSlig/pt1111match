// FUNCTION: PORT1111 0x004130f0
// name: FUN_004130f0
// sig: undefined4 FUN_004130f0(void * this, undefined4 param_1)


undefined4 __thiscall FUN_004130f0(void *this,undefined4 param_1)

{
  void *pvVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b616b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0xf8) = param_1;
  *(undefined4 *)((int)this + 0x74) = 0;
  pvVar1 = operator_new(500);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    DAT_004e2424 = (void *)0x0;
  }
  else {
    DAT_004e2424 = FUN_00434340(pvVar1);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00433a80((int)DAT_004e2424);
  if (iVar2 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  iVar2 = FUN_004750e0(*(void **)(DAT_004e2b14 + 0xf8),0x19,1);
  *(int *)((int)this + 0x34) = iVar2;
  *(uint *)(iVar2 + 0x28) = *(uint *)(iVar2 + 0x28) | 4;
  FUN_004787e0(*(int *)((int)this + 0x34));
  iVar2 = *(int *)((int)this + 0x58) + 1;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(int *)((int)this + 0x58) = iVar2;
  if (iVar2 < 2) {
    DAT_004e2c58 = 1;
    FUN_004339d0((int)DAT_004e2424);
  }
  ExceptionList = local_c;
  return 1;
}

