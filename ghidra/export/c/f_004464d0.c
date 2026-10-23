// FUNCTION: PORT1111 0x004464d0
// name: FUN_004464d0
// sig: undefined4 FUN_004464d0(int param_1)


undefined4 __fastcall FUN_004464d0(int param_1)

{
  void *this;
  int *piVar1;
  void *pvVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  LPCSTR lpOutputString;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined **local_14;
  int *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  piVar1 = DAT_004e2b20;
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b83c0;
  pvStack_c = ExceptionList;
  local_14 = &PTR_FUN_004c3b98;
  local_10 = DAT_004e2b20;
  ExceptionList = &pvStack_c;
  (**(code **)*DAT_004e2b20)();
  iStack_4 = 0;
  pvVar2 = (void *)FUN_00465cf0(&uStack_18);
  this = DAT_004e2b14;
  iStack_4._0_1_ = 1;
  puVar3 = FUN_00466970(pvVar2,(byte *)"SoureRLA%d.gbf");
  pcVar4 = (char *)FUN_00465e00(puVar3);
  puVar3 = FUN_004680b0(this,&uStack_1c,pcVar4);
  iStack_4._0_1_ = 2;
  iVar5 = FUN_00468b60(DAT_004e2b14,puVar3);
  iStack_4._0_1_ = 1;
  FUN_00465e40(&uStack_1c);
  iStack_4._0_1_ = 0;
  FUN_00465e40(&uStack_18);
  if (iVar5 != 0) {
    iVar5 = FUN_00454ee0();
    if (iVar5 == 0) {
LAB_004465ac:
      iStack_4 = 0xffffffff;
      (**(code **)(*piVar1 + 4))();
      ExceptionList = pvStack_c;
      return 0;
    }
    uVar6 = FUN_00436cb0(0x4e25f8);
    if ((char)uVar6 != '\0') {
      iVar5 = FUN_0042adb0();
      if (iVar5 == 0) goto LAB_004465ac;
      FUN_0040df60();
      FUN_00437ff0(0x4e25f8);
      FUN_00465cf0(&uStack_20);
      iStack_4._0_1_ = 3;
      FUN_00466970(&uStack_20,(byte *)"GenerateWorldObjSharedData()\n");
      lpOutputString = (LPCSTR)FUN_00465e00(&uStack_20);
      OutputDebugStringA(lpOutputString);
      FUN_0047c660(*(void **)(param_1 + 0x24),0x2711,
                   *(undefined2 *)((int)*(void **)(param_1 + 0x24) + 0x1c),0);
      iVar5 = FUN_00401100(DAT_004e2afc);
      iStack_4 = (uint)iStack_4._1_3_ << 8;
      if (iVar5 != 0) {
        FUN_00465e40(&uStack_20);
        iStack_4 = 0xffffffff;
        (**(code **)(*piVar1 + 4))();
        ExceptionList = pvStack_c;
        return 1;
      }
      FUN_00465e40(&uStack_20);
    }
  }
  iStack_4 = 0xffffffff;
  (**(code **)(*piVar1 + 4))();
  ExceptionList = pvStack_c;
  return 0;
}

