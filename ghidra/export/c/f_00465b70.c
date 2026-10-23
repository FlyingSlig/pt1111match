// FUNCTION: PORT1111 0x00465b70
// name: FUN_00465b70
// sig: uint * FUN_00465b70(void * this, uint * param_1)


uint * __thiscall FUN_00465b70(void *this,uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  uint *puVar4;
  uint local_8 [2];
  
  puVar4 = *(uint **)((int)this + 4);
  if (*(char *)((int)puVar4[1] + 0x15) == '\0') {
    puVar1 = (uint *)puVar4[1];
    do {
      if (puVar1[3] < *param_1) {
        puVar2 = (uint *)puVar1[2];
      }
      else {
        puVar2 = (uint *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar4 != *(uint **)((int)this + 4)) && (puVar4[3] <= *param_1)) {
    return puVar4 + 4;
  }
  local_8[0] = *param_1;
  local_8[1] = 0;
  piVar3 = FUN_00465a00(this,&param_1,puVar4,local_8);
  return (uint *)(*piVar3 + 0x10);
}

