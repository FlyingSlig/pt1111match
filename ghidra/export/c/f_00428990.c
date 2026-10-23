// FUNCTION: PORT1111 0x00428990
// name: FUN_00428990
// sig: undefined FUN_00428990(void * this, int param_1)


void __thiscall FUN_00428990(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00426ba0(*(void **)((int)this + 0x1c),param_1);
  if ((iVar1 != 0) && (**(int **)((int)this + 0x1c) == 0)) {
    FUN_00428720(&DAT_004e2084,*(int **)((int)this + 0x1c));
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  return;
}

