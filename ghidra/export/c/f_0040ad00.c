// FUNCTION: PORT1111 0x0040ad00
// name: FUN_0040ad00
// sig: undefined FUN_0040ad00(void * this, undefined4 param_1)


void __thiscall FUN_0040ad00(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = FUN_00414c30(DAT_004e240c);
  if (iVar1 != 0) {
    if (*(int *)(*(int *)(iVar1 + 0x50) + 0x7c) * *(int *)(*(int *)(iVar1 + 0x50) + 0x78) <
        *(int *)((int)this + 0x1c)) {
      *(int *)((int)this + 0x1c) =
           *(int *)(*(int *)(iVar1 + 0x50) + 0x7c) * *(int *)(*(int *)(iVar1 + 0x50) + 0x78);
      FUN_00414c30(DAT_004e240c);
      piVar3 = (int *)**(int **)((int)this + 0x14);
      if (piVar3 != *(int **)((int)this + 0x14)) {
        do {
          FUN_00414c30(DAT_004e240c);
          piVar3 = (int *)*piVar3;
        } while (piVar3 != (int *)*(int *)((int)this + 0x14));
      }
    }
    iVar1 = *(int *)((int)this + 0x14);
    iVar2 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),&param_1);
    FUN_00409f80((void *)((int)this + 0x10),1);
    *(int *)(iVar1 + 4) = iVar2;
    **(int **)(iVar2 + 4) = iVar2;
  }
  return;
}

