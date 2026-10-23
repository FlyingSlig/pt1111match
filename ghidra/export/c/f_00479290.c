// FUNCTION: PORT1111 0x00479290
// name: FUN_00479290
// sig: undefined4 FUN_00479290(void * this, uint param_1)


undefined4 __thiscall FUN_00479290(void *this,uint param_1)

{
  int *piVar1;
  int local_8 [2];
  
  piVar1 = (int *)FUN_00478780((void *)((int)this + 0x38),local_8,&param_1);
  if (*piVar1 != *(int *)((int)this + 0x3c)) {
    return 0;
  }
  FUN_00479190((void *)((int)this + 0x38),local_8,&param_1);
  *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)((int)this + 0x34);
  return 1;
}

