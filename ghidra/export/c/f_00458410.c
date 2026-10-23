// FUNCTION: PORT1111 0x00458410
// name: FUN_00458410
// sig: undefined FUN_00458410(void * this, uchar * param_1, uchar * param_2)


void __thiscall FUN_00458410(void *this,uchar *param_1,uchar *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined3 extraout_var;
  undefined4 *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b901b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00466a40((void *)((int)this + 8),param_2);
  puVar2 = operator_new(0x10);
  local_4 = 0;
  this_00 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_004884d0(puVar2);
    *puVar2 = &PTR_FUN_004c46fc;
    this_00 = puVar2;
  }
  local_4 = 0xffffffff;
  *(undefined4 **)this = this_00;
  bVar1 = FUN_004884f0(this_00,param_1,0x80000000,1);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    ExceptionList = local_c;
    return;
  }
  FUN_00458200(this);
  ExceptionList = local_c;
  return;
}

