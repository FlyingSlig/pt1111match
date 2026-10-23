// FUNCTION: PORT1111 0x00480070
// name: FUN_00480070
// sig: undefined4 FUN_00480070(void * this, int param_1)


undefined4 __thiscall FUN_00480070(void *this,int param_1)

{
  if (*(int *)((int)this + 0xc) == 0) {
    return 0;
  }
  SetEvent(*(HANDLE *)((int)this + 0x14));
  if (param_1 != 0) {
    WaitForSingleObject(*(HANDLE *)((int)this + 0x18),0xffffffff);
  }
  return 1;
}

