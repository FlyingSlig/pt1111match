// FUNCTION: PORT1111 0x00403830
// name: FUN_00403830
// sig: undefined4 FUN_00403830(void * this, int param_1)


undefined4 __thiscall FUN_00403830(void *this,int param_1)

{
  if (0 < param_1) {
    return *(undefined4 *)(param_1 * 0x30 + 700 + (int)this);
  }
  return *(undefined4 *)((int)this + 0x60);
}

