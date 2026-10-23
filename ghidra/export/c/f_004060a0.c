// FUNCTION: PORT1111 0x004060a0
// name: FUN_004060a0
// sig: undefined FUN_004060a0(int * param_1)


void __fastcall FUN_004060a0(int *param_1)

{
  int iVar1;
  void *this;
  
  if ((void *)param_1[0x17] != (void *)0x0) {
    FUN_00426b20((void *)param_1[0x17],0);
  }
  param_1[0x17] = 0;
  if (param_1[0x2a] != 0) {
    iVar1 = param_1[0x14];
    this = (void *)(**(code **)(*param_1 + 0x88))();
    FUN_00423080(this,iVar1,1,1);
    param_1[0x2a] = 0;
  }
  if (DAT_004e2420 != (void *)0x0) {
    FUN_00442830(DAT_004e2420,param_1,1);
  }
  return;
}

