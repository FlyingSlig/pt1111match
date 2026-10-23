// FUNCTION: PORT1111 0x0045ab30
// name: FUN_0045ab30
// sig: undefined FUN_0045ab30(int param_1)


void __fastcall FUN_0045ab30(int param_1)

{
  void *this;
  undefined4 *puVar1;
  uchar *puVar2;
  int *piVar3;
  uchar *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_14;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b93d4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = operator_new(0x32c);
  local_4 = 0;
  local_10 = this;
  if (this == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar1 = FUN_00468110(DAT_004e2b14,&local_14,"DATA\\ai");
    uVar6 = 0;
    uVar5 = 0;
    puVar4 = "ai";
    local_4 = CONCAT31(local_4._1_3_,1);
    puVar2 = (uchar *)FUN_00465e00(puVar1);
    piVar3 = FUN_004472e0(this,*(int *)(param_1 + 0x24),0,puVar2,puVar4,uVar5,uVar6);
  }
  local_4 = 0xffffffff;
  if (this != (void *)0x0) {
    FUN_00465e40(&local_14);
  }
  (**(code **)(*piVar3 + 0xb8))();
  ExceptionList = pvStack_c;
  return;
}

