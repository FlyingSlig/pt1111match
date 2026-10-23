// FUNCTION: PORT1111 0x0041f3a0
// name: FUN_0041f3a0
// sig: undefined4 * FUN_0041f3a0(void * this, undefined4 * param_1)


undefined4 * __thiscall FUN_0041f3a0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)((int)this + 4);
  cVar2 = *(char *)((int)puVar4[1] + 0x11);
  puVar1 = (undefined4 *)puVar4[1];
  while (cVar2 == '\0') {
    cVar2 = (*(code *)PTR_FUN_004dd974)(*param_1,puVar1[3]);
    if (cVar2 == '\0') {
      puVar3 = (undefined4 *)puVar1[2];
    }
    else {
      puVar3 = (undefined4 *)*puVar1;
      puVar4 = puVar1;
    }
    puVar1 = puVar3;
    cVar2 = *(char *)((int)puVar3 + 0x11);
  }
  return puVar4;
}

