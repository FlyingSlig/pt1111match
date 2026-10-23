// FUNCTION: PORT1111 0x004873e0
// name: FUN_004873e0
// sig: uint FUN_004873e0(void * this, int * param_1)


uint __thiscall FUN_004873e0(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004ba8a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)((int)this + 0x1c) + 4))();
  uVar3 = 0;
  uStack_4 = 0;
  if (*(int *)((int)this + 0xc) != 0) {
    if (param_1 == (int *)0x0) {
      uVar4 = 0;
      if (*(int *)((int)this + 0x18) != 0) {
        do {
          piVar1 = *(int **)(*(int *)((int)this + 0xc) + uVar4 * 8);
          uVar2 = (**(code **)(*piVar1 + 0x48))(piVar1);
          uVar3 = uVar3 | uVar2;
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)((int)this + 0x18));
      }
    }
    else {
      uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
    }
    (**(code **)(**(int **)((int)this + 0x14) + 0x1c))();
    uStack_4 = 0xffffffff;
    (**(code **)(*(int *)((int)this + 0x1c) + 8))();
    ExceptionList = pvStack_c;
    return uVar3;
  }
  uStack_4 = 0xffffffff;
  (**(code **)(*(int *)((int)this + 0x1c) + 8))();
  ExceptionList = pvStack_c;
  return 0x800401f0;
}

