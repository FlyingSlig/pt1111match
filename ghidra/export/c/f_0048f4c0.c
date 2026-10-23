// FUNCTION: PORT1111 0x0048f4c0
// name: FUN_0048f4c0
// sig: undefined FUN_0048f4c0(HDC param_1, LOGPEN * param_2, int * param_3, uint param_4)


void __cdecl FUN_0048f4c0(HDC param_1,LOGPEN *param_2,int *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  HGDIOBJ pvVar5;
  HGDIOBJ h;
  int iVar6;
  HPEN pHVar7;
  int iVar8;
  int bottom;
  HPEN local_4c;
  HPEN local_48;
  HPEN local_44;
  LOGPEN local_28;
  POINT local_18;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_4c = (HPEN)0x0;
  local_48 = (HPEN)0x0;
  local_44 = (HPEN)0x0;
  if (param_2 != (LOGPEN *)0x0) {
    (param_2->lopnWidth).x = param_4;
    (param_2->lopnWidth).y = param_4;
    local_4c = CreatePenIndirect(param_2);
    if (local_4c == (HPEN)0x0) {
      return;
    }
    local_28.lopnStyle = param_2->lopnStyle;
    local_28.lopnColor = param_2->lopnColor;
    local_28.lopnWidth.x = 1;
    local_28.lopnWidth.y = 1;
    local_28.lopnColor = FUN_0048f420(param_2->lopnColor,0x14);
    local_48 = CreatePenIndirect(&local_28);
    local_28.lopnColor = FUN_0048f420(param_2->lopnColor,-0x14);
    local_44 = CreatePenIndirect(&local_28);
  }
  pvVar5 = GetStockObject(5);
  pvVar5 = SelectObject(param_1,pvVar5);
  pHVar7 = local_4c;
  if (param_2 == (LOGPEN *)0x0) {
    pHVar7 = GetStockObject(8);
  }
  h = SelectObject(param_1,pHVar7);
  iVar1 = param_3[2];
  iVar2 = param_3[1];
  iVar3 = *param_3;
  iVar4 = param_3[3];
  iVar6 = ((int)param_4 >> 1) + 1;
  iVar8 = (~param_4 & 1) - iVar6;
  bottom = iVar4 + iVar8;
  iVar8 = iVar8 + iVar1;
  Rectangle(param_1,iVar6 + iVar3,iVar6 + iVar2,iVar8,bottom);
  pHVar7 = local_48;
  if (local_48 == (HPEN)0x0) {
    pHVar7 = GetStockObject(6);
  }
  SelectObject(param_1,pHVar7);
  local_4 = bottom + 1;
  local_18.x = iVar8;
  local_18.y = iVar2;
  local_10 = iVar3;
  local_c = iVar2;
  local_8 = iVar3;
  Polyline(param_1,&local_18,3);
  local_18.x = (iVar1 - param_4) + -2;
  iVar6 = param_4 + 1 + iVar2;
  iVar8 = (iVar4 - param_4) + -2;
  local_18.y = iVar6;
  local_10 = local_18.x;
  local_c = iVar8;
  local_8 = param_4 + iVar3;
  local_4 = iVar8;
  Polyline(param_1,&local_18,3);
  pHVar7 = local_44;
  if (local_44 == (HPEN)0x0) {
    pHVar7 = GetStockObject(7);
  }
  SelectObject(param_1,pHVar7);
  local_18.x = iVar1 + -1;
  local_c = iVar4 + -1;
  local_8 = iVar3 + -1;
  local_18.y = iVar2;
  local_10 = local_18.x;
  local_4 = local_c;
  Polyline(param_1,&local_18,3);
  local_10 = param_4 + iVar3 + 1;
  local_18.x = (iVar1 - param_4) + -3;
  local_18.y = iVar6;
  local_c = iVar6;
  local_8 = local_10;
  local_4 = iVar8;
  Polyline(param_1,&local_18,3);
  SelectObject(param_1,pvVar5);
  SelectObject(param_1,h);
  if (local_4c != (HPEN)0x0) {
    DeleteObject(local_4c);
  }
  if (local_48 != (HPEN)0x0) {
    DeleteObject(local_48);
  }
  if (local_44 != (HPEN)0x0) {
    DeleteObject(local_44);
  }
  return;
}

