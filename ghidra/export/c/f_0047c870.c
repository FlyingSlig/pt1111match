// FUNCTION: PORT1111 0x0047c870
// name: FUN_0047c870
// sig: undefined FUN_0047c870(void * this, int param_1)


void __thiscall FUN_0047c870(void *this,int param_1)

{
  undefined4 uVar1;
  HWND pHVar2;
  tagRECT *lpRect;
  BOOL BVar3;
  RECT *lpRect_00;
  tagRECT tStack_10;
  
  if (*(int *)((int)this + 0x38) == 0) {
    return;
  }
  if (*(int **)((int)this + 0x28) == (int *)0x0) {
    return;
  }
  (**(code **)(**(int **)((int)this + 0x28) + 0x14))();
  uVar1 = (**(code **)(**(int **)((int)this + 0x34) + 0x54))();
  *(undefined4 *)(*(int *)((int)this + 0x24) + 0x814) = uVar1;
  if (param_1 != 0) {
    BVar3 = 0;
    lpRect = &tStack_10;
    pHVar2 = (HWND)(**(code **)(**(int **)((int)this + 0x34) + 0x4c))();
    BVar3 = GetUpdateRect(pHVar2,lpRect,BVar3);
    if (BVar3 != 0) {
      lpRect_00 = (RECT *)0x0;
      pHVar2 = (HWND)(**(code **)(**(int **)((int)this + 0x34) + 0x4c))();
      ValidateRect(pHVar2,lpRect_00);
      (**(code **)(**(int **)((int)this + 0x24) + 0x54))();
      (**(code **)(**(int **)((int)this + 0x28) + 0x1c))(0);
      (**(code **)(**(int **)((int)this + 0x24) + 0x4c))(0);
      (**(code **)(**(int **)((int)this + 0x24) + 0x58))();
      (**(code **)(**(int **)((int)this + 0x24) + 100))();
      goto LAB_0047c90f;
    }
  }
  (**(code **)(**(int **)((int)this + 0x28) + 0x18))(0);
LAB_0047c90f:
  (**(code **)(**(int **)((int)this + 0x34) + 0x58))();
  *(undefined4 *)(*(int *)((int)this + 0x24) + 0x814) = 0;
  return;
}

