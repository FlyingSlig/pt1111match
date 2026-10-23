// FUNCTION: PORT1111 0x00411b80
// name: FUN_00411b80
// sig: undefined4 FUN_00411b80(void * this, int param_1, undefined4 param_2, undefined4 param_3)


undefined4 __thiscall FUN_00411b80(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  *(int *)((int)this + 0xc) = param_1;
  if (param_1 == 0) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 4) = param_2;
  return 1;
}

