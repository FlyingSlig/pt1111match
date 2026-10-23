// FUNCTION: PORT1111 0x0045f2b0
// name: FUN_0045f2b0
// sig: uint FUN_0045f2b0(void * this, int param_1)


uint __thiscall FUN_0045f2b0(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint in_EAX;
  int *piVar3;
  
  if ((*(int *)(param_1 + 8) == 3) && (in_EAX = *(uint *)(param_1 + 0xc), 1 < *(uint *)(in_EAX + 8))
     ) {
    puVar1 = (undefined4 *)**(int **)(in_EAX + 4);
    iVar2 = puVar1[2];
    piVar3 = (int *)*puVar1;
    if (piVar3 != *(int **)(in_EAX + 4)) {
      do {
        *(undefined4 *)
         (*(int *)((int)this + 0x14) + (*(int *)((int)this + 8) * iVar2 + piVar3[2]) * 4) = 1;
        piVar3 = (int *)*piVar3;
      } while (piVar3 != *(int **)(*(int *)(param_1 + 0xc) + 4));
    }
    return CONCAT31((int3)((uint)piVar3 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}

