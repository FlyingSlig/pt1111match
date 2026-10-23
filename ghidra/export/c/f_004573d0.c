// FUNCTION: PORT1111 0x004573d0
// name: FUN_004573d0
// sig: undefined4 * FUN_004573d0(void * this, undefined4 param_1)


undefined4 * __thiscall FUN_004573d0(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_004748f0();
  *(int *)((int)this + 8) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)((int)this + 8) + 4) = *(int *)((int)this + 8);
  *(undefined4 *)*(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 8);
  *(int *)(*(int *)((int)this + 8) + 8) = *(int *)((int)this + 8);
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)this = param_1;
  return this;
}

