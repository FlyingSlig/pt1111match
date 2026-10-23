// FUNCTION: PORT1111 0x004b0450
// name: FUN_004b0450
// sig: undefined FUN_004b0450(int * param_1, undefined4 param_2, uint param_3)


void __cdecl FUN_004b0450(int *param_1,undefined4 param_2,uint param_3)

{
  if (((param_1[0x1a] & 1U) == 0) || ((param_1[0x1a] & 4U) == 0)) {
    FUN_004ac6e0(param_1,s_No_image_in_file_004dfc0c);
  }
  param_1[0x1a] = param_1[0x1a] | 0x18;
  if (param_3 != 0) {
    FUN_004ac710((int)param_1,s_Incorrect_IEND_chunk_length_004dfbf0);
  }
  FUN_004afd10(param_1,param_3);
  return;
}

