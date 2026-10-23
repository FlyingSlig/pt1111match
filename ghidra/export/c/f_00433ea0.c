// FUNCTION: PORT1111 0x00433ea0
// name: FUN_00433ea0
// sig: undefined4 * FUN_00433ea0(void * this, undefined4 param_1)


undefined4 * __thiscall FUN_00433ea0(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b7806;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_004bfd20;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  local_4 = 0;
  *(undefined ***)((int)this + 0x18) = &PTR_FUN_004bfcdc;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  local_4 = CONCAT31(local_4._1_3_,1);
  uVar1 = FUN_00433ba0();
  *(undefined4 *)((int)this + 0x3c) = uVar1;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x34) = param_1;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  DAT_004d6a80 = 1;
  ExceptionList = local_c;
  return this;
}

