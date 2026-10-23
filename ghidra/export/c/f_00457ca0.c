// FUNCTION: PORT1111 0x00457ca0
// name: FUN_00457ca0
// sig: undefined4 FUN_00457ca0(void * this, uint param_1)


undefined4 __thiscall FUN_00457ca0(void *this,uint param_1)

{
  if ((*(int *)((int)this + 8) != 0) &&
     (param_1 < (uint)(*(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2))) {
    return *(undefined4 *)(*(int *)((int)this + 8) + param_1 * 4);
  }
  return 0;
}

