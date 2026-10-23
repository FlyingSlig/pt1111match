// FUNCTION: PORT1111 0x00475340
// name: FUN_00475340
// sig: undefined4 FUN_00475340(void * this, uchar * param_1)


undefined4 __thiscall FUN_00475340(void *this,uchar *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 local_30;
  int local_2c;
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9ff8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00466af0(&param_1,param_1,0xffffffff);
  local_4 = 0;
  FUN_00465e70(&param_1,'\\');
  puVar3 = FUN_00466b20(&local_30,&param_1);
  local_4._0_1_ = 1;
  puVar3 = FUN_00465ee0(puVar3);
  pcVar4 = (char *)FUN_00465e00(puVar3);
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar5 = pcVar4;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004016b0(local_28,(undefined4 *)pcVar4,(int)pcVar5 - (int)(pcVar4 + 1));
  local_4._0_1_ = 2;
  FUN_0044d7e0(*(void **)((int)this + 0x10),&local_2c,local_28);
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00465e40(&local_30);
  local_4 = 0xffffffff;
  if (local_2c != *(int *)(*(int *)((int)this + 0x10) + 4)) {
    uVar2 = *(undefined4 *)(local_2c + 0x28);
    FUN_00465e40(&param_1);
    ExceptionList = local_c;
    return uVar2;
  }
  FUN_00465e40(&param_1);
  ExceptionList = local_c;
  return 0;
}

