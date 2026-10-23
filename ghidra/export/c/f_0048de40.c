// FUNCTION: PORT1111 0x0048de40
// name: FUN_0048de40
// sig: undefined4 FUN_0048de40(void * this, int * param_1)


undefined4 __thiscall FUN_0048de40(void *this,int *param_1)

{
  undefined2 uVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar1 = (**(code **)(*param_1 + 4))();
  *(undefined2 *)((int)this + 0x1c) = uVar1;
  uVar1 = (**(code **)(*param_1 + 8))();
  *(undefined2 *)((int)this + 0x1e) = uVar1;
  *(int **)((int)this + 0x20) = param_1;
  pvVar2 = _malloc(0x23184);
  *(void **)((int)this + 4) = pvVar2;
  pvVar2 = _malloc(0x23184);
  *(void **)((int)this + 8) = pvVar2;
  pvVar2 = _malloc(0x23184);
  *(void **)((int)this + 0xc) = pvVar2;
  pvVar2 = _malloc(0x23184);
  *(void **)((int)this + 0x10) = pvVar2;
  pvVar2 = _malloc(0x23184);
  *(void **)((int)this + 0x14) = pvVar2;
  pvVar2 = _malloc((uint)*(ushort *)((int)this + 0x1e) * (uint)*(ushort *)((int)this + 0x1c) * 2);
  puVar6 = *(undefined4 **)((int)this + 4);
  *(void **)((int)this + 0x18) = pvVar2;
  if (puVar6 != (undefined4 *)0x0) {
    if ((((*(int *)((int)this + 8) != 0) && (*(int *)((int)this + 0xc) != 0)) &&
        (*(int *)((int)this + 0x10) != 0)) &&
       ((*(int *)((int)this + 0x14) != 0 && (pvVar2 != (void *)0x0)))) {
      for (iVar3 = 0x8c61; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      puVar6 = *(undefined4 **)((int)this + 8);
      for (iVar3 = 0x8c61; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      puVar6 = *(undefined4 **)((int)this + 0xc);
      for (iVar3 = 0x8c61; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      puVar6 = *(undefined4 **)((int)this + 0x10);
      for (iVar3 = 0x8c61; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      puVar6 = *(undefined4 **)((int)this + 0x14);
      for (iVar3 = 0x8c61; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      uVar4 = (uint)*(ushort *)((int)this + 0x1e) * (uint)*(ushort *)((int)this + 0x1c);
      puVar6 = *(undefined4 **)((int)this + 0x18);
      for (uVar5 = (uVar4 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = uVar4 * 2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar6 = 0;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      return 1;
    }
    if (puVar6 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(puVar6);
    }
  }
  if (*(void **)((int)this + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 8));
  }
  if (*(void **)((int)this + 0xc) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xc));
  }
  if (*(void **)((int)this + 0x10) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x10));
  }
  if (*(void **)((int)this + 0x14) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x14));
  }
  if (*(void **)((int)this + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x18));
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  return 0;
}

