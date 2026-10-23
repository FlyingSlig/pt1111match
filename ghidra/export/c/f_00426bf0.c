// FUNCTION: PORT1111 0x00426bf0
// name: FUN_00426bf0
// sig: undefined4 FUN_00426bf0(void * this, uint param_1)


undefined4 __thiscall FUN_00426bf0(void *this,uint param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*(uint *)((int)this + 4) != param_1) {
    if (*(int *)((int)this + 8) == 0) {
      pvVar1 = operator_new(param_1 * 4);
      *(void **)((int)this + 8) = pvVar1;
      if (pvVar1 == (void *)0x0) {
        return 0;
      }
    }
    else {
      puVar2 = operator_new(param_1 * 4);
      if (puVar2 == (undefined4 *)0x0) {
        return 0;
      }
      uVar3 = *(uint *)((int)this + 4);
      if (param_1 <= *(uint *)((int)this + 4)) {
        uVar3 = param_1;
      }
      puVar4 = *(undefined4 **)((int)this + 8);
      puVar5 = puVar2;
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      if (*(void **)((int)this + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 8));
      }
      *(undefined4 **)((int)this + 8) = puVar2;
    }
    *(uint *)((int)this + 4) = param_1;
  }
  return 1;
}

