// FUNCTION: PORT1111 0x004223c0
// name: FUN_004223c0
// sig: undefined4 FUN_004223c0(void * this, uint param_1, uint param_2)


undefined4 __thiscall FUN_004223c0(void *this,uint param_1,uint param_2)

{
  FUN_004296c0(param_1,param_2,(int *)&param_2,(int *)&param_1);
  if ((param_2 < *(uint *)((int)this + 100)) && (param_1 < *(uint *)((int)this + 0x68))) {
    return *(undefined4 *)
            (*(int *)((int)this + 0x60) + (*(uint *)((int)this + 100) * param_1 + param_2) * 4);
  }
  return 1;
}

