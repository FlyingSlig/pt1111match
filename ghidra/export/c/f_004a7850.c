// FUNCTION: PORT1111 0x004a7850
// name: FUN_004a7850
// sig: undefined FUN_004a7850(int * param_1, int * param_2)


void __cdecl FUN_004a7850(int *param_1,int *param_2)

{
  if ((*(byte *)(param_1 + 0x1b) & 0x40) == 0) {
    FUN_004b2e00(param_1);
    FUN_004a8ed0((int)param_1,param_2);
    return;
  }
  FUN_004ac710((int)param_1,s_Ignoring_extra_png_read_update_i_004df278);
  FUN_004a8ed0((int)param_1,param_2);
  return;
}

