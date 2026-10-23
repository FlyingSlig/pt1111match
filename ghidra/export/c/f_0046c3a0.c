// FUNCTION: PORT1111 0x0046c3a0
// name: FUN_0046c3a0
// sig: int * FUN_0046c3a0(void * this, undefined4 param_1, int param_2, undefined4 param_3)


int * __thiscall FUN_0046c3a0(void *this,undefined4 param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  HDC hdc;
  HDC hdc_00;
  HDC pHVar5;
  HGDIOBJ h;
  HGDIOBJ h_00;
  RGBQUAD *pRVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  HDC hdc_01;
  int unaff_EDI;
  int xSrc;
  int ySrc;
  DWORD DVar10;
  
  if ((*(int *)((int)this + 4) == 2) || (*(int *)((int)this + 0x20) == 0)) {
    return (int *)0x0;
  }
  piVar2 = FUN_0046abb0(*(int *)((int)this + 4),*(int *)((int)this + 0x20));
  iVar3 = (**(code **)(*piVar2 + 0x54))(param_3,param_1,param_2);
  if (iVar3 == 0) {
    (**(code **)*piVar2)(1);
    return (int *)0x0;
  }
  if (param_2 == 0) {
    iVar3 = *piVar2;
    uVar4 = (**(code **)(*(int *)this + 0x1c))();
    uVar4 = (**(code **)(*(int *)this + 0x18))(uVar4);
    (**(code **)(iVar3 + 0x78))(uVar4);
  }
  else {
    (**(code **)(*piVar2 + 0x78))(param_2 + 0x28,*(undefined4 *)(param_2 + 0x20));
  }
  hdc = GetDC((HWND)0x0);
  hdc_00 = CreateCompatibleDC(hdc);
  pHVar5 = CreateCompatibleDC(hdc);
  hdc_01 = pHVar5;
  h = SelectObject(hdc_00,*(HGDIOBJ *)((int)this + 0x20));
  h_00 = SelectObject(pHVar5,(HGDIOBJ)piVar2[8]);
  bVar1 = (**(code **)(*(int *)this + 0xc))();
  if (bVar1 < 9) {
    pRVar6 = (RGBQUAD *)(**(code **)(*(int *)this + 0x18))();
    bVar1 = (**(code **)(*(int *)this + 0xc))();
    SetDIBColorTable(hdc_00,0,1 << (bVar1 & 0x1f),pRVar6);
  }
  bVar1 = (**(code **)(*piVar2 + 0xc))();
  if (bVar1 < 9) {
    pRVar6 = (RGBQUAD *)(**(code **)(*piVar2 + 0x18))();
    bVar1 = (**(code **)(*piVar2 + 0xc))();
    SetDIBColorTable(pHVar5,0,1 << (bVar1 & 0x1f),pRVar6);
  }
  iVar3 = (**(code **)(*(int *)this + 4))();
  iVar7 = (**(code **)(*piVar2 + 4))();
  if (iVar3 == iVar7) {
    iVar3 = (**(code **)(*(int *)this + 8))();
    iVar7 = (**(code **)(*piVar2 + 8))();
    if (iVar3 != iVar7) goto LAB_0046c4e4;
  }
  else {
LAB_0046c4e4:
    if (unaff_EDI != 0) {
      SetStretchBltMode(hdc_01,3);
      DVar10 = 0xcc0020;
      iVar3 = (**(code **)(*(int *)this + 8))();
      iVar7 = (**(code **)(*(int *)this + 4))();
      ySrc = 0;
      xSrc = 0;
      pHVar5 = hdc_00;
      iVar8 = (**(code **)(*piVar2 + 8))();
      iVar9 = (**(code **)(*piVar2 + 4))();
      StretchBlt(hdc_01,0,0,iVar9,iVar8,pHVar5,xSrc,ySrc,iVar7,iVar3,DVar10);
      goto LAB_0046c559;
    }
  }
  DVar10 = 0xcc0020;
  iVar9 = 0;
  iVar8 = 0;
  pHVar5 = hdc_00;
  iVar3 = (**(code **)(*piVar2 + 8))();
  iVar7 = (**(code **)(*piVar2 + 4))();
  BitBlt(hdc_01,0,0,iVar7,iVar3,pHVar5,iVar8,iVar9,DVar10);
LAB_0046c559:
  SelectObject(hdc_00,h);
  SelectObject(hdc_00,h_00);
  DeleteDC(hdc_00);
  DeleteDC(hdc_01);
  ReleaseDC((HWND)0x0,hdc);
  GdiFlush();
  return piVar2;
}

