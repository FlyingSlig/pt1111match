// FUNCTION: PORT1111 0x00481930
// name: FUN_00481930
// sig: undefined FUN_00481930(void * this, int param_1, int param_2)


void __thiscall FUN_00481930(void *this,int param_1,int param_2)

{
  int iVar1;
  
  *(int *)((int)this + 0x7c) = param_1;
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  *(int *)((int)this + 0x78) = param_2;
  if (param_1 < param_2) {
    *(int *)((int)this + 0x74) = param_2 - param_1;
  }
  else {
    *(undefined4 *)((int)this + 0x74) = 1;
  }
  iVar1 = *(int *)((int)this + 0x2c);
  if (((iVar1 == 0) || (iVar1 < param_1)) || (param_1 = param_2, param_2 < iVar1)) {
    FUN_00481480(this,param_1);
  }
  if (*(int *)((int)this + 0xc) != 0) {
    (**(code **)(*(int *)this + 0xc))(*(undefined4 *)((int)this + 0x2c));
  }
  FUN_004813e0((int)this);
  return;
}

