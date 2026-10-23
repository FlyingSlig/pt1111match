// FUNCTION: PORT1111 0x00429b40
// name: FUN_00429b40
// sig: int FUN_00429b40(void * this, int param_1, int param_2)


int __thiscall FUN_00429b40(void *this,int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_2 * 0x200 + (param_1 + -0x20) * 0x100 >> 0xe;
  uVar1 = param_2 * 0x200 + (param_1 + -0x20) * -0x100 >> 0xe;
  if ((((-1 < (int)uVar2) && (-1 < (int)uVar1)) && (uVar2 < *(uint *)((int)this + 0x10c))) &&
     (uVar1 < *(uint *)((int)this + 0x110))) {
    return (*(uint *)((int)this + 0x10c) * uVar1 + uVar2) * 0x6c + *(int *)((int)this + 0x118);
  }
  return 0;
}

