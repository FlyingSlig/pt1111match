// FUNCTION: PORT1111 0x00470d60
// name: FUN_00470d60
// sig: undefined4 FUN_00470d60(int * param_1)


undefined4 __fastcall FUN_00470d60(int *param_1)

{
  undefined4 uVar1;
  int unaff_ESI;
  int local_10 [4];
  
  if (param_1[0x10] == 0) {
    return 0;
  }
  (**(code **)(*param_1 + 0x30))(local_10);
  FUN_00478250((void *)param_1[0x10],(uint)*(ushort *)((int)param_1 + 0x9e));
  FUN_004786d0((void *)param_1[0x10],unaff_ESI,local_10[0]);
  uVar1 = FUN_0046efe0(param_1);
  return uVar1;
}

