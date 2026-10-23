// FUNCTION: PORT1111 0x00447b80
// name: FUN_00447b80
// sig: undefined FUN_00447b80(void * param_1)


void __fastcall FUN_00447b80(void *param_1)

{
  bool bVar1;
  bool bVar2;
  uchar *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *extraout_ECX;
  char *extraout_ECX_00;
  char *pcVar10;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8662;
  local_c = ExceptionList;
  bVar2 = false;
  puVar9 = (undefined4 *)((int)param_1 + 0x318);
  ExceptionList = &local_c;
  puVar3 = (uchar *)FUN_00481e10((int)param_1 + 0x30c);
  FUN_00466a40(puVar9,puVar3);
  iVar4 = FUN_00466490(puVar9,"\\",0);
  while (-1 < iVar4 != 0) {
    uVar5 = FUN_00465d00(puVar9);
    puVar6 = FUN_00466d80(puVar9,&local_14,(uint)(-1 < iVar4),uVar5);
    local_4 = 0;
    FUN_00466a50(puVar9,puVar6);
    local_4 = 0xffffffff;
    FUN_00465e40(&local_14);
    iVar4 = FUN_00466490(puVar9,"\\",0);
  }
  iVar4 = FUN_00466490(puVar9,"/",0);
  while (-1 < iVar4 != 0) {
    uVar5 = FUN_00465d00(puVar9);
    puVar6 = FUN_00466d80(puVar9,&local_14,(uint)(-1 < iVar4),uVar5);
    local_4 = 1;
    FUN_00466a50(puVar9,puVar6);
    local_4 = 0xffffffff;
    FUN_00465e40(&local_14);
    iVar4 = FUN_00466490(puVar9,"/",0);
  }
  uVar5 = 0;
  iVar4 = FUN_00465d00(puVar9);
  pcVar10 = extraout_ECX;
  if (iVar4 != 0) {
    do {
      iVar4 = FUN_00465e10(puVar9,uVar5);
      iVar4 = _isdigit((int)(char)iVar4);
      if (iVar4 == 0) {
        iVar4 = FUN_00465e10(puVar9,uVar5);
        iVar4 = _isalpha((int)(char)iVar4);
        if ((((iVar4 == 0) && (iVar4 = FUN_00465e10(puVar9,uVar5), (char)iVar4 != '_')) &&
            (iVar4 = FUN_00465e10(puVar9,uVar5), (char)iVar4 != '-')) &&
           ((iVar4 = FUN_00465e10(puVar9,uVar5), (char)iVar4 != '.' &&
            (iVar4 = FUN_00465e10(puVar9,uVar5), (char)iVar4 != ' ')))) {
          iVar4 = FUN_00465e10(puVar9,uVar5);
          puVar6 = FUN_00466b40(&local_14,(uchar)iVar4);
          iVar4 = 1;
          local_4 = 2;
          puVar3 = (uchar *)FUN_00465e00(puVar6);
          FUN_004670a0(puVar9,puVar3,iVar4);
          local_4 = 0xffffffff;
          FUN_00465e40(&local_14);
        }
      }
      uVar5 = uVar5 + 1;
      uVar7 = FUN_00465d00(puVar9);
      pcVar10 = extraout_ECX_00;
    } while (uVar5 < uVar7);
  }
  local_14 = &stack0xffffffd0;
  FUN_00466b20(&stack0xffffffd0,(undefined4 *)((int)param_1 + 800));
  FUN_00467020(&local_18,".",pcVar10);
  local_4 = 3;
  iVar4 = FUN_00465d00(puVar9);
  if (iVar4 == 0) {
LAB_00447dc4:
    bVar1 = false;
  }
  else {
    puVar8 = FUN_00466b20(&local_14,puVar9);
    puVar6 = &local_18;
    local_4 = CONCAT31(local_4._1_3_,4);
    bVar2 = true;
    puVar8 = FUN_00465ee0(puVar8);
    iVar4 = FUN_00466440(puVar8,puVar6);
    if ((iVar4 != 0) || (*(int *)((int)param_1 + 0x328) != 0)) goto LAB_00447dc4;
    bVar1 = true;
  }
  local_4 = 3;
  if (bVar2) {
    FUN_00465e40(&local_14);
  }
  bVar2 = false;
  if (bVar1) {
    FUN_00466a30(puVar9,&local_18);
  }
  if ((*(int *)((int)param_1 + 0x308) == 0) || (*(int *)((int)param_1 + 0x308) == 2)) {
    iVar4 = FUN_00465d00(puVar9);
    if (iVar4 != 0) {
      puVar9 = FUN_00447a90(param_1,&local_10);
      bVar2 = true;
      local_4 = CONCAT31(local_4._1_3_,5);
      iVar4 = FUN_00465e00(puVar9);
      if (iVar4 != 0) goto LAB_00447e3a;
    }
    bVar1 = true;
  }
  else {
LAB_00447e3a:
    bVar1 = false;
  }
  local_4 = 3;
  if (bVar2) {
    FUN_00465e40(&local_10);
  }
  if (!bVar1) {
    FUN_00480b20((int)param_1);
  }
  local_4 = 0xffffffff;
  FUN_00465e40(&local_18);
  ExceptionList = local_c;
  return;
}

