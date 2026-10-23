// FUNCTION: PORT1111 0x0044a230
// name: FUN_0044a230
// sig: undefined4 * FUN_0044a230(void * this, int param_1, undefined4 param_2, undefined4 param_3, int param_4)


undefined4 * __thiscall
FUN_0044a230(void *this,int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8958;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00480aa0(this,param_1,param_2,0,0x17,0xd3,0xffffffff,0xffffffff,0);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_004c4280;
  uVar1 = FUN_004147d0(param_4);
  *(undefined4 *)((int)this + 0x50) = uVar1;
  *(undefined4 *)((int)this + 0x4c) = param_3;
  ExceptionList = local_c;
  return this;
}

