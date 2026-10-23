// FUNCTION: PORT1111 0x004acf70
// name: FUN_004acf70
// sig: undefined FUN_004acf70(int * param_1, byte * param_2, int param_3, int param_4, int param_5)


void __cdecl FUN_004acf70(int *param_1,byte *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int local_14 [5];
  
  if (param_2 != (byte *)0x0) {
    uVar1 = FUN_004adbe0(param_1,param_2,(int *)&param_2);
    if (uVar1 != 0) {
      if (param_3 != 0) {
        FUN_004ac710((int)param_1,s_Unknown_compression_type_in_iCCP_004df684);
      }
      if (param_4 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = 0;
        if (param_5 != 0) {
          iVar2 = FUN_004ad050(param_1,param_4,param_5,0,local_14);
        }
      }
      FUN_004ac970(param_1,(byte *)&DAT_004c848c,uVar1 + 2 + iVar2);
      param_2[uVar1 + 1] = 0;
      FUN_004ac9c0(param_1,param_2,uVar1 + 2);
      if (iVar2 != 0) {
        FUN_004ad310(param_1,local_14);
      }
      FUN_004ac9f0(param_1);
      FUN_004a4750((int)param_1,param_2);
      return;
    }
  }
  FUN_004ac710((int)param_1,s_Empty_keyword_in_iCCP_chunk_004df668);
  return;
}

