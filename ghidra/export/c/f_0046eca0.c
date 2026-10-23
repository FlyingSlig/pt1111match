// FUNCTION: PORT1111 0x0046eca0
// name: FUN_0046eca0
// sig: undefined FUN_0046eca0(int * param_1)


void __fastcall FUN_0046eca0(int *param_1)

{
  void *this;
  int iVar1;
  int *piVar2;
  
  (**(code **)(*param_1 + 0x1c))();
  if (param_1[0x11] != 0) {
    if ((void *)param_1[0x10] != (void *)0x0) {
      FUN_00478470((void *)param_1[0x10],*(int *)(param_1[0x11] + 0x34),0);
    }
    iVar1 = *(int *)(param_1[0x11] + 0x34);
    piVar2 = (int *)0x0;
    this = (void *)FUN_0047c5d0(param_1[0x12]);
    FUN_00476d40(this,iVar1,piVar2);
  }
  param_1[0x11] = 0;
  return;
}

