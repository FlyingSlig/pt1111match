// FUNCTION: PORT1111 0x0042bca0
// name: FUN_0042bca0
// sig: undefined4 * FUN_0042bca0(void * this, undefined4 * param_1)


undefined4 * __thiscall FUN_0042bca0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b71e2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_004bf904;
  uVar1 = FUN_0043d220();
  *(undefined4 *)((int)this + 8) = uVar1;
  *(undefined4 *)((int)this + 0xc) = 0;
  local_4 = 0;
  uVar1 = FUN_0043d220();
  *(undefined4 *)((int)this + 0x18) = uVar1;
  *(undefined4 *)((int)this + 0x1c) = 0;
  local_4._0_1_ = 1;
  _eh_vector_constructor_iterator_((void *)((int)this + 0x20),0xc,5,FUN_0042ab60,FUN_00409650);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_00421730((undefined4 *)((int)this + 0x94));
  *(undefined4 *)((int)this + 0x10c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x110) = 0xffffffff;
  *(undefined4 *)((int)this + 0x114) = 0xffffffff;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x7c) = *param_1;
  *(undefined4 *)((int)this + 0x80) = param_1[1];
  *(undefined4 *)((int)this + 0x84) = param_1[2];
  uVar1 = param_1[3];
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x88) = uVar1;
  ExceptionList = local_c;
  return this;
}

