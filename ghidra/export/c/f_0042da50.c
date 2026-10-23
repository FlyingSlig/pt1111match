// FUNCTION: PORT1111 0x0042da50
// name: FUN_0042da50
// sig: undefined4 FUN_0042da50(void * this, int param_1)


undefined4 __thiscall FUN_0042da50(void *this,int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  void *this_00;
  
  iVar2 = FUN_00429b00(DAT_004e2404,(uint *)((int)this + 0x10));
  if (iVar2 == 0) {
    return 0;
  }
  iVar3 = FUN_004147d0(param_1);
  if (iVar3 != 0) {
    iVar4 = FUN_004750b0(*(int *)(DAT_004e2b14 + 0xf8));
    if (iVar4 != 0) {
      iVar4 = FUN_00475080(iVar4);
      if (iVar4 != 0) {
        puVar5 = FUN_00479800(iVar4);
        if (puVar5 == (undefined4 *)0x0) {
          return 0;
        }
        (**(code **)(*(int *)this + 0x14))();
        *(int *)((int)this + 0xc) = iVar3;
        *(undefined4 **)((int)this + 8) = puVar5;
        FUN_0042d840((int)this);
        this_00 = (void *)FUN_004750b0(*(int *)(DAT_004e2b14 + 0xf8));
        FUN_00477ae0(this_00,*(void **)((int)this + 8),1);
        iVar3 = (int)*(short *)(iVar2 + 4);
        iVar2 = (int)*(short *)(iVar2 + 6);
        if (*(char *)(*(int *)((int)this + 0xc) + 100) != '\0') {
          iVar3 = iVar3 + 0x20;
          iVar2 = iVar2 + 0x10;
        }
        *(undefined1 **)((int)this_00 + 0x28) = &LAB_0042da00;
        *(undefined1 **)((int)this_00 + 0x24) = &LAB_0042d410;
        *(void **)((int)this_00 + 0x1c) = this;
        puVar1 = (uint *)(*(int *)((int)this + 8) + 0x28);
        *puVar1 = *puVar1 | 0xc4;
        FUN_00478380(*(void **)((int)this + 8),50000);
        FUN_004787e0(*(int *)((int)this + 8));
        FUN_00478700(*(void **)((int)this + 8),iVar3,iVar2);
        FUN_00478920(*(void **)((int)this + 8));
        FUN_004789b0(*(void **)((int)this + 8),(int *)0x1);
        FUN_00478010(*(void **)((int)this + 8),1);
        FUN_004207f0(*(int *)(DAT_004e2b14 + 0xf8));
        return 1;
      }
    }
  }
  return 0;
}

