// FUNCTION: PORT1111 0x004037c0
// name: FUN_004037c0
// sig: undefined FUN_004037c0(void * this, int param_1)


void __thiscall FUN_004037c0(void *this,int param_1)

{
  if (*(void **)((int)this + 0x2c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x2c));
  }
  FUN_00439140(param_1,*(int *)((int)this + 0x28),*(int *)((int)this + 0x28),
               (int *)((int)this + 0x2c));
  return;
}

