// FUNCTION: PORT1111 0x0047ce50
// name: FUN_0047ce50
// sig: undefined FUN_0047ce50(int param_1)


void __fastcall FUN_0047ce50(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    if ((*(int *)(param_1 + 0x78) == 0) && (*(int *)(*(int *)(param_1 + 0x34) + 0x14) == 0)) {
      FUN_00409110();
    }
    piVar1 = (int *)**(int **)(param_1 + 0x70);
    if (piVar1 != *(int **)(param_1 + 0x70)) {
      do {
        *(undefined4 *)(piVar1[2] + 0x38) = 0;
        FUN_0047ce50(piVar1[2]);
        piVar1 = (int *)*piVar1;
      } while (piVar1 != (int *)*(int *)(param_1 + 0x70));
    }
    FUN_00419480(param_1 + 0x6c);
    if (*(int *)(param_1 + 0x7c) != 0) {
      FUN_00488a80(*(int *)(param_1 + 0x7c));
      if (*(undefined4 **)(param_1 + 0x7c) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x7c))(1);
      }
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    piVar1 = (int *)**(int **)(param_1 + 0x8c);
    if (piVar1 != *(int **)(param_1 + 0x8c)) {
      do {
        (**(code **)(*(int *)piVar1[2] + 0x54))();
        piVar1 = (int *)*piVar1;
      } while (piVar1 != (int *)*(int *)(param_1 + 0x8c));
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 6;
    if (*(int *)(param_1 + 0x2c) != 0) {
      if (*(int **)(param_1 + 0x28) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x28) + 0x10))(1);
      }
      if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x24))(1);
      }
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}

