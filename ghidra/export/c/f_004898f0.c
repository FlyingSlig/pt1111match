// FUNCTION: PORT1111 0x004898f0
// name: FUN_004898f0
// sig: undefined4 FUN_004898f0(void * this, HWND param_1, undefined4 param_2, int param_3, int param_4, int param_5)


undefined4 __thiscall
FUN_004898f0(void *this,HWND param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  void *this_00;
  int iVar2;
  int *piVar3;
  undefined4 auStack_bc [4];
  undefined4 uStack_ac;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004baac5;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)this + 0x44))();
  puVar1 = operator_new(0x3c);
  uStack_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)FUN_00496760(puVar1);
  }
  uStack_4 = 0xffffffff;
  *(void **)((int)this + 0x830) = this_00;
  if (param_5 == 0) {
    iVar2 = FUN_00496da0(this_00,param_1,param_3,param_4);
  }
  else {
    iVar2 = FUN_00496a90(this_00,(int)param_1,param_3,param_4,param_2);
  }
  if (-1 < iVar2) {
    DAT_004e2c1c = *(undefined4 *)(*(int *)((int)this + 0x830) + 8);
    FUN_004670c0(auStack_bc);
    uStack_4 = 1;
    iVar2 = FUN_00467260(auStack_bc,*(int **)(*(int *)((int)this + 0x830) + 0x10));
    if (iVar2 != 0) {
      puVar1 = operator_new(0xb0);
      uStack_4._0_1_ = 2;
      if (puVar1 == (undefined4 *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = FUN_004670c0(puVar1);
      }
      *(int **)((int)this + 0x834) = piVar3;
      uStack_4._0_1_ = 1;
      iVar2 = (**(code **)(*piVar3 + 0x58))(param_3,param_4,uStack_ac,0x800);
      if (iVar2 != 0) {
        puVar1 = operator_new(0xb0);
        uStack_4._0_1_ = 3;
        if (puVar1 == (undefined4 *)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = FUN_004670c0(puVar1);
        }
        *(int **)((int)this + 0x850) = piVar3;
        uStack_4 = CONCAT31(uStack_4._1_3_,1);
        iVar2 = (**(code **)(*piVar3 + 0x58))(param_3,param_4,uStack_ac,0x800);
        if (iVar2 != 0) {
          *(HWND *)((int)this + 0x810) = param_1;
          FUN_00467680(*(void **)((int)this + 0x834),0,0);
          FUN_00467680(*(void **)((int)this + 0x850),0,0);
          if (*(int *)(*(int *)((int)this + 0x830) + 0x30) == 0) {
            piVar3 = *(int **)(*(int *)((int)this + 0x830) + 0x10);
            (**(code **)(*piVar3 + 0x1c))
                      (piVar3,0,0,*(undefined4 *)(*(int *)((int)this + 0x834) + 0x2c),0,0x10);
          }
          uStack_4 = 0xffffffff;
          FUN_004677f0(auStack_bc);
          ExceptionList = pvStack_c;
          return 1;
        }
      }
    }
    uStack_4 = 0xffffffff;
    FUN_004677f0(auStack_bc);
  }
  ExceptionList = pvStack_c;
  return 0;
}

