// FUNCTION: PORT1111 0x00428890
// name: FUN_00428890
// sig: undefined4 FUN_00428890(void * this, int param_1)


undefined4 __thiscall FUN_00428890(void *this,int param_1)

{
  int iVar1;
  
  if (*(void **)((int)this + 0x20) != (void *)0x0) {
    iVar1 = FUN_00426ba0(*(void **)((int)this + 0x20),param_1);
    if (iVar1 != 0) {
      if (**(int **)((int)this + 0x20) == 0) {
        FUN_00428720(&DAT_004e2094,*(int **)((int)this + 0x20));
        *(undefined4 *)((int)this + 0x20) = 0;
      }
      return 1;
    }
  }
  return 0;
}

