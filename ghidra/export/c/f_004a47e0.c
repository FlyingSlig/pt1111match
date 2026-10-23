// FUNCTION: PORT1111 0x004a47e0
// name: FUN_004a47e0
// sig: undefined FUN_004a47e0(int * param_1, int * param_2)


void __cdecl FUN_004a47e0(int *param_1,int *param_2)

{
  undefined1 uVar1;
  undefined3 extraout_var;
  byte *pbVar2;
  
  if ((param_1[0x1a] & 0x400U) == 0) {
    FUN_004aca20(param_1);
    FUN_004aca90(param_1,*param_2,param_2[1],(uint)*(byte *)(param_2 + 6),
                 (uint)*(byte *)((int)param_2 + 0x19),(uint)*(byte *)((int)param_2 + 0x1a),
                 (uint)*(byte *)((int)param_2 + 0x1b),(uint)*(byte *)(param_2 + 7));
    if ((*(byte *)(param_2 + 2) & 1) != 0) {
      FUN_004acef0(param_1);
    }
    if ((param_2[2] & 0x800U) != 0) {
      FUN_004acf30(param_1,(uint)*(byte *)(param_2 + 0xb));
    }
    if ((param_2[2] & 0x1000U) != 0) {
      FUN_004acf70(param_1,(byte *)param_2[0x31],0,param_2[0x32],param_2[0x33]);
    }
    if ((*(byte *)(param_2 + 2) & 2) != 0) {
      FUN_004ad550(param_1,(byte *)(param_2 + 0x11),(uint)*(byte *)((int)param_2 + 0x19));
    }
    if ((*(byte *)(param_2 + 2) & 4) != 0) {
      FUN_004ad610(param_1,SUB84((double)(float)param_2[0x20],0),
                   (int)((ulonglong)(double)(float)param_2[0x20] >> 0x20),
                   SUB84((double)(float)param_2[0x21],0),
                   (int)((ulonglong)(double)(float)param_2[0x21] >> 0x20),
                   (double)(float)param_2[0x22],(double)(float)param_2[0x23],
                   (double)(float)param_2[0x24],(double)(float)param_2[0x25],
                   (double)(float)param_2[0x26],(double)(float)param_2[0x27]);
    }
    if ((param_2[0x30] != 0) &&
       (pbVar2 = (byte *)param_2[0x2f], pbVar2 < pbVar2 + param_2[0x30] * 0x14)) {
      do {
        uVar1 = FUN_004a7210((int)param_1,(int *)pbVar2);
        if (((CONCAT31(extraout_var,uVar1) != 1) &&
            ((pbVar2[0x10] != 0 && ((pbVar2[0x10] & 2) == 0)))) &&
           (((pbVar2[3] & 0x20) != 0 ||
            ((CONCAT31(extraout_var,uVar1) == 3 || ((param_1[0x1b] & 0x10000U) != 0)))))) {
          FUN_004ac940(param_1,pbVar2,*(byte **)(pbVar2 + 8),*(uint *)(pbVar2 + 0xc));
        }
        pbVar2 = pbVar2 + 0x14;
      } while (pbVar2 < (byte *)(param_2[0x2f] + param_2[0x30] * 0x14));
    }
    param_1[0x1a] = param_1[0x1a] | 0x400;
  }
  return;
}

