// FUNCTION: PORT1111 0x0047da00
// name: FUN_0047da00
// sig: undefined FUN_0047da00(void * this, int param_1, int * param_2, int param_3)


void __thiscall FUN_0047da00(void *this,int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_10;
  int iStack_c;
  
  piVar3 = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0x30))(&local_10);
  }
  FUN_0047d4a0((void *)((int)this + 0x6c),&param_1);
  iVar2 = param_1;
  *(undefined4 *)(param_1 + 0x78) = 0;
  piVar4 = (int *)**(int **)(param_1 + 0x8c);
  if (piVar4 != *(int **)(param_1 + 0x8c)) {
    do {
      piVar1 = (int *)piVar4[2];
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x38))(-local_10,-iStack_c);
      }
      if (param_3 != 0) {
        (**(code **)(*piVar1 + 0xa0))();
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(iVar2 + 0x8c));
  }
  FUN_0047ce50(iVar2);
  return;
}

