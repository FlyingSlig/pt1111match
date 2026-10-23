// FUNCTION: PORT1111 0x00489f50
// name: FUN_00489f50
// sig: undefined FUN_00489f50(int param_1)


void __fastcall FUN_00489f50(int param_1)

{
  int *piVar1;
  int iVar2;
  HGDIOBJ pvVar3;
  HPEN h;
  BOOL BVar4;
  int *unaff_retaddr;
  HDC hdc;
  RECT local_20;
  int *piStack_4;
  
  hdc = *(HDC *)(*(int *)(param_1 + 0x834) + 0x2c);
  local_20.bottom = param_1;
  iVar2 = (**(code **)(hdc->unused + 0x44))(hdc,&local_20);
  if (-1 < iVar2) {
    pvVar3 = GetStockObject(5);
    pvVar3 = SelectObject(hdc,pvVar3);
    h = CreatePen(0,1,0xffffff);
    local_20.left = (LONG)SelectObject(hdc,h);
    Rectangle(hdc,*piStack_4,piStack_4[1],*unaff_retaddr,unaff_retaddr[1]);
    SelectObject(hdc,pvVar3);
    SelectObject(hdc,(HGDIOBJ)local_20.left);
    DeleteObject(h);
    piVar1 = *(int **)(*(int *)(local_20.top + 0x834) + 0x2c);
    (**(code **)(*piVar1 + 0x68))(piVar1,hdc);
    local_20.left = *piStack_4;
    local_20.right = *unaff_retaddr;
    local_20.bottom = unaff_retaddr[1];
    local_20.top = piStack_4[1];
    CRect::NormalizeRect((CRect *)&local_20);
    BVar4 = IsRectEmpty(&local_20);
    if (BVar4 == 0) {
      FUN_0040ff50();
    }
  }
  return;
}

