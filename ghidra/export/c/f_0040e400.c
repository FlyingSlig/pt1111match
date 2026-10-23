// FUNCTION: PORT1111 0x0040e400
// name: FUN_0040e400
// sig: undefined4 * FUN_0040e400(void * this, int param_1)


undefined4 * __thiscall FUN_0040e400(void *this,int param_1)

{
  undefined4 uVar1;
  
  FUN_00408ae0(this,param_1,0x100);
  *(undefined ***)this = &PTR_FUN_004be510;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_004be4e4;
  *(undefined4 *)((int)this + 300) = 0xffffffff;
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(*(int *)((int)this + 0x50) + 0xa8);
  uVar1 = *(undefined4 *)(*(int *)((int)this + 0x50) + 0x100);
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0xd8) = uVar1;
  return this;
}

