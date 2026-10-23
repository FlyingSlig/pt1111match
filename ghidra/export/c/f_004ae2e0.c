// FUNCTION: PORT1111 0x004ae2e0
// name: FUN_004ae2e0
// sig: undefined FUN_004ae2e0(int * param_1)


void __cdecl FUN_004ae2e0(int *param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = ((uint)*(byte *)((int)param_1 + 299) * (uint)*(byte *)(param_1 + 0x4a) * param_1[0x32] + 7
          >> 3) + 1;
  puVar1 = FUN_004a4710(param_1,uVar4);
  param_1[0x3b] = (int)puVar1;
  *puVar1 = 0;
  if ((*(byte *)((int)param_1 + 0x125) & 0x10) != 0) {
    puVar1 = FUN_004a4710(param_1,param_1[0x36] + 1);
    param_1[0x3c] = (int)puVar1;
    *puVar1 = 1;
  }
  if ((*(byte *)((int)param_1 + 0x125) & 0xe0) != 0) {
    puVar2 = FUN_004a4710(param_1,uVar4);
    param_1[0x3a] = (int)puVar2;
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar2 = 0;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    if ((*(byte *)((int)param_1 + 0x125) & 0x20) != 0) {
      puVar1 = FUN_004a4710(param_1,param_1[0x36] + 1);
      param_1[0x3d] = (int)puVar1;
      *puVar1 = 2;
    }
    if ((*(byte *)((int)param_1 + 0x125) & 0x40) != 0) {
      puVar1 = FUN_004a4710(param_1,param_1[0x36] + 1);
      param_1[0x3e] = (int)puVar1;
      *puVar1 = 3;
    }
    if ((*(byte *)((int)param_1 + 0x125) & 0x80) != 0) {
      puVar1 = FUN_004a4710(param_1,param_1[0x36] + 1);
      param_1[0x3f] = (int)puVar1;
      *puVar1 = 4;
    }
  }
  if (*(char *)((int)param_1 + 0x123) == '\0') {
    uVar4 = param_1[0x32];
    param_1[0x34] = param_1[0x33];
  }
  else {
    if ((*(byte *)(param_1 + 0x1c) & 2) != 0) {
      param_1[0x34] = param_1[0x33];
      param_1[0x35] = param_1[0x32];
      goto LAB_004ae456;
    }
    param_1[0x34] = ((param_1[0x33] - DAT_004c852c) + -1 + DAT_004c8548) / DAT_004c8548;
    uVar4 = ((param_1[0x32] - DAT_004c84f4) + -1 + DAT_004c8510) / DAT_004c8510;
  }
  param_1[0x35] = uVar4;
LAB_004ae456:
  param_1[0x21] = param_1[0x2c];
  param_1[0x20] = param_1[0x2b];
  return;
}

