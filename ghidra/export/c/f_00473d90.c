// FUNCTION: PORT1111 0x00473d90
// name: FUN_00473d90
// sig: undefined4 FUN_00473d90(void * this, int param_1)


undefined4 __thiscall FUN_00473d90(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_00470ef0((int)this);
  iVar1 = FUN_0046f100(this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0xc4) != 0) {
    piVar2 = FUN_00473820(this,4,*(undefined4 *)(*(int *)(param_1 + 0xc4) + 0x28));
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    piVar2 = (int *)*piVar2;
    *(int **)((int)this + 0xc4) = piVar2;
    iVar1 = (**(code **)(*piVar2 + 8))(*(undefined4 *)(param_1 + 0xc4));
    if (iVar1 == 0) {
      return 0;
    }
    *(void **)(*(int *)((int)this + 0xc4) + 0x1c) = this;
  }
  if (*(int *)(param_1 + 0xb0) != 0) {
    piVar2 = FUN_00473820(this,0,*(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x28));
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    piVar2 = (int *)*piVar2;
    *(int **)((int)this + 0xb0) = piVar2;
    iVar1 = (**(code **)(*piVar2 + 8))(*(undefined4 *)(param_1 + 0xb0));
    if (iVar1 == 0) {
      return 0;
    }
    *(void **)(*(int *)((int)this + 0xb0) + 0x1c) = this;
  }
  if (*(int *)(param_1 + 0xb4) != 0) {
    piVar2 = FUN_00473820(this,1,*(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x28));
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    piVar2 = (int *)*piVar2;
    *(int **)((int)this + 0xb4) = piVar2;
    iVar1 = (**(code **)(*piVar2 + 8))(*(undefined4 *)(param_1 + 0xb4));
    if (iVar1 == 0) {
      return 0;
    }
    *(void **)(*(int *)((int)this + 0xb4) + 0x1c) = this;
  }
  if (*(int *)(param_1 + 0xb8) != 0) {
    piVar2 = FUN_00473820(this,2,*(undefined4 *)(*(int *)(param_1 + 0xb8) + 0x28));
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    piVar2 = (int *)*piVar2;
    *(int **)((int)this + 0xb8) = piVar2;
    iVar1 = (**(code **)(*piVar2 + 8))(*(undefined4 *)(param_1 + 0xb8));
    if (iVar1 == 0) {
      return 0;
    }
    *(void **)(*(int *)((int)this + 0xb8) + 0x1c) = this;
  }
  if (*(int *)(param_1 + 0xbc) != 0) {
    piVar2 = FUN_00473820(this,3,*(undefined4 *)(*(int *)(param_1 + 0xbc) + 0x28));
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    piVar2 = (int *)*piVar2;
    *(int **)((int)this + 0xbc) = piVar2;
    iVar1 = (**(code **)(*piVar2 + 8))(*(undefined4 *)(param_1 + 0xbc));
    if (iVar1 == 0) {
      return 0;
    }
    *(void **)(*(int *)((int)this + 0xbc) + 0x1c) = this;
  }
  if (*(int *)(param_1 + 0xc0) == 0) {
LAB_00473f38:
    FUN_00466a50((void *)((int)this + 200),(undefined4 *)(param_1 + 200));
    *(undefined4 *)((int)this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
    return 1;
  }
  piVar2 = FUN_00473820(this,5,*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x28));
  if (piVar2 != (int *)0x0) {
    piVar2 = (int *)*piVar2;
    *(int **)((int)this + 0xc0) = piVar2;
    iVar1 = (**(code **)(*piVar2 + 8))(*(undefined4 *)(param_1 + 0xc0));
    if (iVar1 != 0) {
      *(void **)(*(int *)((int)this + 0xc0) + 0x1c) = this;
      goto LAB_00473f38;
    }
  }
  return 0;
}

