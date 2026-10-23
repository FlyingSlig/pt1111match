// FUNCTION: PORT1111 0x0040e560
// name: FUN_0040e560
// sig: undefined FUN_0040e560(void * this, int param_1)


void __thiscall FUN_0040e560(void *this,int param_1)

{
  if (param_1 != -1) {
    FUN_00414c30(DAT_004e240c);
  }
  *(int *)((int)this + 300) = param_1;
  return;
}

