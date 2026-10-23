// FUNCTION: PORT1111 0x00453270
// name: FUN_00453270
// sig: undefined4 FUN_00453270(void * this, void * param_1)


undefined4 __thiscall FUN_00453270(void *this,void *param_1)

{
  int iVar1;
  
  *(void **)((int)this + 0xc) = param_1;
  iVar1 = FUN_0047cf90(param_1,0x2d);
  *(int *)((int)this + 4) = iVar1;
  if (iVar1 != 0) {
    iVar1 = FUN_0047cf90(*(void **)((int)this + 0xc),0x34);
    *(int *)((int)this + 8) = iVar1;
    if (iVar1 != 0) {
      FUN_004737d0(*(void **)((int)this + 4),"0");
      FUN_004737d0(*(void **)((int)this + 8),"0");
      *(undefined4 *)((int)this + 0x10) = 1;
      *(undefined4 *)((int)this + 0x14) = 1;
      return 1;
    }
  }
  return 0;
}

