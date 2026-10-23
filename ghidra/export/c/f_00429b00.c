// FUNCTION: PORT1111 0x00429b00
// name: FUN_00429b00
// sig: int FUN_00429b00(void * this, uint * param_1)


int __thiscall FUN_00429b00(void *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  if ((((-1 < (int)uVar1) && (uVar2 = param_1[1], -1 < (int)uVar2)) &&
      (uVar1 < *(uint *)((int)this + 0x10c))) && (uVar2 < *(uint *)((int)this + 0x110))) {
    return (*(uint *)((int)this + 0x10c) * uVar2 + uVar1) * 0x6c + *(int *)((int)this + 0x118);
  }
  return 0;
}

