// FUNCTION: PORT1111 0x004b05f0
// name: FUN_004b05f0
// sig: undefined FUN_004b05f0(int * param_1, int param_2, uint param_3)


void __cdecl FUN_004b05f0(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  byte local_4 [4];
  
  uVar1 = param_1[0x1a];
  local_4[0] = 0;
  local_4[1] = 0;
  local_4[2] = 0;
  local_4[3] = 0;
  if ((uVar1 & 1) == 0) {
    FUN_004ac6e0(param_1,s_Missing_IHDR_before_sBIT_004dfd78);
  }
  else {
    if ((uVar1 & 4) != 0) {
      FUN_004ac710((int)param_1,s_Invalid_sBIT_after_IDAT_004dfd44);
      FUN_004afd10(param_1,param_3);
      return;
    }
    if ((uVar1 & 2) == 0) {
      if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 2) != 0)) {
        FUN_004ac710((int)param_1,s_Duplicate_sBIT_chunk_004dfd14);
        FUN_004afd10(param_1,param_3);
        return;
      }
    }
    else {
      FUN_004ac710((int)param_1,s_Out_of_place_sBIT_chunk_004dfd2c);
    }
  }
  uVar1 = 3;
  if (*(char *)((int)param_1 + 0x126) != '\x03') {
    uVar1 = (uint)*(byte *)((int)param_1 + 0x12a);
  }
  if (param_3 == uVar1) {
    FUN_004afce0(param_1,local_4,uVar1);
    iVar2 = FUN_004afd10(param_1,0);
    if (iVar2 == 0) {
      if ((*(byte *)((int)param_1 + 0x126) & 2) != 0) {
        *(byte *)((int)param_1 + 0x17d) = local_4[1];
        *(byte *)(param_1 + 0x5f) = local_4[0];
        *(byte *)((int)param_1 + 0x17e) = local_4[2];
        *(byte *)(param_1 + 0x60) = local_4[3];
        FUN_004a6300((int)param_1,param_2,param_1 + 0x5f);
        return;
      }
      *(byte *)((int)param_1 + 0x17f) = local_4[0];
      *(byte *)((int)param_1 + 0x17d) = local_4[0];
      *(byte *)(param_1 + 0x5f) = local_4[0];
      *(byte *)((int)param_1 + 0x17e) = local_4[0];
      *(byte *)(param_1 + 0x60) = local_4[1];
      FUN_004a6300((int)param_1,param_2,param_1 + 0x5f);
    }
    return;
  }
  FUN_004ac710((int)param_1,s_Incorrect_sBIT_chunk_length_004dfd5c);
  FUN_004afd10(param_1,param_3);
  return;
}

