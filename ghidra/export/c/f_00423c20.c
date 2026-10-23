// FUNCTION: PORT1111 0x00423c20
// name: FUN_00423c20
// sig: undefined FUN_00423c20(void * this, void * param_1)


void __thiscall FUN_00423c20(void *this,void *param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 8) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2;
  }
  FUN_0042f670(param_1);
  uVar1 = 0;
  if (uVar2 != 0) {
    do {
      FUN_00422310(*(void **)(*(int *)((int)this + 8) + uVar1 * 4),param_1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar2);
  }
  return;
}

