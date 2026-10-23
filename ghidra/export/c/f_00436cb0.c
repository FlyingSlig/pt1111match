// FUNCTION: PORT1111 0x00436cb0
// name: FUN_00436cb0
// sig: undefined4 FUN_00436cb0(int param_1)


undefined4 __fastcall FUN_00436cb0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7a88;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00435960(local_14);
  piVar3 = (int *)**(int **)(param_1 + 8);
  local_4 = 0;
  if (piVar3 != *(int **)(param_1 + 8)) {
    do {
      iVar1 = FUN_004662f0((void *)(piVar3[2] + 8),"Aux");
      if (iVar1 != 0) {
        FUN_00438f90(local_14,*(undefined4 *)(piVar3[2] + 0xc));
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(param_1 + 8));
  }
  local_4 = 0xffffffff;
  uVar2 = FUN_004358f0(local_14);
  ExceptionList = pvStack_c;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}

