// FUNCTION: PORT1111 0x0040af40
// name: FUN_0040af40
// sig: undefined FUN_0040af40(void * this, void * param_1)


void __thiscall FUN_0040af40(void *this,void *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_4;
  
  puVar2 = *(undefined4 **)((int)this + 8);
  puVar4 = (undefined4 *)*puVar2;
  while (local_4 = puVar4, puVar4 != puVar2) {
    FUN_00413730((int *)&local_4);
    puVar4 = local_4;
  }
  FUN_0042f670(param_1);
  if (puVar4 != *(undefined4 **)((int)this + 8)) {
    do {
      if ((void *)puVar4[4] != (void *)0x0) {
        FUN_0040a7e0((void *)puVar4[4],param_1);
      }
      if (*(char *)((int)puVar4 + 0x15) == '\0') {
        puVar2 = (undefined4 *)puVar4[2];
        if (*(char *)((int)puVar2 + 0x15) == '\0') {
          cVar1 = *(char *)((int)*puVar2 + 0x15);
          puVar4 = puVar2;
          puVar2 = (undefined4 *)*puVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar2 + 0x15);
            puVar4 = puVar2;
            puVar2 = (undefined4 *)*puVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar4[1] + 0x15);
          puVar3 = (undefined4 *)puVar4[1];
          puVar2 = puVar4;
          while ((puVar4 = puVar3, cVar1 == '\0' && (puVar2 == (undefined4 *)puVar4[2]))) {
            cVar1 = *(char *)((int)puVar4[1] + 0x15);
            puVar3 = (undefined4 *)puVar4[1];
            puVar2 = puVar4;
          }
        }
      }
    } while (puVar4 != *(undefined4 **)((int)this + 8));
  }
  return;
}

