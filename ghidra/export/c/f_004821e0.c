// FUNCTION: PORT1111 0x004821e0
// name: FUN_004821e0
// sig: undefined4 * FUN_004821e0(void * this, undefined4 param_1, uchar * param_2, uchar * param_3, uchar * param_4, undefined4 param_5, undefined4 param_6, uchar * param_7)


undefined4 * __thiscall
FUN_004821e0(void *this,undefined4 param_1,uchar *param_2,uchar *param_3,uchar *param_4,
            undefined4 param_5,undefined4 param_6,uchar *param_7)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004ba6cc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_004c6910;
  *(undefined4 *)((int)this + 4) = param_6;
  FUN_00465cf0((undefined4 *)((int)this + 8));
  local_4 = 0;
  FUN_00465cf0((undefined4 *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x14) = param_5;
  local_4._0_1_ = 1;
  *(undefined4 *)((int)this + 0x10) = 0;
  FUN_00466af0((void *)((int)this + 0x1c),param_3,0xffffffff);
  local_4._0_1_ = 2;
  FUN_00466af0((void *)((int)this + 0x20),param_4,0xffffffff);
  *(undefined4 *)((int)this + 0x18) = param_1;
  local_4 = CONCAT31(local_4._1_3_,3);
  if (param_2 == (uchar *)0x0) {
    param_2 = "";
  }
  FUN_00466a40((undefined4 *)((int)this + 8),param_2);
  if (param_7 == (uchar *)0x0) {
    param_7 = "";
  }
  FUN_00466a40((undefined4 *)((int)this + 0xc),param_7);
  piVar1 = (int *)(*(int *)((int)this + 0x18) + 0x2b0);
  *piVar1 = *piVar1 + 1;
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(*(int *)((int)this + 0x18) + 0x2b0);
  ExceptionList = local_c;
  return this;
}

