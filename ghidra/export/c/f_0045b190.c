// FUNCTION: PORT1111 0x0045b190
// name: FUN_0045b190
// sig: undefined FUN_0045b190(void * this, uint param_1, int * param_2)


void __thiscall FUN_0045b190(void *this,uint param_1,int *param_2)

{
  if (*(void **)((int)this + 0x380) != (void *)0x0) {
    FUN_00481a20(*(void **)((int)this + 0x380),param_1,param_2);
  }
  if (*(void **)((int)this + 0x63c) != (void *)0x0) {
    FUN_00481a20(*(void **)((int)this + 0x63c),param_1,param_2);
  }
  if (*(void **)((int)this + 0x8f8) != (void *)0x0) {
    FUN_00481a20(*(void **)((int)this + 0x8f8),param_1,param_2);
  }
  if (*(void **)((int)this + 0xbb4) != (void *)0x0) {
    FUN_00481a20(*(void **)((int)this + 0xbb4),param_1,param_2);
  }
  FUN_00481a20((void *)((int)this + 0x4c),param_1,param_2);
  if (*(int *)((int)this + 0xcc) != 0) {
    *(undefined4 *)((int)this + 0xcc) = 0;
    *(undefined4 *)((int)this + 0xd4) = 1;
    FUN_0045afa0(this);
  }
  return;
}

