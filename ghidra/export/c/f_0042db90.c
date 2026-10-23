// FUNCTION: PORT1111 0x0042db90
// name: FUN_0042db90
// sig: undefined4 FUN_0042db90(int param_1)


undefined4 __fastcall FUN_0042db90(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b72bb;
  local_c = ExceptionList;
  if ((((*(int *)(param_1 + 0x24) == 0) && (-1 < *(int *)(param_1 + 0x10))) &&
      (-1 < *(int *)(param_1 + 0x14))) &&
     (*(uint *)(*(int *)(param_1 + 0xc) + 0x110) <=
      *(uint *)(*(int *)(DAT_004e26f0 + (uint)DAT_004e21b0 * 4) + 0x38))) {
    ExceptionList = &local_c;
    puVar1 = operator_new(0x38);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_004332b0(puVar1);
    }
    piVar2[7] = *(int *)(param_1 + 0x10);
    piVar2[8] = *(int *)(param_1 + 0x14);
    local_4 = 0xffffffff;
    iVar3 = FUN_00453ab0(*(int *)(DAT_004e240c + 0x21c));
    piVar2[1] = iVar3;
    piVar2[5] = *(int *)(*(int *)(param_1 + 0xc) + 0x14);
    piVar2[6] = (uint)DAT_004e21b0;
    piVar2[9] = 0;
    FUN_00412e90(piVar2);
    ExceptionList = local_c;
    return 1;
  }
  return 0;
}

