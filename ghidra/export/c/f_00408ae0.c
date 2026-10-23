// FUNCTION: PORT1111 0x00408ae0
// name: FUN_00408ae0
// sig: undefined4 * FUN_00408ae0(void * this, int param_1, uint param_2)


undefined4 * __thiscall FUN_00408ae0(void *this,int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b5ac8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00405220(this,param_1,param_2 | 8);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_004bcdc0;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_004bcd98;
  uVar3 = FUN_004089f0();
  *(undefined4 *)((int)this + 0x108) = uVar3;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x54) = 1;
  iVar1 = *(int *)(*(int *)((int)this + 0x50) + 0xa8);
  iVar2 = *(int *)(*(int *)((int)this + 0x50) + 0xfc);
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(float *)((int)this + 0xf0) = (float)iVar1 / (float)iVar2;
  ExceptionList = local_c;
  return this;
}

