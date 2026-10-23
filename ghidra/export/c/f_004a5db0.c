// FUNCTION: PORT1111 0x004a5db0
// name: FUN_004a5db0
// sig: undefined FUN_004a5db0(int param_1, int param_2, int param_3)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004a5db0(int param_1,int param_2,int param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(int *)(param_2 + 0xfc) = param_3;
    *(float *)(param_2 + 0x28) = (float)param_3 * (float)_DAT_004c8428;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 1;
    if (param_3 == 0) {
      FUN_004ac710(param_1,s_Setting_gamma_0_004def60);
    }
  }
  return;
}

