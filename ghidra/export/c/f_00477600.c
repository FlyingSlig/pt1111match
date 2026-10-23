// FUNCTION: PORT1111 0x00477600
// name: FUN_00477600
// sig: undefined4 FUN_00477600(void * this, int param_1)


undefined4 __thiscall FUN_00477600(void *this,int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    iVar1 = *(int *)((int)this + 0x30) + 1;
    *(int *)((int)this + 0x30) = iVar1;
    *(int *)(param_1 + 0x34) = iVar1;
    FUN_004770c0(this,param_1);
  }
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  return *(undefined4 *)(param_1 + 0x34);
}

