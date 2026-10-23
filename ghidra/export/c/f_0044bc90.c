// FUNCTION: PORT1111 0x0044bc90
// name: FUN_0044bc90
// sig: undefined4 FUN_0044bc90(void * this, undefined4 param_1)


undefined4 __thiscall FUN_0044bc90(void *this,undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((*(int *)((int)this + 4) != 0) && (piVar1 = *(int **)((int)this + 0xc), piVar1 != (int *)0x0))
  {
    uVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,*(int *)((int)this + 4),0,0,param_1);
    return uVar2;
  }
  return 0x800401f0;
}

