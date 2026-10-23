// FUNCTION: PORT1111 0x0042a630
// name: FUN_0042a630
// sig: undefined FUN_0042a630(int param_1)


void __fastcall FUN_0042a630(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (DAT_004e2a88 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_004e2a88);
  }
  if (DAT_004e240c != 0) {
    FUN_00414af0(DAT_004e240c);
  }
  FUN_0042a5c0(param_1);
  piVar3 = (int *)**(int **)(param_1 + 8);
  if (piVar3 != *(int **)(param_1 + 8)) {
    do {
      *(undefined4 *)(piVar3[2] + 0x54) = 0;
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(param_1 + 8));
  }
  if ((int *)**(int **)(param_1 + 8) != *(int **)(param_1 + 8)) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 8) + 4) + 8);
      iVar2 = *(int *)(param_1 + 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      if ((iVar2 == *(int *)(param_1 + 0xc)) &&
         (piVar3 = (int *)(*(int **)(param_1 + 8))[1], piVar3 != *(int **)(param_1 + 8))) {
        *(int *)piVar3[1] = *piVar3;
        *(int *)(*piVar3 + 4) = piVar3[1];
                    /* WARNING: Subroutine does not return */
        _free(piVar3);
      }
    } while ((int *)**(int **)(param_1 + 8) != *(int **)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (DAT_004e2408 != (undefined4 *)0x0) {
    (**(code **)*DAT_004e2408)(1);
    DAT_004e2408 = (undefined4 *)0x0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x118);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_00428f30((undefined4 *)&DAT_004e20c8);
    return;
  }
  if (puVar1[-1] == 0) {
                    /* WARNING: Subroutine does not return */
    _free(puVar1 + -1);
  }
  (**(code **)*puVar1)(3);
  *(undefined4 *)(param_1 + 0x118) = 0;
  FUN_00428f30((undefined4 *)&DAT_004e20c8);
  return;
}

