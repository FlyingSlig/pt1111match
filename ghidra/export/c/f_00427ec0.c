// FUNCTION: PORT1111 0x00427ec0
// name: FUN_00427ec0
// sig: undefined4 FUN_00427ec0(void)


undefined4 FUN_00427ec0(void)

{
  undefined4 *puVar1;
  uchar *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b7043;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_004e2044 != (undefined4 *)0x0) {
    if (DAT_004e2044[-1] == 0) {
      ExceptionList = &pvStack_c;
                    /* WARNING: Subroutine does not return */
      _free(DAT_004e2044 + -1);
    }
    ExceptionList = &pvStack_c;
    (**(code **)*DAT_004e2044)();
    DAT_004e2044 = (undefined4 *)0x0;
  }
  if (DAT_004e2040 != (undefined4 *)0x0) {
    if (DAT_004e2040[-1] == 0) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_004e2040 + -1);
    }
    (**(code **)*DAT_004e2040)();
    DAT_004e2040 = (undefined4 *)0x0;
  }
  if (DAT_004e2048 != (undefined4 *)0x0) {
    (**(code **)*DAT_004e2048)();
    DAT_004e2048 = (undefined4 *)0x0;
  }
  puStack_14 = &stack0xffffffdc;
  FUN_00466af0(&stack0xffffffdc,(uchar *)"cTileFog.bmp",0xffffffff);
  puStack_10 = &stack0xffffffd8;
  uStack_4 = 0;
  FUN_00466af0(&stack0xffffffd8,(uchar *)"aTileFog.bmp",0xffffffff);
  uStack_4 = 0xffffffff;
  DAT_004e2044 = FUN_004278a0();
  puStack_10 = &stack0xffffffdc;
  FUN_00466af0(&stack0xffffffdc,(uchar *)"cTileFogBig.bmp",0xffffffff);
  puStack_14 = &stack0xffffffd8;
  uStack_4 = 1;
  FUN_00466af0(&stack0xffffffd8,(uchar *)"aTileFogBig.bmp",0xffffffff);
  uStack_4 = 0xffffffff;
  DAT_004e2040 = FUN_004278a0();
  puStack_10 = operator_new(0x30);
  uStack_4 = 2;
  if (puStack_10 == (void *)0x0) {
    DAT_004e2048 = (void *)0x0;
  }
  else {
    DAT_004e2048 = (undefined4 *)FUN_0047e2c0(puStack_10,0);
  }
  uStack_4 = 0xffffffff;
  puVar1 = FUN_004680b0(DAT_004e2b14,&uStack_18,"BlockedTile.png");
  uVar3 = *(undefined4 *)((int)DAT_004e2b14 + 100);
  iVar4 = 0;
  uStack_4 = 3;
  puVar2 = (uchar *)FUN_00465e00(puVar1);
  FUN_0047e4d0(DAT_004e2048,puVar2,uVar3,iVar4);
  uStack_4 = 0xffffffff;
  FUN_00465e40(&uStack_18);
  ExceptionList = pvStack_c;
  return 1;
}

