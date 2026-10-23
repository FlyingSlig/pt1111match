// FUNCTION: PORT1111 0x00411d00
// name: FUN_00411d00
// sig: undefined FUN_00411d00(void * this, int param_1, int param_2, int param_3, int param_4, int param_5)


void __thiscall FUN_00411d00(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = uVar1 | 4;
  if (param_3 != 0) {
    *(uint *)(param_1 + 0x28) = uVar1 | 0x24;
  }
  if (param_4 != 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x40;
  }
  if (param_5 != 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x80;
  }
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x100;
  FUN_004787e0(param_1);
  if (param_2 != 0) {
    *(int *)((int)this + 8) = param_1;
  }
  return;
}

