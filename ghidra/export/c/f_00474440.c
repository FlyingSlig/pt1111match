// FUNCTION: PORT1111 0x00474440
// name: FUN_00474440
// sig: undefined4 FUN_00474440(int * param_1)


undefined4 __fastcall FUN_00474440(int *param_1)

{
  int iVar1;
  
  if (param_1[0xd] == 0) {
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0xd] = 1;
  }
  param_1[0x18] = 1;
  if (param_1[7] == 0) {
    iVar1 = FUN_0046ee80((int)param_1);
    if (iVar1 == 0) {
      (**(code **)(*param_1 + 0x54))();
      return 0;
    }
  }
  else {
    param_1[0x1a] = 0;
    param_1[0xf] = *(int *)(param_1[7] + 0x3c);
  }
  iVar1 = FUN_00474110(param_1,(void *)param_1[0xf]);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x54))();
  }
  else {
    iVar1 = FUN_00473010(param_1);
    if (iVar1 != 0) {
      if (param_1[7] == 0) {
        (**(code **)(*param_1 + 0x60))((short)param_1[0xb]);
        (**(code **)(*param_1 + 0x90))(1);
      }
      return 1;
    }
  }
  return 0;
}

