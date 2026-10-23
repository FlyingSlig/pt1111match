// FUNCTION: PORT1111 0x004963d0
// name: FUN_004963d0
// sig: undefined FUN_004963d0(int param_1)


void __fastcall FUN_004963d0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = *(int **)(param_1 + 0x48);
    if ((piVar1 != (int *)0x0) && (*(int *)(param_1 + 0x40) != 0)) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      uVar2 = (**(code **)(*piVar1 + 0x48))(piVar1);
      *(undefined4 *)(param_1 + 0x14) = uVar2;
    }
    piVar1 = *(int **)(param_1 + 0x2c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x1c))(piVar1,0);
    }
    piVar1 = *(int **)(param_1 + 0x3c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    piVar1 = *(int **)(param_1 + 0x34);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    piVar1 = *(int **)(param_1 + 0x30);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    piVar1 = *(int **)(param_1 + 0x38);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    piVar1 = *(int **)(param_1 + 0x2c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    piVar1 = *(int **)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  return;
}

