// FUNCTION: PORT1111 0x00405f40
// name: FUN_00405f40
// sig: bool FUN_00405f40(void * this, int param_1)


bool __thiscall FUN_00405f40(void *this,int param_1)

{
  if (*(int *)((int)this + 0xb0) == 0) {
    return false;
  }
  return *(int *)(*(int *)((int)this + 0xb0) + 0x2c) == param_1;
}

