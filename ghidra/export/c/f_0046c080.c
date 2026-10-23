// FUNCTION: PORT1111 0x0046c080
// name: FUN_0046c080
// sig: undefined FUN_0046c080(void * this, int param_1)


void __thiscall FUN_0046c080(void *this,int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 unaff_ESI;
  int iVar8;
  
  if (param_1 != 0) {
    iVar3 = (**(code **)(*(int *)this + 0x30))();
    if (iVar3 != 0) {
      iVar3 = (**(code **)(*(int *)this + 0x2c))(iVar3,0,0);
      iVar4 = (**(code **)(*(int *)this + 0x24))();
      if (iVar4 == 0) {
        iVar4 = (**(code **)(*(int *)this + 0x14))();
        iVar4 = -iVar4;
      }
      else {
        iVar4 = (**(code **)(*(int *)this + 0x14))();
      }
      iVar7 = 0;
      iVar5 = (**(code **)(*(int *)this + 8))();
      if (0 < iVar5) {
        do {
          iVar8 = 0;
          iVar5 = (**(code **)(*(int *)this + 4))();
          if (0 < iVar5) {
            do {
              *(undefined4 *)(iVar3 + iVar8 * 4) = unaff_ESI;
              iVar8 = iVar8 + 1;
              iVar5 = (**(code **)(*(int *)this + 4))();
            } while (iVar8 < iVar5);
          }
          iVar3 = iVar3 + ((int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2) * 4;
          iVar7 = iVar7 + 1;
          iVar5 = (**(code **)(*(int *)this + 8))();
        } while (iVar7 < iVar5);
      }
      (**(code **)(*(int *)this + 0x34))();
    }
    return;
  }
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

