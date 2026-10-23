// FUNCTION: PORT1111 0x004461a0
// name: FUN_004461a0
// sig: undefined4 * FUN_004461a0(void * this, int param_1, ushort param_2)


undefined4 * __thiscall FUN_004461a0(void *this,int param_1,ushort param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8368;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00480aa0(this,param_1,0,0,param_2,0xffffffff,2,0xffffffff,0);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_004c3a30;
  FUN_00445fd0((undefined4 *)((int)this + 0x4c));
  ExceptionList = local_c;
  return this;
}

