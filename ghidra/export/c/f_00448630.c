// FUNCTION: PORT1111 0x00448630
// name: FUN_00448630
// sig: undefined FUN_00448630(int param_1, uchar * param_2, undefined4 param_3, undefined4 param_4)


void __cdecl FUN_00448630(int param_1,uchar *param_2,undefined4 param_3,undefined4 param_4)

{
  void *this;
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b873b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004802b0(*(int *)(param_1 + 0x34));
  this = operator_new(0x50);
  local_4 = 0;
  if (this == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_00449ae0(this,param_1,param_2,param_3,param_4);
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar1 + 0xb8))();
  ExceptionList = pvStack_c;
  return;
}

