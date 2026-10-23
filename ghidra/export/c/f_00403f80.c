// FUNCTION: PORT1111 0x00403f80
// name: FUN_00403f80
// sig: undefined4 FUN_00403f80(int param_1, int param_2, int param_3, int param_4)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00403f80(int param_1,int param_2,int param_3,int param_4)

{
  float10 fVar1;
  
  fVar1 = (float10)fpatan((float10)param_4 - (float10)param_2,(float10)param_3 - (float10)param_1);
  if ((fVar1 < (float10)_DAT_004bca78) && ((float10)_DAT_004bca70 <= fVar1)) {
    return 4;
  }
  if ((fVar1 < (float10)_DAT_004bca70) && ((float10)_DAT_004bca68 <= fVar1)) {
    return 3;
  }
  if ((fVar1 < (float10)_DAT_004bca68) && ((float10)_DAT_004bca60 <= fVar1)) {
    return 2;
  }
  if ((fVar1 < (float10)_DAT_004bca60) && ((float10)_DAT_004bca58 <= fVar1)) {
    return 1;
  }
  if ((fVar1 < (float10)_DAT_004bca58) && ((float10)_DAT_004bca50 <= fVar1)) {
    return 0;
  }
  if ((float10)_DAT_004bca50 <= fVar1) {
    if (((float10)_DAT_004bca48 <= fVar1) && (fVar1 < (float10)_DAT_004bca40)) {
      if (fVar1 < (float10)_DAT_004bca78) {
        return 0;
      }
      return 5;
    }
  }
  else if ((float10)_DAT_004bca48 <= fVar1) {
    return 7;
  }
  return 6;
}

