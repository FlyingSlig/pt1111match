// FUNCTION: PORT1111 0x0044b1a0
// name: FUN_0044b1a0
// sig: undefined4 FUN_0044b1a0(void * this, undefined4 * param_1)


undefined4 __thiscall FUN_0044b1a0(void *this,undefined4 *param_1)

{
  if (*(int *)((int)this + 8) == 0) {
    return 0x8000ffff;
  }
  *param_1 = *(undefined4 *)((int)this + 0x118);
  return 0;
}

