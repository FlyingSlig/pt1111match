// FUNCTION: PORT1111 0x00459fb0
// name: FUN_00459fb0
// sig: undefined FUN_00459fb0(void * this, uint param_1, uint param_2, uint param_3, undefined4 * param_4)


void __thiscall FUN_00459fb0(void *this,uint param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  
  if ((*(int *)((int)this + 0x10) == 0) && (param_1 == 0x20a)) {
    iVar1 = FUN_00449a30(param_2,param_3,(int)this + 0x4c);
    if (iVar1 == 0) {
      iVar1 = FUN_00449a30(param_2,param_3,(int)this + 0x308);
      if (iVar1 == 0) {
        FUN_00449a30(param_2,param_3,(int)this + 0x5c4);
      }
    }
  }
  FUN_00480c80(this,param_1,param_2,param_3,param_4);
  return;
}

