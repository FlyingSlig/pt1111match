// FUNCTION: PORT1111 0x004296f0
// name: FUN_004296f0
// sig: undefined4 FUN_004296f0(void * this, int param_1, int param_2, uint * param_3, uint * param_4)


undefined4 __thiscall FUN_004296f0(void *this,int param_1,int param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  
  uVar1 = param_2 * 0x200 + (param_1 + -0x20) * -0x100 >> 0xe;
  *param_3 = param_2 * 0x200 + (param_1 + -0x20) * 0x100 >> 0xe;
  *param_4 = uVar1;
  if ((((-1 < (int)*param_3) && (-1 < (int)uVar1)) && (*param_3 < *(uint *)((int)this + 0x10c))) &&
     (uVar1 < *(uint *)((int)this + 0x110))) {
    return 1;
  }
  return 0;
}

