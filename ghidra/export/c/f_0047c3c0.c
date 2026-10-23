// FUNCTION: PORT1111 0x0047c3c0
// name: FUN_0047c3c0
// sig: undefined4 * FUN_0047c3c0(void * param_1)


undefined4 * __fastcall FUN_0047c3c0(void *param_1)

{
  void *this;
  char *pcVar1;
  undefined4 *puVar2;
  uchar *puVar3;
  undefined4 *this_00;
  undefined4 uVar4;
  int iVar5;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004ba3c3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  local_10 = operator_new(0x30);
  this_00 = (undefined4 *)0x0;
  local_4 = 0;
  if (local_10 != (void *)0x0) {
    this_00 = (undefined4 *)FUN_0047e2c0(local_10,1);
  }
  this = DAT_004e2b14;
  local_4 = 0xffffffff;
  pcVar1 = (char *)FUN_00465e00((undefined4 *)((int)param_1 + 0x14));
  puVar2 = FUN_004680b0(this,&local_10,pcVar1);
  uVar4 = *(undefined4 *)((int)DAT_004e2b14 + 100);
  iVar5 = 0;
  local_4 = 1;
  puVar3 = (uchar *)FUN_00465e00(puVar2);
  iVar5 = FUN_0047e4d0(this_00,puVar3,uVar4,iVar5);
  local_4 = 0xffffffff;
  FUN_00465e40(&local_10);
  if (iVar5 == 0) {
    if (this_00 != (undefined4 *)0x0) {
      (**(code **)*this_00)(1);
    }
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  ExceptionList = local_c;
  return this_00;
}

