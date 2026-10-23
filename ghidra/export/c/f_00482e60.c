// FUNCTION: PORT1111 0x00482e60
// name: FUN_00482e60
// sig: undefined FUN_00482e60(void * this, int param_1)


void __thiscall FUN_00482e60(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 < *(int *)((int)this + 0x24)) {
    if (((-1 < param_1) && (param_1 < *(int *)(*(int *)((int)this + 0x2ac) + 8))) &&
       (iVar1 = FUN_004829c0(this,param_1), *(int *)(iVar1 + 0x10) == 0)) {
      (**(code **)(*(int *)this + 0x34))(param_1);
      *(undefined4 *)(iVar1 + 0x10) = 1;
    }
    *(int *)((int)this + 0x288) = param_1;
  }
  return;
}

