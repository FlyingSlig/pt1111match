// FUNCTION: PORT1111 0x00429f40
// name: FUN_00429f40
// sig: undefined4 FUN_00429f40(void * this, uint param_1, uint param_2, uint param_3, int param_4, int param_5)


undefined4 __thiscall
FUN_00429f40(void *this,uint param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined3 extraout_var;
  void *pvVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *this_00;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint *puVar14;
  uint local_44;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_28;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b70cb;
  local_c = ExceptionList;
  iVar7 = *(uint *)((int)this + 0x10c) * param_2 + param_1;
  if (((((int)param_1 < 0) || (*(uint *)((int)this + 0x10c) <= param_1)) || ((int)param_2 < 0)) ||
     (*(uint *)((int)this + 0x110) <= param_2)) {
    local_44 = 0xffffffff;
    ExceptionList = &local_c;
  }
  else {
    ExceptionList = &local_c;
    iVar4 = FUN_00426730(iVar7 * 0x6c + *(int *)((int)this + 0x118));
    local_44 = *(uint *)(iVar4 + 0x28);
    if (local_44 == 0) {
      ExceptionList = local_c;
      return 0;
    }
  }
  bVar2 = FUN_00425ca0(*(int *)(DAT_004e2158 + param_3 * 4));
  if (((CONCAT31(extraout_var,bVar2) == 0) || (param_3 <= local_44)) ||
     ((*(uint *)((int)this + 0x10c) <= param_1 || (*(uint *)((int)this + 0x110) <= param_2)))) {
    ExceptionList = local_c;
    return 0;
  }
  uVar10 = param_2 - 1;
  uVar1 = param_1 - 1;
  local_3c = FUN_00429bd0(this,uVar1,uVar10);
  local_38 = FUN_00429bd0(this,param_1,uVar10);
  uVar9 = param_1 + 1;
  local_34 = FUN_00429bd0(this,uVar9,uVar10);
  local_30 = FUN_00429bd0(this,uVar9,param_2);
  uVar10 = param_2 + 1;
  uVar9 = FUN_00429bd0(this,uVar9,uVar10);
  local_28 = FUN_00429bd0(this,param_1,uVar10);
  uVar10 = FUN_00429bd0(this,uVar1,uVar10);
  local_20 = FUN_00429bd0(this,uVar1,param_2);
  if (((local_44 == local_3c) && (local_44 == local_38)) &&
     (((local_44 == local_34 &&
       (((local_44 == local_30 && (local_44 == uVar9)) && (local_44 == local_28)))) &&
      ((local_44 == uVar10 && (local_44 == local_20)))))) {
    ExceptionList = local_c;
    return 0;
  }
  local_44 = 0;
  if ((local_3c != 0xffffffff) && (local_3c == param_3)) {
    local_44 = 1;
  }
  if ((local_38 != 0xffffffff) && (local_38 == param_3)) {
    local_44 = local_44 + 2;
  }
  if ((local_34 != 0xffffffff) && (local_34 == param_3)) {
    local_44 = local_44 + 4;
  }
  if ((local_30 != 0xffffffff) && (local_30 == param_3)) {
    local_44 = local_44 + 8;
  }
  if ((uVar9 != 0xffffffff) && (uVar9 == param_3)) {
    local_44 = local_44 + 0x10;
  }
  if ((local_28 != 0xffffffff) && (local_28 == param_3)) {
    local_44 = local_44 + 0x20;
  }
  if ((uVar10 != 0xffffffff) && (uVar10 == param_3)) {
    local_44 = local_44 + 0x40;
  }
  if ((local_20 != 0xffffffff) && (local_20 == param_3)) {
    local_44 = local_44 + 0x80;
  }
  if (local_44 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  if (param_5 != 0) {
    ExceptionList = local_c;
    return 1;
  }
  iVar7 = iVar7 * 0x6c;
  pvVar5 = FUN_004272c0(*(int *)((int)this + 0x118) + iVar7);
  if ((DAT_004e20c0 & 1) == 0) goto LAB_0042a2da;
  pvVar6 = operator_new(0x30);
  this_00 = (undefined4 *)0x0;
  local_4 = 0;
  if (pvVar6 != (void *)0x0) {
    this_00 = (undefined4 *)FUN_0047e2c0(pvVar6,0);
  }
  local_4 = 0xffffffff;
  FUN_0047e3d0(this_00,(undefined1)DAT_004dd964,0x40,0x20,DAT_004dd960);
  puVar14 = &local_3c;
  uVar13 = 0;
  uVar12 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0x40;
  local_30 = 0x20;
  puVar11 = this_00;
  pvVar6 = (void *)FUN_00425900(*(void **)(DAT_004e2158 + param_3 * 4),param_1,param_2);
  FUN_0047e8d0(pvVar6,(int)puVar11,uVar12,uVar13,(int)puVar14);
  if (param_4 == 0) {
    iVar4 = FUN_004259e0(*(int *)(DAT_004e2158 + param_3 * 4));
LAB_0042a270:
    FUN_00426e10((void *)(*(int *)((int)this + 0x118) + iVar7),param_3,(char)iVar4);
  }
  else {
    cVar3 = FUN_00426760((void *)(*(int *)((int)this + 0x118) + iVar7),param_3);
    iVar4 = (int)cVar3;
    if (iVar4 < 0) {
LAB_0042a248:
      iVar4 = FUN_004259e0(*(int *)(DAT_004e2158 + param_3 * 4));
      goto LAB_0042a270;
    }
    if (DAT_004e2158 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = DAT_004e215c - DAT_004e2158 >> 2;
    }
    if (iVar8 <= iVar4) goto LAB_0042a248;
  }
  uVar12 = 0;
  iVar4 = FUN_00424a50(*(void **)(DAT_004e2168 + iVar4 * 4),local_44);
  FUN_0047e570(this_00,iVar4,uVar12);
  local_1c = 0;
  local_18 = 0;
  local_14 = 0x40;
  local_10 = 0x20;
  FUN_0047e8d0(this_00,(int)pvVar5,0,0,(int)&local_1c);
  FUN_0047e280((int)this_00);
  if (this_00 != (undefined4 *)0x0) {
    (**(code **)*this_00)(1);
  }
LAB_0042a2da:
  (**(code **)(**(int **)((int)pvVar5 + 4) + 0x3c))(0);
  FUN_00427630((void *)(*(int *)((int)this + 0x118) + iVar7),pvVar5,0);
  ExceptionList = local_c;
  return 1;
}

