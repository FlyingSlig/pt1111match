// FUNCTION: PORT1111 0x0041b9d0
// name: FUN_0041b9d0
// sig: undefined FUN_0041b9d0(void * this, int param_1)


void __thiscall FUN_0041b9d0(void *this,int param_1)

{
  if (*(void **)((int)this + 0x58) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x58));
  }
  FUN_00439360(param_1,(undefined4 *)((int)this + 0x54));
  return;
}

