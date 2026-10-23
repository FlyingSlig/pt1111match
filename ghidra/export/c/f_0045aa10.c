// FUNCTION: PORT1111 0x0045aa10
// name: FUN_0045aa10
// sig: undefined FUN_0045aa10(void * this, int param_1)


void __thiscall FUN_0045aa10(void *this,int param_1)

{
  int iVar1;
  void *this_00;
  
  if (*(void **)((int)this + 0xbc8) != (void *)0x0) {
    FUN_00472050(*(void **)((int)this + 0xbc8),0xff,0xff,0xff);
    iVar1 = *(int *)(*(int *)((int)this + 0xbc8) + 0x94);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x20) = 0xffffff;
    }
    *(undefined4 *)(*(int *)((int)this + 0xbc8) + 0xa0) = 0;
    *(undefined4 *)((int)this + 0xbc8) = 0;
  }
  if (((-1 < param_1) && (param_1 < 3)) &&
     (this_00 = (void *)FUN_0047cf90(*(void **)((int)this + 0x24),
                                     *(uint *)(&DAT_004dc420 + param_1 * 4)), this_00 != (void *)0x0
     )) {
    FUN_00472050(this_00,0xff,0xd3,0x21);
    if (*(int *)((int)this_00 + 0x94) != 0) {
      *(undefined4 *)(*(int *)((int)this_00 + 0x94) + 0x20) = 0x21d3ff;
    }
    *(undefined4 *)((int)this_00 + 0xa0) = 1;
    *(void **)((int)this + 0xbc8) = this_00;
  }
  return;
}

