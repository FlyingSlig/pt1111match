// FUNCTION: PORT1111 0x00433a80
// name: FUN_00433a80
// sig: undefined4 FUN_00433a80(int param_1)


undefined4 __fastcall FUN_00433a80(int param_1)

{
  void *this;
  void *this_00;
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  
  this = (void *)(param_1 + 0x4c);
  DAT_004e21b8 = 0;
  *(undefined4 *)(param_1 + 0x114) = 100;
  bVar1 = FUN_0047fed0(this,1,(HANDLE)0x0);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    return 0;
  }
  this_00 = (void *)(param_1 + 0xb4);
  bVar1 = FUN_0047fed0(this_00,1,(HANDLE)0x0);
  if (CONCAT31(extraout_var_00,bVar1) == 0) {
    return 0;
  }
  FUN_0047ff40(this,param_1 + 0x11c);
  FUN_0047ff40(this_00,param_1 + 0x16c);
  Sleep(1000);
  FUN_00433a20(param_1);
  FUN_0047fd00((int)this);
  FUN_0047fd00((int)this_00);
  DAT_004d6a80 = DAT_004db290;
  if (DAT_004e2685 != '\0') {
    FUN_004353a0(5000);
  }
  return 1;
}

