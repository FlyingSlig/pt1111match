// FUNCTION: PORT1111 0x00428930
// name: FUN_00428930
// sig: undefined4 FUN_00428930(void * this, int param_1)


undefined4 __thiscall FUN_00428930(void *this,int param_1)

{
  int iVar1;
  
  if (*(void **)((int)this + 0x14) != (void *)0x0) {
    iVar1 = FUN_00426ba0(*(void **)((int)this + 0x14),param_1);
    if (iVar1 != 0) {
      if (**(int **)((int)this + 0x14) == 0) {
        FUN_00428720(&DAT_004e2074,*(int **)((int)this + 0x14));
        *(undefined4 *)((int)this + 0x14) = 0;
      }
      FUN_00421240((void *)(DAT_004e2404 + 0x94),this);
      return 1;
    }
  }
  return 0;
}

