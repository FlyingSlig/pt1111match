// FUNCTION: PORT1111 0x0046d890
// name: FUN_0046d890
// sig: undefined4 FUN_0046d890(void * this, uchar * param_1, undefined4 param_2)


undefined4 __thiscall FUN_0046d890(void *this,uchar *param_1,undefined4 param_2)

{
  int iVar1;
  void *this_00;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_1c [2];
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9c83;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004884d0(local_1c);
  local_4 = 0;
  if (*(int *)((int)this + 4) == 2) {
    local_4 = 0xffffffff;
    FUN_00488880(local_1c);
    ExceptionList = local_c;
    return 0;
  }
  iVar1 = FUN_00488560(local_1c,param_1,0x40000000,0,1);
  if (iVar1 == 0) {
    local_4 = 0xffffffff;
    FUN_00488880(local_1c);
    ExceptionList = local_c;
    return 0;
  }
  this_00 = operator_new(0xc);
  local_4._0_1_ = 1;
  if (this_00 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_0048a050(this_00,local_1c,0);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  uVar3 = FUN_0046c920(param_1);
  *(undefined4 *)((int)this + 8) = uVar3;
  uVar3 = (**(code **)(*(int *)this + 0x6c))(puVar2,param_2);
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(1);
  }
  FUN_00488710((int *)&stack0xffffffdc);
  local_c = (void *)0xffffffff;
  FUN_00488880((undefined4 *)&stack0xffffffdc);
  ExceptionList = pvStack_14;
  return uVar3;
}

