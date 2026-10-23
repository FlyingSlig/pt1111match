// FUNCTION: PORT1111 0x00437760
// name: FUN_00437760
// sig: undefined FUN_00437760(int param_1)


void __fastcall FUN_00437760(int param_1)

{
  int iVar1;
  int iVar2;
  void *this;
  undefined4 *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7b7a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  local_14 = operator_new(4);
  local_4 = 0;
  if (local_14 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    local_14 = FUN_00468110(DAT_004e2b14,local_14,"data\\FSM\\AISymbols.h");
  }
  iVar1 = *(int *)(param_1 + 0x28);
  this = (void *)(param_1 + 0x24);
  local_4 = 0xffffffff;
  iVar2 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),&local_14);
  FUN_004371f0(this,1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  local_14 = operator_new(4);
  local_4 = 1;
  if (local_14 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    local_14 = FUN_00468110(DAT_004e2b14,local_14,"data\\FSM\\SoureRun.h");
  }
  iVar1 = *(int *)(param_1 + 0x28);
  local_4 = 0xffffffff;
  iVar2 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),&local_14);
  FUN_004371f0(this,1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  local_14 = operator_new(4);
  local_4 = 2;
  if (local_14 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    local_14 = FUN_00468110(DAT_004e2b14,local_14,"data\\FSM\\StateTables.h");
  }
  iVar1 = *(int *)(param_1 + 0x28);
  local_4 = 0xffffffff;
  iVar2 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),&local_14);
  FUN_004371f0(this,1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  local_14 = operator_new(4);
  local_4 = 3;
  if (local_14 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    local_14 = FUN_00468110(DAT_004e2b14,local_14,"data\\FSM\\InterfaceTypes.h");
  }
  iVar1 = *(int *)(param_1 + 0x28);
  local_4 = 0xffffffff;
  iVar2 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),&local_14);
  FUN_004371f0(this,1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  local_14 = operator_new(4);
  local_4 = 4;
  if (local_14 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    local_14 = FUN_00468110(DAT_004e2b14,local_14,"data\\FSM\\ActionTypes.h");
  }
  iVar1 = *(int *)(param_1 + 0x28);
  local_4 = 0xffffffff;
  iVar2 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),&local_14);
  FUN_004371f0(this,1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  local_14 = operator_new(4);
  local_4 = 5;
  if (local_14 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    local_14 = FUN_00468110(DAT_004e2b14,local_14,"data\\setup\\FightParameters.txt");
  }
  iVar1 = *(int *)(param_1 + 0x28);
  local_4 = 0xffffffff;
  iVar2 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),&local_14);
  FUN_004371f0(this,1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  local_14 = operator_new(4);
  local_4 = 6;
  if (local_14 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    local_14 = FUN_00468110(DAT_004e2b14,local_14,"data\\setup\\tiles.txt");
  }
  iVar1 = *(int *)(param_1 + 0x28);
  local_4 = 0xffffffff;
  iVar2 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),&local_14);
  FUN_004371f0(this,1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  local_14 = operator_new(4);
  local_4 = 7;
  if (local_14 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    local_14 = FUN_00468110(DAT_004e2b14,local_14,"data\\setup\\C_Estruturas.txt");
  }
  iVar1 = *(int *)(param_1 + 0x28);
  local_4 = 0xffffffff;
  iVar2 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),&local_14);
  FUN_004371f0(this,1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  local_14 = operator_new(4);
  local_4 = 8;
  if (local_14 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    local_14 = FUN_00468110(DAT_004e2b14,local_14,"data\\setup\\C_Unidades.txt");
  }
  iVar1 = *(int *)(param_1 + 0x28);
  local_4 = 0xffffffff;
  iVar2 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),&local_14);
  FUN_004371f0(this,1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  local_14 = operator_new(4);
  local_4 = 9;
  if (local_14 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    local_14 = FUN_00468110(DAT_004e2b14,local_14,"data\\setup\\M_Unidades.txt");
  }
  iVar1 = *(int *)(param_1 + 0x28);
  local_4 = 0xffffffff;
  iVar2 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),&local_14);
  FUN_004371f0(this,1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  local_14 = operator_new(4);
  local_4 = 10;
  if (local_14 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    local_14 = FUN_00468110(DAT_004e2b14,local_14,"data\\setup\\M_Estruturas.txt");
  }
  iVar1 = *(int *)(param_1 + 0x28);
  local_4 = 0xffffffff;
  iVar2 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),&local_14);
  FUN_004371f0(this,1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  local_14 = operator_new(4);
  local_4 = 0xb;
  if (local_14 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    local_14 = FUN_00468110(DAT_004e2b14,local_14,"data\\setup\\props.txt");
  }
  iVar1 = *(int *)(param_1 + 0x28);
  local_4 = 0xffffffff;
  iVar2 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),&local_14);
  FUN_004371f0(this,1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  local_14 = operator_new(4);
  local_4 = 0xc;
  if (local_14 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    local_14 = FUN_00468110(DAT_004e2b14,local_14,"data\\setup\\misc.txt");
  }
  iVar1 = *(int *)(param_1 + 0x28);
  local_4 = 0xffffffff;
  iVar2 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),&local_14);
  FUN_004371f0(this,1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  local_14 = operator_new(4);
  local_4 = 0xd;
  if (local_14 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    local_14 = FUN_00468110(DAT_004e2b14,local_14,"data\\setup\\BackgroundImages.txt");
  }
  iVar1 = *(int *)(param_1 + 0x28);
  local_4 = 0xffffffff;
  iVar2 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),&local_14);
  FUN_004371f0(this,1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  FUN_00436970();
  ExceptionList = local_c;
  return;
}

