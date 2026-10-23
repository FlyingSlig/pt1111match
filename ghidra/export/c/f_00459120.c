// FUNCTION: PORT1111 0x00459120
// name: FUN_00459120
// sig: undefined4 FUN_00459120(char * param_1, int param_2)


undefined4 FUN_00459120(char *param_1,int param_2)

{
  void *this;
  uchar *puVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  size_t sVar6;
  undefined1 *puVar7;
  DWORD DVar8;
  DWORD DVar9;
  int iVar10;
  undefined4 local_35c;
  undefined4 local_358;
  int local_354;
  undefined1 *local_350;
  undefined1 *local_34c;
  undefined **local_348 [4];
  size_t local_338;
  undefined4 local_334;
  undefined4 local_330;
  int local_32c [200];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9182;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004884d0(local_348);
  local_348[0] = &PTR_FUN_004c46fc;
  local_4 = 0;
  FUN_00465cf0(&local_358);
  local_4._0_1_ = 1;
  FUN_00466b20(&local_35c,(undefined4 *)&DAT_004e2a80);
  local_4._0_1_ = 2;
  thunk_FUN_00466040(&local_35c,"\\");
  thunk_FUN_00466040(&local_35c,param_1);
  iVar10 = 1;
  DVar9 = 0;
  DVar8 = 0x40000000;
  puVar1 = (uchar *)FUN_00465e00(&local_35c);
  iVar10 = FUN_00488560(local_348,puVar1,DVar8,DVar9,iVar10);
  if (iVar10 == 0) {
LAB_00459414:
    local_4._0_1_ = 1;
    FUN_00465e40(&local_35c);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00465e40(&local_358);
    local_4 = 0xffffffff;
    FUN_00488880(local_348);
    uVar5 = 0;
  }
  else {
    local_354 = **(int **)(param_2 + 8);
    local_338 = 0;
    sVar6 = local_338;
    if ((int *)local_354 != *(int **)(param_2 + 8)) {
      sVar6 = 0;
      do {
        iVar10 = *(int *)(local_354 + 0x10);
        iVar2 = FUN_004147d0(*(int *)(iVar10 + 0x14));
        local_32c[sVar6 * 2] = iVar2;
        local_32c[sVar6 * 2 + 1] = iVar10;
        sVar6 = sVar6 + 1;
        FUN_00413730(&local_354);
      } while (local_354 != *(int *)(param_2 + 8));
    }
    local_338 = sVar6;
    sVar6 = local_338;
    _qsort(local_32c,local_338,8,(_PtFuncCompare *)&LAB_00458d50);
    iVar10 = 0;
    if (0 < (int)sVar6) {
      do {
        this = (void *)local_32c[iVar10 * 2 + 1];
        pvVar3 = (void *)FUN_00465cf0(&local_354);
        local_4._0_1_ = 3;
        puVar4 = FUN_00466970(pvVar3,(byte *)"//%s\r\n");
        local_34c = &stack0xfffffc90;
        FUN_00466b20(&stack0xfffffc90,puVar4);
        iVar2 = FUN_00488950((int *)local_348);
        local_4._0_1_ = 2;
        FUN_00465e40(&local_354);
        if (iVar2 == 0) goto LAB_00459414;
        pvVar3 = (void *)FUN_00465cf0(&local_334);
        local_4._0_1_ = 4;
        puVar4 = FUN_00466970(pvVar3,(byte *)"<RULES #%d>\r\n");
        local_34c = &stack0xfffffc90;
        FUN_00466b20(&stack0xfffffc90,puVar4);
        iVar2 = FUN_00488950((int *)local_348);
        local_4._0_1_ = 2;
        FUN_00465e40(&local_334);
        if (iVar2 == 0) goto LAB_00459414;
        local_34c = (undefined1 *)FUN_00457c20((int)this);
        puVar7 = (undefined1 *)0x0;
        if (local_34c != (undefined1 *)0x0) {
          do {
            pvVar3 = (void *)FUN_00457ca0(this,(uint)puVar7);
            pvVar3 = FUN_004575b0(pvVar3,&local_330);
            local_350 = &stack0xfffffc90;
            local_4._0_1_ = 5;
            FUN_00466fb0(pvVar3,(undefined4 *)&stack0xfffffc90,"\r\n");
            iVar2 = FUN_00488950((int *)local_348);
            local_4._0_1_ = 2;
            FUN_00465e40(&local_330);
            if (iVar2 == 0) goto LAB_00459414;
            puVar7 = puVar7 + 1;
          } while (puVar7 < local_34c);
        }
        local_350 = &stack0xfffffc90;
        FUN_00466af0(&stack0xfffffc90,(uchar *)"</RULES>\r\n",0xffffffff);
        iVar2 = FUN_00488950((int *)local_348);
        if (iVar2 == 0) goto LAB_00459414;
        local_350 = &stack0xfffffc90;
        FUN_00466af0(&stack0xfffffc90,"\r\n",0xffffffff);
        FUN_00488950((int *)local_348);
        local_350 = &stack0xfffffc90;
        FUN_00466af0(&stack0xfffffc90,"\r\n",0xffffffff);
        FUN_00488950((int *)local_348);
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)local_338);
    }
    local_4._0_1_ = 1;
    FUN_00465e40(&local_35c);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00465e40(&local_358);
    local_4 = 0xffffffff;
    FUN_00488880(local_348);
    uVar5 = 1;
  }
  ExceptionList = local_c;
  return uVar5;
}

