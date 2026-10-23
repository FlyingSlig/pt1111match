// FUNCTION: PORT1111 0x004093a0
// name: FUN_004093a0
// sig: undefined4 * FUN_004093a0(void * this, int param_1, uint param_2)


undefined4 * __thiscall FUN_004093a0(void *this,int param_1,uint param_2)

{
  DWORD DVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b5b16;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004090e0(this,param_1,param_2 | 0x10000);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_004bd2f8;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_004bd2cc;
  DVar1 = GetTickCount();
  *(DWORD *)((int)this + 0x124) = DVar1;
  FUN_00465cf0((undefined4 *)((int)this + 0x128));
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00466a40((undefined4 *)((int)this + 0x128),"");
  *(undefined4 *)((int)this + 0x120) = 0;
  ExceptionList = local_c;
  return this;
}

