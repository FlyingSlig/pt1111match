// FUNCTION: PORT1111 0x00468f30
// name: FUN_00468f30
// sig: undefined FUN_00468f30(int param_1)


void __fastcall FUN_00468f30(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_00468e50(param_1);
  if (*(int **)(param_1 + 0xf8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xf8) + 0x20))();
  }
  puVar2 = *(undefined4 **)(param_1 + 0x60);
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar2 == puVar1) {
    if (puVar2 == (undefined4 *)0x0) {
      if (puVar1 == (undefined4 *)0x0) goto LAB_00468f81;
      puVar2 = (undefined4 *)*puVar1;
    }
    else {
      puVar2 = (undefined4 *)*puVar2;
    }
    (*(code *)*puVar2)(1);
  }
  else {
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    if (*(undefined4 **)(param_1 + 100) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 100))(1);
    }
  }
LAB_00468f81:
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int **)(param_1 + 0xf8) != (int *)0x0) {
    FUN_00476e50(*(int **)(param_1 + 0xf8));
    if (*(int **)(param_1 + 0xf8) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xf8) + 0x10))(1);
    }
  }
  if (*(undefined4 **)(param_1 + 0x5c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x5c))(1);
  }
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  FUN_00467dc0(param_1);
  return;
}

