// FUNCTION: PORT1111 0x00439010
// name: FUN_00439010
// sig: undefined4 FUN_00439010(void * this, int param_1)


undefined4 __thiscall FUN_00439010(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_1 + 4);
  piVar3 = (int *)*piVar1;
  if (piVar3 != piVar1) {
    do {
      piVar1 = (int *)(**(code **)(*(int *)this + 0x10))(piVar3[2]);
      if ((char)piVar1 == '\0') {
        uVar2 = (**(code **)(*(int *)this + 0x10))(piVar3[2]);
        return uVar2 & 0xffffff00;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(param_1 + 4));
  }
  return CONCAT31((int3)((uint)piVar1 >> 8),1);
}

