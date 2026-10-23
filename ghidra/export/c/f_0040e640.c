// FUNCTION: PORT1111 0x0040e640
// name: FUN_0040e640
// sig: bool FUN_0040e640(void * this, int param_1)


bool __thiscall FUN_0040e640(void *this,int param_1)

{
  int iVar1;
  
  if (-1 < *(int *)((int)this + 300)) {
    iVar1 = FUN_00414c30(DAT_004e240c);
    if (iVar1 != 0) {
      return *(int *)(iVar1 + 0x10) != param_1;
    }
    *(undefined4 *)((int)this + 300) = 0xffffffff;
  }
  return false;
}

