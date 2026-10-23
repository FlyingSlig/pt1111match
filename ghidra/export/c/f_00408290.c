// FUNCTION: PORT1111 0x00408290
// name: FUN_00408290
// sig: undefined FUN_00408290(void * this, int param_1, int param_2)


void __thiscall FUN_00408290(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b5a6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x34);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_004306b0(puVar1);
  }
  piVar2[5] = 0;
  piVar2[1] = *(int *)((int)this + 0x10);
  piVar2[6] = param_1;
  piVar2[7] = param_2;
  local_4 = 0xffffffff;
  FUN_00412e90(piVar2);
  ExceptionList = local_c;
  return;
}

