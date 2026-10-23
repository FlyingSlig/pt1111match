// FUNCTION: PORT1111 0x00426610
// name: FUN_00426610
// sig: undefined4 FUN_00426610(void * this, uint param_1)


undefined4 __thiscall FUN_00426610(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint in_EAX;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  uVar1 = param_1;
  if (*(int *)(param_1 + 8) != 6) {
    return in_EAX & 0xffffff00;
  }
  if (*(int *)((int)this + 0x1c) != 0) {
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  piVar4 = *(int **)(*(int *)(param_1 + 0xc) + 4);
  piVar5 = (int *)*piVar4;
  if (piVar5 != piVar4) {
    do {
      iVar3 = FUN_0042a3b0((undefined4 *)piVar5[2],&param_1);
      uVar2 = param_1;
      piVar4 = (int *)0x0;
      if (iVar3 != 0) {
        if (*(int *)((int)this + 0x24) <= *(int *)((int)this + 0x20)) {
          iVar3 = *(int *)((int)this + 0x24) + 5;
          *(int *)((int)this + 0x24) = iVar3;
          piVar4 = FUN_00498201(*(int **)((int)this + 0x1c),(uint *)(iVar3 * 4));
          *(int **)((int)this + 0x1c) = piVar4;
        }
        piVar4 = *(int **)((int)this + 0x1c);
        piVar4[*(int *)((int)this + 0x20)] = uVar2;
        *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + 1;
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)*(int *)(*(int *)(uVar1 + 0xc) + 4));
  }
  return CONCAT31((int3)((uint)piVar4 >> 8),1);
}

