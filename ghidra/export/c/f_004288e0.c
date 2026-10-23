// FUNCTION: PORT1111 0x004288e0
// name: FUN_004288e0
// sig: undefined4 FUN_004288e0(void * this, int param_1)


undefined4 __thiscall FUN_004288e0(void *this,int param_1)

{
  int iVar1;
  
  if (*(void **)((int)this + 0x18) != (void *)0x0) {
    iVar1 = FUN_00426b50(*(void **)((int)this + 0x18),param_1);
    if (iVar1 != 0) {
      if (**(int **)((int)this + 0x18) == 0) {
        FUN_00428720(&DAT_004e2064,*(int **)((int)this + 0x18));
        *(undefined4 *)((int)this + 0x18) = 0;
      }
      return 1;
    }
  }
  return 0;
}

