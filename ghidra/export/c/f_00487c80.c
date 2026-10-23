// FUNCTION: PORT1111 0x00487c80
// name: FUN_00487c80
// sig: undefined4 FUN_00487c80(void * this, int param_1, uint param_2)


undefined4 __thiscall FUN_00487c80(void *this,int param_1,uint param_2)

{
  int *piVar1;
  
  *(int *)((int)this + 4) = param_1;
  if (*(void **)(param_1 + 0x24) == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_0047cf90(*(void **)(param_1 + 0x24),param_2);
  }
  *(int **)((int)this + 0x28) = piVar1;
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  (**(code **)(*piVar1 + 0x30))((int)this + 8);
  *(uint *)((int)this + 0x2c) = param_2;
  return 1;
}

