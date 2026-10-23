// FUNCTION: PORT1111 0x0042cf20
// name: FUN_0042cf20
// sig: undefined4 FUN_0042cf20(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)


undefined4 __thiscall
FUN_0042cf20(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  *(int *)((int)this + 4) = param_1;
  FUN_0042c240(param_1);
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0x14) = param_5;
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(undefined4 *)((int)this + 0x10) = param_4;
  return 1;
}

