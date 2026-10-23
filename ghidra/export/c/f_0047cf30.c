// FUNCTION: PORT1111 0x0047cf30
// name: FUN_0047cf30
// sig: int * FUN_0047cf30(void * this, undefined4 * param_1, int param_2)


int * __thiscall FUN_0047cf30(void *this,undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)((int)this + 0x8c);
  if (piVar3 != (int *)*piVar3) {
    do {
      piVar3 = (int *)piVar3[1];
      piVar1 = (int *)piVar3[2];
      if ((piVar1[10] == param_2) &&
         (iVar2 = (**(code **)(*piVar1 + 0x28))(*param_1,param_1[1]), iVar2 != 0)) {
        return piVar1;
      }
    } while (piVar3 != (int *)**(undefined4 **)((int)this + 0x8c));
  }
  return (int *)0x0;
}

