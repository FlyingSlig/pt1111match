// FUNCTION: PORT1111 0x00474080
// name: FUN_00474080
// sig: undefined FUN_00474080(void * this, int * param_1, uchar * param_2)


void __thiscall FUN_00474080(void *this,int *param_1,uchar *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)FUN_0047cf90(*(void **)((int)this + 0x10),(uint)param_1 & 0xffff);
  if (piVar2 != (int *)0x0) {
    param_1 = piVar2;
    FUN_00466a40(piVar2 + 0x34,param_2);
    if (piVar2[0x28] == 0) {
      piVar2[0x28] = 1;
      (**(code **)(*piVar2 + 0x44))(1);
      FUN_00471c70((int)piVar2);
    }
    piVar2[0x25] = 0;
    iVar1 = *(int *)((int)this + 8);
    iVar3 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),&param_1);
    FUN_00473fe0((void *)((int)this + 4),1);
    *(int *)(iVar1 + 4) = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
  }
  return;
}

