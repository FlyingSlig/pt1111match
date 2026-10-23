// FUNCTION: PORT1111 0x0043d830
// name: FUN_0043d830
// sig: bool FUN_0043d830(void * param_1, byte * param_2)


bool __cdecl FUN_0043d830(void *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  
  pbVar2 = param_2;
  do {
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
  } while (bVar1 != 0);
  uVar3 = FUN_004366b0(param_1,0,*(uint *)((int)param_1 + 0x14),param_2,
                       (int)pbVar2 - (int)(param_2 + 1));
  return (bool)('\x01' - (uVar3 != 0));
}

