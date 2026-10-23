// FUNCTION: PORT1111 0x004ae240
// name: FUN_004ae240
// sig: undefined FUN_004ae240(int * param_1, ushort * param_2)


void __cdecl FUN_004ae240(int *param_1,ushort *param_2)

{
  byte local_8 [2];
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  undefined1 local_3;
  undefined1 local_2;
  
  if (((((byte)param_2[1] < 0xd) && ((byte)param_2[1] != 0)) && (*(byte *)((int)param_2 + 3) < 0x20)
      ) && (((*(byte *)((int)param_2 + 3) != 0 && ((byte)param_2[2] < 0x18)) &&
            ((byte)param_2[3] < 0x3d)))) {
    FUN_004ac920(local_8,(uint)*param_2);
    local_6 = (undefined1)param_2[1];
    local_4 = (undefined1)param_2[2];
    local_5 = *(undefined1 *)((int)param_2 + 3);
    local_3 = *(undefined1 *)((int)param_2 + 5);
    local_2 = (undefined1)param_2[3];
    FUN_004ac940(param_1,(byte *)&DAT_004c84dc,local_8,7);
    return;
  }
  FUN_004ac710((int)param_1,s_Invalid_time_specified_for_tIME_c_004dfa04);
  return;
}

