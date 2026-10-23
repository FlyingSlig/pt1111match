// FUNCTION: PORT1111 0x0045db10
// name: FUN_0045db10
// sig: undefined FUN_0045db10(void * this, uint param_1, uint param_2)


void __thiscall FUN_0045db10(void *this,uint param_1,uint param_2)

{
  void *this_00;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  this_00 = (void *)((int)this + 0x60);
  FUN_00419480((int)this_00);
  uVar3 = param_2;
  uVar2 = param_1;
  uVar1 = param_1 + 1;
  iVar4 = FUN_00422410(*(void **)((int)this + 0x48),param_1,param_2,uVar1,param_2);
  if (iVar4 != 0) {
    param_1 = FUN_00429ac0(DAT_004e2404,uVar1,uVar3);
    if (*(int *)(DAT_004e2a88 + (*(int *)((int)DAT_004e2404 + 0x10c) * uVar1 + uVar3) * 4) == 0) {
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 100) = 0;
      *(undefined4 *)(DAT_004e2a88 + (*(int *)((int)DAT_004e2404 + 0x10c) * uVar1 + uVar3) * 4) = 1;
    }
    param_2 = *(uint *)((int)this + 100);
    param_1 = FUN_00413870(param_2,*(undefined4 *)(param_2 + 4),&param_1);
    FUN_0045da70(this_00,1);
    *(uint *)(param_2 + 4) = param_1;
    **(uint **)(param_1 + 4) = param_1;
  }
  iVar4 = FUN_00422410(*(void **)((int)this + 0x48),uVar2,uVar3,uVar2 - 1,uVar3);
  if (iVar4 != 0) {
    param_1 = FUN_00429ac0(DAT_004e2404,uVar2 - 1,uVar3);
    if (*(int *)(DAT_004e2a88 + (*(int *)((int)DAT_004e2404 + 0x10c) * (uVar2 - 1) + uVar3) * 4) ==
        0) {
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 100) = 0;
      *(undefined4 *)
       (DAT_004e2a88 + (*(int *)((int)DAT_004e2404 + 0x10c) * (uVar2 - 1) + uVar3) * 4) = 1;
    }
    param_2 = *(uint *)((int)this + 100);
    param_1 = FUN_00413870(param_2,*(undefined4 *)(param_2 + 4),&param_1);
    FUN_0045da70(this_00,1);
    *(uint *)(param_2 + 4) = param_1;
    **(uint **)(param_1 + 4) = param_1;
  }
  iVar4 = FUN_00422410(*(void **)((int)this + 0x48),uVar2,uVar3,uVar2,uVar3 + 1);
  if (iVar4 != 0) {
    param_1 = FUN_00429ac0(DAT_004e2404,uVar2,uVar3 + 1);
    if (*(int *)(DAT_004e2a88 + 4 + (*(int *)((int)DAT_004e2404 + 0x10c) * uVar2 + uVar3) * 4) == 0)
    {
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 100) = 0;
      *(undefined4 *)(DAT_004e2a88 + 4 + (*(int *)((int)DAT_004e2404 + 0x10c) * uVar2 + uVar3) * 4)
           = 1;
    }
    param_2 = *(uint *)((int)this + 100);
    param_1 = FUN_00413870(param_2,*(undefined4 *)(param_2 + 4),&param_1);
    FUN_0045da70(this_00,1);
    *(uint *)(param_2 + 4) = param_1;
    **(uint **)(param_1 + 4) = param_1;
  }
  iVar4 = FUN_00422410(*(void **)((int)this + 0x48),uVar2,uVar3,uVar2,uVar3 - 1);
  if (iVar4 != 0) {
    param_1 = FUN_00429ac0(DAT_004e2404,uVar2,uVar3 - 1);
    if (*(int *)(DAT_004e2a88 + -4 + (*(int *)((int)DAT_004e2404 + 0x10c) * uVar2 + uVar3) * 4) == 0
       ) {
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 100) = 0;
      *(undefined4 *)(DAT_004e2a88 + -4 + (*(int *)((int)DAT_004e2404 + 0x10c) * uVar2 + uVar3) * 4)
           = 1;
    }
    param_2 = *(uint *)((int)this + 100);
    param_1 = FUN_00413870(param_2,*(undefined4 *)(param_2 + 4),&param_1);
    FUN_0045da70(this_00,1);
    *(uint *)(param_2 + 4) = param_1;
    **(uint **)(param_1 + 4) = param_1;
  }
  iVar4 = FUN_00422410(*(void **)((int)this + 0x48),uVar2,uVar3,uVar1,uVar3 + 1);
  if (iVar4 != 0) {
    param_1 = FUN_00429ac0(DAT_004e2404,uVar1,uVar3 + 1);
    if (*(int *)(DAT_004e2a88 + 4 + (*(int *)((int)DAT_004e2404 + 0x10c) * uVar1 + uVar3) * 4) == 0)
    {
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 100) = 0;
      *(undefined4 *)(DAT_004e2a88 + 4 + (*(int *)((int)DAT_004e2404 + 0x10c) * uVar1 + uVar3) * 4)
           = 1;
    }
    param_2 = *(uint *)((int)this + 100);
    param_1 = FUN_00413870(param_2,*(undefined4 *)(param_2 + 4),&param_1);
    FUN_0045da70(this_00,1);
    *(uint *)(param_2 + 4) = param_1;
    **(uint **)(param_1 + 4) = param_1;
  }
  iVar4 = FUN_00422410(*(void **)((int)this + 0x48),uVar2,uVar3,uVar2 - 1,uVar3 - 1);
  if (iVar4 != 0) {
    param_1 = FUN_00429ac0(DAT_004e2404,uVar2 - 1,uVar3 - 1);
    if (*(int *)(DAT_004e2a88 + -4 + (*(int *)((int)DAT_004e2404 + 0x10c) * (uVar2 - 1) + uVar3) * 4
                ) == 0) {
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 100) = 0;
      *(undefined4 *)
       (DAT_004e2a88 + -4 + (*(int *)((int)DAT_004e2404 + 0x10c) * (uVar2 - 1) + uVar3) * 4) = 1;
    }
    param_2 = *(uint *)((int)this + 100);
    param_1 = FUN_00413870(param_2,*(undefined4 *)(param_2 + 4),&param_1);
    FUN_0045da70(this_00,1);
    *(uint *)(param_2 + 4) = param_1;
    **(uint **)(param_1 + 4) = param_1;
  }
  iVar4 = FUN_00422410(*(void **)((int)this + 0x48),uVar2,uVar3,uVar1,uVar3 - 1);
  if (iVar4 != 0) {
    param_1 = FUN_00429ac0(DAT_004e2404,uVar1,uVar3 - 1);
    if (*(int *)(DAT_004e2a88 + -4 + (*(int *)((int)DAT_004e2404 + 0x10c) * uVar1 + uVar3) * 4) == 0
       ) {
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 100) = 0;
      *(undefined4 *)(DAT_004e2a88 + -4 + (*(int *)((int)DAT_004e2404 + 0x10c) * uVar1 + uVar3) * 4)
           = 1;
    }
    iVar4 = *(int *)((int)this + 100);
    param_1 = FUN_00413870(iVar4,*(undefined4 *)(iVar4 + 4),&param_1);
    FUN_0045da70(this_00,1);
    *(uint *)(iVar4 + 4) = param_1;
    **(uint **)(param_1 + 4) = param_1;
  }
  uVar1 = uVar2 - 1;
  iVar4 = FUN_00422410(*(void **)((int)this + 0x48),uVar2,uVar3,uVar1,uVar3 + 1);
  if (iVar4 != 0) {
    param_1 = FUN_00429ac0(DAT_004e2404,uVar1,uVar3 + 1);
    if (*(int *)(DAT_004e2a88 + 4 + (*(int *)((int)DAT_004e2404 + 0x10c) * uVar1 + uVar3) * 4) == 0)
    {
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 100) = 0;
      *(undefined4 *)(DAT_004e2a88 + 4 + (*(int *)((int)DAT_004e2404 + 0x10c) * uVar1 + uVar3) * 4)
           = 1;
    }
    iVar4 = *(int *)((int)this + 100);
    iVar5 = FUN_00413870(iVar4,*(undefined4 *)(iVar4 + 4),&param_1);
    FUN_0045da70(this_00,1);
    *(int *)(iVar4 + 4) = iVar5;
    **(int **)(iVar5 + 4) = iVar5;
  }
  return;
}

