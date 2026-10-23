// FUNCTION: PORT1111 0x0042ce10
// name: FUN_0042ce10
// sig: undefined FUN_0042ce10(void * this, int * param_1)


void __thiscall FUN_0042ce10(void *this,int *param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  uint local_8;
  undefined4 local_4;
  
  *(undefined4 *)((int)this + 0x24) = 0;
  iVar1 = FUN_00429690(DAT_004e2404,param_1,&local_8);
  if (iVar1 != 0) {
    *(uint *)((int)this + 0x10) = local_8;
    *(undefined4 *)((int)this + 0x14) = local_4;
    pvVar2 = (void *)FUN_00429b00(DAT_004e2404,(uint *)((int)this + 0x10));
    iVar1 = FUN_0040d8a0(*(undefined4 *)((int)this + 0xc),
                         *(int *)(DAT_004e26f0 + (uint)DAT_004e21b0 * 4),pvVar2);
    if ((iVar1 != 0) && (iVar1 != *(int *)((int)this + 0x28))) {
      *(int *)((int)this + 0x28) = iVar1;
      (**(code **)(*(int *)this + 0x14))();
      FUN_0042cc90((int)this);
    }
    if (*(void **)((int)this + 8) != (void *)0x0) {
      iVar1 = (int)*(short *)((int)pvVar2 + 4);
      iVar3 = (int)*(short *)((int)pvVar2 + 6);
      if (*(char *)(*(int *)((int)this + 0xc) + 100) != '\0') {
        iVar1 = iVar1 + 0x20;
        iVar3 = iVar3 + 0x10;
      }
      FUN_00478700(*(void **)((int)this + 8),iVar1,iVar3);
    }
  }
  return;
}

