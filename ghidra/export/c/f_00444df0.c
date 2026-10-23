// FUNCTION: PORT1111 0x00444df0
// name: FUN_00444df0
// sig: undefined4 * FUN_00444df0(void * this, undefined4 param_1)


undefined4 * __thiscall FUN_00444df0(void *this,undefined4 param_1)

{
  int iVar1;
  
  *(undefined ***)this = &PTR_FUN_004c3768;
  iVar1 = FUN_004748f0();
  *(int *)((int)this + 0x10) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)((int)this + 0x10) + 4) = *(int *)((int)this + 0x10);
  *(undefined4 *)*(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)this + 0x10);
  *(int *)(*(int *)((int)this + 0x10) + 8) = *(int *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x34) = 0xffffffff;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  *(undefined4 *)((int)this + 0x24) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  return this;
}

