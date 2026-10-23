// FUNCTION: PORT1111 0x0045c8b0
// name: FUN_0045c8b0
// sig: undefined4 FUN_0045c8b0(int param_1)


undefined4 __fastcall FUN_0045c8b0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0x14);
  while( true ) {
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x20);
      while( true ) {
        if (iVar1 == 0) {
          return 1;
        }
        puVar2 = *(undefined4 **)(**(int **)(param_1 + 0x1c) + 8);
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)(1);
        }
        piVar3 = (int *)**(int **)(param_1 + 0x1c);
        if (piVar3 != *(int **)(param_1 + 0x1c)) break;
        iVar1 = *(int *)(param_1 + 0x20);
      }
      *(int *)piVar3[1] = *piVar3;
      *(int *)(*piVar3 + 4) = piVar3[1];
                    /* WARNING: Subroutine does not return */
      _free(piVar3);
    }
    puVar2 = *(undefined4 **)(**(int **)(param_1 + 0x10) + 8);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    piVar3 = (int *)**(int **)(param_1 + 0x10);
    if (piVar3 != *(int **)(param_1 + 0x10)) break;
    iVar1 = *(int *)(param_1 + 0x14);
  }
  *(int *)piVar3[1] = *piVar3;
  *(int *)(*piVar3 + 4) = piVar3[1];
                    /* WARNING: Subroutine does not return */
  _free(piVar3);
}

