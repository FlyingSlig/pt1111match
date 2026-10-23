// FUNCTION: PORT1111 0x0042adb0
// name: FUN_0042adb0
// sig: undefined4 FUN_0042adb0(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0042adb0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  uchar *puVar3;
  uint uVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7170;
  local_c = ExceptionList;
  bVar5 = DAT_004e2682 == '\0';
  _DAT_004e20c0 = 0x1ff;
  if (bVar5) {
    ExceptionList = &local_c;
    puVar2 = FUN_004680b0(DAT_004e2b14,&local_10,"simpleTileAlpha.bmp");
  }
  else {
    ExceptionList = &local_c;
    puVar2 = FUN_004680b0(DAT_004e2b14,&local_10,"GridTileAlpha.bmp");
  }
  local_4 = (uint)bVar5;
  uVar6 = *(undefined4 *)((int)DAT_004e2b14 + 100);
  iVar7 = 0;
  puVar3 = (uchar *)FUN_00465e00(puVar2);
  iVar7 = FUN_0047e4d0(&DAT_004e2180,puVar3,uVar6,iVar7);
  local_4 = 0xffffffff;
  FUN_00465e40(&local_10);
  if (iVar7 != 0) {
    DAT_004e203c = &DAT_004e2180;
    FUN_00428050();
    DAT_004e0b20 = &DAT_004e2180;
    DAT_004e1f30 = &DAT_004e2180;
    FUN_0042aa10();
    if (DAT_004e2158 == 0) {
      DAT_004e20bc = 0;
    }
    else {
      DAT_004e20bc = DAT_004e215c - DAT_004e2158 >> 2;
    }
    if ((-1 < DAT_004e2670) && (DAT_004e2670 < DAT_004e20bc)) {
      DAT_004e20bc = DAT_004e2670;
    }
    uVar4 = 0;
    while (((uVar1 = _DAT_004e20b8, DAT_004e2158 != 0 &&
            (uVar4 < (uint)(DAT_004e215c - DAT_004e2158 >> 2))) &&
           (iVar7 = thunk_FUN_00466240((void *)(*(int *)(DAT_004e2158 + uVar4 * 4) + 4),
                                       (uchar *)"EdificiosMortos"), uVar1 = uVar4, iVar7 == 0))) {
      uVar4 = uVar4 + 1;
    }
    _DAT_004e20b8 = uVar1;
    ExceptionList = local_c;
    return 1;
  }
  ExceptionList = local_c;
  return 0;
}

