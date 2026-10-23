// FUNCTION: PORT1111 0x0041b4d0
// name: FUN_0041b4d0
// sig: undefined FUN_0041b4d0(void * this, int * param_1)


void __thiscall FUN_0041b4d0(void *this,int *param_1)

{
  (**(code **)(*param_1 + 0x34))
            (*(undefined4 *)((int)this + 0x38),DAT_004e2c30 + *(int *)((int)this + 0x2c),
             DAT_004e2c34 + *(int *)((int)this + 0x30),0);
  *(undefined4 *)((int)this + 0x24) = 0;
  return;
}

