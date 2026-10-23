// FUNCTION: PORT1111 0x004071f0
// name: FUN_004071f0
// sig: undefined FUN_004071f0(int param_1)


void __fastcall FUN_004071f0(int param_1)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b5a0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (DAT_004e2683 != '\0') {
    this = operator_new(0x74);
    local_4 = 0;
    if (this == (void *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_0041be10(this,*(int *)(*(int *)(param_1 + 0x34) + 0x50));
    }
    local_4 = 0xffffffff;
    *(undefined4 **)(param_1 + 0x40) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[0x1b] = (int)*(short *)(*(int *)(param_1 + 0x24) + 0x34);
      (**(code **)(**(int **)(param_1 + 0x40) + 0x84))
                (*(undefined4 *)(*(int *)(param_1 + 0x34) + 4),
                 *(undefined4 *)(*(int *)(param_1 + 0x34) + 8),0);
      FUN_00412880(*(int **)(param_1 + 0x40));
      (**(code **)(**(int **)(param_1 + 0x40) + 0x4c))();
    }
  }
  ExceptionList = local_c;
  return;
}

