// FUNCTION: PORT1111 0x00469910
// name: FUN_00469910
// sig: ushort * FUN_00469910(void * this, ushort * param_1)


ushort * __thiscall FUN_00469910(void *this,ushort *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  int *piVar3;
  ushort *puVar4;
  ushort local_8 [2];
  undefined4 local_4;
  
  puVar4 = *(ushort **)((int)this + 4);
  if (*(char *)((int)*(ushort **)(puVar4 + 2) + 0x15) == '\0') {
    puVar1 = *(ushort **)(puVar4 + 2);
    do {
      if (puVar1[6] < *param_1) {
        puVar2 = *(ushort **)(puVar1 + 4);
      }
      else {
        puVar2 = *(ushort **)puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar4 != *(ushort **)((int)this + 4)) && (puVar4[6] <= *param_1)) {
    return puVar4 + 8;
  }
  local_8[0] = *param_1;
  local_4 = 0;
  piVar3 = FUN_004695c0(this,&param_1,puVar4,local_8);
  return (ushort *)(*piVar3 + 0x10);
}

