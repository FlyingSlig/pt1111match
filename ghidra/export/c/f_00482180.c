// FUNCTION: PORT1111 0x00482180
// name: FUN_00482180
// sig: undefined4 FUN_00482180(void * this, uint param_1)


undefined4 __thiscall FUN_00482180(void *this,uint param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0x20)) {
    piVar2 = (int *)((int)this + 0x30);
    do {
      if (param_1 == *(ushort *)(*piVar2 + 0x2c)) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)((int)this + 0x20));
  }
  return 0;
}

