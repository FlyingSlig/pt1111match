// FUNCTION: PORT1111 0x004181d0
// name: FUN_004181d0
// sig: undefined FUN_004181d0(void * this, uint param_1)


void __thiscall FUN_004181d0(void *this,uint param_1)

{
  if (*(void **)((int)this + 0x44) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x44));
  }
  FUN_00439060(param_1,(int *)((int)this + 0x2c),(undefined4 *)((int)this + 0x30));
  return;
}

