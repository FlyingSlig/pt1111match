// FUNCTION: PORT1111 0x0040a5b0
// name: FUN_0040a5b0
// sig: undefined FUN_0040a5b0(void * this, int param_1, int param_2)


void __thiscall FUN_0040a5b0(void *this,int param_1,int param_2)

{
  void *this_00;
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b5c2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = operator_new(0xd8);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_00431b50(this_00,0);
  }
  piVar1[1] = *(int *)((int)this + 0x20);
  piVar1[5] = param_1;
  piVar1[6] = param_2;
  local_4 = 0xffffffff;
  FUN_00412e90(piVar1);
  ExceptionList = local_c;
  return;
}

