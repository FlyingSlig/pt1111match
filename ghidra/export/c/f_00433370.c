// FUNCTION: PORT1111 0x00433370
// name: FUN_00433370
// sig: undefined FUN_00433370(int param_1)


void __fastcall FUN_00433370(int param_1)

{
  void *this;
  void *pvVar1;
  int iVar2;
  void *this_00;
  uint uVar3;
  int local_8;
  int local_4;
  
  pvVar1 = (void *)FUN_004147d0(*(int *)(param_1 + 0x14));
  this = *(void **)(DAT_004e26f0 + *(int *)(param_1 + 0x18) * 4);
  if ((*(int *)(param_1 + 0x24) == 0) &&
     (*(uint *)((int)this + 0x38) < *(uint *)((int)pvVar1 + 0x110))) {
    if (*(int *)(param_1 + 0x28) != 0) {
      FUN_00423080(this,(int)pvVar1,1,1);
    }
    *(undefined4 *)(param_1 + 0x34) = 1;
    return;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar3 = (uint)(*(int *)(param_1 + 0x18) != 1);
    if (*(int *)((int)pvVar1 + 0x48) == 7) {
      FUN_00443e30(*(void **)((int)DAT_004e2420 + 8),&local_8,&local_4,pvVar1,0,uVar3,
                   *(int *)((int)DAT_004e2420 + 4));
    }
    else {
      if ((*(int *)((int)pvVar1 + 0x14) == 0x2f) || (*(int *)((int)pvVar1 + 0x14) == 0x4f)) {
        uVar3 = 1;
        this_00 = *(void **)((int)this + 0x2c);
      }
      else {
        this_00 = *(void **)((int)DAT_004e2420 + 4);
      }
      FUN_00443d20(this_00,&local_8,&local_4,pvVar1,uVar3,1,1);
    }
    *(int *)(param_1 + 0x1c) = local_8;
    *(int *)(param_1 + 0x20) = local_4;
  }
  if ((*(int *)(param_1 + 0x30) != 0) && (*(int *)((int)pvVar1 + 0x2a8) == 6)) {
    iVar2 = FUN_00429ac0(DAT_004e2404,*(uint *)(param_1 + 0x1c),*(uint *)(param_1 + 0x20));
    FUN_004426d0(DAT_004e2420,(int)pvVar1,iVar2,(int)this,0);
  }
  return;
}

