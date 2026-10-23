// FUNCTION: PORT1111 0x004874b0
// name: FUN_004874b0
// sig: uint FUN_004874b0(int param_1)


uint __fastcall FUN_004874b0(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004ba8a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)(param_1 + 0x1c) + 4))();
  uVar4 = 0;
  uStack_4 = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
    uStack_4 = 0xffffffff;
    (**(code **)(*(int *)(param_1 + 0x1c) + 8))();
    ExceptionList = pvStack_c;
    return 0x800401f0;
  }
  uVar3 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0xc) + uVar4 * 8);
      uVar2 = (**(code **)(*piVar1 + 0x34))(piVar1,0);
      uVar3 = uVar3 | uVar2;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 8);
  uStack_4 = 0xffffffff;
  (**(code **)(*(int *)(param_1 + 0x1c) + 8))();
  ExceptionList = pvStack_c;
  return uVar3;
}

