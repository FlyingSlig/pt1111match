// FUNCTION: PORT1111 0x0040ba20
// name: FUN_0040ba20
// sig: undefined4 FUN_0040ba20(void * this, undefined4 param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0040ba20(void *this,undefined4 param_1)

{
  uint uVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = *(uint *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x28) = param_1;
  uVar3 = uVar1;
  if (*(int *)((int)this + 0xc) != 0) {
    uVar3 = uVar1 - 1;
  }
  iVar4 = *(int *)((int)this + 0x10) * uVar3;
  dVar2 = (double)iVar4;
  if (iVar4 < 0) {
    dVar2 = dVar2 + _DAT_004bd580;
  }
  *(double *)((int)this + 0x30) = dVar2;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(double *)((int)this + 0x38) = -(*(double *)((int)this + 0x30) * _DAT_004bd578);
  if ((uVar1 & 1) != 0) {
    *(uint *)((int)this + 0x48) = uVar1 + 1 >> 1;
    if (*(int *)((int)this + 0xc) == 0) {
      *(int *)((int)this + 0x28) = -(*(int *)((int)this + 0x10) / 2);
    }
    return *(undefined4 *)((int)this + 0x28);
  }
  *(uint *)((int)this + 0x48) = uVar1 >> 1;
  return *(undefined4 *)((int)this + 0x28);
}

