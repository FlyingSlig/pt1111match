// FUNCTION: PORT1111 0x00410e20
// name: FUN_00410e20
// sig: undefined FUN_00410e20(int * param_1)


void __fastcall FUN_00410e20(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b601b;
  local_c = ExceptionList;
  iVar4 = *(int *)(param_1[1] + 0x30);
  iVar1 = *(int *)(param_1[1] + 0x34);
  if (*(short *)(param_1[2] + 0x34) != 1) {
    ExceptionList = &local_c;
    if (*(short *)(param_1[2] + 0x34) == 2) {
      ExceptionList = &local_c;
      FUN_0044d700(*(int *)(param_1[0x15] + 0x244),iVar4,iVar1,1,-1);
      puVar2 = operator_new(0x34);
      local_4 = 0;
      if (puVar2 == (undefined4 *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = FUN_00431240(puVar2);
      }
      piVar3[1] = *(int *)(param_1[1] + 0x38);
      piVar3[7] = *(int *)(param_1[1] + 0x2c);
      piVar3[5] = *(int *)(param_1[1] + 0x30);
      piVar3[6] = *(int *)(param_1[1] + 0x34);
      piVar3[8] = *(int *)(param_1[1] + 0x28);
      local_4 = 0xffffffff;
      FUN_00412e90(piVar3);
    }
    FUN_00411de0((int)param_1);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  iVar4 = FUN_00410d50(param_1,iVar4,iVar1);
  if (iVar4 == 0) {
    *(undefined4 *)(param_1[1] + 0x24) = 1;
    (**(code **)(*param_1 + 0x24))();
  }
  ExceptionList = local_c;
  return;
}

