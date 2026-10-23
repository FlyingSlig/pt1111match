// FUNCTION: PORT1111 0x0046bef0
// name: FUN_0046bef0
// sig: undefined FUN_0046bef0(void * this, uint param_1, int * param_2)


void __thiscall FUN_0046bef0(void *this,uint param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iStack_8;
  int iStack_4;
  
  if (param_2 == (int *)0x0) {
    if (param_1 == 0) {
      puVar1 = (undefined4 *)(**(code **)(*(int *)this + 0x30))();
      uVar2 = (**(code **)(*(int *)this + 0x38))();
      for (uVar7 = uVar2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
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
    puVar3 = (uint *)(**(code **)(*(int *)this + 0x30))();
    if (puVar3 == (uint *)0x0) {
      return;
    }
    iVar4 = (**(code **)(*(int *)this + 0x38))();
    iVar4 = (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2;
    uVar2 = ((param_1 >> 0x10 & 0xf8) << 5 | param_1 >> 8 & 0xfc) << 3 | param_1 >> 3 & 0x1f;
    if (0 < iVar4) {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar3 = uVar2 << 0x10 | uVar2;
        puVar3 = puVar3 + 1;
      }
      (**(code **)(*(int *)this + 0x34))();
      return;
    }
  }
  else {
    uVar5 = (**(code **)(*(int *)this + 0x30))();
    (**(code **)(*(int *)this + 0x2c))(uVar5,0,0);
    iVar4 = (**(code **)(*(int *)this + 0x24))();
    if (iVar4 == 0) {
      iVar4 = (**(code **)(*(int *)this + 0x14))();
      iVar4 = -iVar4;
    }
    else {
      iVar4 = (**(code **)(*(int *)this + 0x14))();
    }
    iVar6 = *param_2 >> 1;
    uVar2 = ((param_1 >> 0x10 & 0xf8) << 5 | param_1 >> 8 & 0xfc) << 3 |
            (uint)((byte)(param_1 >> 3) & 0x1f);
    iVar9 = param_2[1];
    if (iVar9 < param_2[3]) {
      iVar10 = (param_2[2] - *param_2 >> 1) + iVar6;
      do {
        if (iVar6 <= iVar10) {
          puVar3 = (uint *)(iStack_4 + iVar6 * 4);
          for (iVar8 = (iVar10 - iVar6) + 1; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar3 = uVar2 << 0x10 | uVar2;
            puVar3 = puVar3 + 1;
          }
        }
        iStack_4 = iStack_8 + iVar4;
        iVar9 = iVar9 + 1;
        iStack_8 = iStack_4;
      } while (iVar9 < param_2[3]);
    }
  }
  (**(code **)(*(int *)this + 0x34))();
  return;
}

