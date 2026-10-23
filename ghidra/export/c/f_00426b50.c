// FUNCTION: PORT1111 0x00426b50
// name: FUN_00426b50
// sig: undefined4 FUN_00426b50(void * this, int param_1)


undefined4 __thiscall FUN_00426b50(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  
  uVar2 = 0;
  if (*(int *)this != 0) {
    piVar3 = *(int **)((int)this + 8);
    do {
      if (*piVar3 == param_1) {
        uVar1 = *(int *)this - 1;
        *(uint *)this = uVar1;
        if (uVar2 < uVar1) {
          do {
            *(undefined4 *)(*(int *)((int)this + 8) + uVar2 * 4) =
                 *(undefined4 *)(*(int *)((int)this + 8) + 4 + uVar2 * 4);
            uVar2 = uVar2 + 1;
          } while (uVar2 < *(uint *)this);
        }
        return 1;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar2 < *(uint *)this);
  }
  return 0;
}

