// FUNCTION: PORT1111 0x0043e7a0
// name: FUN_0043e7a0
// sig: undefined4 * FUN_0043e7a0(undefined4 * param_1)


undefined4 * __fastcall FUN_0043e7a0(undefined4 *param_1)

{
  undefined4 *this;
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int local_1c;
  int local_18 [2];
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7f46;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004c3700;
  local_10 = param_1;
  uVar1 = FUN_0043d220();
  param_1[2] = uVar1;
  param_1[3] = 0;
  this = param_1 + 4;
  local_4 = 0;
  iVar2 = FUN_004748f0();
  param_1[5] = iVar2;
  *(undefined1 *)(iVar2 + 0x15) = 1;
  *(undefined4 *)(param_1[5] + 4) = param_1[5];
  *(undefined4 *)param_1[5] = param_1[5];
  *(undefined4 *)(param_1[5] + 8) = param_1[5];
  param_1[6] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  local_18[1] = 0x410;
  local_1c = 0x410;
  FUN_00413aa0(this,local_18,&local_1c);
  if (local_18[0] == param_1[5]) {
    piVar3 = FUN_0042c280(this,local_18 + 1);
    *piVar3 = 0x410;
  }
  local_1c = 0x411;
  local_18[1] = 0x411;
  FUN_00413aa0(this,local_18,local_18 + 1);
  if (local_18[0] == param_1[5]) {
    piVar3 = FUN_0042c280(this,&local_1c);
    *piVar3 = 0x411;
  }
  local_1c = 0x412;
  local_18[1] = 0x412;
  FUN_00413aa0(this,local_18,local_18 + 1);
  if (local_18[0] == param_1[5]) {
    piVar3 = FUN_0042c280(this,&local_1c);
    *piVar3 = 0x412;
  }
  local_1c = 0x413;
  local_18[1] = 0x413;
  FUN_00413aa0(this,local_18,local_18 + 1);
  if (local_18[0] == param_1[5]) {
    piVar3 = FUN_0042c280(this,&local_1c);
    *piVar3 = 0x413;
  }
  ExceptionList = local_c;
  return param_1;
}

