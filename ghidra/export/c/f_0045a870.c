// FUNCTION: PORT1111 0x0045a870
// name: FUN_0045a870
// sig: undefined FUN_0045a870(void * this, undefined4 param_1, int * param_2)


void __thiscall FUN_0045a870(void *this,undefined4 param_1,int *param_2)

{
  FUN_004817f0((void *)((int)this + 0x4c),param_1,param_2);
  if (*(void **)((int)this + 0x380) != (void *)0x0) {
    FUN_004817f0(*(void **)((int)this + 0x380),param_1,param_2);
  }
  if (*(void **)((int)this + 0x63c) != (void *)0x0) {
    FUN_004817f0(*(void **)((int)this + 0x63c),param_1,param_2);
  }
  if (*(void **)((int)this + 0x8f8) != (void *)0x0) {
    FUN_004817f0(*(void **)((int)this + 0x8f8),param_1,param_2);
  }
  if (*(void **)((int)this + 0xbb4) != (void *)0x0) {
    FUN_004817f0(*(void **)((int)this + 0xbb4),param_1,param_2);
  }
  return;
}

