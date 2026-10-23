// FUNCTION: PORT1111 0x0043d900
// name: FUN_0043d900
// sig: undefined4 FUN_0043d900(void * this, int * param_1)


undefined4 __thiscall FUN_0043d900(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  *(undefined4 *)(param_1[0x2c] + 4) = 0;
  piVar3 = (int *)**(int **)((int)this + 8);
  if (piVar3 != *(int **)((int)this + 8)) {
    do {
      iVar2 = iVar2 + 1;
      if (iVar2 == param_1[0x22]) {
        return 0xfffffffe;
      }
      uVar1 = FUN_00444600((void *)piVar3[2],param_1);
      if (uVar1 != 0) {
        param_1[0x22] = iVar2;
        return *(undefined4 *)(piVar3[2] + 4);
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)((int)this + 8));
  }
  return 0xffffffff;
}

