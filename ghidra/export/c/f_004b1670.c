// FUNCTION: PORT1111 0x004b1670
// name: FUN_004b1670
// sig: undefined FUN_004b1670(int * param_1, int param_2, uint param_3)


void __cdecl FUN_004b1670(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined2 *puVar3;
  byte local_202 [2];
  undefined2 local_200 [256];
  
  uVar1 = param_1[0x1a];
  if ((uVar1 & 1) == 0) {
    FUN_004ac6e0(param_1,s_Missing_IHDR_before_hIST_004e02e0);
  }
  else {
    if ((uVar1 & 4) != 0) {
      FUN_004ac710((int)param_1,s_Invalid_hIST_after_IDAT_004e02ac);
      FUN_004afd10(param_1,param_3);
      return;
    }
    if ((uVar1 & 2) == 0) {
      FUN_004ac710((int)param_1,s_Missing_PLTE_before_hIST_004e0290);
      FUN_004afd10(param_1,param_3);
      return;
    }
    if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x40) != 0)) {
      FUN_004ac710((int)param_1,s_Duplicate_hIST_chunk_004e0278);
      FUN_004afd10(param_1,param_3);
      return;
    }
  }
  uVar1 = (int)param_3 / 2;
  if (uVar1 == *(ushort *)(param_1 + 0x46)) {
    if (0 < (int)uVar1) {
      puVar3 = local_200;
      do {
        FUN_004afce0(param_1,local_202,2);
        iVar2 = FUN_004afcc0(local_202);
        *puVar3 = (short)iVar2;
        puVar3 = puVar3 + 1;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    iVar2 = FUN_004afd10(param_1,0);
    if (iVar2 == 0) {
      FUN_004a5e00(param_1,param_2,(int)local_200);
    }
    return;
  }
  FUN_004ac710((int)param_1,s_Incorrect_hIST_chunk_length_004e02c4);
  FUN_004afd10(param_1,param_3);
  return;
}

