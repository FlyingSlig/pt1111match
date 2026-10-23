// FUNCTION: PORT1111 0x004829c0
// name: FUN_004829c0
// sig: undefined4 FUN_004829c0(void * this, int param_1)


undefined4 __thiscall FUN_004829c0(void *this,int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  puVar2 = *(undefined4 **)(*(int *)((int)this + 0x2ac) + 4);
  puVar5 = (undefined4 *)*puVar2;
  iVar6 = 0;
  while( true ) {
    if (puVar5 == puVar2) {
      return 0;
    }
    if (iVar6 == param_1) break;
    if (*(char *)((int)puVar5 + 0x11) == '\0') {
      puVar3 = (undefined4 *)puVar5[2];
      if (*(char *)((int)puVar3 + 0x11) == '\0') {
        cVar1 = *(char *)((int)*puVar3 + 0x11);
        puVar5 = puVar3;
        puVar3 = (undefined4 *)*puVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar3 + 0x11);
          puVar5 = puVar3;
          puVar3 = (undefined4 *)*puVar3;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar5[1] + 0x11);
        puVar4 = (undefined4 *)puVar5[1];
        puVar3 = puVar5;
        while ((puVar5 = puVar4, cVar1 == '\0' && (puVar3 == (undefined4 *)puVar5[2]))) {
          cVar1 = *(char *)((int)puVar5[1] + 0x11);
          puVar4 = (undefined4 *)puVar5[1];
          puVar3 = puVar5;
        }
      }
    }
    iVar6 = iVar6 + 1;
  }
  return puVar5[3];
}

