// FUNCTION: PORT1111 0x0042d840
// name: FUN_0042d840
// sig: undefined FUN_0042d840(int param_1)


void __fastcall FUN_0042d840(int param_1)

{
  uint *puVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  
  FUN_0042d420(param_1);
  iVar6 = *(int *)(param_1 + 0xc);
  if (iVar6 != 0) {
    iVar6 = *(int *)(iVar6 + 0x30) * *(int *)(iVar6 + 0x2c);
    pvVar2 = operator_new(iVar6 * 4);
    *(void **)(param_1 + 0x1c) = pvVar2;
    pvVar2 = operator_new(iVar6 * 4);
    iVar7 = 0;
    *(void **)(param_1 + 0x20) = pvVar2;
    if (0 < iVar6) {
      do {
        iVar3 = FUN_004750b0(*(int *)(DAT_004e2b14 + 0xf8));
        iVar3 = FUN_00475080(iVar3);
        puVar4 = FUN_00479800(iVar3);
        *(undefined4 **)(*(int *)(param_1 + 0x1c) + iVar7 * 4) = puVar4;
        pvVar2 = *(void **)(*(int *)(param_1 + 0x1c) + iVar7 * 4);
        iVar3 = 1;
        pvVar5 = (void *)FUN_004750b0(*(int *)(DAT_004e2b14 + 0xf8));
        FUN_00477ae0(pvVar5,pvVar2,iVar3);
        puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7 * 4) + 0x28);
        *puVar1 = *puVar1 | 4;
        FUN_00478380(*(void **)(*(int *)(param_1 + 0x1c) + iVar7 * 4),1);
        FUN_004787e0(*(int *)(*(int *)(param_1 + 0x1c) + iVar7 * 4));
        FUN_00478920(*(void **)(*(int *)(param_1 + 0x1c) + iVar7 * 4));
        FUN_004789b0(*(void **)(*(int *)(param_1 + 0x1c) + iVar7 * 4),(int *)0x1);
        FUN_00478010(*(void **)(*(int *)(param_1 + 0x1c) + iVar7 * 4),0);
        FUN_004207f0(*(int *)(DAT_004e2b14 + 0xf8));
        iVar3 = FUN_004750b0(*(int *)(DAT_004e2b14 + 0xf8));
        iVar3 = FUN_00475080(iVar3);
        puVar4 = FUN_00479800(iVar3);
        *(undefined4 **)(*(int *)(param_1 + 0x20) + iVar7 * 4) = puVar4;
        pvVar2 = *(void **)(*(int *)(param_1 + 0x20) + iVar7 * 4);
        iVar3 = 1;
        pvVar5 = (void *)FUN_004750b0(*(int *)(DAT_004e2b14 + 0xf8));
        FUN_00477ae0(pvVar5,pvVar2,iVar3);
        puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0x20) + iVar7 * 4) + 0x28);
        *puVar1 = *puVar1 | 4;
        FUN_00478380(*(void **)(*(int *)(param_1 + 0x20) + iVar7 * 4),1);
        FUN_004787e0(*(int *)(*(int *)(param_1 + 0x20) + iVar7 * 4));
        FUN_00478920(*(void **)(*(int *)(param_1 + 0x20) + iVar7 * 4));
        FUN_004789b0(*(void **)(*(int *)(param_1 + 0x20) + iVar7 * 4),(int *)0x1);
        FUN_00478010(*(void **)(*(int *)(param_1 + 0x20) + iVar7 * 4),0);
        FUN_004207f0(*(int *)(DAT_004e2b14 + 0xf8));
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar6);
    }
    *(int *)(param_1 + 0x18) = iVar6;
  }
  return;
}

