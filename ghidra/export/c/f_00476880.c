// FUNCTION: PORT1111 0x00476880
// name: FUN_00476880
// sig: undefined FUN_00476880(void * this, int param_1)


void __thiscall FUN_00476880(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uchar *puVar4;
  char *pcVar5;
  size_t sVar6;
  int local_2c;
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004ba0e0;
  local_c = ExceptionList;
  local_2c = *(int *)(param_1 + 0x34);
  ExceptionList = &local_c;
  FUN_00475ef0(*(void **)((int)this + 0xc),&local_2c);
  pcVar3 = (char *)FUN_00465e00((undefined4 *)(iVar2 + 0x30));
  if (*pcVar3 != '\0') {
    sVar6 = 0xffffffff;
    puVar4 = (uchar *)FUN_00465e00((undefined4 *)(iVar2 + 0x30));
    FUN_00466af0(&param_1,puVar4,sVar6);
    local_4 = 0;
    FUN_00465e70(&param_1,'\\');
    pcVar5 = (char *)FUN_00465e00(&param_1);
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar3 = pcVar5;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_004016b0(local_28,(undefined4 *)pcVar5,(int)pcVar3 - (int)(pcVar5 + 1));
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00476680(*(void **)((int)this + 0x10),(int)local_28);
    if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
      _free(local_24);
    }
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    local_4 = 0xffffffff;
    FUN_00465e40(&param_1);
  }
  ExceptionList = local_c;
  return;
}

