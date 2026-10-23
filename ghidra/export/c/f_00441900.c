// FUNCTION: PORT1111 0x00441900
// name: FUN_00441900
// sig: undefined4 FUN_00441900(void * this, int param_1)


undefined4 __thiscall FUN_00441900(void *this,int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)**(undefined4 **)((int)this + 0x10);
  while( true ) {
    if (puVar1 == *(undefined4 **)((int)this + 0x10)) {
      return 0;
    }
    if (puVar1[2] == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return 1;
}

