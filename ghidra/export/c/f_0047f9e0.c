// FUNCTION: PORT1111 0x0047f9e0
// name: FUN_0047f9e0
// sig: undefined4 FUN_0047f9e0(void * this, int param_1, int param_2, int param_3, int param_4)


undefined4 __thiscall FUN_0047f9e0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = param_1;
  if (param_1 == 0xf) {
    iVar1 = 0x10;
  }
  if (param_4 == 0) {
    uVar4 = (iVar1 * param_2 + 0x1fU >> 3 & 0x1ffffffc) * param_3;
  }
  else {
    uVar4 = 0;
  }
  if (iVar1 == 0x10) {
    uVar3 = 0x34;
  }
  else {
    iVar1 = FUN_0046ab90(param_1);
    uVar3 = iVar1 * 4 + 0x28;
  }
  puVar2 = _malloc(uVar3);
  *(undefined4 **)((int)this + 0x28) = puVar2;
  for (uVar3 = uVar3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  if (param_4 == 0) {
    puVar2 = _malloc(uVar4);
    *(undefined4 **)((int)this + 0x2c) = puVar2;
    for (uVar4 = uVar4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined1 *)puVar2 = 0;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  return 1;
}

