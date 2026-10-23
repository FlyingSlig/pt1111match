// FUNCTION: PORT1111 0x0044c070
// name: FUN_0044c070
// sig: undefined4 FUN_0044c070(void * this, undefined4 param_1)


undefined4 __thiscall FUN_0044c070(void *this,undefined4 param_1)

{
  void *this_00;
  bool bVar1;
  HRESULT HVar2;
  undefined3 extraout_var;
  
  HVar2 = FUN_0044bcc0((void *)((int)this + 0x10),param_1,0x80,8,DAT_004e2b2c);
  if (HVar2 < 0) {
    return 0;
  }
  this_00 = (void *)((int)this + 0x74);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)((int)this + 0x18);
  bVar1 = FUN_0047fed0(this_00,0,(HANDLE)0x0);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    return 0;
  }
  FUN_0047ff40(this_00,(int)this + 0x70);
  FUN_0047fd60(this_00,2);
  (**(code **)(**(int **)((int)this + 0x60) + 0x50))
            (*(int **)((int)this + 0x60),*(undefined4 *)((int)this + 0x88),0,0);
  return 1;
}

