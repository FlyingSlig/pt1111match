// FUNCTION: PORT1111 0x0047faf0
// name: FUN_0047faf0
// sig: undefined4 FUN_0047faf0(void * this, int param_1, int param_2, undefined4 param_3)


undefined4 __thiscall FUN_0047faf0(void *this,int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  HDC hdc;
  HBITMAP pHVar4;
  int iVar5;
  
  (**(code **)(*(int *)this + 0x5c))();
  iVar1 = FUN_0046b1c0(param_3);
  iVar5 = iVar1;
  if (iVar1 == 0xf) {
    iVar5 = 0x10;
  }
  iVar2 = FUN_0047f9e0(this,iVar1,param_1,param_2,*(int *)((int)this + 0x30));
  if (iVar2 == 0) {
    return 0;
  }
  **(undefined4 **)((int)this + 0x28) = 0x28;
  *(int *)(*(int *)((int)this + 0x28) + 4) = param_1;
  *(int *)(*(int *)((int)this + 0x28) + 8) = param_2;
  *(undefined2 *)(*(int *)((int)this + 0x28) + 0xc) = 1;
  *(short *)(*(int *)((int)this + 0x28) + 0xe) = (short)iVar5;
  *(undefined4 *)(*(int *)((int)this + 0x28) + 0x10) = 0;
  *(uint *)(*(int *)((int)this + 0x28) + 0x14) =
       (iVar5 * param_1 + 0x1fU >> 3 & 0x1ffffffc) * param_2;
  *(undefined4 *)(*(int *)((int)this + 0x28) + 0x18) = 0;
  *(undefined4 *)(*(int *)((int)this + 0x28) + 0x1c) = 0;
  iVar5 = FUN_0046ab90(iVar5);
  *(int *)(*(int *)((int)this + 0x28) + 0x20) = iVar5;
  *(undefined4 *)(*(int *)((int)this + 0x28) + 0x24) = 0;
  if (iVar1 == 0x10) {
    *(undefined4 *)(*(int *)((int)this + 0x28) + 0x10) = 3;
    puVar3 = (undefined4 *)(**(code **)(*(int *)this + 0x18))();
    *puVar3 = 0xf800;
    puVar3[1] = 0x7e0;
  }
  else {
    if (iVar1 != 0xf) goto LAB_0047fbf3;
    *(undefined4 *)(*(int *)((int)this + 0x28) + 0x10) = 3;
    puVar3 = (undefined4 *)(**(code **)(*(int *)this + 0x18))();
    *puVar3 = 0x7c00;
    puVar3[1] = 0x3e0;
  }
  puVar3[2] = 0x1f;
LAB_0047fbf3:
  if (*(int *)((int)this + 0x30) != 0) {
    hdc = GetDC((HWND)0x0);
    pHVar4 = CreateDIBSection(hdc,*(BITMAPINFO **)((int)this + 0x28),0,(void **)((int)this + 0x2c),
                              (HANDLE)0x0,0);
    *(HBITMAP *)((int)this + 0x20) = pHVar4;
    if (pHVar4 == (HBITMAP)0x0) {
      ReleaseDC((HWND)0x0,hdc);
      (**(code **)(*(int *)this + 0x5c))();
      return 0;
    }
    ReleaseDC((HWND)0x0,hdc);
  }
  return 1;
}

