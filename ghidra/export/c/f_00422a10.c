// FUNCTION: PORT1111 0x00422a10
// name: FUN_00422a10
// sig: undefined FUN_00422a10(void * this, int param_1, int param_2)


void __thiscall FUN_00422a10(void *this,int param_1,int param_2)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  if (*(void **)((int)this + 0x5c) == (void *)0x0) {
    uVar4 = param_1 * param_2;
    pvVar1 = operator_new(uVar4 * 2);
    *(void **)((int)this + 0x5c) = pvVar1;
    pvVar1 = operator_new(uVar4 * 4);
    *(void **)((int)this + 0x60) = pvVar1;
    pvVar1 = operator_new(uVar4 * 4);
    *(void **)((int)this + 0x1fc) = pvVar1;
    uVar2 = 0;
    if (uVar4 != 0) {
      do {
        *(undefined4 *)(*(int *)((int)this + 0x1fc) + uVar2 * 4) = 0;
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar4);
    }
    *(int *)((int)this + 0x68) = param_2;
    *(int *)((int)this + 100) = param_1;
    *(undefined4 *)((int)this + 0x200) = 1;
    puVar5 = *(undefined4 **)((int)this + 0x5c);
    for (uVar2 = (uVar4 & 0x7fffffff) >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (uVar2 = uVar4 * 2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    puVar5 = *(undefined4 **)((int)this + 0x60);
    for (uVar2 = *(int *)((int)this + 0x68) * *(int *)((int)this + 100) & 0x3fffffff; uVar2 != 0;
        uVar2 = uVar2 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)this + 0x5c));
}

