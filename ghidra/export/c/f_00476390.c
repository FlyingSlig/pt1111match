// FUNCTION: PORT1111 0x00476390
// name: FUN_00476390
// sig: undefined FUN_00476390(int * param_1)


void __fastcall FUN_00476390(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piStack_4;
  
  piStack_4 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if (param_1[3] != 0) {
    piVar1 = *(int **)(param_1[3] + 4);
    piStack_4 = (int *)*piVar1;
    if (piStack_4 != piVar1) {
      do {
        if ((undefined4 *)piStack_4[4] != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)piStack_4[4])(1);
        }
        FUN_00413730((int *)&piStack_4);
      } while (piStack_4 != *(int **)(param_1[3] + 4));
    }
    iVar2 = param_1[3];
    FUN_00474830(*(void **)(*(int *)(iVar2 + 4) + 4));
    *(int *)(*(int *)(iVar2 + 4) + 4) = *(int *)(iVar2 + 4);
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)*(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar2 + 4);
    *(int *)(*(int *)(iVar2 + 4) + 8) = *(int *)(iVar2 + 4);
  }
  iVar2 = param_1[4];
  if (iVar2 != 0) {
    FUN_004759a0(*(void **)(*(int *)(iVar2 + 4) + 4));
    *(int *)(*(int *)(iVar2 + 4) + 4) = *(int *)(iVar2 + 4);
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)*(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar2 + 4);
    *(int *)(*(int *)(iVar2 + 4) + 8) = *(int *)(iVar2 + 4);
  }
  if (param_1[5] != 0) {
    piVar1 = *(int **)(param_1[5] + 4);
    piStack_4 = (int *)*piVar1;
    if (piStack_4 != piVar1) {
      do {
        if ((undefined4 *)piStack_4[4] != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)piStack_4[4])(1);
        }
        FUN_00413730((int *)&piStack_4);
      } while (piStack_4 != *(int **)(param_1[5] + 4));
    }
    iVar2 = param_1[5];
    FUN_00474870(*(void **)(*(int *)(iVar2 + 4) + 4));
    *(int *)(*(int *)(iVar2 + 4) + 4) = *(int *)(iVar2 + 4);
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)*(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar2 + 4);
    *(int *)(*(int *)(iVar2 + 4) + 8) = *(int *)(iVar2 + 4);
  }
  return;
}

