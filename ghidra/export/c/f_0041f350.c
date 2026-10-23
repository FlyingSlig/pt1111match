// FUNCTION: PORT1111 0x0041f350
// name: FUN_0041f350
// sig: undefined4 * FUN_0041f350(void * this, undefined4 * param_1)


undefined4 * __thiscall FUN_0041f350(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(*(undefined4 **)((int)this + 4))[1];
  cVar2 = *(char *)((int)puVar4 + 0x11);
  puVar1 = *(undefined4 **)((int)this + 4);
  while (cVar2 == '\0') {
    cVar2 = (*(code *)PTR_FUN_004dd974)(puVar4[3],*param_1);
    if (cVar2 == '\0') {
      puVar3 = (undefined4 *)*puVar4;
    }
    else {
      puVar3 = (undefined4 *)puVar4[2];
      puVar4 = puVar1;
    }
    puVar1 = puVar4;
    puVar4 = puVar3;
    cVar2 = *(char *)((int)puVar3 + 0x11);
  }
  return puVar1;
}

