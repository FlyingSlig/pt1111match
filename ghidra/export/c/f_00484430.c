// FUNCTION: PORT1111 0x00484430
// name: FUN_00484430
// sig: undefined FUN_00484430(undefined4 * param_1)


void __fastcall FUN_00484430(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = &PTR_FUN_004c69f0;
  FUN_0046a5d0(&DAT_004e2aa8,0);
  piVar2 = (int *)**(int **)(param_1[3] + 4);
  if (piVar2 != *(int **)(param_1[3] + 4)) {
    do {
      if ((undefined4 *)piVar2[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar2[2])(1);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(param_1[3] + 4));
  }
  iVar1 = param_1[3];
  if (iVar1 != 0) {
    FUN_00419480(iVar1);
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(iVar1 + 4));
  }
  if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[6])(1);
    param_1[6] = 0;
  }
  return;
}

