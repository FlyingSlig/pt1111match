// FUNCTION: PORT1111 0x00452ad0
// name: FUN_00452ad0
// sig: undefined FUN_00452ad0(int param_1)


void __fastcall FUN_00452ad0(int param_1)

{
  int iVar1;
  void *this;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  uchar *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8c88;
  local_c = ExceptionList;
  if (((*(int *)(param_1 + 0x2c) != 0) && (*(short *)(*(int *)(param_1 + 0x2c) + 0x1c) == 2)) &&
     (ExceptionList = &local_c, local_10 = param_1,
     iVar3 = FUN_00453b70(*(int *)(DAT_004e240c + 0x21c)), iVar3 != 0)) {
    uVar6 = 0;
    puVar5 = (undefined4 *)(param_1 + 0x84);
    while( true ) {
      iVar1 = *(int *)(*(int *)(iVar3 + 0x50) + 0x16c);
      if ((iVar1 == 0) || ((uint)(*(int *)(*(int *)(iVar3 + 0x50) + 0x170) - iVar1 >> 2) <= uVar6))
      break;
      FUN_00465cf0(&local_10);
      local_4 = 0;
      FUN_00452a50(iVar3,uVar6);
      FUN_00466970(&local_10,&DAT_004c4654);
      this = (void *)*puVar5;
      bVar2 = FUN_00466ad0((void *)((int)this + 0x94),&local_10);
      if (CONCAT31(extraout_var,bVar2) != 0) {
        puVar4 = (uchar *)FUN_00465e00(&local_10);
        FUN_004737d0(this,puVar4);
      }
      local_4 = 0xffffffff;
      FUN_00465e40(&local_10);
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 2;
    }
  }
  ExceptionList = local_c;
  return;
}

