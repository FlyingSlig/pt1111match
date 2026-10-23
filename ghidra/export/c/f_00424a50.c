// FUNCTION: PORT1111 0x00424a50
// name: FUN_00424a50
// sig: int FUN_00424a50(void * this, int param_1)


int __thiscall FUN_00424a50(void *this,int param_1)

{
  return (&DAT_004d6450)[param_1] * 0x30 + *(int *)((int)this + 8);
}

