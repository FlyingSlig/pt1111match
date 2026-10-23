// FUNCTION: PORT1111 0x00436970
// name: FUN_00436970
// sig: undefined4 FUN_00436970(void)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00436970(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  char *pcVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  char *_Mode;
  FILE *_File;
  undefined4 local_32c;
  undefined4 local_328;
  int *local_324;
  int *local_320;
  int local_31c;
  undefined4 local_318;
  char local_314 [4];
  uchar local_310 [256];
  char local_210 [256];
  char local_110 [256];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7a6c;
  local_c = ExceptionList;
  local_10 = DAT_004ddb0c;
  puVar9 = (uint *)0x0;
  ExceptionList = &local_c;
  FUN_00403340(DAT_004e2b14,&local_32c);
  local_4 = 0;
  puVar1 = FUN_00466af0(&local_320,(uchar *)"Data\\Setup\\Config.pcf",0xffffffff);
  local_4._0_1_ = 1;
  FUN_00466a30(&local_32c,puVar1);
  local_4._0_1_ = 0;
  FUN_00465e40(&local_320);
  uVar2 = FUN_00465e00(&local_32c);
  puVar1 = (undefined4 *)FUN_0044fe90(uVar2);
  if ((puVar1 == (undefined4 *)0x0) ||
     (piVar3 = _malloc(400000), local_324 = piVar3, piVar3 == (int *)0x0)) {
    local_4 = 0xffffffff;
    FUN_00465e40(&local_32c);
    ExceptionList = local_c;
    return 0;
  }
  puVar10 = (uint *)0x61a80;
  puVar4 = FUN_00468110(DAT_004e2b14,&local_318,"data\\setup\\parser_out.txt");
  _File = (FILE *)&DAT_004ddb70;
  _Mode = "w";
  local_4._0_1_ = 2;
  pcVar5 = (char *)FUN_00465e00(puVar4);
  _freopen(pcVar5,_Mode,_File);
  local_4._0_1_ = 0;
  FUN_00465e40(&local_318);
  FUN_00465cf0(&local_328);
  local_320 = (int *)**(int **)(local_31c + 0x28);
  local_4 = CONCAT31(local_4._1_3_,3);
  if (local_320 != *(int **)(local_31c + 0x28)) {
    do {
      __splitpath(*(char **)local_320[2],local_314,local_110,(char *)local_310,local_210);
      FUN_00466a40(&local_328,local_310);
      thunk_FUN_00466040(&local_328,local_210);
      iVar7 = 2;
      pcVar5 = (char *)FUN_00465e00(&local_328);
      iVar7 = FUN_0044f610((int)puVar1,pcVar5,iVar7);
      if (iVar7 != 0) {
        FUN_0044fea0(puVar1);
                    /* WARNING: Subroutine does not return */
        _free(local_324);
      }
      iVar7 = FUN_004501a0(puVar1,0x4bff80);
      if (iVar7 != 0) {
        FUN_0044fbf0((int)puVar1);
        FUN_0044fea0(puVar1);
                    /* WARNING: Subroutine does not return */
        _free(local_324);
      }
      do {
        if (puVar10 == puVar9 || (int)puVar10 - (int)puVar9 < 0) {
          puVar10 = (uint *)((int)puVar10 * 2);
          piVar3 = FUN_00498201(local_324,puVar10);
          if (piVar3 != (int *)0x0) {
            local_324 = piVar3;
          }
          piVar3 = (int *)((int)local_324 + (int)puVar9);
        }
        uVar8 = FUN_0044f970((int)puVar1,(int)piVar3,(int)puVar10 - (int)puVar9);
        if ((int)uVar8 < 1) {
          if ((int)uVar8 < 0) {
            FUN_0044fbf0((int)puVar1);
            FUN_0044fea0(puVar1);
                    /* WARNING: Subroutine does not return */
            _free(piVar3);
          }
        }
        else {
          puVar9 = (uint *)((int)puVar9 + uVar8);
          piVar3 = (int *)((int)piVar3 + uVar8);
        }
      } while (uVar8 != 0);
      FUN_0044fbf0((int)puVar1);
      local_320 = (int *)*local_320;
    } while (local_320 != (int *)*(int *)(local_31c + 0x28));
  }
  FUN_0044fea0(puVar1);
  piVar3 = local_324;
  pvVar6 = (void *)FUN_00435db0((int)local_324,(int)puVar9);
  iVar7 = FUN_004394d0();
  if (iVar7 != 0) {
    _fflush((FILE *)&DAT_004ddb70);
  }
  FUN_00435ca0(pvVar6);
                    /* WARNING: Subroutine does not return */
  _free(piVar3);
}

