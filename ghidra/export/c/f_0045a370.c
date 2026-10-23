// FUNCTION: PORT1111 0x0045a370
// name: FUN_0045a370
// sig: undefined4 * FUN_0045a370(void * this, int param_1, undefined4 param_2)


undefined4 * __thiscall FUN_0045a370(void *this,int param_1,undefined4 param_2)

{
  void *this_00;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b92b7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00480aa0(this,param_1,0xb,0,0xb,0xd3,0xd4,0xffffffff,0);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_004c4980;
  FUN_00480f70((undefined4 *)((int)this + 0x4c));
  local_4._0_1_ = 1;
  _eh_vector_constructor_iterator_((void *)((int)this + 0xd8),700,3,FUN_00482130,FUN_00483ed0);
  local_4._0_1_ = 2;
  FUN_00482130((undefined4 *)((int)this + 0x90c));
  local_4._0_1_ = 3;
  *(undefined4 *)((int)this + 0xd4) = 1;
  this_00 = operator_new(0x18);
  local_4 = CONCAT31(local_4._1_3_,4);
  if (this_00 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_004573d0(this_00,param_2);
  }
  *(undefined4 **)((int)this + 0xd0) = puVar1;
  *(undefined4 *)((int)this + 0xbc8) = 0;
  *(undefined4 *)((int)this + 0xbcc) = 0;
  ExceptionList = local_c;
  return this;
}

