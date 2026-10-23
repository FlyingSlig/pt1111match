// FUNCTION: PORT1111 0x00453b90
// name: FUN_00453b90
// sig: undefined FUN_00453b90(int param_1)


void __fastcall FUN_00453b90(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)**(int **)(param_1 + 4);
  if (piVar3 == *(int **)(param_1 + 4)) {
    return;
  }
  do {
    iVar1 = FUN_00414c30(DAT_004e240c);
    if (iVar1 != 0) {
      iVar2 = FUN_004056a0(iVar1);
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0xc) = 2;
        return;
      }
      if ((*(uint *)(iVar1 + 0x3c) & 8) != 0) {
        *(undefined4 *)(param_1 + 0xc) = 0;
        return;
      }
      if (((*(uint *)(iVar1 + 0x3c) & 4) != 0) && (*(int *)(iVar1 + 0xf0) != 0)) {
        *(undefined4 *)(param_1 + 0xc) = 4;
        return;
      }
      iVar2 = FUN_004056a0(iVar1);
      if (((iVar2 == 0) && ((*(uint *)(iVar1 + 0x3c) & 8) == 0)) &&
         (((*(uint *)(iVar1 + 0x3c) & 4) == 0 || (*(int *)(iVar1 + 0xf0) == 0)))) {
        *(undefined4 *)(param_1 + 0xc) = 1;
        return;
      }
    }
    piVar3 = (int *)*piVar3;
    if (piVar3 == (int *)*(int *)(param_1 + 4)) {
      return;
    }
  } while( true );
}

