// FUNCTION: PORT1111 0x00429ac0
// name: FUN_00429ac0
// sig: int FUN_00429ac0(void * this, uint param_1, uint param_2)


int __thiscall FUN_00429ac0(void *this,uint param_1,uint param_2)

{
  if ((((-1 < (int)param_1) && (-1 < (int)param_2)) && (param_1 < *(uint *)((int)this + 0x10c))) &&
     (param_2 < *(uint *)((int)this + 0x110))) {
    return (*(uint *)((int)this + 0x10c) * param_2 + param_1) * 0x6c + *(int *)((int)this + 0x118);
  }
  return 0;
}

