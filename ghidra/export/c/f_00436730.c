// FUNCTION: PORT1111 0x00436730
// name: FUN_00436730
// sig: undefined4 FUN_00436730(void * this, undefined4 * param_1)


undefined4 __thiscall FUN_00436730(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = *(int **)((int)this + 8);
  piVar3 = (int *)*piVar2;
  if (piVar3 != piVar2) {
    do {
      iVar1 = FUN_004662f0((void *)(piVar3[2] + 8),(uchar *)"global");
      piVar2 = (int *)0x0;
      if (iVar1 != 0) {
        piVar2 = (int *)(**(code **)*param_1)(*(undefined4 *)(piVar3[2] + 0xc));
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)((int)this + 8));
  }
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}

