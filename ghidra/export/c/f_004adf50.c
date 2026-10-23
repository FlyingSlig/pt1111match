// FUNCTION: PORT1111 0x004adf50
// name: FUN_004adf50
// sig: undefined FUN_004adf50(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)


void __cdecl FUN_004adf50(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4;
  
  if (1 < param_4) {
    FUN_004ac710((int)param_1,s_Unrecognized_unit_type_for_oFFs_c_004df980);
  }
  FUN_004ac8c0(local_c,param_2);
  FUN_004ac8c0(local_8,param_3);
  local_4 = (undefined1)param_4;
  FUN_004ac940(param_1,(byte *)&DAT_004c849c,local_c,9);
  return;
}

