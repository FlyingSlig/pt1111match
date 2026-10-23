// FUNCTION: PORT1111 0x0041a730
// name: FUN_0041a730
// sig: undefined FUN_0041a730(void * this, undefined4 * param_1)


void __thiscall FUN_0041a730(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0xc) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0xc))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_004194c0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 3;
    return;
  }
  FUN_0041a330(this,(int *)&param_1,*(undefined4 **)((int)this + 8),param_1);
  return;
}

