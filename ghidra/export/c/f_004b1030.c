// FUNCTION: PORT1111 0x004b1030
// name: FUN_004b1030
// sig: undefined FUN_004b1030(int * param_1, int param_2, uint param_3)


void __cdecl FUN_004b1030(int *param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  ushort *puVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *local_10;
  byte local_c;
  void *local_8;
  int local_4;
  
  if ((param_1[0x1a] & 1U) == 0) {
    FUN_004ac6e0(param_1,s_Missing_IHDR_before_sPLT_004e00ec);
  }
  else if ((param_1[0x1a] & 4U) != 0) {
    FUN_004ac710((int)param_1,s_Invalid_sPLT_after_IDAT_004e00d4);
    FUN_004afd10(param_1,param_3);
    return;
  }
  pbVar4 = FUN_004a4710(param_1,param_3 + 1);
  FUN_004afce0(param_1,pbVar4,param_3);
  iVar5 = FUN_004afd10(param_1,0);
  if (iVar5 == 0) {
    pbVar4[param_3] = 0;
    bVar3 = *pbVar4;
    pbVar7 = pbVar4;
    while (bVar3 != 0) {
      pbVar1 = pbVar7 + 1;
      pbVar7 = pbVar7 + 1;
      bVar3 = *pbVar1;
    }
    if (pbVar7 + 1 <= pbVar4 + param_3) {
      local_c = pbVar7[1];
      pbVar7 = pbVar7 + 2;
      local_4 = (-(uint)(local_c != 8) & 4) + 6;
      if ((int)(pbVar4 + (param_3 - (int)pbVar7)) % local_4 == 0) {
        local_4 = (int)(pbVar4 + (param_3 - (int)pbVar7)) / local_4;
        local_8 = FUN_004a4710(param_1,local_4 * 10);
        iVar5 = 0;
        if (0 < local_4) {
          param_3 = 0;
          do {
            puVar2 = (ushort *)(param_3 + (int)local_8);
            if (local_c == 8) {
              *puVar2 = (ushort)*pbVar7;
              puVar2[1] = (ushort)pbVar7[1];
              puVar2[2] = (ushort)pbVar7[2];
              puVar2[3] = (ushort)pbVar7[3];
              pbVar7 = pbVar7 + 4;
            }
            else {
              iVar6 = FUN_004afcc0(pbVar7);
              *puVar2 = (ushort)iVar6;
              iVar6 = FUN_004afcc0(pbVar7 + 2);
              puVar2[1] = (ushort)iVar6;
              iVar6 = FUN_004afcc0(pbVar7 + 4);
              puVar2[2] = (ushort)iVar6;
              iVar6 = FUN_004afcc0(pbVar7 + 6);
              puVar2[3] = (ushort)iVar6;
              pbVar7 = pbVar7 + 8;
            }
            iVar6 = FUN_004afcc0(pbVar7);
            puVar2[4] = (ushort)iVar6;
            pbVar7 = pbVar7 + 2;
            iVar5 = iVar5 + 1;
            param_3 = param_3 + 10;
          } while (iVar5 < local_4);
        }
        local_10 = pbVar4;
        FUN_004a67f0(param_1,param_2,(int)&local_10,1);
        FUN_004a4750((int)param_1,pbVar4);
        FUN_004a4750((int)param_1,local_8);
        return;
      }
      FUN_004a4750((int)param_1,pbVar4);
      FUN_004ac710((int)param_1,s_sPLT_chunk_has_bad_length_004e00a0);
      return;
    }
    FUN_004a4750((int)param_1,pbVar4);
    FUN_004ac710((int)param_1,s_malformed_sPLT_chunk_004e00bc);
    return;
  }
  FUN_004a4750((int)param_1,pbVar4);
  return;
}

