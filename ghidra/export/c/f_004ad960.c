// FUNCTION: PORT1111 0x004ad960
// name: FUN_004ad960
// sig: undefined FUN_004ad960(int * param_1, byte * param_2, int param_3, uint param_4, int param_5)


void __cdecl FUN_004ad960(int *param_1,byte *param_2,int param_3,uint param_4,int param_5)

{
  byte local_8 [2];
  undefined1 local_6 [2];
  undefined1 local_4 [4];
  
  if (param_5 == 3) {
    if ((0 < (int)param_4) && ((int)param_4 <= (int)(uint)*(ushort *)(param_1 + 0x46))) {
      FUN_004ac940(param_1,(byte *)&DAT_004c84e4,param_2,param_4);
      return;
    }
    FUN_004ac710((int)param_1,s_Invalid_number_of_transparent_co_004df7d4);
    return;
  }
  if (param_5 == 0) {
    FUN_004ac920(local_8,(uint)*(ushort *)(param_3 + 8));
    FUN_004ac940(param_1,(byte *)&DAT_004c84e4,local_8,2);
    return;
  }
  if (param_5 == 2) {
    FUN_004ac920(local_8,(uint)*(ushort *)(param_3 + 2));
    FUN_004ac920(local_6,(uint)*(ushort *)(param_3 + 4));
    FUN_004ac920(local_4,(uint)*(ushort *)(param_3 + 6));
    FUN_004ac940(param_1,(byte *)&DAT_004c84e4,local_8,6);
    return;
  }
  FUN_004ac710((int)param_1,s_Can_t_write_tRNS_with_an_alpha_c_004df7ac);
  return;
}

