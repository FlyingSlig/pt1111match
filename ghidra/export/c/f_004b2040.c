// FUNCTION: PORT1111 0x004b2040
// name: FUN_004b2040
// sig: undefined FUN_004b2040(int * param_1, int param_2, size_t param_3)


void __cdecl FUN_004b2040(int *param_1,int param_2,size_t param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined3 extraout_var;
  int iVar4;
  undefined3 extraout_var_00;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte **ppbVar9;
  byte *local_14 [3];
  size_t local_8;
  
  if (((param_1[0x1a] & 4U) != 0) && (param_1[0x47] != DAT_004c8454)) {
    param_1[0x1a] = param_1[0x1a] | 8;
  }
  pbVar1 = (byte *)(param_1 + 0x47);
  FUN_004b21a0(param_1,pbVar1);
  if ((((*pbVar1 & 0x20) == 0) &&
      (uVar3 = FUN_004a7210((int)param_1,(int *)pbVar1), CONCAT31(extraout_var,uVar3) != 3)) &&
     (param_1[0x87] == 0)) {
    FUN_004ac760(param_1,(undefined4 *)s_unknown_critical_chunk_004e05cc);
  }
  if ((param_1[0x1b] & 0x8000U) == 0) {
    FUN_004afd10(param_1,param_3);
    return;
  }
  uVar5 = 0xffffffff;
  pbVar7 = pbVar1;
  do {
    pbVar8 = pbVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pbVar8 = pbVar7 + 1;
    bVar2 = *pbVar7;
    pbVar7 = pbVar8;
  } while (bVar2 != 0);
  uVar5 = ~uVar5;
  pbVar7 = pbVar8 + -uVar5;
  ppbVar9 = local_14;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *ppbVar9 = *(byte **)pbVar7;
    pbVar7 = pbVar7 + 4;
    ppbVar9 = ppbVar9 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(byte *)ppbVar9 = *pbVar7;
    pbVar7 = pbVar7 + 1;
    ppbVar9 = (byte **)((int)ppbVar9 + 1);
  }
  local_14[2] = FUN_004a4710(param_1,param_3);
  local_8 = param_3;
  FUN_004afce0(param_1,local_14[2],param_3);
  if ((code *)param_1[0x87] != (code *)0x0) {
    iVar4 = (*(code *)param_1[0x87])(param_1,local_14);
    if (0 < iVar4) goto LAB_004b2161;
    if (((*pbVar1 & 0x20) == 0) &&
       (uVar3 = FUN_004a7210((int)param_1,(int *)pbVar1), CONCAT31(extraout_var_00,uVar3) != 3)) {
      FUN_004ac760(param_1,(undefined4 *)s_unknown_critical_chunk_004e05cc);
    }
  }
  FUN_004a6950(param_1,param_2,(int)local_14,1);
LAB_004b2161:
  FUN_004a4750((int)param_1,local_14[2]);
  FUN_004afd10(param_1,0);
  return;
}

