// FUNCTION: PORT1111 0x00407d20
// name: FUN_00407d20
// sig: undefined4 FUN_00407d20(int * param_1)


undefined4 __fastcall FUN_00407d20(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b5a56;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00405650(param_1);
  if (iVar1 != 0) {
    if (((*(char *)(param_1[0x14] + 0x107) != '\0') && (iVar1 = param_1[0x36], 0 < iVar1)) &&
       (iVar2 = (*(int *)(param_1[0x14] + 0x100) - param_1[0x37]) - param_1[0x35],
       iVar2 != iVar1 && -1 < iVar2 - iVar1)) {
      puVar3 = operator_new(0x34);
      local_4 = 0;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = FUN_00432540(puVar3);
      }
      puVar3[1] = param_1[4];
      local_4 = 0xffffffff;
      FUN_00412ec0(puVar3,10000);
    }
    if (param_1[0x46] != 0) {
      puVar3 = operator_new(0x34);
      local_4 = 1;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = FUN_004306b0(puVar3);
      }
      puVar3[1] = param_1[4];
      puVar3[5] = 1;
      local_4 = 0xffffffff;
      FUN_00412ec0(puVar3,100);
    }
    FUN_00407480(param_1[0x18]);
    FUN_00407ab0((int)param_1);
    ExceptionList = local_c;
    return 1;
  }
  ExceptionList = local_c;
  return 0;
}

