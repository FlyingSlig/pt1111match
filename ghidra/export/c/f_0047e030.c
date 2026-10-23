// FUNCTION: PORT1111 0x0047e030
// name: FUN_0047e030
// sig: undefined4 FUN_0047e030(void * this, int param_1, int * param_2, int param_3)


undefined4 __thiscall FUN_0047e030(void *this,int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_10;
  undefined4 uStack_c;
  
  iVar2 = param_1;
  if (*(int *)(param_1 + 0x18) == 0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 0x30))(&local_10);
    }
    *(void **)(iVar2 + 0x78) = this;
    *(undefined4 *)(iVar2 + 0x34) = *(undefined4 *)((int)this + 0x34);
    iVar4 = FUN_0047cba0(iVar2);
    if (iVar4 != 0) {
      iVar4 = *(int *)((int)this + 0x70);
      iVar5 = FUN_00413870(iVar4,*(undefined4 *)(iVar4 + 4),&param_1);
      FUN_0047db80((void *)((int)this + 0x6c),1);
      iVar3 = param_3;
      *(int *)(iVar4 + 4) = iVar5;
      **(int **)(iVar5 + 4) = iVar5;
      piVar6 = (int *)**(int **)(iVar2 + 0x8c);
      if (piVar6 != *(int **)(iVar2 + 0x8c)) {
        do {
          piVar1 = (int *)piVar6[2];
          if (param_2 != (int *)0x0) {
            (**(code **)(*piVar1 + 0x38))(local_10,uStack_c);
          }
          if (iVar3 != 0) {
            (**(code **)(*piVar1 + 0xa0))();
          }
          piVar6 = (int *)*piVar6;
        } while (piVar6 != (int *)*(int *)(iVar2 + 0x8c));
      }
      return 1;
    }
    FUN_0047ce50(iVar2);
  }
  return 0;
}

