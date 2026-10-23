// FUNCTION: PORT1111 0x004b18b0
// name: FUN_004b18b0
// sig: undefined FUN_004b18b0(int * param_1, int param_2, uint param_3)


void __cdecl FUN_004b18b0(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  byte local_c [4];
  byte local_8 [4];
  undefined1 local_4;
  
  if ((param_1[0x1a] & 1U) == 0) {
    FUN_004ac6e0(param_1,s_Missing_IHDR_before_oFFs_004e03b0);
  }
  else {
    if ((param_1[0x1a] & 4U) != 0) {
      FUN_004ac710((int)param_1,s_Invalid_oFFs_after_IDAT_004e037c);
      FUN_004afd10(param_1,param_3);
      return;
    }
    if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x100) != 0)) {
      FUN_004ac710((int)param_1,s_Duplicate_oFFs_chunk_004e0364);
      FUN_004afd10(param_1,param_3);
      return;
    }
  }
  if (param_3 != 9) {
    FUN_004ac710((int)param_1,s_Incorrect_oFFs_chunk_length_004e0394);
    FUN_004afd10(param_1,param_3);
    return;
  }
  FUN_004afce0(param_1,local_c,9);
  iVar1 = FUN_004afd10(param_1,0);
  if (iVar1 == 0) {
    iVar1 = FUN_004afc90(local_c);
    iVar2 = FUN_004afc90(local_8);
    FUN_004a6070((int)param_1,param_2,iVar1,iVar2,local_4);
  }
  return;
}

