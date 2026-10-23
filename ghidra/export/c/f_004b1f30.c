// FUNCTION: PORT1111 0x004b1f30
// name: FUN_004b1f30
// sig: undefined FUN_004b1f30(int * param_1, int param_2, uint param_3)


void __cdecl FUN_004b1f30(int *param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  byte *pbVar7;
  uint local_4;
  
  if ((*(byte *)(param_1 + 0x1a) & 1) == 0) {
    FUN_004ac6e0(param_1,s_Missing_IHDR_before_zTXt_004e05b0);
  }
  if ((param_1[0x1a] & 4U) != 0) {
    param_1[0x1a] = param_1[0x1a] | 8;
  }
  pbVar3 = FUN_004a4710(param_1,param_3 + 1);
  FUN_004afce0(param_1,pbVar3,param_3);
  iVar4 = FUN_004afd10(param_1,0);
  if (iVar4 == 0) {
    pbVar3[param_3] = 0;
    bVar2 = *pbVar3;
    pbVar7 = pbVar3;
    while (bVar2 != 0) {
      pbVar1 = pbVar7 + 1;
      pbVar7 = pbVar7 + 1;
      bVar2 = *pbVar1;
    }
    if (pbVar7 == pbVar3 + param_3) {
      iVar4 = -1;
      FUN_004ac710((int)param_1,s_Zero_length_zTXt_chunk_004e0598);
    }
    else {
      if (pbVar7[1] != 0) {
        FUN_004ac710((int)param_1,s_Unknown_compression_type_in_zTXt_004e0570);
      }
      iVar4 = 0;
      pbVar7 = pbVar7 + 2;
    }
    puVar5 = FUN_004afe30(param_1,iVar4,(undefined4 *)pbVar3,param_3,pbVar7 + -(int)pbVar3,&local_4)
    ;
    piVar6 = FUN_004a4710(param_1,0x10);
    *piVar6 = iVar4;
    piVar6[1] = (int)puVar5;
    piVar6[2] = (int)(pbVar7 + -(int)pbVar3 + (int)puVar5);
    piVar6[3] = local_4;
    FUN_004a6520(param_1,param_2,(int)piVar6,1);
    FUN_004a4750((int)param_1,piVar6);
    FUN_004a4750((int)param_1,puVar5);
    return;
  }
  FUN_004a4750((int)param_1,pbVar3);
  return;
}

