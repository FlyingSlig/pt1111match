// FUNCTION: PORT1111 0x00421a70
// name: FUN_00421a70
// sig: undefined FUN_00421a70(int param_1)


void __fastcall FUN_00421a70(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  void *this;
  byte bVar8;
  int *piVar9;
  int iVar10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b6cd6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x78);
  iVar10 = 0;
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_0047f360(puVar1);
  }
  *(undefined4 **)(param_1 + 0x18) = puVar2;
  bVar8 = (byte)*(undefined4 *)(param_1 + 0x48);
  local_4 = 0xffffffff;
  FUN_0047eda0(puVar2,(uchar *)"MiniMap",(char)DAT_004dd964,
               DAT_004e26d0 - DAT_004e26c8 >> (bVar8 & 0x1f),
               DAT_004e26d4 - DAT_004e26cc >> (bVar8 & 0x1f),3);
  (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 4) + 0x3c))(0);
  uVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 4) + 0x30))();
  iVar4 = FUN_0047e810(*(int *)(param_1 + 0x18));
  if (0 < iVar4) {
    do {
      puVar5 = (undefined2 *)
               (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 4) + 0x2c))(uVar3,iVar10,0);
      *puVar5 = 0xffff;
      iVar4 = **(int **)(*(int *)(param_1 + 0x18) + 4);
      iVar6 = FUN_0047e870(*(int *)(param_1 + 0x18));
      puVar5 = (undefined2 *)(**(code **)(iVar4 + 0x2c))(uVar3,iVar10,iVar6 + -1);
      *puVar5 = 0xffff;
      iVar10 = iVar10 + 1;
      iVar4 = FUN_0047e810(*(int *)(param_1 + 0x18));
    } while (iVar10 < iVar4);
  }
  iVar4 = 0;
  iVar10 = FUN_0047e870(*(int *)(param_1 + 0x18));
  if (0 < iVar10) {
    do {
      puVar5 = (undefined2 *)
               (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 4) + 0x2c))(uVar3,0,iVar4);
      *puVar5 = 0xffff;
      iVar10 = **(int **)(*(int *)(param_1 + 0x18) + 4);
      iVar6 = iVar4;
      iVar7 = FUN_0047e810(*(int *)(param_1 + 0x18));
      puVar5 = (undefined2 *)(**(code **)(iVar10 + 0x2c))(uVar3,iVar7 + -1,iVar6);
      *puVar5 = 0xffff;
      iVar4 = iVar4 + 1;
      iVar10 = FUN_0047e870(*(int *)(param_1 + 0x18));
    } while (iVar4 < iVar10);
  }
  (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 4) + 0x34))();
  FUN_00477600(*(void **)(DAT_004e2b14 + 0xf8),*(int *)(param_1 + 0x18));
  puVar2 = operator_new(100);
  puStack_8 = (undefined1 *)0x1;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_0040d150(puVar2);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  *(undefined4 **)(param_1 + 0x14) = puVar2;
  FUN_00478070((int)puVar2);
  this = (void *)FUN_004750b0(*(int *)(DAT_004e2b14 + 0xf8));
  FUN_00477ae0(this,*(void **)(param_1 + 0x14),1);
  FUN_0047a9a0(*(void **)(param_1 + 0x14),*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x34));
  bVar8 = (byte)*(undefined4 *)(param_1 + 0x48);
  FUN_004786d0(*(void **)(param_1 + 0x14),
               ((*(int *)(param_1 + 0x68) - (DAT_004e2c30 >> (bVar8 & 0x1f))) +
               *(int *)(param_1 + 0x4c)) - DAT_004e2c30,
               ((*(int *)(param_1 + 0x6c) - (DAT_004e2c34 >> (bVar8 & 0x1f))) +
               *(int *)(param_1 + 0x54)) - DAT_004e2c34);
  FUN_004787e0(*(int *)(param_1 + 0x14));
  FUN_00478920(*(void **)(param_1 + 0x14));
  FUN_004789b0(*(void **)(param_1 + 0x14),(int *)0x1);
  iVar10 = FUN_004750e0(*(void **)(DAT_004e2b14 + 0xf8),0x19,3);
  piVar9 = (int *)(param_1 + 0x1c);
  iVar4 = 10;
  do {
    puVar2 = FUN_00479800(iVar10);
    *piVar9 = (int)puVar2;
    FUN_00477ae0(this,puVar2,1);
    *(byte *)(*piVar9 + 0x2c) = *(byte *)(*piVar9 + 0x2c) & 0xbf;
    FUN_00478250((void *)*piVar9,300);
    FUN_004787e0(*piVar9);
    piVar9 = piVar9 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  ExceptionList = puVar1;
  return;
}

