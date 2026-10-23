// FUNCTION: PORT1111 0x004b1e70
// name: FUN_004b1e70
// sig: undefined FUN_004b1e70(int * param_1, int param_2, uint param_3)


void __cdecl FUN_004b1e70(int *param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  byte *pbVar7;
  
  if ((*(byte *)(param_1 + 0x1a) & 1) == 0) {
    FUN_004ac6e0(param_1,s_Missing_IHDR_before_tEXt_004e0554);
  }
  if ((param_1[0x1a] & 4U) != 0) {
    param_1[0x1a] = param_1[0x1a] | 8;
  }
  pbVar3 = FUN_004a4710(param_1,param_3 + 1);
  FUN_004afce0(param_1,pbVar3,param_3);
  iVar4 = FUN_004afd10(param_1,0);
  if (iVar4 != 0) {
    FUN_004a4750((int)param_1,pbVar3);
    return;
  }
  pbVar3[param_3] = 0;
  bVar2 = *pbVar3;
  pbVar7 = pbVar3;
  while (bVar2 != 0) {
    pbVar1 = pbVar7 + 1;
    pbVar7 = pbVar7 + 1;
    bVar2 = *pbVar1;
  }
  if (pbVar7 != pbVar3 + param_3) {
    pbVar7 = pbVar7 + 1;
  }
  puVar5 = FUN_004a4710(param_1,0x10);
  uVar6 = 0xffffffff;
  *puVar5 = 0xffffffff;
  puVar5[1] = pbVar3;
  puVar5[2] = pbVar7;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    bVar2 = *pbVar7;
    pbVar7 = pbVar7 + 1;
  } while (bVar2 != 0);
  puVar5[3] = ~uVar6 - 1;
  FUN_004a6520(param_1,param_2,(int)puVar5,1);
  FUN_004a4750((int)param_1,pbVar3);
  FUN_004a4750((int)param_1,puVar5);
  return;
}

