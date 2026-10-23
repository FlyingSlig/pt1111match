// FUNCTION: PORT1111 0x00478470
// name: FUN_00478470
// sig: undefined4 FUN_00478470(void * this, int param_1, int param_2)


undefined4 __thiscall FUN_00478470(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0047a7d0(this,param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if ((*(void **)((int)this + 0x60) != (void *)0x0) &&
     (iVar1 = FUN_0047a7d0(*(void **)((int)this + 0x60),param_1,param_2), iVar1 == 0)) {
    return 0;
  }
  if ((*(void **)((int)this + 0x5c) != (void *)0x0) &&
     (iVar1 = FUN_0047a7d0(*(void **)((int)this + 0x5c),param_1,param_2), iVar1 == 0)) {
    return 0;
  }
  return 1;
}

