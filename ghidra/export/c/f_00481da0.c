// FUNCTION: PORT1111 0x00481da0
// name: FUN_00481da0
// sig: undefined FUN_00481da0(void * this, int param_1)


void __thiscall FUN_00481da0(void *this,int param_1)

{
  undefined4 unaff_ESI;
  int unaff_retaddr;
  LONG local_10;
  LONG LStack_c;
  LONG LStack_8;
  
  (**(code **)(**(int **)((int)this + 8) + 0x30))(&local_10);
  InflateRect((LPRECT)&stack0xffffffec,-unaff_retaddr,-param_1);
  (**(code **)(**(int **)((int)this + 8) + 0x3c))(unaff_ESI,local_10,LStack_c,LStack_8);
  *(undefined4 *)(*(int *)((int)this + 8) + 0xf0) = 1;
  return;
}

