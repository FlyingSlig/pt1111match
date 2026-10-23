// FUNCTION: PORT1111 0x0041a7b0
// name: FUN_0041a7b0
// sig: undefined FUN_0041a7b0(void * this, undefined4 * param_1)


void __thiscall FUN_0041a7b0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 2) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 2))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    *puVar2 = *param_1;
    *(undefined4 **)((int)this + 8) = puVar2 + 1;
    return;
  }
  FUN_0041a090(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}

