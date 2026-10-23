// FUNCTION: PORT1111 0x0047e660
// name: FUN_0047e660
// sig: undefined FUN_0047e660(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, int param_4)


void __thiscall
FUN_0047e660(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int xLeft;
  int yTop;
  tagRECT local_10;
  
  if (((param_4 == 0) && (*(int *)((int)this + 0x24) != 0)) &&
     (iVar1 = *(int *)((int)this + 0x28), iVar1 != 0)) {
    xLeft = *(int *)((int)this + 0x18) * *(int *)((int)this + 0x24);
    yTop = *(int *)((int)this + 0x1c) * iVar1;
    SetRect(&local_10,xLeft,yTop,*(int *)((int)this + 0x24) + xLeft,iVar1 + yTop);
    (**(code **)(**(int **)((int)this + 4) + 0x44))
              (param_1,*(undefined4 *)((int)this + 8),param_2,param_3,&local_10);
    return;
  }
  (**(code **)(**(int **)((int)this + 4) + 0x44))
            (param_1,*(undefined4 *)((int)this + 8),param_2,param_3,param_4);
  return;
}

