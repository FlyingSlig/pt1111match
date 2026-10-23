// FUNCTION: PORT1111 0x00405740
// name: FUN_00405740
// sig: undefined FUN_00405740(int param_1)


void __fastcall FUN_00405740(int param_1)

{
  void *this;
  
  this = *(void **)(param_1 + 0x70);
  if (((this != (void *)0x0) && (*(char *)((int)this + 0x5a) != '\0')) &&
     (*(int *)(param_1 + 0x40) != 0)) {
    FUN_00422040(this,*(int *)(param_1 + 0x40),*(int *)(param_1 + 0x50));
  }
  return;
}

