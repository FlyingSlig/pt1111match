// FUNCTION: PORT1111 0x00446d10
// name: FUN_00446d10
// sig: undefined FUN_00446d10(void * this, int param_1)


void __thiscall FUN_00446d10(void *this,int param_1)

{
  void *this_00;
  int iVar1;
  
  if (param_1 == 0) {
    this_00 = *(void **)(*(int *)(DAT_004e2b14 + 0x5c) + 0x834);
    iVar1 = 0;
  }
  else {
    FUN_0044b1a0(*(void **)((int)this + 0x38),&param_1);
    this_00 = *(void **)(*(int *)(DAT_004e2b14 + 0x5c) + 0x834);
    iVar1 = param_1;
  }
  FUN_00467680(this_00,iVar1,(int)this + 0x28);
  DAT_004dd968 = 1;
  (**(code **)(**(int **)(DAT_004e2b14 + 0x5c) + 0x4c))(0);
  DAT_004dd968 = 0;
  return;
}

