// FUNCTION: PORT1111 0x0040a8c0
// name: FUN_0040a8c0
// sig: undefined FUN_0040a8c0(int param_1)


void __fastcall FUN_0040a8c0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)**(int **)(param_1 + 0x14);
  if (piVar2 != *(int **)(param_1 + 0x14)) {
    do {
      iVar1 = FUN_00414c30(DAT_004e240c);
      if (iVar1 != 0) {
        FUN_004137d0(iVar1);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(param_1 + 0x14));
  }
  return;
}

