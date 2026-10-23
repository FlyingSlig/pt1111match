// FUNCTION: PORT1111 0x00443c60
// name: FUN_00443c60
// sig: undefined FUN_00443c60(void * this, int param_1)


void __thiscall FUN_00443c60(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)**(undefined4 **)((int)this + 0x34);
  while( true ) {
    if (puVar1 == *(undefined4 **)((int)this + 0x34)) {
      iVar2 = *(int *)((int)this + 0x34);
      iVar3 = FUN_00413870(iVar2,*(undefined4 *)(iVar2 + 4),&param_1);
      FUN_00409f80((void *)((int)this + 0x30),1);
      *(int *)(iVar2 + 4) = iVar3;
      **(int **)(iVar3 + 4) = iVar3;
      return;
    }
    if (puVar1[2] == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return;
}

