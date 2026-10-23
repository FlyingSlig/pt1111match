// FUNCTION: PORT1111 0x0040a630
// name: FUN_0040a630
// sig: undefined FUN_0040a630(int param_1)


void __fastcall FUN_0040a630(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)FUN_00414c30(DAT_004e240c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x3c))(3);
    (**(code **)(*piVar1 + 0x30))(0xffffffff);
  }
  piVar1 = (int *)**(int **)(param_1 + 0x14);
  if (piVar1 != *(int **)(param_1 + 0x14)) {
    do {
      piVar2 = (int *)FUN_00414c30(DAT_004e240c);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x3c))(0);
        (**(code **)(*piVar2 + 0x30))(0xffffffff);
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 8) = 1;
  return;
}

