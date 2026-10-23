// FUNCTION: PORT1111 0x00482bb0
// name: FUN_00482bb0
// sig: undefined FUN_00482bb0(void * this, int param_1)


void __thiscall FUN_00482bb0(void *this,int param_1)

{
  int iVar1;
  
  if ((-1 < param_1) && (iVar1 = FUN_004829c0(this,param_1), *(int *)(iVar1 + 0x10) != 0)) {
    (**(code **)(*(int *)this + 0x30))(param_1);
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  return;
}

