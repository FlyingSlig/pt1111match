// FUNCTION: PORT1111 0x004573b0
// name: FUN_004573b0
// sig: undefined FUN_004573b0(void * this, undefined4 param_1, int param_2)


void __thiscall FUN_004573b0(void *this,undefined4 param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = FUN_00457220((void *)((int)this + 4),&param_1);
  *piVar1 = param_2;
  return;
}

