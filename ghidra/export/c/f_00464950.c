// FUNCTION: PORT1111 0x00464950
// name: FUN_00464950
// sig: int FUN_00464950(int * param_1, uint * param_2, uint * param_3, int param_4, int param_5)


int __cdecl FUN_00464950(int *param_1,uint *param_2,uint *param_3,int param_4,int param_5)

{
  uint *puVar1;
  int iVar2;
  uint local_4;
  
  local_4 = 0;
  puVar1 = (uint *)(**(code **)(param_5 + 0x20))(*(undefined4 *)(param_5 + 0x28),0x13,4);
  if (puVar1 == (uint *)0x0) {
    return -4;
  }
  iVar2 = FUN_00464a00(param_1,0x13,0x13,0,0,param_3,param_2,param_4,&local_4,puVar1);
  if (iVar2 == -3) {
    *(char **)(param_5 + 0x18) = s_oversubscribed_dynamic_bit_lengt_004dd84c;
    (**(code **)(param_5 + 0x24))(*(undefined4 *)(param_5 + 0x28),puVar1);
    return -3;
  }
  if ((iVar2 == -5) || (*param_2 == 0)) {
    *(char **)(param_5 + 0x18) = s_incomplete_dynamic_bit_lengths_t_004dd828;
    iVar2 = -3;
  }
  (**(code **)(param_5 + 0x24))(*(undefined4 *)(param_5 + 0x28),puVar1);
  return iVar2;
}

