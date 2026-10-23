// FUNCTION: PORT1111 0x004385c0
// name: FUN_004385c0
// sig: undefined FUN_004385c0(void * this, uchar * param_1, uchar * param_2)


void __thiscall FUN_004385c0(void *this,uchar *param_1,uchar *param_2)

{
  undefined4 *puVar1;
  void *this_00;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7c46;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x10);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_004bff3c;
    FUN_00465cf0(puVar1 + 1);
  }
  local_4 = 0xffffffff;
  FUN_00466a40(puVar1 + 1,param_1);
  puVar1[2] = 0;
  this_00 = operator_new(4);
  local_4 = 1;
  if (this_00 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_00466af0(this_00,param_2,0xffffffff);
  }
  local_4 = 0xffffffff;
  puVar1[3] = puVar2;
  FUN_00437db0(this);
  ExceptionList = local_c;
  return;
}

