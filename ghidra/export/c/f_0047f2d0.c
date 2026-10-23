// FUNCTION: PORT1111 0x0047f2d0
// name: FUN_0047f2d0
// sig: undefined FUN_0047f2d0(void * this, undefined4 * param_1)


void __thiscall FUN_0047f2d0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x14) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x14))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_0047ead0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 5;
    return;
  }
  FUN_0047f260(this,(int *)&param_1,*(undefined4 **)((int)this + 8),param_1);
  return;
}

