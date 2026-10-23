// FUNCTION: PORT1111 0x00401100
// name: FUN_00401100
// sig: undefined4 FUN_00401100(int param_1)


undefined4 __fastcall FUN_00401100(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  void *unaff_EBX;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_14;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b5743;
  pvStack_c = ExceptionList;
  iVar6 = 0;
  puVar5 = (undefined4 *)(param_1 + 0x18);
  ExceptionList = &pvStack_c;
  while( true ) {
    local_10 = operator_new(0xb0);
    local_4 = 0;
    if (local_10 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_004670c0(local_10);
    }
    local_4 = 0xffffffff;
    *puVar5 = puVar1;
    pvVar2 = (void *)FUN_00465cf0(&local_14);
    uVar8 = *(undefined4 *)(DAT_004e2b14 + 0x60);
    iVar4 = *(int *)*puVar5;
    uVar7 = 0;
    iVar6 = iVar6 + 1;
    local_4 = 1;
    puVar1 = FUN_00466970(pvVar2,(byte *)"cursor%d.bmp");
    uVar3 = FUN_00465e00(puVar1);
    iVar4 = (**(code **)(iVar4 + 100))(uVar3,uVar7,uVar8);
    local_10 = (undefined4 *)0xffffffff;
    FUN_00465e40((undefined4 *)&stack0xffffffe0);
    if (iVar4 == 0) break;
    (**(code **)(*(int *)*puVar5 + 0x40))(0);
    puVar5 = puVar5 + 3;
    if (4 < iVar6) {
      *(undefined4 *)(param_1 + 0x28) = 0xc;
      *(undefined4 *)(param_1 + 0x2c) = 10;
      *(undefined4 *)(param_1 + 0x40) = 0x10;
      *(undefined4 *)(param_1 + 0x44) = 0xf;
      *(undefined4 *)(param_1 + 0x4c) = 4;
      *(undefined4 *)(param_1 + 0x50) = 9;
      *(undefined4 *)(param_1 + 0x54) = 1;
      ShowCursor(0);
      ExceptionList = pvStack_c;
      return 1;
    }
  }
  ExceptionList = unaff_EBX;
  return 0;
}

