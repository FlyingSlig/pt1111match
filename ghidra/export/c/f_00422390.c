// FUNCTION: PORT1111 0x00422390
// name: FUN_00422390
// sig: undefined4 FUN_00422390(void * this, uint param_1, uint param_2)


undefined4 __thiscall FUN_00422390(void *this,uint param_1,uint param_2)

{
  if ((param_1 < *(uint *)((int)this + 100)) && (param_2 < *(uint *)((int)this + 0x68))) {
    return *(undefined4 *)
            (*(int *)((int)this + 0x60) + (*(uint *)((int)this + 100) * param_2 + param_1) * 4);
  }
  return 1;
}

