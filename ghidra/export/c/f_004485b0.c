// FUNCTION: PORT1111 0x004485b0
// name: FUN_004485b0
// sig: undefined FUN_004485b0(int param_1, undefined4 param_2, int param_3, undefined4 param_4)


void __cdecl FUN_004485b0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

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
  this = operator_new(0x54);
  local_4 = 0;
  if (this == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_0044a230(this,param_1,param_2,param_4,param_3);
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar1 + 0xb8))();
  ExceptionList = pvStack_c;
  return;
}

