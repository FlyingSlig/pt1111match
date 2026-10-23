// FUNCTION: PORT1111 0x004add90
// name: FUN_004add90
// sig: undefined FUN_004add90(int * param_1, byte * param_2, byte * param_3)


void __cdecl FUN_004add90(int *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  
  if (param_2 != (byte *)0x0) {
    uVar3 = FUN_004adbe0(param_1,param_2,(int *)&param_2);
    pbVar2 = param_3;
    if (uVar3 != 0) {
      if ((param_3 == (byte *)0x0) || (*param_3 == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0xffffffff;
        pbVar5 = param_3;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          bVar1 = *pbVar5;
          pbVar5 = pbVar5 + 1;
        } while (bVar1 != 0);
        uVar4 = ~uVar4 - 1;
      }
      FUN_004ac970(param_1,(byte *)&DAT_004c84d4,uVar4 + 1 + uVar3);
      FUN_004ac9c0(param_1,param_2,uVar3 + 1);
      if (uVar4 != 0) {
        FUN_004ac9c0(param_1,pbVar2,uVar4);
      }
      FUN_004ac9f0(param_1);
      FUN_004a4750((int)param_1,param_2);
      return;
    }
  }
  FUN_004ac710((int)param_1,s_Empty_keyword_in_tEXt_chunk_004df948);
  return;
}

