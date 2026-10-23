// FUNCTION: PORT1111 0x00496da0
// name: FUN_00496da0
// sig: undefined4 FUN_00496da0(void * this, HWND param_1, int param_2, int param_3)


undefined4 __thiscall FUN_00496da0(void *this,HWND param_1,int param_2,int param_3)

{
  int iVar1;
  DWORD dwExStyle;
  HMENU pHVar2;
  DWORD dwStyle;
  undefined *unaff_EBX;
  undefined4 *unaff_ESI;
  int unaff_EDI;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint bMenu;
  undefined4 *puStack_c4;
  undefined *puStack_c0;
  LONG LStack_bc;
  undefined4 auStack_a4 [26];
  undefined4 uStack_3c;
  
  LStack_bc = 0x496db6;
  (**(code **)(*(int *)this + 4))();
  LStack_bc = 0;
  puStack_c0 = &DAT_004c4bf0;
  puStack_c4 = (undefined4 *)((int)this + 8);
  iVar1 = DirectDrawCreateEx();
  if (-1 < iVar1) {
    iVar1 = (**(code **)(**(int **)((int)this + 8) + 0x50))();
    if (-1 < iVar1) {
      SetRect((LPRECT)&puStack_c4,0,0,param_2,param_3);
      dwExStyle = GetWindowLongA(param_1,-0x14);
      pHVar2 = GetMenu(param_1);
      bMenu = (uint)(pHVar2 != (HMENU)0x0);
      dwStyle = GetWindowLongA(param_1,-0x10);
      AdjustWindowRectEx((LPRECT)&puStack_c4,dwStyle,bMenu,dwExStyle);
      SetWindowPos(param_1,(HWND)0x0,0,0,LStack_bc - (int)puStack_c4,unaff_EDI - (int)puStack_c0,
                   0x16);
      SetWindowPos(param_1,(HWND)0xfffffffe,0,0,0,0,0x13);
      SystemParametersInfoA(0x30,0,&stack0xffffff4c,0);
      GetWindowRect(param_1,(LPRECT)&puStack_c4);
      if ((int)puStack_c4 < (int)unaff_ESI) {
        puStack_c4 = unaff_ESI;
      }
      if ((int)puStack_c0 < (int)unaff_EBX) {
        puStack_c0 = unaff_EBX;
      }
      SetWindowPos(param_1,(HWND)0x0,(int)puStack_c4,(int)puStack_c0,0,0,0x15);
      puVar3 = auStack_a4;
      for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      auStack_a4[0] = 0x7c;
      auStack_a4[1] = 1;
      uStack_3c = 0x200;
      iVar1 = (**(code **)(**(int **)((int)this + 8) + 0x18))
                        (*(int **)((int)this + 8),auStack_a4,(undefined4 *)((int)this + 0x10));
      if (-1 < iVar1) {
        piVar5 = *(int **)((int)this + 8);
        piVar6 = (int *)0x0;
        iVar1 = (**(code **)(*piVar5 + 0x10))(piVar5,0,&stack0xffffff28);
        if (-1 < iVar1) {
          piVar4 = (int *)0x0;
          iVar1 = (**(code **)(*piVar6 + 0x20))(piVar6,0,param_1);
          if (iVar1 < 0) {
            (**(code **)(*piVar5 + 8))(piVar5);
            return 0x80004005;
          }
          piVar6 = *(int **)((int)this + 0x10);
          iVar1 = (**(code **)(*piVar6 + 0x70))(piVar6,piVar5);
          if (-1 < iVar1) {
            (**(code **)(*piVar4 + 8))(piVar4);
            *(HWND *)((int)this + 0x1c) = param_1;
            *(undefined4 *)((int)this + 0x30) = 1;
            FUN_004968e0((int)this);
            return 0;
          }
          (**(code **)(*piVar4 + 8))();
        }
      }
    }
  }
  return 0x80004005;
}

