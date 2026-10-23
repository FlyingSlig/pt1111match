// FUNCTION: PORT1111 0x004845e0
// name: FUN_004845e0
// sig: undefined4 FUN_004845e0(int * param_1)


undefined4 __fastcall FUN_004845e0(int *param_1)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1[3] + 8) == 0) {
    (**(code **)(*param_1 + 0x1c))(0);
  }
  else {
    FUN_00484330(param_1,param_1 + 4,&local_4,&local_8,&local_c);
    FUN_00484570(param_1,(undefined4 *)param_1[4],local_4,local_8,local_c);
    iVar1 = (**(code **)(*param_1 + 0x18))(local_4,local_8);
    if (iVar1 == 0) {
      return 0;
    }
  }
  if (((int *)param_1[6] != (int *)0x0) && (iVar1 = FUN_00480380((int *)param_1[6]), iVar1 != 0)) {
    (**(code **)(*(int *)param_1[6] + 100))();
    param_1[4] = (uint)*(ushort *)(((int *)param_1[6])[9] + 0x1c);
    (**(code **)(*(int *)param_1[6] + 0x68))();
    return 1;
  }
  (**(code **)(*(int *)param_1[6] + 0x30))();
  if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[6])(1);
  }
  param_1[6] = 0;
  FUN_004840d0(param_1);
  return 0;
}

