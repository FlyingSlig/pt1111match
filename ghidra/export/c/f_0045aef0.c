// FUNCTION: PORT1111 0x0045aef0
// name: FUN_0045aef0
// sig: undefined FUN_0045aef0(void * this, uint param_1, uint param_2, uint param_3, undefined4 * param_4)


void __thiscall FUN_0045aef0(void *this,uint param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  
  if ((*(int *)((int)this + 0x10) == 0) && (param_1 == 0x20a)) {
    iVar1 = FUN_00449a30(param_2,param_3,(int)this + 0xd8);
    if (iVar1 == 0) {
      iVar1 = FUN_00449a30(param_2,param_3,(int)this + 0x394);
      if (iVar1 == 0) {
        iVar1 = FUN_00449a30(param_2,param_3,(int)this + 0x650);
        if (iVar1 == 0) {
          FUN_00449a30(param_2,param_3,(int)this + 0x90c);
        }
      }
    }
  }
  FUN_00480c80(this,param_1,param_2,param_3,param_4);
  return;
}

