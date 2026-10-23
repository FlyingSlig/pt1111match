// FUNCTION: PORT1111 0x00482810
// name: FUN_00482810
// sig: int FUN_00482810(void * this, int param_1)


int __thiscall FUN_00482810(void *this,int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar2 = *(undefined4 **)(*(int *)((int)this + 0x2ac) + 4);
  puVar3 = (undefined4 *)*puVar2;
  while( true ) {
    if (puVar3 == puVar2) {
      return 0;
    }
    if (*(int *)(puVar3[3] + 4) == param_1) break;
    if (*(char *)((int)puVar3 + 0x11) == '\0') {
      puVar4 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar4 + 0x11) == '\0') {
        cVar1 = *(char *)((int)*puVar4 + 0x11);
        puVar3 = puVar4;
        puVar4 = (undefined4 *)*puVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar4 + 0x11);
          puVar3 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x11);
        puVar5 = (undefined4 *)puVar3[1];
        puVar4 = puVar3;
        while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x11);
          puVar5 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
        }
      }
    }
  }
  return puVar3[3];
}

