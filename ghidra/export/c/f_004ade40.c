// FUNCTION: PORT1111 0x004ade40
// name: FUN_004ade40
// sig: undefined FUN_004ade40(int * param_1, byte * param_2, byte * param_3, undefined4 param_4, int param_5)


void __cdecl FUN_004ade40(int *param_1,byte *param_2,byte *param_3,undefined4 param_4,int param_5)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte *local_18;
  int local_14 [5];
  
  piVar2 = param_1;
  if ((param_2 == (byte *)0x0) ||
     (uVar4 = FUN_004adbe0(param_1,param_2,(int *)&local_18), pbVar3 = param_3, uVar4 == 0)) {
    FUN_004ac710((int)piVar2,s_Empty_keyword_in_zTXt_chunk_004df964);
    return;
  }
  if ((param_3 == (byte *)0x0) ||
     ((*param_3 == 0 || (uVar6 = 0xffffffff, pbVar7 = param_3, param_5 == -1)))) {
    FUN_004add90(piVar2,local_18,param_3);
    FUN_004a4750((int)piVar2,local_18);
    return;
  }
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    bVar1 = *pbVar7;
    pbVar7 = pbVar7 + 1;
  } while (bVar1 != 0);
  FUN_004a4750((int)piVar2,local_18);
  iVar5 = FUN_004ad050(piVar2,(int)pbVar3,~uVar6 - 1,param_5,local_14);
  FUN_004ac970(piVar2,(byte *)&DAT_004c84ec,uVar4 + 2 + iVar5);
  FUN_004ac9c0(piVar2,param_2,uVar4 + 1);
  param_1 = (int *)CONCAT31(param_1._1_3_,(undefined1)param_5);
  FUN_004ac9c0(piVar2,(byte *)&param_1,1);
  FUN_004ad310(piVar2,local_14);
  FUN_004ac9f0(piVar2);
  return;
}

