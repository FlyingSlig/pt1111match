// FUNCTION: PORT1111 0x00410d50
// name: FUN_00410d50
// sig: undefined4 FUN_00410d50(void * this, int param_1, int param_2)


undefined4 __thiscall FUN_00410d50(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004b6000;
  local_10 = ExceptionList;
  iVar3 = *(int *)((int)this + 4);
  iVar1 = *(int *)(iVar3 + 4);
  iVar2 = *(int *)(iVar3 + 8);
  ExceptionList = &local_10;
  iVar3 = FUN_004147d0(*(int *)(iVar3 + 0x2c));
  if (*(void **)((int)this + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x18));
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  local_8 = 0;
  iVar3 = FUN_00410520(iVar1,iVar2,param_1,param_2,iVar3,(void *)((int)this + 0x14),
                       (void *)((int)this + 0x38),(void *)0x0,*(int *)(iVar3 + 0x214));
  if (iVar3 != 0) {
    local_8 = 0xffffffff;
    uVar4 = FUN_0047b090((void *)((int)this + 0x14),*(int *)((int)this + 8));
    ExceptionList = local_10;
    return uVar4;
  }
  ExceptionList = local_10;
  return 0;
}

