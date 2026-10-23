// FUNCTION: PORT1111 0x004b1d80
// name: FUN_004b1d80
// sig: undefined FUN_004b1d80(int * param_1, int param_2, uint param_3)


void __cdecl FUN_004b1d80(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  byte local_10 [2];
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined2 local_8;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  undefined1 local_3;
  undefined1 local_2;
  
  if ((*(byte *)(param_1 + 0x1a) & 1) == 0) {
    FUN_004ac6e0(param_1,s_Out_of_place_tIME_chunk_004e053c);
  }
  else if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x200) != 0)) {
    FUN_004ac710((int)param_1,s_Duplicate_tIME_chunk_004e0508);
    FUN_004afd10(param_1,param_3);
    return;
  }
  if ((param_1[0x1a] & 4U) != 0) {
    param_1[0x1a] = param_1[0x1a] | 8;
  }
  if (param_3 != 7) {
    FUN_004ac710((int)param_1,s_Incorrect_tIME_chunk_length_004e0520);
    FUN_004afd10(param_1,param_3);
    return;
  }
  FUN_004afce0(param_1,local_10,7);
  iVar1 = FUN_004afd10(param_1,0);
  if (iVar1 == 0) {
    local_4 = local_c;
    local_2 = local_a;
    local_3 = local_b;
    local_5 = local_d;
    local_6 = local_e;
    iVar1 = FUN_004afcc0(local_10);
    local_8 = (undefined2)iVar1;
    FUN_004a6700((int)param_1,param_2,(undefined4 *)&local_8);
  }
  return;
}

