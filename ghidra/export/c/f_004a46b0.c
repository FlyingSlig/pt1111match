// FUNCTION: PORT1111 0x004a46b0
// name: FUN_004a46b0
// sig: undefined4 * FUN_004a46b0(int param_1)


undefined4 * __cdecl FUN_004a46b0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (param_1 == 2) {
    uVar3 = 0x120;
  }
  else {
    if (param_1 != 1) {
      return (undefined4 *)0x0;
    }
    uVar3 = 0x238;
  }
  puVar1 = _malloc(uVar3);
  if (puVar1 != (undefined4 *)0x0) {
    puVar4 = puVar1;
    for (uVar3 = uVar3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  return puVar1;
}

