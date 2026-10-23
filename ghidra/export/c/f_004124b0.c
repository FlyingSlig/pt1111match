// FUNCTION: PORT1111 0x004124b0
// name: FUN_004124b0
// sig: undefined4 * FUN_004124b0(void * this, int param_1, undefined4 param_2)


undefined4 * __thiscall FUN_004124b0(void *this,int param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b6128;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00409080(this);
  local_4 = 0;
  FUN_0041f090((undefined4 *)((int)this + 0x14));
  *(int *)((int)this + 0x50) = param_1;
  *(undefined4 *)((int)this + 0x3c) = param_2;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined ***)this = &PTR_FUN_004bebf0;
  *(undefined4 *)((int)this + 0x14) = &PTR_LAB_004bebc8;
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x22c);
  *(undefined4 *)((int)this + 0x44) = 0xffffffff;
  *(undefined4 *)((int)this + 0x48) = 0xffffffff;
  *(undefined4 *)((int)this + 0x4c) = 0;
  ExceptionList = local_c;
  return this;
}

