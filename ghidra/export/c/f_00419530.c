// FUNCTION: PORT1111 0x00419530
// name: FUN_00419530
// sig: uint FUN_00419530(void * this, int param_1)


uint __thiscall FUN_00419530(void *this,int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint in_EAX;
  uint *puVar3;
  
  if ((*(int *)(param_1 + 8) == 3) &&
     (in_EAX = *(uint *)(param_1 + 0xc), (*(byte *)(in_EAX + 8) & 1) == 0)) {
    puVar3 = (uint *)**(uint **)(in_EAX + 4);
    if (puVar3 != *(uint **)(in_EAX + 4)) {
      do {
        puVar1 = puVar3 + 2;
        puVar2 = (undefined4 *)*puVar3;
        if (0xb < (int)*puVar1) {
          return (uint)puVar2 & 0xffffff00;
        }
        puVar3 = (uint *)*puVar2;
        *(undefined4 *)((int)this + *puVar1 * 4 + 0x138) = puVar2[2];
      } while (puVar3 != *(uint **)(*(int *)(param_1 + 0xc) + 4));
    }
    return CONCAT31((int3)((uint)puVar3 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}

