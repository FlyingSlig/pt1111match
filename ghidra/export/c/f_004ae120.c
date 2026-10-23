// FUNCTION: PORT1111 0x004ae120
// name: FUN_004ae120
// sig: undefined FUN_004ae120(int * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)


void __cdecl
FUN_004ae120(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte local_40 [32];
  byte local_20 [32];
  
  _sprintf((char *)local_40,s__12_12e_004df9d4,param_3,param_4);
  _sprintf((char *)local_20,s__12_12e_004df9d4,param_5,param_6);
  uVar2 = 0xffffffff;
  pbVar4 = local_20;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
  } while (bVar1 != 0);
  uVar3 = 0xffffffff;
  pbVar4 = local_40;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
  } while (bVar1 != 0);
  FUN_004ac970(param_1,(byte *)&DAT_004c84ac,~uVar2 + ~uVar3);
  FUN_004ac9c0(param_1,(byte *)&param_2,1);
  uVar2 = 0xffffffff;
  pbVar4 = local_40;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
  } while (bVar1 != 0);
  FUN_004ac9c0(param_1,local_40,~uVar2);
  uVar2 = 0xffffffff;
  pbVar4 = local_20;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
  } while (bVar1 != 0);
  FUN_004ac9c0(param_1,local_20,~uVar2 - 1);
  FUN_004ac9f0(param_1);
  return;
}

