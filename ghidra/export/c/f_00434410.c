// FUNCTION: PORT1111 0x00434410
// name: FUN_00434410
// sig: undefined FUN_00434410(void * this, undefined4 * param_1)


void __thiscall FUN_00434410(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  
  if (((*(int *)((int)this + 0xc) + *(int *)((int)this + 0x10) & 3U) == 0) &&
     (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 4U >> 2)) {
    FUN_004341e0(this,1);
  }
  uVar4 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  uVar3 = uVar4 >> 2;
  if (*(uint *)((int)this + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)((int)this + 8);
  }
  if (*(int *)(*(int *)((int)this + 4) + uVar3 * 4) == 0) {
    pvVar2 = operator_new(0x10);
    *(void **)(*(int *)((int)this + 4) + uVar3 * 4) = pvVar2;
  }
  puVar1 = (undefined4 *)(*(int *)(*(int *)((int)this + 4) + uVar3 * 4) + (uVar4 & 3) * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return;
}

