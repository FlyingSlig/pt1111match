// FUNCTION: PORT1111 0x004acf30
// name: FUN_004acf30
// sig: undefined FUN_004acf30(int * param_1, int param_2)


void __cdecl FUN_004acf30(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2;
  if (3 < param_2) {
    FUN_004ac710((int)param_1,s_Invalid_sRGB_rendering_intent_sp_004df640);
  }
  param_2 = CONCAT31(param_2._1_3_,(char)iVar1);
  FUN_004ac940(param_1,(byte *)&DAT_004c84cc,(byte *)&param_2,1);
  return;
}

