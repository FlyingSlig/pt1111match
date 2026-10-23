// FUNCTION: PORT1111 0x004180a0
// name: FUN_004180a0
// sig: undefined FUN_004180a0(void * this, int param_1)


void __thiscall FUN_004180a0(void *this,int param_1)

{
  if (*(void **)((int)this + 0x120) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x120));
  }
  FUN_00439360(param_1,(undefined4 *)((int)this + 0x11c));
  return;
}

