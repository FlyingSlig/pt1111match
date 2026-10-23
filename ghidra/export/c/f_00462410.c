// FUNCTION: PORT1111 0x00462410
// name: FUN_00462410
// sig: undefined4 FUN_00462410(int * param_1, int param_2)


undefined4 __cdecl FUN_00462410(int *param_1,int param_2)

{
  FUN_004615e0(param_1,param_2,(int *)0x0);
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1[10]);
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1[9]);
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1);
  return 0;
}

