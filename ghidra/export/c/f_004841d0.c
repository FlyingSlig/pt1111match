// FUNCTION: PORT1111 0x004841d0
// name: FUN_004841d0
// sig: undefined4 FUN_004841d0(int * param_1)


undefined4 __fastcall FUN_004841d0(int *param_1)

{
  void *this;
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar1 = DAT_004e2b20;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004ba768;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)*DAT_004e2b20)();
  uStack_4 = 0;
  (**(code **)(*param_1 + 0x1c))(1);
  if (*(int *)(param_1[6] + 0x24) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1[6] + 0x24) + 0x1c);
  }
  param_1[4] = uVar2;
  this = DAT_004e2b14;
  uVar3 = (**(code **)(*param_1 + 0x3c))();
  iVar4 = FUN_00468bc0(this,uVar3);
  if (iVar4 == 0) {
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar1 + 4))();
    ExceptionList = piVar1;
    return 0;
  }
  iVar4 = FUN_00480380((int *)param_1[6]);
  puStack_8 = (undefined1 *)0xffffffff;
  if (iVar4 == 0) {
    (**(code **)(*piVar1 + 4))();
    ExceptionList = piVar1;
    return 0;
  }
  (**(code **)(*piVar1 + 4))();
  ExceptionList = piVar1;
  return 1;
}

