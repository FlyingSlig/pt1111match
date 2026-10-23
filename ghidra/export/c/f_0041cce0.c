// FUNCTION: PORT1111 0x0041cce0
// name: FUN_0041cce0
// sig: undefined4 FUN_0041cce0(void * this, undefined4 * param_1)


undefined4 __thiscall FUN_0041cce0(void *this,undefined4 *param_1)

{
  LPCSTR pCVar1;
  undefined4 uVar2;
  char *pcVar3;
  LPCSTR lpExistingFileName;
  int iVar4;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48 [6];
  undefined1 local_30 [36];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b68c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00403340(DAT_004e2b14,&local_4c);
  local_4 = 0;
  thunk_FUN_00466040(&local_4c,"data\\maps\\");
  FUN_00466b20(&local_50,&local_4c);
  local_4._0_1_ = 1;
  thunk_FUN_00466040(&local_50,"temp_snapshot_file");
  pCVar1 = (LPCSTR)FUN_00465e00(&local_50);
  DeleteFileA(pCVar1);
  iVar4 = 0;
  uVar2 = FUN_00465e00(&local_50);
  pcVar3 = (char *)FUN_00450b20(uVar2,iVar4);
  if (pcVar3 != (char *)0x0) {
    iVar4 = FUN_00451920((uint)pcVar3,"Mapa",local_30,0,0,0,0,(char *)0x0,8,-1);
    if (iVar4 == 0) {
      FUN_0042f680(local_48);
      local_4._0_1_ = 2;
      FUN_0042f550(local_48,pcVar3,*(undefined4 *)((int)this + 8),0x400);
      FUN_0042af30(DAT_004e2404,local_48);
      FUN_00450ff0((int)pcVar3);
      FUN_00451010(pcVar3,"");
      pCVar1 = (LPCSTR)FUN_00465e00(param_1);
      DeleteFileA(pCVar1);
      pCVar1 = (LPCSTR)FUN_00465e00(param_1);
      lpExistingFileName = (LPCSTR)FUN_00465e00(&local_50);
      MoveFileA(lpExistingFileName,pCVar1);
      local_4._0_1_ = 1;
      FUN_0042f6c0(local_48);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00465e40(&local_50);
      local_4 = 0xffffffff;
      FUN_00465e40(&local_4c);
      ExceptionList = local_c;
      return 1;
    }
    FUN_00451010(pcVar3,"");
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00465e40(&local_50);
  local_4 = 0xffffffff;
  FUN_00465e40(&local_4c);
  ExceptionList = local_c;
  return 0;
}

