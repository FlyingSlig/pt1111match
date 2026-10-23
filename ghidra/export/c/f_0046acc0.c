// FUNCTION: PORT1111 0x0046acc0
// name: FUN_0046acc0
// sig: undefined4 FUN_0046acc0(void * this, int * param_1)


undefined4 __thiscall FUN_0046acc0(void *this,int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  cVar1 = (**(code **)(*(int *)this + 0xc))();
  if (cVar1 == '\b') {
    cVar1 = (**(code **)(*param_1 + 0xc))();
    if (((cVar1 == '\b') && (*(int *)((int)this + 8) != 3)) && (param_1[2] != 3)) {
      puVar2 = (undefined4 *)(**(code **)(*(int *)this + 0x18))();
      puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x18))();
      for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      return 1;
    }
  }
  return 0;
}

