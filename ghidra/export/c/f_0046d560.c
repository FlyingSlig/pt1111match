// FUNCTION: PORT1111 0x0046d560
// name: FUN_0046d560
// sig: undefined4 FUN_0046d560(void * this, uchar * param_1, undefined4 param_2, void * param_3)


undefined4 __thiscall FUN_0046d560(void *this,uchar *param_1,undefined4 param_2,void *param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined3 extraout_var;
  void *this_00;
  undefined4 uVar3;
  int *this_01;
  void *unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b9c66;
  local_c = ExceptionList;
  if (*(int *)((int)this + 4) == 2) {
    return 0;
  }
  ExceptionList = &local_c;
  (**(code **)(*(int *)this + 0x5c))();
  this_01 = (int *)0x0;
  if (param_3 == (void *)0x0) {
    puVar2 = operator_new(0x10);
    uStack_4 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      this_01 = FUN_004884d0(puVar2);
    }
    uStack_4 = 0xffffffff;
    bVar1 = FUN_004884f0(this_01,param_1,0x80000000,1);
    if (CONCAT31(extraout_var,bVar1) != 0) {
LAB_0046d61a:
      this_00 = operator_new(0xc);
      uStack_4 = 1;
      if (this_00 == (void *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = (undefined4 *)FUN_0048a050(this_00,this_01,1);
      }
      uStack_4 = 0xffffffff;
      uVar3 = FUN_0046c920(param_1);
      *(undefined4 *)((int)this + 8) = uVar3;
      uVar3 = (**(code **)(*(int *)this + 0x68))(puVar2,param_2);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      if (this_00 == (void *)0x0) {
        (**(code **)(*this_01 + 4))();
        (**(code **)*this_01)(1);
      }
      ExceptionList = unaff_EDI;
      return uVar3;
    }
    if (this_01 != (int *)0x0) {
      (**(code **)*this_01)(1);
    }
  }
  else {
    this_01 = (int *)FUN_00486530(param_3,param_1);
    if (this_01 != (int *)0x0) goto LAB_0046d61a;
  }
  ExceptionList = local_c;
  return 0;
}

