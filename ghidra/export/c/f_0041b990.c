// FUNCTION: PORT1111 0x0041b990
// name: FUN_0041b990
// sig: undefined FUN_0041b990(void * this, int param_1)


void __thiscall FUN_0041b990(void *this,int param_1)

{
  if (*(void **)((int)this + 0x58) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x58));
  }
  FUN_00439140(param_1,*(int *)((int)this + 0x54),*(int *)((int)this + 0x54),
               (int *)((int)this + 0x58));
  return;
}

