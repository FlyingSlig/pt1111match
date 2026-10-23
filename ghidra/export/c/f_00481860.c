// FUNCTION: PORT1111 0x00481860
// name: FUN_00481860
// sig: undefined4 FUN_00481860(void * this, int param_1)


undefined4 __thiscall FUN_00481860(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x2c);
  if (param_1 == *(int *)((int)this + 0x30)) {
    FUN_00481540(this,0);
  }
  else {
    if (param_1 != *(int *)((int)this + 0x34)) {
      return 0;
    }
    FUN_00481600(this,0);
  }
  if (*(int *)((int)this + 0x2c) == iVar1) {
    return 1;
  }
  *(undefined4 *)((int)this + 0x80) = 1;
  return 1;
}

