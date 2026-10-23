// FUNCTION: PORT1111 0x0043abf0
// name: FUN_0043abf0
// sig: int FUN_0043abf0(void * this, int param_1, int param_2)


int __thiscall FUN_0043abf0(void *this,int param_1,int param_2)

{
  if ((((-1 < param_1) && (-1 < param_2)) && (param_1 < *(int *)((int)this + 0x10))) &&
     (param_2 < *(int *)((int)this + 0x14))) {
    return (*(int *)((int)this + 0x10) * param_2 + param_1) * 0x30 + *(int *)((int)this + 4);
  }
  return 0;
}

