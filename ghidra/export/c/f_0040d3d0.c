// FUNCTION: PORT1111 0x0040d3d0
// name: FUN_0040d3d0
// sig: undefined4 * FUN_0040d3d0(void * this, int param_1)


undefined4 * __thiscall FUN_0040d3d0(void *this,int param_1)

{
  FUN_00408ae0(this,param_1,0xc000);
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined ***)this = &PTR_FUN_004be308;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_004be2e0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  return this;
}

