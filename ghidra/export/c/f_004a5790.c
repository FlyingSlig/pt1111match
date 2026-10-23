// FUNCTION: PORT1111 0x004a5790
// name: FUN_004a5790
// sig: undefined FUN_004a5790(int param_1, byte * param_2)


void __cdecl FUN_004a5790(int param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined *puVar3;
  
  bVar1 = *(byte *)(param_1 + 9);
  if (bVar1 < 8) {
    pbVar2 = param_2 + *(int *)(param_1 + 4);
    if (bVar1 == 1) {
      puVar3 = &DAT_004dec60;
    }
    else if (bVar1 == 2) {
      puVar3 = &DAT_004ded60;
    }
    else {
      if (bVar1 != 4) {
        return;
      }
      puVar3 = &DAT_004dee60;
    }
    for (; param_2 < pbVar2; param_2 = param_2 + 1) {
      *param_2 = puVar3[*param_2];
    }
  }
  return;
}

