// FUNCTION: PORT1111 0x00436780
// name: FUN_00436780
// sig: undefined4 FUN_00436780(int param_1)


undefined4 __fastcall FUN_00436780(int param_1)

{
  void **ppvVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7a31;
  local_c = ExceptionList;
  piVar5 = (int *)**(int **)(param_1 + 8);
  ExceptionList = &local_c;
  ppvVar1 = &local_c;
  if (piVar5 != *(int **)(param_1 + 8)) {
    do {
      ExceptionList = ppvVar1;
      iVar2 = FUN_004662f0((void *)(piVar5[2] + 8),"tile");
      if (iVar2 == 0) {
        iVar2 = FUN_004662f0((void *)(piVar5[2] + 8),(uchar *)"alpha");
        if (iVar2 == 0) {
          iVar2 = FUN_004662f0((void *)(piVar5[2] + 8),(uchar *)"BackgroundImage");
          if (iVar2 != 0) {
            puVar3 = operator_new(100);
            local_4 = 2;
            if (puVar3 == (undefined4 *)0x0) {
              puVar3 = (undefined4 *)0x0;
            }
            else {
              puVar3 = FUN_0041bc60(puVar3);
            }
            local_4 = 0xffffffff;
            FUN_00466b20(&stack0xffffffdc,(undefined4 *)(piVar5[2] + 4));
            FUN_00438fc0((int)puVar3);
            (**(code **)*puVar3)();
            FUN_0042c3f0((int)puVar3);
          }
        }
        else {
          puVar3 = operator_new(0x14);
          local_4 = 1;
          if (puVar3 == (undefined4 *)0x0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            puVar3 = FUN_00424cd0(puVar3);
          }
          local_4 = 0xffffffff;
          FUN_00466b20(&stack0xffffffdc,(undefined4 *)(piVar5[2] + 4));
          FUN_00438fc0((int)puVar3);
          (**(code **)*puVar3)();
          FUN_0042c3a0(puVar3);
        }
      }
      else {
        puVar3 = operator_new(0x40);
        local_4 = 0;
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = FUN_00425cb0(puVar3);
        }
        local_4 = 0xffffffff;
        FUN_00466b20(&stack0xffffffdc,(undefined4 *)(piVar5[2] + 4));
        FUN_00438fc0((int)puVar3);
        (**(code **)*puVar3)();
        FUN_0042c330((int)puVar3);
      }
      piVar5 = (int *)*piVar5;
      ppvVar1 = ExceptionList;
    } while (piVar5 != (int *)*(int *)(param_1 + 8));
  }
  uVar4 = FUN_0042a330();
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}

