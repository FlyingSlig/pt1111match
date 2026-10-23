// FUNCTION: PORT1111 0x00421d00
// name: FUN_00421d00
// sig: undefined4 FUN_00421d00(int param_1)


undefined4 __fastcall FUN_00421d00(int param_1)

{
  int *this;
  uint uVar1;
  void *pvVar2;
  int iStack_20;
  int local_1c;
  int iStack_18;
  int iStack_14;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b6ceb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004215b0(param_1);
  pvVar2 = *(void **)(*(int *)(DAT_004e2b10 + 0x18) + 0x24);
  if (pvVar2 == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0047d0a0(pvVar2,3);
  }
  this = *(int **)(uVar1 + 0xb0);
  if (this == (int *)0x0) {
    ExceptionList = local_c;
    return 0;
  }
  *(undefined4 *)(uVar1 + 0x94) = 0;
  (**(code **)(*this + 0x30))(&local_1c);
  *(int *)(param_1 + 0x68) = iStack_20;
  *(int *)(param_1 + 0x6c) = local_1c;
  *(int *)(param_1 + 0x58) = iStack_18 - iStack_20;
  *(int *)(param_1 + 0x5c) = iStack_14 - local_1c;
  *(undefined4 *)(param_1 + 0x60) = 1;
  pvVar2 = operator_new(0x30);
  puStack_8 = (undefined1 *)0x0;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)FUN_0047e2c0(pvVar2,0);
  }
  *(void **)(param_1 + 4) = pvVar2;
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_0047e3d0(pvVar2,(undefined1)DAT_004dd964,*(undefined4 *)(param_1 + 0x58),
               *(undefined4 *)(param_1 + 0x5c),3);
  FUN_004730f0(this,*(int *)(param_1 + 4));
  FUN_004210b0(param_1);
  FUN_00421a70(param_1);
  ExceptionList = pvStack_10;
  return 1;
}

