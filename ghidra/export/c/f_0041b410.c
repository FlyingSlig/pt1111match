// FUNCTION: PORT1111 0x0041b410
// name: FUN_0041b410
// sig: undefined FUN_0041b410(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, int param_4)


void __thiscall
FUN_0041b410(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  *(undefined4 *)((int)this + 0x28) = param_1;
  *(undefined4 *)((int)this + 0x2c) = param_2;
  if (4 < param_4) {
    *(undefined4 *)((int)this + 0x34) = 4;
    *(undefined4 *)((int)this + 0x30) = param_3;
    return;
  }
  *(int *)((int)this + 0x34) = param_4;
  *(undefined4 *)((int)this + 0x30) = param_3;
  return;
}

