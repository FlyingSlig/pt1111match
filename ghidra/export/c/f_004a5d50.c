// FUNCTION: PORT1111 0x004a5d50
// name: FUN_004a5d50
// sig: undefined FUN_004a5d50(int param_1, int param_2, double param_3)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004a5d50(int param_1,int param_2,double param_3)

{
  float10 fVar1;
  float10 extraout_ST0;
  longlong lVar2;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    *(float *)(param_2 + 0x28) = (float)param_3;
    lVar2 = __ftol();
    fVar1 = (float10)_DAT_004c8418;
    *(int *)(param_2 + 0xfc) = (int)lVar2;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 1;
    if (extraout_ST0 == fVar1) {
      FUN_004ac710(param_1,s_Setting_gamma_0_004def60);
    }
  }
  return;
}

