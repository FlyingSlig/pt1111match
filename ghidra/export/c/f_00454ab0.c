// FUNCTION: PORT1111 0x00454ab0
// name: FUN_00454ab0
// sig: undefined4 FUN_00454ab0(int param_1)


undefined4 __fastcall FUN_00454ab0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b8d13;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar2 = (int *)FUN_0047cf90(*(void **)(param_1 + 8),0x29);
  *(int **)(param_1 + 4) = piVar2;
  (**(code **)(*piVar2 + 0x60))(10000);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0xe8) = 0x99f9ff;
  iVar4 = 7;
  do {
    FUN_00466af0(&stack0xffffffe8,"",0xffffffff);
    iVar1 = **(int **)(param_1 + 0x10);
    puStack_8 = (undefined1 *)0x0;
    puVar3 = FUN_0041d3c0(iVar1,*(undefined4 *)(iVar1 + 4),(undefined4 *)&stack0xffffffe8);
    FUN_0041e280((void *)(param_1 + 0xc),1);
    *(undefined4 **)(iVar1 + 4) = puVar3;
    *(undefined4 **)puVar3[1] = puVar3;
    puStack_8 = (undefined1 *)0xffffffff;
    FUN_00465e40((undefined4 *)&stack0xffffffe8);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar3 = operator_new(0x34);
  puStack_8 = (undefined1 *)0x1;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)FUN_0042fc40(puVar3);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00412ec0(puVar3,3000);
  ExceptionList = pvStack_10;
  return 1;
}

