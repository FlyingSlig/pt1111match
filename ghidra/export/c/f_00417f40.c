// FUNCTION: PORT1111 0x00417f40
// name: FUN_00417f40
// sig: undefined4 FUN_00417f40(int param_1)


uint FUN_00417f40(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  LPCSTR pCVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b6540;
  local_c = ExceptionList;
  iVar7 = 0;
  piVar6 = &DAT_004d5a88;
  ExceptionList = &local_c;
  do {
    if (*piVar6 == 0) {
      FUN_00465cf0(&local_10);
      local_4 = 1;
      FUN_00466970(&local_10,(byte *)"Invalid Parameter %s \n");
      pCVar4 = (LPCSTR)FUN_00465e00(&local_10);
      OutputDebugStringA(pCVar4);
      piVar6 = &local_10;
LAB_00418032:
      local_4 = 0xffffffff;
      uVar5 = FUN_00465e40(piVar6);
      ExceptionList = local_c;
      return uVar5 & 0xffffff00;
    }
    iVar2 = FUN_004662f0((void *)(iVar1 + 4),(uchar *)piVar6[-2]);
    if (iVar2 != 0) {
      uVar3 = (*(code *)(&DAT_004d5a88)[iVar7 * 6])(iVar1);
      if ((char)uVar3 != '\0') {
        ExceptionList = local_c;
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
      FUN_00465cf0(&param_1);
      local_4 = 0;
      FUN_00466970(&param_1,(byte *)"Invalid Parameter %s %s \n");
      pCVar4 = (LPCSTR)FUN_00465e00(&param_1);
      OutputDebugStringA(pCVar4);
      piVar6 = &param_1;
      goto LAB_00418032;
    }
    iVar7 = iVar7 + 1;
    piVar6 = piVar6 + 6;
  } while( true );
}

