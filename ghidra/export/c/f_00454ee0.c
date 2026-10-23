// FUNCTION: PORT1111 0x00454ee0
// name: FUN_00454ee0
// sig: undefined4 FUN_00454ee0(void)


undefined4 FUN_00454ee0(void)

{
  undefined4 *puVar1;
  uchar *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8d90;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = FUN_00468080(DAT_004e2b14,&local_14,"BtIcons.bmp");
  uVar4 = *(undefined4 *)((int)DAT_004e2b14 + 0x60);
  local_4 = 0;
  puVar2 = (uchar *)FUN_00465e00(puVar1);
  iVar3 = FUN_004776f0(&DAT_004e2810,puVar2,uVar4);
  local_4 = 0xffffffff;
  FUN_00465e40(&local_14);
  if (iVar3 != 0) {
    FUN_0047e1a0(DAT_004e2810,0x1a,0x1e,0);
    puVar1 = FUN_00468080(DAT_004e2b14,&local_10,"StateIcons.png");
    uVar4 = *(undefined4 *)((int)DAT_004e2b14 + 0x60);
    local_4 = 1;
    puVar2 = (uchar *)FUN_00465e00(puVar1);
    iVar3 = FUN_004776f0(&DAT_004e2814,puVar2,uVar4);
    local_4 = 0xffffffff;
    FUN_00465e40(&local_10);
    if (iVar3 != 0) {
      FUN_0047e1a0(DAT_004e2814,0x10,0x10,0);
      puVar1 = &DAT_004e281c;
      do {
        *puVar1 = 0;
        puVar1 = puVar1 + 2;
      } while ((int)puVar1 < 0x4e2a84);
      ExceptionList = local_c;
      return 1;
    }
  }
  ExceptionList = local_c;
  return 0;
}

