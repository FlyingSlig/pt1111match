// FUNCTION: PORT1111 0x004045f0
// name: FUN_004045f0
// sig: undefined FUN_004045f0(int * param_1)


void __fastcall FUN_004045f0(int *param_1)

{
  undefined4 *puVar1;
  void *this;
  int iVar2;
  int *piStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b58cb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (*(code *)**(undefined4 **)param_1[10])(1);
    param_1[10] = 0;
  }
  iVar2 = (**(code **)(*(int *)param_1[7] + 8))();
  param_1[10] = iVar2;
  iVar2 = FUN_0045c4f0(iVar2);
  if (*(int *)(param_1[10] + 8) == 0xf) {
    FUN_00405bf0((void *)param_1[0xd]);
    FUN_004137d0(param_1[0xd]);
  }
  if (iVar2 == 0) {
    puVar1 = (undefined4 *)param_1[10];
    piStack_10 = param_1;
    if (((puVar1[2] == 1) || (puVar1[2] == 2)) &&
       (*(int *)(*(int *)(*(int *)(param_1[0xd] + 0x60) + 0x1c) + 4) != -1)) {
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
        param_1[10] = 0;
      }
      piStack_10 = operator_new(0x18);
      uStack_4 = 0;
      if (piStack_10 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_0045c3e0(piStack_10,
                             *(undefined4 *)(*(int *)(*(int *)(param_1[0xd] + 0x60) + 0x1c) + 4),
                             0xffffffff,0xffffffff);
      }
      uStack_4 = 0xffffffff;
      param_1[10] = iVar2;
    }
    this = (void *)param_1[6];
    iVar2 = (**(code **)(*param_1 + 0x44))(param_1[10]);
    FUN_0045f100(this,iVar2);
    ExceptionList = piStack_10;
    return;
  }
  (**(code **)(*param_1 + 8))();
  ExceptionList = pvStack_c;
  return;
}

