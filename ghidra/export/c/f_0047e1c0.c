// FUNCTION: PORT1111 0x0047e1c0
// name: FUN_0047e1c0
// sig: undefined4 FUN_0047e1c0(void * this, LPRECT param_1, int param_2, int param_3)


undefined4 __thiscall FUN_0047e1c0(void *this,LPRECT param_1,int param_2,int param_3)

{
  int xLeft;
  int yTop;
  
  if ((*(int *)((int)this + 0x24) != 0) && (*(int *)((int)this + 0x28) != 0)) {
    yTop = *(int *)((int)this + 0x28) * param_3;
    xLeft = *(int *)((int)this + 0x24) * param_2;
    SetRect(param_1,xLeft,yTop,*(int *)((int)this + 0x24) + xLeft,*(int *)((int)this + 0x28) + yTop)
    ;
    return 1;
  }
  return 0;
}

