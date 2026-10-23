// FUNCTION: PORT1111 0x0042fe70
// name: FUN_0042fe70
// sig: undefined4 FUN_0042fe70(int param_1)


undefined4 __fastcall FUN_0042fe70(int param_1)

{
  undefined1 uVar1;
  int3 extraout_var;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b73eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_00405a40(*(int *)(param_1 + 0x40));
  if (CONCAT31(extraout_var,uVar1) != 0) {
    if ((-1 < extraout_var) && (CONCAT31(extraout_var,uVar1) < 3)) {
      iVar2 = FUN_00406530(*(void **)(param_1 + 0x40));
      if (iVar2 != 0) {
        (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x40) + 0x60) + 0x1c) + 0x10))
                  (*(int *)(param_1 + 0x40),1);
        puVar3 = operator_new(0x44);
        uStack_4 = 0;
        if (puVar3 == (undefined4 *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = FUN_0042fdb0(puVar3);
        }
        piVar4[1] = *(int *)(*(int *)(param_1 + 0x40) + 0x10);
        piVar4[5] = *(int *)(param_1 + 0x14);
        piVar4[6] = 0;
        uStack_4 = 0xffffffff;
        if (*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0xb0) + 0x34) != *(int *)(param_1 + 0x14))
        {
          piVar4[0xc] = *(int *)(param_1 + 0x30);
        }
        FUN_00412e90(piVar4);
      }
    }
    ExceptionList = local_c;
    return 0;
  }
  ExceptionList = local_c;
  return 1;
}

