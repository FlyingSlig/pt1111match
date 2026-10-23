// FUNCTION: PORT1111 0x00484ab0
// name: FUN_00484ab0
// sig: undefined4 FUN_00484ab0(void * this, uint param_1, int * param_2, uint param_3, undefined4 param_4)


undefined4 __thiscall
FUN_00484ab0(void *this,uint param_1,int *param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((*(int **)((int)this + 0x18) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)((int)this + 0x18) + 0xa0))(param_1,param_2,param_3,param_4),
     iVar1 != 0)) {
    return 1;
  }
  if (param_1 < 0x87c6) {
    if (param_1 == 0x87c5) {
      FUN_0046a360(DAT_004e2b14,(int)param_2);
      return 1;
    }
    if (param_1 == 2) {
      if (DAT_004e2ae8 != 0) {
        return 0;
      }
      PostQuitMessage(0);
      return 0;
    }
    if (param_1 == 0x10) {
      if (((*(int *)((int)this + 0x20) == 0) && (*(int **)((int)this + 0x18) != (int *)0x0)) &&
         (iVar1 = (**(code **)(**(int **)((int)this + 0x18) + 0x48))(), iVar1 == 0)) {
        return 1;
      }
      (**(code **)(*(int *)this + 0x30))();
      return 0;
    }
    if (param_1 != 0x113) {
      return 0;
    }
  }
  else if (param_1 != 0x87c9) {
    if (param_1 != 0x87cc) {
      return 0;
    }
    if (*(int *)((int)this + 0x18) == 0) {
      return 1;
    }
    FUN_004846a0(this,param_2,param_3);
    return 1;
  }
  FUN_0046a680(0x4e2aa8);
  return 1;
}

