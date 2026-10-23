// FUNCTION: PORT1111 0x004128e0
// name: FUN_004128e0
// sig: undefined FUN_004128e0(void * this, LPRECT param_1)


void __thiscall FUN_004128e0(void *this,LPRECT param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x50);
  SetRect(param_1,*(int *)(iVar1 + 0x68) + *(int *)((int)this + 4),
          *(int *)(iVar1 + 0x6c) + *(int *)((int)this + 8),
          *(int *)(iVar1 + 0x70) + *(int *)((int)this + 4),
          *(int *)(iVar1 + 0x74) + *(int *)((int)this + 8));
  return;
}

