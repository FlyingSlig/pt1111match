// FUNCTION: PORT1111 0x0047cfc0
// name: FUN_0047cfc0
// sig: int * FUN_0047cfc0(void * this, undefined4 * param_1)


int * __thiscall FUN_0047cfc0(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)((int)this + 0x8c);
  if (piVar3 != (int *)*piVar3) {
    do {
      piVar3 = (int *)piVar3[1];
      piVar1 = (int *)piVar3[2];
      if ((((piVar1 != (int *)0x0) && (piVar1[0x16] != 0)) &&
          (iVar2 = (**(code **)(*piVar1 + 0x28))(*param_1,param_1[1]), iVar2 != 0)) &&
         ((piVar1[10] == 1 && ((*(byte *)(piVar1 + 0xc) & 1) != 0)))) {
        return piVar1;
      }
    } while (piVar3 != (int *)**(undefined4 **)((int)this + 0x8c));
  }
  return (int *)0x0;
}

