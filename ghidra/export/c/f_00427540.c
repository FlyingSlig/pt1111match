// FUNCTION: PORT1111 0x00427540
// name: FUN_00427540
// sig: undefined FUN_00427540(void * this, int param_1)


void __thiscall FUN_00427540(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  
  piVar1 = *(int **)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    iVar2 = piVar1[2];
    iVar3 = *piVar1;
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        iVar4 = *(int *)(iVar2 + iVar5 * 4);
        if ((((*(byte *)(iVar4 + 0x3c) & 2) != 0) && (*(int *)(iVar4 + 0x7c) == 0)) &&
           (iVar4 = FUN_00412b60(iVar4), iVar4 == 0)) {
          FUN_00413590(param_1,*(int *)(*(int *)(iVar2 + iVar5 * 4) + 0x50));
          uVar6 = FUN_00497d88();
          if ((int)uVar6 != 0) {
            (**(code **)(**(int **)(iVar2 + iVar5 * 4) + 0xb0))(-(int)uVar6);
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
  }
  return;
}

