// FUNCTION: PORT1111 0x00411480
// name: FUN_00411480
// sig: undefined FUN_00411480(int param_1)


void __fastcall FUN_00411480(int param_1)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b60f6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x68) != 0) {
    ExceptionList = &pvStack_c;
    if (*(int *)(param_1 + 100) != 0) {
      ExceptionList = &pvStack_c;
      *(undefined4 *)(*(int *)(param_1 + 100) + 0x48) = 0;
    }
    if (*(undefined4 **)(param_1 + 0x68) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x68))(1);
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
  }
  if (*(undefined4 **)(param_1 + 100) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 100))(1);
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (-1 < **(int **)(*(int *)(param_1 + 0x50) + 0x224)) {
    puVar1 = operator_new(0x4c);
    uStack_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_0041b810(puVar1);
    }
    uStack_4 = 0xffffffff;
    *(undefined4 **)(param_1 + 0x68) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_0041b410(puVar1,*(int *)(*(int *)(param_1 + 0x50) + 0x14) * 0x10000 +
                          **(int **)(*(int *)(param_1 + 0x50) + 0x224),*(undefined4 *)(param_1 + 4),
                   *(undefined4 *)(param_1 + 8),2);
      *(int *)(*(int *)(param_1 + 0x68) + 0x44) = param_1 + 0x14;
      (**(code **)(**(int **)(param_1 + 0x68) + 0x28))();
    }
  }
  if (-1 < **(int **)(*(int *)(param_1 + 0x50) + 0x228)) {
    puVar1 = operator_new(0x4c);
    uStack_4 = 1;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_0041b810(puVar1);
    }
    uStack_4 = 0xffffffff;
    *(undefined4 **)(param_1 + 100) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_0041b410(puVar1,*(int *)(*(int *)(param_1 + 0x50) + 0x14) * 0x10000 +
                          **(int **)(*(int *)(param_1 + 0x50) + 0x228),*(undefined4 *)(param_1 + 4),
                   *(undefined4 *)(param_1 + 8),1);
      *(int *)(*(int *)(param_1 + 100) + 0x44) = param_1 + 0x14;
      (**(code **)(**(int **)(param_1 + 100) + 0x28))();
    }
  }
  if ((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 100) != 0)) {
    *(int *)(*(int *)(param_1 + 100) + 0x48) = *(int *)(param_1 + 0x68);
  }
  ExceptionList = pvStack_c;
  return;
}

