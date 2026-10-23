// FUNCTION: PORT1111 0x0047e4d0
// name: FUN_0047e4d0
// sig: undefined FUN_0047e4d0(void * this, uchar * param_1, undefined4 param_2, int param_3)


void __thiscall FUN_0047e4d0(void *this,uchar *param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined3 extraout_var;
  
  if (param_3 == 0) {
    param_3 = FUN_0046c9e0(param_1);
  }
  uVar2 = FUN_0046c920(param_1);
  bVar1 = FUN_0047e350(this,uVar2,param_3);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    return;
  }
  (**(code **)(**(int **)((int)this + 4) + 100))(param_1,(int)this + 8,param_2);
  return;
}

