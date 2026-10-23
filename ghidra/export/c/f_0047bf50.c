// FUNCTION: PORT1111 0x0047bf50
// name: FUN_0047bf50
// sig: undefined FUN_0047bf50(void * this, undefined1 param_1, int param_2)


void __thiscall FUN_0047bf50(void *this,undefined1 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0xc);
  *(undefined1 *)(iVar1 + 0x11) = 0xff;
  *(undefined1 *)(iVar1 + 0x10) = param_1;
  iVar1 = *(int *)((int)this + 0xc);
  if ((*(char *)(iVar1 + 0x11) == -1) && (*(int *)(iVar1 + 4) != 0)) {
    if ((*(int *)(iVar1 + 0xc) == 0) && (iVar1 = FUN_0047bf20(this,param_2), iVar1 == 0)) {
      return;
    }
    *(short *)((int)this + 6) = *(short *)((int)this + 6) + **(short **)((int)this + 0xc);
    *(short *)((int)this + 8) = *(short *)((int)this + 8) + (*(short **)((int)this + 0xc))[1];
  }
  return;
}

