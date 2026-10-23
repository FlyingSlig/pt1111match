// FUNCTION: PORT1111 0x00403800
// name: FUN_00403800
// sig: undefined FUN_00403800(void * this, int param_1)


void __thiscall FUN_00403800(void *this,int param_1)

{
  if (*(void **)((int)this + 0x2c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x2c));
  }
  FUN_00439360(param_1,(undefined4 *)((int)this + 0x28));
  return;
}

