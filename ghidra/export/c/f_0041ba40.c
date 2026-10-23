// FUNCTION: PORT1111 0x0041ba40
// name: FUN_0041ba40
// sig: uint FUN_0041ba40(void * this, uint param_1)


uint __thiscall FUN_0041ba40(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(void **)((int)this + 0x44) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x44));
  }
  if (((*(int *)((int)this + 0x40) != 0) || (*(int *)((int)this + 0x48) != 0)) ||
     (*(int *)((int)this + 0x58) != 0)) {
    if (*(void **)((int)this + 0x40) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 0x40));
    }
    if (*(void **)((int)this + 0x48) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 0x48));
    }
    if (*(void **)((int)this + 0x58) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 0x58));
    }
  }
  uVar1 = FUN_00439060(param_1,(int *)((int)this + 0x2c),(undefined4 *)((int)this + 0x30));
  if ((char)uVar1 == '\0') {
    return uVar1 & 0xffffff00;
  }
  iVar2 = *(int *)((int)this + 0x2c);
  *(int *)((int)this + 0x10) = (iVar2 + -1) / 2;
  iVar2 = iVar2 / 2;
  *(int *)((int)this + 0x14) = iVar2;
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}

