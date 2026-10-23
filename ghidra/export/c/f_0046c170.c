// FUNCTION: PORT1111 0x0046c170
// name: FUN_0046c170
// sig: undefined FUN_0046c170(void * this, int param_1)


void __thiscall FUN_0046c170(void *this,int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  undefined1 uStack_8;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)(**(code **)(*(int *)this + 0x30))();
    uVar2 = (**(code **)(*(int *)this + 0x38))();
    for (uVar6 = uVar2 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar1 = 0;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
    (**(code **)(*(int *)this + 0x34))();
    return;
  }
  iVar3 = (**(code **)(*(int *)this + 0x30))();
  if (iVar3 != 0) {
    puVar4 = (undefined1 *)(**(code **)(*(int *)this + 0x2c))(iVar3,0,0);
    iVar3 = (**(code **)(*(int *)this + 0x24))();
    if (iVar3 == 0) {
      iVar3 = (**(code **)(*(int *)this + 0x14))();
      iVar3 = -iVar3;
    }
    else {
      iVar3 = (**(code **)(*(int *)this + 0x14))();
    }
    iVar9 = 0;
    iVar5 = (**(code **)(*(int *)this + 8))();
    if (0 < iVar5) {
      do {
        iVar8 = 0;
        iVar5 = (**(code **)(*(int *)this + 4))();
        puVar7 = puVar4;
        if (0 < iVar5) {
          do {
            *puVar7 = (char)param_1;
            puVar7[1] = (char)((uint)param_1 >> 8);
            puVar7[2] = uStack_8;
            puVar7 = puVar7 + 3;
            iVar8 = iVar8 + 1;
            iVar5 = (**(code **)(*(int *)this + 4))();
          } while (iVar8 < iVar5);
        }
        puVar4 = puVar4 + iVar3;
        iVar9 = iVar9 + 1;
        iVar5 = (**(code **)(*(int *)this + 8))();
      } while (iVar9 < iVar5);
    }
    (**(code **)(*(int *)this + 0x34))();
  }
  return;
}

