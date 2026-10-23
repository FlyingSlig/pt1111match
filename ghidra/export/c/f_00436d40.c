// FUNCTION: PORT1111 0x00436d40
// name: FUN_00436d40
// sig: bool FUN_00436d40(void * param_1, int param_2)


bool FUN_00436d40(void *param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  
  if (*(uint *)(param_2 + 0x18) < 0x10) {
    pbVar1 = (byte *)(param_2 + 4);
  }
  else {
    pbVar1 = *(byte **)(param_2 + 4);
  }
  uVar2 = FUN_004366b0(param_1,0,*(uint *)((int)param_1 + 0x14),pbVar1,*(uint *)(param_2 + 0x14));
  return (int)uVar2 < 0;
}

