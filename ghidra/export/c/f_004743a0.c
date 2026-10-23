// FUNCTION: PORT1111 0x004743a0
// name: FUN_004743a0
// sig: undefined4 FUN_004743a0(int * param_1)


undefined4 __fastcall FUN_004743a0(int *param_1)

{
  int iVar1;
  
  if (param_1[0xd] == 0) {
    param_1[0x18] = 1;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0xd] = 1;
    if (param_1[7] == 0) {
      iVar1 = FUN_0046ee80((int)param_1);
      if (iVar1 == 0) goto LAB_004743da;
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
      return 0;
    }
    iVar1 = FUN_00473200(param_1);
    if (iVar1 == 0) {
LAB_004743da:
      (**(code **)(*param_1 + 0x54))();
      return 0;
    }
  }
  return 1;
}

