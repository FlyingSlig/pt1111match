// FUNCTION: PORT1111 0x00427480
// name: FUN_00427480
// sig: undefined FUN_00427480(int param_1)


void __fastcall FUN_00427480(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x44) == 0) {
    piVar1 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x44) = 1;
    if ((((piVar1 != (int *)0x0) && (*(short *)(param_1 + 4) <= DAT_004e23f8)) &&
        (DAT_004e2400 <= *(short *)(param_1 + 4))) &&
       ((DAT_004e23fc <= *(short *)(param_1 + 6) && (*(short *)(param_1 + 6) <= DAT_004e23f4)))) {
      iVar2 = piVar1[2];
      uVar3 = 0;
      if (*piVar1 != 0) {
        do {
          (**(code **)(**(int **)(iVar2 + uVar3 * 4) + 0xc))();
          uVar3 = uVar3 + 1;
        } while (uVar3 < **(uint **)(param_1 + 0x1c));
      }
    }
  }
  return;
}

