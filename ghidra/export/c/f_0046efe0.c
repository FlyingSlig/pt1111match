// FUNCTION: PORT1111 0x0046efe0
// name: FUN_0046efe0
// sig: undefined4 FUN_0046efe0(int * param_1)


undefined4 __fastcall FUN_0046efe0(int *param_1)

{
  void *this;
  int iVar1;
  
  this = (void *)param_1[0x10];
  if (this != (void *)0x0) {
    if ((*(byte *)((int)this + 0x2c) & 1) != 0) {
      return 1;
    }
    FUN_00478380(this,*(int *)(param_1[0x12] + 0xa0) + param_1[6]);
    *(uint *)(param_1[0x10] + 0x28) = *(uint *)(param_1[0x10] + 0x28) | param_1[8];
    iVar1 = FUN_004787e0(param_1[0x10]);
    if ((iVar1 != 0) && (iVar1 = FUN_00478920((void *)param_1[0x10]), iVar1 != 0)) {
      FUN_00478010((void *)param_1[0x10],param_1[0x16] != 0);
      if (param_1[0x18] == 0) {
        return 1;
      }
      (**(code **)(*param_1 + 0x14))(param_1[0x18]);
      return 1;
    }
  }
  return 0;
}

