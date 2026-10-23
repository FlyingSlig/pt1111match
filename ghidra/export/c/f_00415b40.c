// FUNCTION: PORT1111 0x00415b40
// name: FUN_00415b40
// sig: undefined4 FUN_00415b40(void * this, int param_1)


undefined4 __thiscall FUN_00415b40(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *local_4;
  
  local_4 = this;
  piVar1 = (int *)FUN_00413aa0(&DAT_004e0af4,&local_4,&param_1);
  if ((*piVar1 != DAT_004e0af8) && (iVar3 = *(int *)(*piVar1 + 0x10), iVar3 != 0)) {
    param_1 = FUN_00453ab0(*(int *)((int)this + 0x21c));
    iVar2 = DAT_004e240c;
    FUN_00413aa0((void *)(DAT_004e240c + 4),&local_4,&param_1);
    if ((local_4 != *(void **)(iVar2 + 8)) &&
       (piVar1 = *(int **)((int)local_4 + 0x10), piVar1 != (int *)0x0)) {
      iVar2 = (**(code **)(*piVar1 + 0x88))();
      if (*(int *)(iVar2 + 0x4c) + *(int *)(iVar2 + 0x44) < *(int *)(iVar2 + 0x48)) {
        iVar2 = FUN_00453460((void *)(DAT_004e2410 + 0x888),
                             *(int *)(*(int *)(DAT_004e26f0 + DAT_004e26fc * 4) + 0x34),
                             *(uint *)(iVar3 + 0x110));
        if (iVar2 != 0) {
          FUN_00408290(piVar1,*(int *)(iVar3 + 0x14),1);
          return 1;
        }
      }
      else {
        iVar3 = (**(code **)(*piVar1 + 0x88))();
        FUN_00454c50(DAT_004e2414,&DAT_004bef50,*(int *)(iVar3 + 0x34));
      }
    }
  }
  return 0;
}

