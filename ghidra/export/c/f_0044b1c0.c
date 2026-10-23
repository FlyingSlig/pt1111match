// FUNCTION: PORT1111 0x0044b1c0
// name: FUN_0044b1c0
// sig: undefined FUN_0044b1c0(int param_1)


void __fastcall FUN_0044b1c0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x11c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x110);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x114);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x34))(piVar1,0,0x464,piVar1);
    (**(code **)(**(int **)(param_1 + 0x114) + 8))(*(int **)(param_1 + 0x114));
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

