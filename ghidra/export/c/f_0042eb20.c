// FUNCTION: PORT1111 0x0042eb20
// name: FUN_0042eb20
// sig: undefined FUN_0042eb20(void * this, int * param_1)


void __thiscall FUN_0042eb20(void *this,int *param_1)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = FUN_00429690(DAT_004e2404,param_1,&local_8);
  if (iVar1 != 0) {
    if ((local_8 != *(int *)((int)this + 0x20)) || (local_4 != *(int *)((int)this + 0x24))) {
      *(int *)((int)this + 0x20) = local_8;
      *(int *)((int)this + 0x24) = local_4;
      FUN_0042e670(this);
    }
  }
  return;
}

