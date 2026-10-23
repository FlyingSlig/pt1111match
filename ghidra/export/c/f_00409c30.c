// FUNCTION: PORT1111 0x00409c30
// name: FUN_00409c30
// sig: undefined FUN_00409c30(int * param_1)


void __fastcall FUN_00409c30(int *param_1)

{
  int *piVar1;
  
  FUN_00408900(param_1);
  piVar1 = *(int **)param_1[0x4b];
  if (piVar1 != (int *)param_1[0x4b]) {
    do {
      FUN_00415300(DAT_004e240c,piVar1[2]);
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)param_1[0x4b]);
  }
  FUN_00419480((int)(param_1 + 0x4a));
  return;
}

