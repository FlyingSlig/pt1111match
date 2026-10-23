// FUNCTION: PORT1111 0x0047b5b0
// name: FUN_0047b5b0
// sig: undefined FUN_0047b5b0(void * this, int * param_1, undefined4 param_2, undefined4 param_3, int param_4, int param_5, int param_6)


void __thiscall
FUN_0047b5b0(void *this,int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
            int param_6)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  int unaff_retaddr;
  
  if (0 < param_6) {
    iVar1 = (**(code **)(*param_1 + 8))();
    iVar2 = (**(code **)(*param_1 + 4))();
    SetRect(this,0,0,iVar2 + -1,iVar1 + -1);
    if (((*(int *)this <= param_4) && (param_4 <= *(int *)((int)this + 8))) &&
       (iVar1 = *(int *)((int)this + 0xc), param_5 <= iVar1)) {
      iVar2 = *(int *)((int)this + 4);
      if (param_5 < iVar2) {
        param_6 = param_6 + (param_5 - iVar2);
        param_5 = iVar2;
      }
      if (iVar1 < param_5 + -1 + param_6) {
        param_6 = (iVar1 - param_5) + 1;
      }
      if ((0 < param_6) &&
         (puVar3 = (undefined2 *)(**(code **)(*param_1 + 0x2c))(param_2,param_4,param_5),
         0 < param_6)) {
        do {
          *puVar3 = (undefined2)param_4;
          puVar3 = puVar3 + unaff_retaddr;
          param_6 = param_6 + -1;
        } while (param_6 != 0);
      }
    }
  }
  return;
}

