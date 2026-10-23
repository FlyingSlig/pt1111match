// FUNCTION: PORT1111 0x00405220
// name: FUN_00405220
// sig: undefined4 * FUN_00405220(void * this, int param_1, uint param_2)


undefined4 * __thiscall FUN_00405220(void *this,int param_1,uint param_2)

{
  void *this_00;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b5973;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004124b0(this,param_1,param_2 | 2);
  *(undefined ***)this = &PTR_FUN_004bcb10;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_004bcae4;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined2 *)((int)this + 0x68) = 0;
  *(undefined2 *)((int)this + 0x6a) = 0;
  *(undefined2 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  local_4 = 0;
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x94) = 0xffffffff;
  *(undefined4 *)((int)this + 0x98) = 0xffffffff;
  *(undefined4 *)((int)this + 0x9c) = 0xffffffff;
  *(undefined4 *)((int)this + 0xa0) = 0xffffffff;
  *(undefined4 *)((int)this + 0xd0) = 1;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 200) = 0xffffffff;
  *(undefined4 *)((int)this + 0x84) = 0xffffffff;
  *(undefined4 *)((int)this + 0x88) = 0xffffffff;
  *(undefined4 *)((int)this + 0x8c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  this_00 = operator_new(0x38);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (this_00 == (void *)0x0) {
    *(undefined4 *)((int)this + 0xb0) = 0;
  }
  else {
    puVar1 = FUN_00444df0(this_00,this);
    *(undefined4 **)((int)this + 0xb0) = puVar1;
  }
  ExceptionList = local_c;
  return this;
}

