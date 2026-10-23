// FUNCTION: PORT1111 0x004770c0
// name: FUN_004770c0
// sig: undefined FUN_004770c0(void * this, int param_1)


void __thiscall FUN_004770c0(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  uchar *puVar5;
  char *pcVar6;
  size_t sVar7;
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
  piVar3 = FUN_00476600(*(void **)((int)this + 0xc),&local_2c);
  *piVar3 = iVar2;
  pcVar4 = (char *)FUN_00465e00((undefined4 *)(iVar2 + 0x30));
  if (*pcVar4 != '\0') {
    sVar7 = 0xffffffff;
    puVar5 = (uchar *)FUN_00465e00((undefined4 *)(iVar2 + 0x30));
    FUN_00466af0(&param_1,puVar5,sVar7);
    local_4 = 0;
    FUN_00465e70(&param_1,'\\');
    pcVar6 = (char *)FUN_00465e00(&param_1);
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar4 = pcVar6;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_004016b0(local_28,(undefined4 *)pcVar6,(int)pcVar4 - (int)(pcVar6 + 1));
    local_4 = CONCAT31(local_4._1_3_,1);
    piVar3 = FUN_00476d90(*(void **)((int)this + 0x10),local_28);
    *piVar3 = iVar2;
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

