// FUNCTION: PORT1111 0x00489490
// name: FUN_00489490
// sig: undefined4 FUN_00489490(void * this, HWND param_1, undefined4 param_2, int param_3, int param_4, int param_5)


undefined4 __thiscall
FUN_00489490(void *this,HWND param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  void *this_00;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004baa61;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)this + 0x44))();
  puVar2 = operator_new(0x3c);
  uStack_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)FUN_00496760(puVar2);
  }
  uStack_4 = 0xffffffff;
  *(void **)((int)this + 0x830) = this_00;
  if (param_5 == 0) {
    iVar3 = FUN_00496b90(this_00,param_1,param_3,param_4);
  }
  else {
    iVar3 = FUN_00496950(this_00,(int)param_1,param_3,param_4,0x10);
  }
  if (-1 < iVar3) {
    DAT_004e2c1c = *(undefined4 *)(*(int *)((int)this + 0x830) + 8);
    puVar2 = operator_new(0xb0);
    uStack_4 = 1;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_004670c0(puVar2);
    }
    *(undefined4 **)((int)this + 0x838) = puVar2;
    uStack_4 = 0xffffffff;
    iVar3 = FUN_00467260(puVar2,*(int **)(*(int *)((int)this + 0x830) + 0x14));
    if (iVar3 != 0) {
      puVar2 = operator_new(0xb0);
      uStack_4 = 2;
      if (puVar2 == (undefined4 *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = FUN_004670c0(puVar2);
      }
      piVar1 = *(int **)((int)this + 0x838);
      uStack_4 = 0xffffffff;
      *(int **)((int)this + 0x834) = piVar4;
      iVar3 = *piVar4;
      uVar5 = (**(code **)(*piVar1 + 8))(0,0);
      uVar5 = (**(code **)(*piVar1 + 4))(uVar5);
      iVar3 = (**(code **)(iVar3 + 0x58))(uVar5);
      if (iVar3 != 0) {
        *(HWND *)((int)this + 0x810) = param_1;
        ExceptionList = pvStack_c;
        return 1;
      }
    }
  }
  ExceptionList = pvStack_c;
  return 0;
}

