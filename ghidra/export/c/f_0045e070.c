// FUNCTION: PORT1111 0x0045e070
// name: FUN_0045e070
// sig: undefined FUN_0045e070(void * this, int param_1)


void __thiscall FUN_0045e070(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  for (iVar2 = param_1; (iVar2 != 0 && (*(int *)(iVar2 + 0x60) != 0));
      iVar2 = *(int *)(iVar2 + 0x60)) {
    iVar1 = **(int **)((int)this + 0x70);
    param_1 = iVar2;
    iVar3 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),&param_1);
    FUN_0045da70((void *)((int)this + 0x6c),1);
    *(int *)(iVar1 + 4) = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
  }
  *(undefined4 *)((int)this + 0x78) = **(undefined4 **)((int)this + 0x70);
  return;
}

