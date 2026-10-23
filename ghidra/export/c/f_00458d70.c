// FUNCTION: PORT1111 0x00458d70
// name: FUN_00458d70
// sig: undefined4 FUN_00458d70(void * this, void * param_1)


undefined4 __thiscall FUN_00458d70(void *this,void *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b90b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  pvVar1 = (void *)FUN_00465cf0(&local_10);
  iVar5 = 0;
  local_4 = 0;
  puVar2 = FUN_00466970(pvVar1,(byte *)"%s%d.aia");
  pcVar3 = (char *)FUN_00465e00(puVar2);
  uVar4 = FUN_004585b0(this,pcVar3,param_1,iVar5);
  local_4 = 0xffffffff;
  FUN_00465e40(&local_10);
  ExceptionList = local_c;
  return uVar4;
}

