// FUNCTION: PORT1111 0x00436930
// name: FUN_00436930
// sig: int FUN_00436930(void * this, undefined4 * param_1)


int __thiscall FUN_00436930(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)**(int **)((int)this + 8);
  if (piVar3 != *(int **)((int)this + 8)) {
    do {
      iVar1 = piVar3[2];
      iVar2 = FUN_004663a0((void *)(iVar1 + 4),param_1);
      if (iVar2 != 0) {
        return iVar1;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)((int)this + 8));
  }
  return 0;
}

