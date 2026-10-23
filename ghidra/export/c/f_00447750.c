// FUNCTION: PORT1111 0x00447750
// name: FUN_00447750
// sig: undefined4 FUN_00447750(int param_1)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined4 __fastcall FUN_00447750(int param_1)

{
  HANDLE hFindFile;
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  LPCSTR lpFileName;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  BOOL BVar7;
  uchar *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char *pcVar14;
  _WIN32_FIND_DATAA *p_Var15;
  undefined4 uVar16;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  HANDLE local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  _WIN32_FIND_DATAA local_160;
  undefined4 local_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_004b85bc;
  pvStack_14 = ExceptionList;
  local_1c = DAT_004ddb0c;
  ExceptionList = &pvStack_14;
  pvVar1 = (void *)FUN_0047d020(*(void **)(param_1 + 0x24),0);
  if (*(int *)(param_1 + 0x324) == 0) {
    puVar3 = FUN_004680b0(DAT_004e2b14,&local_190,"m280x280b.png");
    iVar2 = *(int *)((int)DAT_004e2b14 + 100);
    local_c = 0;
    puVar8 = (uchar *)FUN_00465e00(puVar3);
    FUN_00472560(pvVar1,puVar8,iVar2);
    local_c = 0xffffffff;
    FUN_00465e40(&local_190);
  }
  else {
    *(undefined4 *)(*(int *)(*(int *)((int)pvVar1 + 0x44) + 4) + 0xc) = 2;
  }
  local_184 = 0x15;
  local_180 = 0x16;
  local_17c = 0x17;
  local_178 = 0x18;
  local_174 = 0x19;
  local_170 = 0x1a;
  local_16c = 0x1b;
  local_168 = 0x1c;
  local_164 = 0x1d;
  iVar2 = FUN_00483b70((int *)(param_1 + 0x4c),1,*(undefined4 *)(param_1 + 0x24),9,(int)&local_184,6
                       ,7,0xffff,0,1,9,8,2,0x800);
  if (iVar2 == 0) {
    ExceptionList = pvStack_14;
    return 0;
  }
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  FUN_00481030(*(void **)(param_1 + 0x2f4),1);
  if (*(void **)(param_1 + 0x2f4) != (void *)0x0) {
    FUN_004810d0(*(void **)(param_1 + 0x2f4),1);
  }
  local_160.dwFileAttributes = 0;
  p_Var15 = &local_160;
  for (iVar2 = 0x4f; p_Var15 = (_WIN32_FIND_DATAA *)&p_Var15->ftCreationTime, iVar2 != 0;
      iVar2 = iVar2 + -1) {
    ((FILETIME *)p_Var15)->dwLowDateTime = 0;
  }
  puVar3 = FUN_00466fb0((void *)(param_1 + 0x31c),&local_190,"\\*.");
  local_c = 1;
  FUN_00466fd0(puVar3,&local_18c,(undefined4 *)(param_1 + 800));
  local_c = CONCAT31(local_c._1_3_,3);
  FUN_00465e40(&local_190);
  p_Var15 = &local_160;
  lpFileName = (LPCSTR)FUN_00465e00(&local_18c);
  local_188 = FindFirstFileA(lpFileName,p_Var15);
  if (local_188 != (HANDLE)0xffffffff) {
    do {
      FUN_00466af0(&local_194,(uchar *)local_160.cFileName,0xffffffff);
      local_c._0_1_ = 4;
      if ((*(int *)(param_1 + 0x328) != 0) &&
         (uVar4 = FUN_00466450(&local_194,'.'), uVar4 != 0xffffffff)) {
        iVar2 = FUN_00465d00((undefined4 *)(param_1 + 800));
        piVar5 = FUN_00466bc0(&local_194,uVar4,iVar2 + uVar4);
        FUN_00466a50(&local_194,piVar5);
      }
      iVar2 = *(int *)(param_1 + 0x4c);
      uVar16 = 1;
      uVar13 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar6 = FUN_00465e00(&local_194);
      (**(code **)(iVar2 + 0x18))(uVar6,uVar9,uVar10,uVar11,uVar12,uVar13,uVar16);
      local_c = CONCAT31(local_c._1_3_,3);
      FUN_00465e40(&local_194);
      hFindFile = local_188;
      BVar7 = FindNextFileA(local_188,&local_160);
    } while (BVar7 != 0);
    FindClose(hFindFile);
  }
  iVar2 = *(int *)(param_1 + 0x308);
  if (iVar2 == 0) {
    iVar2 = *(int *)((int)DAT_004e2b14 + 0x60);
    pcVar14 = "tit_abrir.bmp";
  }
  else if (iVar2 == 1) {
    iVar2 = *(int *)((int)DAT_004e2b14 + 0x60);
    pcVar14 = "tit_gravar.bmp";
  }
  else {
    if (iVar2 != 2) goto LAB_004479f6;
    iVar2 = *(int *)((int)DAT_004e2b14 + 0x60);
    pcVar14 = "tit_escolha_mapa.png";
  }
  FUN_0047d670(*(void **)(param_1 + 0x24),0xdb,(uchar *)pcVar14,iVar2);
LAB_004479f6:
  pvVar1 = (void *)(param_1 + 0x30c);
  iVar2 = FUN_00481c90(pvVar1,*(void **)(param_1 + 0x24),0xd8);
  if (iVar2 == 0) {
    local_c = 0xffffffff;
    FUN_00465e40(&local_18c);
    ExceptionList = pvStack_14;
    return 0;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x314) + 0xe8) = 0xffffff;
  FUN_00481da0(pvVar1,5);
  puVar8 = (uchar *)FUN_00465e00((undefined4 *)(param_1 + 0x318));
  FUN_00481e30(pvVar1,puVar8);
  local_c = 0xffffffff;
  FUN_00465e40(&local_18c);
  ExceptionList = pvStack_14;
  return 1;
}

