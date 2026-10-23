// FUNCTION: PORT1111 0x0045c250
// name: FUN_0045c250
// sig: undefined4 FUN_0045c250(void * param_1, int param_2, undefined * param_3)


undefined4 FUN_0045c250(void *param_1,int param_2,undefined *param_3)

{
  undefined **ppuVar1;
  int iVar2;
  undefined **ppuVar3;
  int iVar4;
  uchar *puVar5;
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9528;
  local_c = ExceptionList;
  iVar4 = 0;
  ExceptionList = &local_c;
  FUN_00465cf0(&local_14);
  local_4 = 0;
  if (PTR_DAT_004dc438 != (undefined *)0x0) {
    ppuVar3 = &PTR_DAT_004dc438;
    do {
      if (param_2 == 0) {
        puVar5 = *ppuVar3;
      }
      else {
        puVar5 = ppuVar3[1];
      }
      FUN_00466a40(&local_14,puVar5);
      iVar2 = FUN_00466a90(param_1,&local_14);
      if ((iVar2 != 0) && (ppuVar3[-1] == param_3)) {
        *(int *)(local_10 + 4) = iVar4;
        local_4 = 0xffffffff;
        FUN_00465e40(&local_14);
        ExceptionList = local_c;
        return 1;
      }
      ppuVar1 = ppuVar3 + 4;
      ppuVar3 = ppuVar3 + 4;
      iVar4 = iVar4 + 1;
    } while (*ppuVar1 != (undefined *)0x0);
  }
  local_4 = 0xffffffff;
  FUN_00465e40(&local_14);
  ExceptionList = local_c;
  return 0;
}

