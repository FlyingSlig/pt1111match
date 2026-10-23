// FUNCTION: PORT1111 0x00428780
// name: FUN_00428780
// sig: undefined FUN_00428780(void * this, undefined4 param_1)


void __thiscall FUN_00428780(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 0x60);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 100) - iVar1 >> 2) <
      (uint)(*(int *)((int)this + 0x68) - iVar1 >> 2))) {
    puVar2 = *(undefined4 **)((int)this + 100);
    *puVar2 = param_1;
    *(undefined4 **)((int)this + 100) = puVar2 + 1;
    return;
  }
  FUN_0041eeb0((void *)((int)this + 0x5c),*(undefined4 **)((int)this + 100),1,&param_1);
  return;
}

