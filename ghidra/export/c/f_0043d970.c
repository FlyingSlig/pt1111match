// FUNCTION: PORT1111 0x0043d970
// name: FUN_0043d970
// sig: undefined4 FUN_0043d970(void * this, int * param_1)


undefined4 __thiscall FUN_0043d970(void *this,int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)**(int **)((int)this + 8);
  iVar3 = 0;
  if (piVar2 != *(int **)((int)this + 8)) {
    do {
      iVar3 = iVar3 + 1;
      if ((param_1[0x22] < iVar3) && (uVar1 = FUN_00444600((void *)piVar2[2],param_1), uVar1 != 0))
      {
        param_1[0x22] = iVar3;
        return *(undefined4 *)(piVar2[2] + 4);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)((int)this + 8));
  }
  return 0xffffffff;
}

