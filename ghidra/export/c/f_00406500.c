// FUNCTION: PORT1111 0x00406500
// name: FUN_00406500
// sig: undefined FUN_00406500(int param_1)


void __fastcall FUN_00406500(int param_1)

{
  int iVar1;
  void *this;
  
  iVar1 = *(int *)(param_1 + 0x40);
  FUN_00412670(param_1);
  this = *(void **)(param_1 + 0x70);
  if (((this != (void *)0x0) && (*(char *)((int)this + 0x5a) != '\0')) && (iVar1 != 0)) {
    FUN_00422110(this,iVar1,*(int *)(param_1 + 0x50));
  }
  return;
}

