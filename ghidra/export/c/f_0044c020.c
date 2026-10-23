// FUNCTION: PORT1111 0x0044c020
// name: FUN_0044c020
// sig: undefined FUN_0044c020(void * this, byte param_1)


void __thiscall FUN_0044c020(void *this,byte param_1)

{
  int *piVar1;
  int iVar2;
  
  if (100 < param_1) {
    param_1 = 100;
  }
  iVar2 = (param_1 - 100) * 0x60;
  *(int *)((int)this + 100) = iVar2;
  piVar1 = FUN_0044baf0((int)this + 0x10);
  (**(code **)(*piVar1 + 0x14))(piVar1,iVar2,0);
  return;
}

