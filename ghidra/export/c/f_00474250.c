// FUNCTION: PORT1111 0x00474250
// name: FUN_00474250
// sig: undefined4 FUN_00474250(int * param_1)


undefined4 __fastcall FUN_00474250(int *param_1)

{
  int iVar1;
  uchar *puVar2;
  int *piStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b9fa8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[0x28] = 0;
  if (param_1[0xd] == 0) {
    param_1[0x18] = 1;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0xd] = 1;
    piStack_10 = param_1;
    if (param_1[7] == 0) {
      iVar1 = FUN_0046ee80((int)param_1);
      if (iVar1 == 0) {
        (**(code **)(*param_1 + 0x54))();
        ExceptionList = local_c;
        return 0;
      }
    }
    else {
      param_1[0x1a] = 0;
      param_1[0xf] = *(int *)(param_1[7] + 0x3c);
    }
    if (param_1[7] == 0) {
      (**(code **)(*param_1 + 0x60))((short)param_1[0xb]);
      (**(code **)(*param_1 + 0x90))(1);
    }
    iVar1 = FUN_00474110(param_1,(void *)param_1[0xf]);
    if (iVar1 == 0) {
      (**(code **)(*param_1 + 0x54))();
      ExceptionList = local_c;
      return 0;
    }
    FUN_00466b20(&piStack_10,param_1 + 0x29);
    uStack_4 = 0;
    FUN_00465e40(param_1 + 0x29);
    iVar1 = *(int *)(DAT_004e2b14 + 0x60);
    param_1[0x2d] = iVar1;
    puVar2 = (uchar *)FUN_00465e00(&piStack_10);
    iVar1 = FUN_00472560(param_1,puVar2,iVar1);
    if (iVar1 == 0) {
      (**(code **)(*param_1 + 0x54))();
      uStack_4 = 0xffffffff;
      FUN_00465e40(&piStack_10);
      ExceptionList = local_c;
      return 0;
    }
    uStack_4 = 0xffffffff;
    FUN_00465e40(&piStack_10);
  }
  ExceptionList = local_c;
  return 1;
}

