// FUNCTION: PORT1111 0x00408cf0
// name: FUN_00408cf0
// sig: undefined4 FUN_00408cf0(void * this, void * param_1)


undefined4 __thiscall FUN_00408cf0(void *this,void *param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  float10 fVar6;
  int iStack_10;
  int iStack_8;
  int iStack_4;
  
  FUN_004053b0(this,param_1);
  iVar1 = FUN_00424310((int)param_1);
  if (0 < iVar1) {
    iVar1 = FUN_004147d0(iVar1);
    pvVar2 = (void *)(**(code **)(*(int *)this + 0x88))();
    FUN_00423080(pvVar2,iVar1,0,1);
    if (iVar1 != 0) {
      iVar3 = *(int *)((int)this + 0x11c) + 1;
      *(int *)((int)this + 0x11c) = iVar3;
      *(int *)((int)this + 0x114) = iVar3;
      *(int *)((int)this + 0x118) = iVar1;
      goto LAB_00408d5b;
    }
  }
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
LAB_00408d5b:
  uVar4 = FUN_00424310((int)param_1);
  *(undefined4 *)((int)this + 0xf8) = uVar4;
  uVar4 = FUN_00424310((int)param_1);
  *(undefined4 *)((int)this + 0x11c) = uVar4;
  uVar4 = FUN_00424310((int)param_1);
  *(undefined4 *)((int)this + 0x100) = uVar4;
  uVar4 = FUN_00424310((int)param_1);
  *(undefined4 *)((int)this + 0xfc) = uVar4;
  fVar6 = FUN_00424350((int)param_1);
  *(float *)((int)this + 0xf4) = (float)fVar6;
  iStack_10 = FUN_00424310((int)param_1);
  if (0 < iStack_10) {
    do {
      iVar1 = FUN_00424310((int)param_1);
      iVar1 = FUN_004147d0(iVar1);
      if (iVar1 != 0) {
        iStack_8 = *(int *)((int)this + 0x11c) + 1;
        *(int *)((int)this + 0x11c) = iStack_8;
        iVar3 = *(int *)((int)this + 0x108);
        iStack_4 = iVar1;
        iVar5 = FUN_00408810(iVar3,*(undefined4 *)(iVar3 + 4),&iStack_8);
        FUN_00408bd0((void *)((int)this + 0x104),1);
        *(int *)(iVar3 + 4) = iVar5;
        **(int **)(iVar5 + 4) = iVar5;
        pvVar2 = (void *)(**(code **)(*(int *)this + 0x88))();
        FUN_00423080(pvVar2,iVar1,0,1);
      }
      iStack_10 = iStack_10 + -1;
    } while (iStack_10 != 0);
  }
  iVar1 = FUN_00424310((int)param_1);
  if ((iVar1 != 0) && (*(void **)((int)this + 0x60) != (void *)0x0)) {
    FUN_00407150(*(void **)((int)this + 0x60),iVar1,*(int *)((int)this + 0x50));
  }
  return 1;
}

