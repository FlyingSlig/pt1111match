// FUNCTION: PORT1111 0x00480e90
// name: FUN_00480e90
// sig: undefined FUN_00480e90(int param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00480e90(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x20))(piVar1);
    (**(code **)(**(int **)(param_1 + 0xc) + 0x3c))(*(int **)(param_1 + 0xc));
  }
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x4c))(piVar1,0);
    (**(code **)(**(int **)(param_1 + 0x14) + 0x74))(*(int **)(param_1 + 0x14),0);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  _DAT_004e2c80 = 0;
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  _DAT_004e2c80 = 0;
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  _DAT_004e2c80 = 0;
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  _DAT_004e2c80 = 0;
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    _DAT_004e2c80 = (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

