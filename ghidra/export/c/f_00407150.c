// FUNCTION: PORT1111 0x00407150
// name: FUN_00407150
// sig: undefined FUN_00407150(void * this, int param_1, int param_2)


void __thiscall FUN_00407150(void *this,int param_1,int param_2)

{
  void *this_00;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b59eb;
  local_c = ExceptionList;
  if (((0 < param_1) && (param_2 != 0)) && (DAT_004e2683 != '\0')) {
    ExceptionList = &local_c;
    this_00 = operator_new(0x74);
    local_4 = 0;
    if (this_00 == (void *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_0041be10(this_00,param_2);
    }
    *(undefined4 **)((int)this + 0x40) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[0x1b] = param_1;
    }
  }
  ExceptionList = local_c;
  return;
}

