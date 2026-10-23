// FUNCTION: PORT1111 0x00486890
// name: FUN_00486890
// sig: undefined4 FUN_00486890(void * this, int param_1)


undefined4 __thiscall FUN_00486890(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  uint local_4;
  
  if (*(int *)((int)this + 0xc) == 0) {
    return 0;
  }
  uVar2 = 0;
  if (*(int *)((int)this + 0x18) != 0) {
    do {
      if ((*(int *)(*(int *)((int)this + 0xc) + uVar2 * 8) != 0) &&
         (*(int *)(*(int *)((int)this + 0xc) + uVar2 * 8 + 4) == param_1)) {
        local_4 = 0;
        piVar1 = *(int **)(*(int *)((int)this + 0xc) + uVar2 * 8);
        (**(code **)(*piVar1 + 0x24))(piVar1,&local_4);
        if ((local_4 & 1) != 0) {
          return 1;
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((int)this + 0x18));
  }
  return 0;
}

