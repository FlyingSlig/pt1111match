// FUNCTION: PORT1111 0x004221f0
// name: FUN_004221f0
// sig: undefined FUN_004221f0(void * this, int param_1, int param_2, int param_3)


void __thiscall FUN_004221f0(void *this,int param_1,int param_2,int param_3)

{
  if (param_1 == 0) {
    FUN_00422040(this,param_2,param_3);
    return;
  }
  if (param_2 == 0) {
    FUN_00422110(this,param_1,param_3);
    return;
  }
  FUN_00422040(this,param_2,param_3);
  FUN_00422110(this,param_1,param_3);
  return;
}

