// FUNCTION: PORT1111 0x00411d60
// name: FUN_00411d60
// sig: undefined4 FUN_00411d60(int param_1)


undefined4 __fastcall FUN_00411d60(int param_1)

{
  int *piVar1;
  
  if (*(int *)(*(int *)(param_1 + 4) + 0x24) == 1) {
    piVar1 = operator_new(0x34);
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1[4] = 0;
      piVar1[1] = 0;
      piVar1[5] = 0;
      piVar1[6] = 0;
      piVar1[7] = 0;
      piVar1[8] = 0;
      piVar1[9] = 0;
      piVar1[10] = 0;
      piVar1[0xb] = 0;
      piVar1[0xc] = 0;
      piVar1[2] = -1;
      *piVar1 = (int)&PTR_FUN_004beab4;
      piVar1[3] = 0x21;
    }
    piVar1[1] = *(int *)(*(int *)(param_1 + 4) + 0x10);
    FUN_00412e90(piVar1);
    return 1;
  }
  return 0;
}

