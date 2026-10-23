// FUNCTION: PORT1111 0x00495140
// name: FUN_00495140
// sig: undefined FUN_00495140(int param_1)


void __fastcall FUN_00495140(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != *(int **)(param_1 + 0xc)) {
    do {
      if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar1)(1);
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != *(int **)(param_1 + 0xc));
  }
  if (*(void **)(param_1 + 8) == (void *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 8));
}

