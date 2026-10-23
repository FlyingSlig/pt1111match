// FUNCTION: PORT1111 0x00412e40
// name: FUN_00412e40
// sig: undefined FUN_00412e40(void * this, undefined4 * param_1, undefined4 param_2)


void __thiscall FUN_00412e40(void *this,undefined4 *param_1,undefined4 param_2)

{
  if (*(int **)((int)this + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x74) + 0x20))(param_2,*param_1,param_1[1]);
    return;
  }
  FUN_00454690((int)this + 0x104);
  return;
}

