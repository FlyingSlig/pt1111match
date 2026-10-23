// FUNCTION: PORT1111 0x004472e0
// name: FUN_004472e0
// sig: undefined4 * FUN_004472e0(void * this, int param_1, undefined4 param_2, uchar * param_3, uchar * param_4, undefined4 param_5, undefined4 param_6)


undefined4 * __thiscall
FUN_004472e0(void *this,int param_1,undefined4 param_2,uchar *param_3,uchar *param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b84eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00480aa0(this,param_1,param_5,0,0xf,0xd3,0xd4,0xffffffff,0);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_004c3db8;
  FUN_00482130((undefined4 *)((int)this + 0x4c));
  local_4._0_1_ = 1;
  FUN_00481c70((undefined4 *)((int)this + 0x30c));
  local_4._0_1_ = 2;
  FUN_00465cf0((undefined4 *)((int)this + 0x318));
  local_4._0_1_ = 3;
  FUN_00465cf0((undefined4 *)((int)this + 0x31c));
  this_00 = (undefined4 *)((int)this + 800);
  local_4._0_1_ = 4;
  FUN_00465cf0(this_00);
  local_4 = CONCAT31(local_4._1_3_,5);
  *(undefined4 *)((int)this + 0x308) = param_2;
  FUN_00466a40((undefined4 *)((int)this + 0x31c),param_3);
  FUN_00466a40(this_00,param_4);
  FUN_00465ee0(this_00);
  *(undefined4 *)((int)this + 0x324) = param_6;
  *(undefined4 *)((int)this + 0x328) = 1;
  ExceptionList = local_c;
  return this;
}

