// FUNCTION: PORT1111 0x00423c70
// name: FUN_00423c70
// sig: undefined FUN_00423c70(void * this, byte param_1)


void __thiscall FUN_00423c70(void *this,byte param_1)

{
  int iVar1;
  void *this_00;
  uint uVar2;
  
  if (*(int *)((int)this + 8) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2;
  }
  if (param_1 < uVar2) {
    FUN_00426ad0();
    for (uVar2 = 0;
        (iVar1 = *(int *)((int)this + 8), iVar1 != 0 &&
        (uVar2 < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 2))); uVar2 = uVar2 + 1) {
      this_00 = *(void **)(iVar1 + uVar2 * 4);
      if (*(int *)((int)this_00 + 0x3c) == 0) {
        FUN_00422250(this_00,1);
      }
    }
    FUN_00422250(*(void **)(*(int *)((int)this + 8) + (uint)param_1 * 4),0);
    if (DAT_004e240c != 0) {
      if (DAT_004e2404 == 0) {
        return;
      }
      FUN_0042a520(DAT_004e2404);
    }
    if ((DAT_004e2404 != 0) && ((void *)(DAT_004e2404 + 0x94) != (void *)0x0)) {
      FUN_004214a0((void *)(DAT_004e2404 + 0x94));
    }
  }
  return;
}

