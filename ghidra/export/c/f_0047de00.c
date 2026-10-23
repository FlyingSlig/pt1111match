// FUNCTION: PORT1111 0x0047de00
// name: FUN_0047de00
// sig: undefined FUN_0047de00(int * param_1)


void __fastcall FUN_0047de00(int *param_1)

{
  void *this;
  int *this_00;
  char *pcVar1;
  undefined4 *puVar2;
  uchar *puVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  int *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004ba4e3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[0x29] = 0;
  local_10 = param_1;
  local_10 = operator_new(0xb8);
  local_4 = 0;
  if (local_10 == (int *)0x0) {
    this_00 = (int *)0x0;
  }
  else {
    this_00 = FUN_0046f8e0(local_10);
  }
  pvVar6 = (void *)param_1[0x26];
  local_4 = 0xffffffff;
  (**(code **)(*this_00 + 4))(param_1,0,0,param_1[0x25]);
  param_1[0x28] = (int)local_10;
  this = DAT_004e2b14;
  pcVar1 = (char *)FUN_00465e00(param_1 + 5);
  puVar2 = FUN_004680b0(this,&local_10,pcVar1);
  iVar5 = 0;
  puVar3 = (uchar *)FUN_00465e00(puVar2);
  FUN_00472560(this_00,puVar3,iVar5);
  FUN_00465e40(&local_10);
  FUN_00466a50(this_00 + 0x27,this_00 + 0x29);
  *(undefined2 *)(this_00 + 0xb) = 0;
  iVar5 = param_1[0x23];
  local_10 = this_00;
  iVar4 = FUN_00413870(iVar5,*(undefined4 *)(iVar5 + 4),&local_10);
  FUN_0047db80(param_1 + 0x22,1);
  *(int *)(iVar5 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  ExceptionList = pvVar6;
  return;
}

