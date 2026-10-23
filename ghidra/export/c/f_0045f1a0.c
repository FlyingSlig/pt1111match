// FUNCTION: PORT1111 0x0045f1a0
// name: FUN_0045f1a0
// sig: undefined FUN_0045f1a0(void * this, int param_1)


void __thiscall FUN_0045f1a0(void *this,int param_1)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  *(int *)((int)this + 8) = param_1;
  pvVar1 = operator_new(param_1 * param_1 * 4);
  *(void **)((int)this + 0x14) = pvVar1;
  pvVar1 = operator_new(*(int *)((int)this + 8) << 2);
  *(void **)((int)this + 0x18) = pvVar1;
  pvVar1 = operator_new(*(int *)((int)this + 8) << 2);
  *(void **)((int)this + 0x1c) = pvVar1;
  pvVar1 = operator_new(*(int *)((int)this + 8) << 2);
  *(void **)((int)this + 0x20) = pvVar1;
  puVar4 = *(undefined4 **)((int)this + 0x14);
  for (uVar2 = *(int *)((int)this + 8) * *(int *)((int)this + 8) & 0x3fffffff; uVar2 != 0;
      uVar2 = uVar2 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  return;
}

