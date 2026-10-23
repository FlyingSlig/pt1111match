// FUNCTION: PORT1111 0x0043aa00
// name: FUN_0043aa00
// sig: undefined FUN_0043aa00(void * this, undefined4 param_1)


void __thiscall FUN_0043aa00(void *this,undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0xc) = 1;
  if (0 < iVar1) {
    **(undefined4 **)((int)this + 0x14) = param_1;
    *(undefined4 *)((int)this + 0x1c) = 1;
    FUN_0043a8a0((int)this);
    return;
  }
  if (iVar1 <= *(int *)((int)this + 0x1c)) {
    *(int *)((int)this + 0x18) = iVar1 + 5;
    piVar2 = FUN_00498201(*(int **)((int)this + 0x14),(uint *)((iVar1 + 5) * 4));
    *(int **)((int)this + 0x14) = piVar2;
  }
  *(undefined4 *)(*(int *)((int)this + 0x14) + *(int *)((int)this + 0x1c) * 4) = param_1;
  *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 1;
  FUN_0043a8a0((int)this);
  FUN_0043a8a0((int)this);
  return;
}

