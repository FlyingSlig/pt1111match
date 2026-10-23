// FUNCTION: PORT1111 0x0046fc80
// name: FUN_0046fc80
// sig: bool FUN_0046fc80(int * param_1)


bool __fastcall FUN_0046fc80(int *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  uchar *puVar3;
  int iVar4;
  int *piVar5;
  int *piStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b9e53;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piStack_10 = param_1;
  (**(code **)(*param_1 + 0x1c))();
  if (param_1[0x11] != 0) {
    if ((void *)param_1[0x10] != (void *)0x0) {
      FUN_00478470((void *)param_1[0x10],*(int *)(param_1[0x11] + 0x34),0);
    }
    iVar4 = *(int *)(param_1[0x11] + 0x34);
    piVar5 = (int *)0x0;
    pvVar1 = (void *)FUN_0047c5d0(param_1[0x12]);
    FUN_00476d40(pvVar1,iVar4,piVar5);
  }
  param_1[0x11] = 0;
  piStack_10 = operator_new(0x78);
  uStack_4 = 0;
  if (piStack_10 == (int *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_0047f360(piStack_10);
  }
  param_1[0x11] = (int)puVar2;
  uStack_4 = 0xffffffff;
  puVar2 = FUN_00466fd0(param_1 + 0x25,&piStack_10,param_1 + 0x29);
  iVar4 = param_1[0x2d];
  uStack_4 = 1;
  puVar3 = (uchar *)FUN_00465e00(puVar2);
  iVar4 = FUN_0047ed50((void *)param_1[0x11],puVar3,iVar4);
  uStack_4 = 0xffffffff;
  FUN_00465e40(&piStack_10);
  if (iVar4 == 0) {
    if ((undefined4 *)param_1[0x11] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x11])(1);
    }
    param_1[0x11] = 0;
    ExceptionList = pvStack_c;
    return false;
  }
  iVar4 = param_1[0x11];
  pvVar1 = (void *)FUN_0047c5d0(param_1[0x12]);
  FUN_00477600(pvVar1,iVar4);
  puVar2 = FUN_0047a9a0((void *)param_1[0x10],*(undefined4 *)(param_1[0x11] + 0x34));
  ExceptionList = pvStack_c;
  return puVar2 != (undefined4 *)0x0;
}

