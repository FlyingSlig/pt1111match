// FUNCTION: PORT1111 0x00419590
// name: FUN_00419590
// sig: uint FUN_00419590(void * this, int param_1)


uint __thiscall FUN_00419590(void *this,int param_1)

{
  uint3 uVar3;
  void *pvVar1;
  int *piVar2;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  
  iVar4 = *(int *)((int)this + 0x2c);
  uVar3 = (uint3)((uint)iVar4 >> 8);
  if ((iVar4 < 2) && (*(int *)((int)this + 0x30) < 2)) {
    return (uint)uVar3 << 8;
  }
  if ((*(int *)(param_1 + 8) == 3) && (*(int *)(*(int *)(param_1 + 0xc) + 8) == iVar4)) {
    if (*(void **)((int)this + 0x44) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 0x44));
    }
    pvVar1 = operator_new(*(int *)((int)this + 0x30) * *(int *)((int)this + 0x2c) * 4);
    *(void **)((int)this + 0x44) = pvVar1;
    piVar2 = *(int **)(*(int *)(param_1 + 0xc) + 4);
    piVar7 = (int *)*piVar2;
    iVar4 = 0;
    if (piVar7 != piVar2) {
      do {
        uVar5 = piVar7[2];
        piVar7 = (int *)*piVar7;
        piVar2 = (int *)0x0;
        if (0 < *(int *)((int)this + 0x30)) {
          do {
            iVar6 = *(int *)((int)this + 0x2c) * (int)piVar2 + iVar4;
            if ((uVar5 & 1) == 0) {
              *(undefined4 *)(*(int *)((int)this + 0x44) + iVar6 * 4) = 0;
            }
            else {
              *(undefined4 *)(*(int *)((int)this + 0x44) + iVar6 * 4) = 1;
            }
            uVar5 = (int)uVar5 >> 1;
            piVar2 = (int *)((int)piVar2 + 1);
          } while ((int)piVar2 < *(int *)((int)this + 0x30));
        }
        iVar4 = iVar4 + 1;
        if (uVar5 != 0) {
          return (uint)piVar2 & 0xffffff00;
        }
      } while (piVar7 != (int *)*(int *)(*(int *)(param_1 + 0xc) + 4));
    }
    return CONCAT31((int3)((uint)piVar2 >> 8),1);
  }
  return (uint)uVar3 << 8;
}

