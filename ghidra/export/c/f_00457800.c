// FUNCTION: PORT1111 0x00457800
// name: FUN_00457800
// sig: undefined FUN_00457800(int param_1)


void __fastcall FUN_00457800(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 0xc);
  for (piVar2 = *(int **)(param_1 + 8); piVar2 != piVar1; piVar2 = piVar2 + 1) {
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
    }
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

