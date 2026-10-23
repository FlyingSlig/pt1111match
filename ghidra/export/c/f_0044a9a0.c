// FUNCTION: PORT1111 0x0044a9a0
// name: FUN_0044a9a0
// sig: undefined4 * FUN_0044a9a0(void * this, int param_1)


undefined4 * __thiscall FUN_0044a9a0(void *this,int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b89a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00480aa0(this,param_1,9,0,9,0xd3,0xd4,0xffffffff,0);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_004c4340;
  FUN_00445fd0((undefined4 *)((int)this + 0x50));
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00473fb0((undefined4 *)((int)this + 0x114));
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(DAT_004e2b14 + 0xf4);
  ExceptionList = local_c;
  return this;
}

