// FUNCTION: PORT1111 0x0047adb0
// name: FUN_0047adb0
// sig: undefined FUN_0047adb0(void * this, int param_1)


void __thiscall FUN_0047adb0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0x14);
  if (*(int *)(iVar1 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 2;
  }
  if (iVar2 <= param_1) {
    if (*(int *)(iVar1 + 4) == 0) {
      *(undefined2 *)((int)this + 0x54) = 0xffff;
      return;
    }
    *(short *)((int)this + 0x54) = (short)(*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 2) + -1;
    return;
  }
  *(short *)((int)this + 0x54) = (short)param_1;
  return;
}

