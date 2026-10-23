// FUNCTION: PORT1111 0x004ad550
// name: FUN_004ad550
// sig: undefined FUN_004ad550(int * param_1, byte * param_2, uint param_3)


void __cdecl FUN_004ad550(int *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  byte bVar6;
  
  pbVar4 = param_2;
  if ((param_3 & 2) == 0) {
    bVar6 = param_2[3];
    if ((bVar6 == 0) || (*(byte *)(param_1 + 0x4a) < bVar6)) goto LAB_004ad5fd;
    param_2 = (byte *)CONCAT31(param_2._1_3_,bVar6);
    uVar5 = 1;
  }
  else {
    bVar6 = 8;
    if (param_3 != 3) {
      bVar6 = *(byte *)(param_1 + 0x4a);
    }
    bVar1 = *param_2;
    if (((((bVar1 == 0) || (bVar6 < bVar1)) || (bVar2 = param_2[1], bVar2 == 0)) ||
        ((bVar6 < bVar2 || (bVar3 = param_2[2], bVar3 == 0)))) || (bVar6 < bVar3))
    goto LAB_004ad5fd;
    param_2 = (byte *)CONCAT31(CONCAT12(param_2._3_1_,CONCAT11(bVar3,bVar2)),bVar1);
    uVar5 = 3;
  }
  if ((param_3 & 4) != 0) {
    bVar6 = pbVar4[4];
    if ((bVar6 == 0) || (*(byte *)(param_1 + 0x4a) < bVar6)) {
LAB_004ad5fd:
      FUN_004ac710((int)param_1,s_Invalid_sBIT_depth_specified_004df6e4);
      return;
    }
    *(byte *)((int)&param_2 + uVar5) = bVar6;
    uVar5 = uVar5 + 1;
  }
  FUN_004ac940(param_1,(byte *)&DAT_004c84bc,(byte *)&param_2,uVar5);
  return;
}

