// FUNCTION: PORT1111 0x004839f0
// name: FUN_004839f0
// sig: undefined FUN_004839f0(void * this, undefined4 * param_1)


void __thiscall FUN_004839f0(void *this,undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  piVar2 = *(int **)((int)*(void **)((int)this + 0x2ac) + 4);
  piVar6 = (int *)*piVar2;
  iVar7 = 0;
  if (piVar6 != piVar2) {
    while( true ) {
      puVar3 = (undefined4 *)piVar6[3];
      if (*(char *)((int)piVar6 + 0x11) == '\0') {
        piVar2 = (int *)piVar6[2];
        if (*(char *)((int)piVar2 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          piVar6 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x11);
            piVar6 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar6[1] + 0x11);
          piVar4 = (int *)piVar6[1];
          piVar2 = piVar6;
          while ((piVar6 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar6[2]))) {
            cVar1 = *(char *)(piVar6[1] + 0x11);
            piVar4 = (int *)piVar6[1];
            piVar2 = piVar6;
          }
        }
      }
      if ((undefined4 *)puVar3[1] == param_1) break;
      iVar7 = iVar7 + 1;
      if (piVar6 == *(int **)(*(int *)((int)this + 0x2ac) + 4)) {
        return;
      }
    }
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + -1;
    param_1 = puVar3;
    FUN_004838e0(*(void **)((int)this + 0x2ac),(int *)&param_1);
    if (*(int *)((int)this + 0x2b4) != 0) {
      (**(code **)*puVar3)(1);
    }
    if (*(int *)((int)this + 4) != 0) {
      iVar5 = FUN_004810c0(*(int *)((int)this + 0x2a8));
      if (iVar7 < iVar5) {
        FUN_004816e0(*(void **)((int)this + 0x2a8));
      }
      FUN_00481c50(*(void **)((int)this + 0x2a8));
    }
    FUN_004823c0(this,iVar7);
  }
  return;
}

