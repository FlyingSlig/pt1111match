// FUNCTION: PORT1111 0x00405ad0
// name: FUN_00405ad0
// sig: undefined FUN_00405ad0(void * this, int param_1, int param_2)


void __thiscall FUN_00405ad0(void *this,int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  
  if ((*(int *)((int)this + 0x84) == 2) &&
     ((param_1 != 2 || (param_2 != *(int *)((int)this + 0x8c))))) {
    pvVar1 = (void *)FUN_00414c30(DAT_004e240c);
    if (pvVar1 != (void *)0x0) {
      FUN_0040e560(pvVar1,-1);
    }
  }
  if (param_1 == -1) {
    *(undefined4 *)((int)this + 0x84) = 0xffffffff;
    *(undefined4 *)((int)this + 0x8c) = 0xffffffff;
    *(undefined4 *)((int)this + 0x94) = 0xffffffff;
    *(undefined4 *)((int)this + 0x98) = 0xffffffff;
    *(undefined4 *)((int)this + 0x9c) = 0xffffffff;
    *(undefined4 *)((int)this + 0xa0) = 0xffffffff;
    FUN_00412740(this,0xffffffff,0xffffffff);
    FUN_00444b20(*(int *)((int)this + 0xb0));
    FUN_004449f0(*(int *)((int)this + 0xb0));
    *(undefined4 *)((int)this + 0x88) = 0xffffffff;
    if (*(void **)((int)this + 0x5c) != (void *)0x0) {
      FUN_00426b20(*(void **)((int)this + 0x5c),0);
    }
    *(undefined4 *)((int)this + 0x5c) = 0;
    return;
  }
  if (param_1 == 2) {
    pvVar1 = (void *)FUN_00414c30(DAT_004e240c);
    if (pvVar1 != (void *)0x0) {
      FUN_0040e560(pvVar1,*(int *)((int)this + 0x10));
    }
  }
  *(int *)((int)this + 0x84) = param_1;
  *(int *)((int)this + 0x8c) = param_2;
  *(int *)((int)this + 0x94) = param_1;
  *(int *)((int)this + 0x98) = param_2;
  *(undefined4 *)((int)this + 0x9c) = 0xffffffff;
  *(undefined4 *)((int)this + 0xa0) = 0xffffffff;
  iVar2 = FUN_00414c30(DAT_004e240c);
  if (iVar2 != 0) {
    *(undefined4 *)((int)this + 0x9c) = *(undefined4 *)(iVar2 + 4);
    *(undefined4 *)((int)this + 0xa0) = *(undefined4 *)(iVar2 + 8);
  }
  return;
}

