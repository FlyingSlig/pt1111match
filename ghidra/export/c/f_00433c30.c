// FUNCTION: PORT1111 0x00433c30
// name: FUN_00433c30
// sig: undefined4 FUN_00433c30(void * this, undefined4 * param_1)


undefined4 __thiscall FUN_00433c30(void *this,undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = (int *)((int)this + 0x18);
  (**(code **)(*(int *)((int)this + 0x18) + 4))();
  (**(code **)(*piVar1 + 4))();
  iVar3 = *(int *)((int)this + 0x14);
  (**(code **)(*piVar1 + 8))();
  if (iVar3 == 0) {
    (**(code **)(*piVar1 + 8))();
    return 0;
  }
  uVar2 = *(uint *)((int)this + 0x10) >> 2;
  iVar3 = uVar2 * -4;
  if (*(uint *)((int)this + 0xc) <= uVar2) {
    uVar2 = uVar2 - *(uint *)((int)this + 0xc);
  }
  *param_1 = *(undefined4 *)
              (*(int *)(*(int *)((int)this + 8) + uVar2 * 4) +
              (*(uint *)((int)this + 0x10) + iVar3) * 4);
  if (*(int *)((int)this + 0x14) != 0) {
    uVar2 = *(int *)((int)this + 0x10) + 1;
    *(uint *)((int)this + 0x10) = uVar2;
    if ((uint)(*(int *)((int)this + 0xc) << 2) <= uVar2) {
      *(undefined4 *)((int)this + 0x10) = 0;
    }
    iVar3 = *(int *)((int)this + 0x14) + -1;
    *(int *)((int)this + 0x14) = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)((int)this + 0x10) = 0;
    }
  }
  (**(code **)(*piVar1 + 8))();
  return 1;
}

