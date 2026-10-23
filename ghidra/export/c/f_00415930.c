// FUNCTION: PORT1111 0x00415930
// name: FUN_00415930
// sig: undefined4 FUN_00415930(void * this, int * param_1)


undefined4 __thiscall FUN_00415930(void *this,int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 4))(8);
  DAT_004e0adc = FUN_00424310((int)param_1);
  DAT_004e0ad8 = FUN_00424310((int)param_1);
  uVar1 = DAT_004e0adc;
  if (0x16 < param_1[2]) {
    (**(code **)(*param_1 + 4))(4);
    uVar1 = FUN_00424310((int)param_1);
  }
  DAT_004e0870 = uVar1;
  iVar2 = FUN_004148c0(this,param_1);
  if (iVar2 != 0) {
    if (0x18 < param_1[2]) {
      FUN_004548a0((void *)((int)this + 0x104),param_1);
    }
    return 1;
  }
  return 0;
}

