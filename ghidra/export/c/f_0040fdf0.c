// FUNCTION: PORT1111 0x0040fdf0
// name: FUN_0040fdf0
// sig: undefined FUN_0040fdf0(void * this, undefined4 * param_1)


void __thiscall FUN_0040fdf0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 3) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 3))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_0041f4d0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 2;
    return;
  }
  FUN_0040fba0(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}

