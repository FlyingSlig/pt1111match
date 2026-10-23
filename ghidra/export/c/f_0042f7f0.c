// FUNCTION: PORT1111 0x0042f7f0
// name: FUN_0042f7f0
// sig: bool FUN_0042f7f0(void * param_1, int param_2, int param_3)


bool FUN_0042f7f0(void *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_004058f0(param_1,param_2,param_3);
  if (iVar2 != 0) {
    return true;
  }
  if (param_2 != 0) {
    return false;
  }
  bVar1 = FUN_00406550((int)param_1);
  return bVar1;
}

