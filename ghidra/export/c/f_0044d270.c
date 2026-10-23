// FUNCTION: PORT1111 0x0044d270
// name: FUN_0044d270
// sig: undefined4 FUN_0044d270(void * this, char * param_1, int param_2)


undefined4 __thiscall FUN_0044d270(void *this,char *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8aa8;
  local_c = ExceptionList;
  iVar5 = 0;
  ExceptionList = &local_c;
  local_10 = this;
  FUN_00465cf0(&local_10);
  local_4 = 0;
  if (DAT_004dc2b0 != (char *)0x0) {
    puVar4 = &DAT_004dc2b0;
    pcVar3 = DAT_004dc2b0;
    do {
      if ((pcVar3 == param_1) && (puVar4[1] == param_2)) {
        iVar5 = iVar5 * 0x10;
        if (*(int *)(iVar5 + 0x4dc2bc) == 0) {
          FUN_00466a40(&local_10,*(uchar **)(iVar5 + 0x4dc2b8));
          thunk_FUN_00466040(&local_10,".wav");
          pcVar3 = (char *)FUN_00465e00(&local_10);
          FUN_0044d080(this,pcVar3,param_1);
        }
        else {
          iVar1 = 0;
          if (0 < *(int *)(iVar5 + 0x4dc2bc)) {
            do {
              iVar1 = iVar1 + 1;
              pcVar3 = param_1;
              puVar4 = FUN_00466970(&local_10,(byte *)"%s%d.wav");
              pcVar2 = (char *)FUN_00465e00(puVar4);
              FUN_0044d080(this,pcVar2,pcVar3);
            } while (iVar1 < *(int *)(iVar5 + 0x4dc2bc));
          }
        }
        local_4 = 0xffffffff;
        FUN_00465e40(&local_10);
        ExceptionList = local_c;
        return 1;
      }
      pcVar3 = (char *)puVar4[4];
      puVar4 = puVar4 + 4;
      iVar5 = iVar5 + 1;
    } while (pcVar3 != (char *)0x0);
  }
  local_4 = 0xffffffff;
  FUN_00465e40(&local_10);
  ExceptionList = local_c;
  return 0;
}

