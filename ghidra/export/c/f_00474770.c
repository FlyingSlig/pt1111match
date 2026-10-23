// FUNCTION: PORT1111 0x00474770
// name: FUN_00474770
// sig: undefined FUN_00474770(int * param_1)


void __fastcall FUN_00474770(int *param_1)

{
  (**(code **)(*param_1 + 0xc))();
  (**(code **)(*(int *)param_1[7] + 8))(0);
  (**(code **)(*param_1 + 8))();
  (**(code **)(*param_1 + 0xc))(2);
  (**(code **)(*(int *)param_1[7] + 0x4c))(0);
  (**(code **)(*param_1 + 0xc))(3);
  return;
}

