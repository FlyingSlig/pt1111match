// FUNCTION: PORT1111 0x00455c60
// name: FUN_00455c60
// sig: undefined4 FUN_00455c60(void * this, undefined4 param_1)


undefined4 __thiscall FUN_00455c60(void *this,undefined4 param_1)

{
  uint uVar1;
  void *this_00;
  undefined4 *puVar2;
  int iVar3;
  
  *(undefined4 *)((int)this + 0x8a0) = param_1;
  iVar3 = 0;
  puVar2 = (undefined4 *)((int)this + 0x8a4);
  do {
    uVar1 = FUN_0047d0a0(*(void **)((int)this + 0x8a0),iVar3 + 0xb);
    puVar2[1] = uVar1;
    if (uVar1 == 0) {
      return 0;
    }
    *puVar2 = 0;
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 2;
  } while (iVar3 < 0x12);
  iVar3 = FUN_004525c0((void *)((int)this + 0x18),*(void **)((int)this + 0x8a0));
  if (iVar3 != 0) {
    FUN_0047d610(*(void **)((int)this + 0x8a0),(int)this + 4,0x2e);
    this_00 = (void *)FUN_0047d060(*(void **)((int)this + 0x8a0),0x38);
    *(void **)((int)this + 0x14) = this_00;
    if (this_00 != (void *)0x0) {
      FUN_004737d0(this_00,"");
      iVar3 = FUN_00453270((void *)((int)this + 0x888),*(void **)((int)this + 0x8a0));
      if (iVar3 != 0) {
        FUN_00455220(this);
        return 1;
      }
    }
  }
  return 0;
}

