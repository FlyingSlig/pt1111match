// FUNCTION: PORT1111 0x00423d90
// name: FUN_00423d90
// sig: undefined FUN_00423d90(void * this, uint param_1)


void __thiscall FUN_00423d90(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  
  for (uVar2 = 0;
      (iVar1 = *(int *)((int)this + 8), iVar1 != 0 &&
      (uVar2 < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 2))); uVar2 = uVar2 + 1) {
    FUN_00423b30(*(void **)(iVar1 + uVar2 * 4),param_1);
  }
  return;
}

