// FUNCTION: PORT1111 0x00478610
// name: FUN_00478610
// sig: undefined4 * FUN_00478610(void * this, uint * param_1)


undefined4 * __thiscall FUN_00478610(void *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  puVar4 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar4[1] + 0x11) == '\0') {
    uVar1 = *(uint *)(*param_1 + 0x10);
    puVar3 = puVar4;
    puVar5 = (undefined4 *)puVar4[1];
    do {
      puVar4 = puVar5;
      uVar2 = *(uint *)(puVar4[3] + 0x10);
      bVar6 = uVar2 < uVar1;
      if (uVar2 == uVar1) {
        bVar6 = (uint)puVar4[3] < *param_1;
      }
      if (bVar6) {
        puVar5 = (undefined4 *)puVar4[2];
        puVar4 = puVar3;
      }
      else {
        puVar5 = (undefined4 *)*puVar4;
      }
      puVar3 = puVar4;
    } while (*(char *)((int)puVar5 + 0x11) == '\0');
  }
  return puVar4;
}

