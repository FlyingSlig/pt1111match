// FUNCTION: PORT1111 0x0041cab0
// name: FUN_0041cab0
// sig: undefined FUN_0041cab0(int param_1)


void __fastcall FUN_0041cab0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *this;
  int iVar5;
  int iVar6;
  char acStack_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b6878;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x78) != 0) {
    ExceptionList = &local_c;
    (**(code **)(*(int *)(param_1 + 0x6c) + 0x10))(0,1);
    FUN_00424900((undefined4 *)acStack_2c);
    uStack_4 = 0;
    FUN_00424430(acStack_2c,param_1 + 0x6c,2,0x19);
    FUN_004246e0((int)acStack_2c);
    iVar2 = FUN_00424310((int)acStack_2c);
    iVar3 = FUN_00424310((int)acStack_2c);
    iVar1 = *(int *)(DAT_004e2404 + 0x104);
    iVar5 = param_1;
    iVar6 = param_1;
    if (iVar1 != 0) {
      iVar5 = *(int *)(iVar1 + 8);
      iVar6 = *(int *)(iVar1 + 4);
    }
    FUN_004246e0((int)acStack_2c);
    puVar4 = (undefined4 *)FUN_00424310((int)acStack_2c);
    while (0 < (int)puVar4) {
      this = FUN_00413b80(puVar4);
      if (this != (int *)0x0) {
        this[4] = DAT_004e0adc;
        DAT_004e0adc = DAT_004e0adc + 1;
        FUN_00412920(this,acStack_2c);
        (**(code **)(*this + 0x84))(this[1] + (iVar6 - iVar2),this[2] + (iVar5 - iVar3),this[3]);
        (**(code **)(*this + 0x4c))();
      }
      FUN_004246e0((int)acStack_2c);
      puVar4 = (undefined4 *)FUN_00424310((int)acStack_2c);
    }
    FUN_0047c110(param_1 + 0x6c);
    *(undefined4 *)(param_1 + 0x78) = 0;
    uStack_4 = 0xffffffff;
    FUN_004248a0((undefined4 *)acStack_2c);
  }
  ExceptionList = local_c;
  return;
}

