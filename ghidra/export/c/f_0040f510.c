// FUNCTION: PORT1111 0x0040f510
// name: FUN_0040f510
// sig: undefined FUN_0040f510(void * this, int param_1)


void __thiscall FUN_0040f510(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int local_10;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  pvVar4 = (void *)FUN_00404580(this,param_1);
  iVar5 = *(int *)((int)this + 0x34);
  *(void **)((int)this + 0x24) = pvVar4;
  iVar1 = *(int *)(iVar5 + 8);
  iVar2 = *(int *)(iVar5 + 4);
  FUN_00478250(pvVar4,*(uint *)(iVar5 + 0x80));
  iVar5 = FUN_004048d0(this,param_1);
  switch(iVar5) {
  case 0:
  case 5:
    local_10 = *(int *)(*(int *)((int)this + 0x28) + 0xc);
    local_c = *(undefined4 *)(*(int *)((int)this + 0x28) + 0x10);
    local_8 = iVar2;
    local_4 = iVar1;
    FUN_00478250(*(void **)((int)this + 0x24),*(uint *)(*(int *)((int)this + 0x34) + 0x80));
    iVar5 = FUN_0047b000((void *)((int)this + 0x3c),&local_8,&local_10,*(int *)((int)this + 0x24),
                         *(int *)(*(int *)(*(int *)((int)this + 0x34) + 0x50) + 0x7c));
    if (iVar5 != 0) {
      return;
    }
    (**(code **)(*(int *)this + 0x28))();
    return;
  case 1:
  case 6:
    if (*(int *)(*(int *)((int)this + 0x28) + 8) == 2) {
      iVar5 = FUN_0040f460(this,param_1);
      pvVar4 = (void *)FUN_00404580(this,iVar5);
      *(void **)((int)this + 0x24) = pvVar4;
      FUN_00478250(pvVar4,*(int *)(*(int *)(*(int *)((int)this + 0x34) + 0x50) + 0x78) >> 1);
    }
    break;
  case 3:
    if (*(int *)((int)this + 8) != 0) {
      *(undefined4 *)((int)this + 0x2c) = 1;
      FUN_00405d00(*(void **)((int)this + 0x34),1);
      iVar5 = FUN_0040f4e0(this);
      pvVar4 = (void *)FUN_00404580(this,*(int *)(*(int *)(*(int *)((int)this + 0x34) + 0x50) +
                                                 0x148) + iVar5);
      *(void **)((int)this + 0x24) = pvVar4;
      FUN_00478250(pvVar4,1);
      break;
    }
    FUN_00478250(*(void **)((int)this + 0x24),0x32);
    (**(code **)(*(int *)this + 0x48))(0);
    iVar5 = 6;
    goto LAB_0040f754;
  case 4:
    *(undefined4 *)((int)this + 0x2c) = 1;
    FUN_00405d00(*(void **)((int)this + 0x34),1);
    FUN_00478250(*(void **)((int)this + 0x24),1);
    break;
  case 9:
    if (*(int *)(*(int *)((int)this + 0x28) + 8) == 0x14) {
      FUN_00478250(*(void **)((int)this + 0x24),
                   *(uint *)(*(int *)(*(int *)((int)this + 0x34) + 0x50) + 0x220));
      FUN_00405de0(*(void **)((int)this + 0x34),*(int *)(*(int *)((int)this + 0x28) + 0xc));
      iVar5 = iVar1;
      switch(*(undefined4 *)(*(int *)((int)this + 0x28) + 0xc)) {
      case 7:
        iVar5 = 1;
        break;
      case 8:
        iVar5 = 2;
        break;
      case 9:
        iVar5 = 3;
        break;
      case 10:
        iVar5 = 4;
        break;
      case 0xb:
        iVar5 = 5;
      }
      iVar3 = (*(int **)((int)this + 0x34))[0x10];
      FUN_0043b2d0(DAT_004e2408,*(int **)((int)this + 0x34),(int)*(short *)(iVar3 + 0x4e),
                   (int)*(short *)(iVar3 + 0x4c),iVar5,
                   (uint)(*(int *)(*(int *)((int)this + 0x28) + 0x10) == 1));
      break;
    }
    FUN_00478250(*(void **)((int)this + 0x24),0x96);
    iVar5 = 4;
    goto LAB_0040f754;
  case 10:
    FUN_00478250(*(void **)((int)this + 0x24),
                 *(int *)(*(int *)(*(int *)((int)this + 0x34) + 0x50) + 0x78) >> 1);
    iVar5 = 5;
LAB_0040f754:
    FUN_00405de0(*(void **)((int)this + 0x34),iVar5);
    break;
  case 0xb:
    FUN_00478250(*(void **)((int)this + 0x24),
                 *(int *)(*(int *)(*(int *)((int)this + 0x34) + 0x50) + 0x78) >> 1);
  }
  FUN_00478700(*(void **)((int)this + 0x24),iVar2,iVar1);
  pvVar4 = *(void **)((int)this + 0x5c);
  if ((((pvVar4 != (void *)0x0) && ((*(byte *)((int)pvVar4 + 0x2c) & 1) != 0)) &&
      ((*(byte *)((int)pvVar4 + 0x2c) & 0x20) != 0)) && (*(short *)((int)pvVar4 + 0x2e) != -1)) {
    FUN_00478700(pvVar4,*(int *)((int)this + 0x10) + 8 + iVar2,
                 *(int *)((int)this + 0x14) + -10 + iVar1);
  }
  pvVar4 = *(void **)((int)this + 0x24);
  if ((*(byte *)((int)pvVar4 + 0x2c) & 1) == 0) {
    FUN_00478920(pvVar4);
    return;
  }
  *(byte *)((int)pvVar4 + 0x2c) = *(byte *)((int)pvVar4 + 0x2c) | 0x88;
  return;
}

