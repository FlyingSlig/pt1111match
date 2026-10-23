// FUNCTION: PORT1111 0x004ada60
// name: FUN_004ada60
// sig: undefined FUN_004ada60(int * param_1, byte * param_2, uint param_3)


void __cdecl FUN_004ada60(int *param_1,byte *param_2,uint param_3)

{
  byte local_8 [2];
  undefined1 local_6 [2];
  undefined1 local_4 [4];
  
  if (param_3 != 3) {
    if ((param_3 & 2) != 0) {
      FUN_004ac920(local_8,(uint)*(ushort *)(param_2 + 2));
      FUN_004ac920(local_6,(uint)*(ushort *)(param_2 + 4));
      FUN_004ac920(local_4,(uint)*(ushort *)(param_2 + 6));
      FUN_004ac940(param_1,(byte *)&DAT_004c846c,local_8,6);
      return;
    }
    FUN_004ac920(local_8,(uint)*(ushort *)(param_2 + 8));
    FUN_004ac940(param_1,(byte *)&DAT_004c846c,local_8,2);
    return;
  }
  if (((*(ushort *)(param_1 + 0x46) != 0) || ((*(byte *)(param_1 + 0x8c) & 1) == 0)) &&
     (*(ushort *)(param_1 + 0x46) < (ushort)*param_2)) {
    FUN_004ac710((int)param_1,s_Invalid_background_palette_index_004df804);
    return;
  }
  local_8[0] = *param_2;
  FUN_004ac940(param_1,(byte *)&DAT_004c846c,local_8,1);
  return;
}

