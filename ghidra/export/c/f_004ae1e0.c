// FUNCTION: PORT1111 0x004ae1e0
// name: FUN_004ae1e0
// sig: undefined FUN_004ae1e0(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)


void __cdecl FUN_004ae1e0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4;
  
  if (1 < param_4) {
    FUN_004ac710((int)param_1,s_Unrecognized_unit_type_for_pHYs_c_004df9dc);
  }
  FUN_004ac8c0(local_c,param_2);
  FUN_004ac8c0(local_8,param_3);
  local_4 = (undefined1)param_4;
  FUN_004ac940(param_1,(byte *)&DAT_004c84b4,local_c,9);
  return;
}

