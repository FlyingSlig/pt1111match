// FUNCTION: PORT1111 0x0043cdf0
// name: FUN_0043cdf0
// sig: undefined4 FUN_0043cdf0(void * this, int param_1)


undefined4 __thiscall FUN_0043cdf0(void *this,int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)**(undefined4 **)((int)this + 0x20);
  while( true ) {
    if (puVar1 == *(undefined4 **)((int)this + 0x20)) {
      return 0;
    }
    if (puVar1[2] == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return 1;
}

