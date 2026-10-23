// FUNCTION: PORT1111 0x0041b020
// name: FUN_0041b020
// sig: undefined4 FUN_0041b020(void * this, int param_1)


undefined4 __thiscall FUN_0041b020(void *this,int param_1)

{
  int iVar1;
  uint in_EAX;
  int *piVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 8) == 3) {
    piVar2 = *(int **)(*(int *)(param_1 + 0xc) + 4);
    piVar3 = (int *)*piVar2;
    if (piVar3 != piVar2) {
      do {
        iVar1 = *(int *)((int)this + 0x94);
        if ((iVar1 == 0) ||
           ((uint)(*(int *)((int)this + 0x9c) - iVar1 >> 2) <=
            (uint)(*(int *)((int)this + 0x98) - iVar1 >> 2))) {
          piVar2 = (int *)FUN_0041a090((void *)((int)this + 0x90),*(undefined4 **)((int)this + 0x98)
                                       ,1,piVar3 + 2);
        }
        else {
          piVar2 = *(int **)((int)this + 0x98);
          *piVar2 = piVar3[2];
          piVar2 = piVar2 + 1;
          *(int **)((int)this + 0x98) = piVar2;
        }
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)*(int *)(*(int *)(param_1 + 0xc) + 4));
    }
    return CONCAT31((int3)((uint)piVar2 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}

