// FUNCTION: PORT1111 0x00438710
// name: FUN_00438710
// sig: undefined FUN_00438710(void * this, uchar * param_1)


void __thiscall FUN_00438710(void *this,uchar *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7b9b;
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
  if (*(int *)((int)this + 0x1c) != 0) {
    if (*(int *)((int)this + 0x20) == 0) {
      FUN_00466a40(puVar1 + 1,param_1);
      puVar1[2] = 3;
      puVar1[3] = *(undefined4 *)((int)this + 0x1c);
      *(undefined4 *)((int)this + 0x1c) = 0;
      goto LAB_004387bd;
    }
    if (*(int *)((int)this + 0x1c) != 0) {
      ExceptionList = local_c;
      return;
    }
  }
  if (*(int *)((int)this + 0x20) == 0) {
    ExceptionList = local_c;
    return;
  }
  FUN_00466a40(puVar1 + 1,param_1);
  puVar1[2] = 6;
  puVar1[3] = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x20) = 0;
LAB_004387bd:
  FUN_00437db0(this);
  ExceptionList = local_c;
  return;
}

