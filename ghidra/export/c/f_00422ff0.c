// FUNCTION: PORT1111 0x00422ff0
// name: FUN_00422ff0
// sig: undefined FUN_00422ff0(void * this, uint param_1, uint param_2, int param_3)


void __thiscall FUN_00422ff0(void *this,uint param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if ((((DAT_004e0af0 == 0) && (-1 < (int)param_1)) && (param_1 < *(uint *)((int)this + 100))) &&
     ((-1 < (int)param_2 && (param_2 < *(uint *)((int)this + 0x68))))) {
    piVar1 = (int *)(*(int *)((int)this + 0x1fc) +
                    (*(uint *)((int)this + 100) * param_2 + param_1) * 4);
    iVar2 = *piVar1;
    if ((iVar2 != param_3) && (iVar2 != 0)) {
      *piVar1 = param_3;
      FUN_00422f90(this,param_1 + 1,param_2,param_3);
      FUN_00422eb0(this,param_1,param_2 + 1,param_3);
      FUN_00422da0(this,param_1 - 1,param_2,param_3);
      FUN_00422d40(this,param_1,param_2 - 1,param_3);
    }
  }
  return;
}

