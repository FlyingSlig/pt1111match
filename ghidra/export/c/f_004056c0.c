// FUNCTION: PORT1111 0x004056c0
// name: FUN_004056c0
// sig: bool FUN_004056c0(void * this, int * param_1)


bool __thiscall FUN_004056c0(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00412b60((int)param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_00412b60((int)this);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*param_1 + 0x88))();
      return *(int *)(iVar1 + 0x34) != *(int *)(*(int *)((int)this + 0x70) + 0x34);
    }
  }
  return false;
}

