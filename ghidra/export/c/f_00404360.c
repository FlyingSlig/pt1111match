// FUNCTION: PORT1111 0x00404360
// name: FUN_00404360
// sig: undefined4 FUN_00404360(void * this, void * param_1, int param_2, int * param_3, int param_4)


undefined4 __thiscall FUN_00404360(void *this,void *param_1,int param_2,int *param_3,int param_4)

{
  undefined4 *puVar1;
  void *this_00;
  int iVar2;
  undefined4 uVar3;
  void *unaff_ESI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b58eb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(int *)((int)this + 0x34) = param_2;
  *(int **)((int)this + 0x1c) = param_3;
  (**(code **)(*param_3 + 0x28))();
  puVar1 = operator_new(0x1c);
  puStack_8 = (undefined1 *)0x0;
  if (puVar1 == (undefined4 *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)FUN_0045f0c0(puVar1);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  *(void **)((int)this + 0x18) = this_00;
  iVar2 = FUN_0045f150(this_00,(int)param_1,param_4);
  if (iVar2 != 0) {
    iVar2 = FUN_00404230(this);
    if (iVar2 != 0) {
      uVar3 = FUN_00424310((int)param_1);
      *(undefined4 *)((int)this + 0x20) = uVar3;
      uVar3 = FUN_00424310((int)param_1);
      *(undefined4 *)((int)this + 0x38) = uVar3;
      (**(code **)(*(int *)this + 0x40))
                (*(undefined4 *)(*(int *)((int)this + 0x34) + 4),
                 *(undefined4 *)(*(int *)((int)this + 0x34) + 8));
      ExceptionList = param_1;
      return 1;
    }
  }
  ExceptionList = unaff_ESI;
  return 0;
}

