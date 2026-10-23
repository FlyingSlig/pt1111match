// FUNCTION: PORT1111 0x004b1230
// name: FUN_004b1230
// sig: undefined FUN_004b1230(int * param_1, int param_2, uint param_3)


void __cdecl FUN_004b1230(int *param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  byte local_108 [2];
  byte local_106 [2];
  byte local_104 [4];
  byte local_100 [256];
  
  if ((param_1[0x1a] & 1U) == 0) {
    FUN_004ac6e0(param_1,s_Missing_IHDR_before_tRNS_004e01b4);
LAB_004b125c:
    cVar1 = *(char *)((int)param_1 + 0x126);
    if (cVar1 == '\x03') {
      if ((*(byte *)(param_1 + 0x1a) & 2) == 0) {
        FUN_004ac710((int)param_1,s_Missing_PLTE_before_tRNS_004e0198);
      }
      else if (*(ushort *)(param_1 + 0x46) < param_3) {
        FUN_004ac710((int)param_1,s_Incorrect_tRNS_chunk_length_004e014c);
        FUN_004afd10(param_1,param_3);
        return;
      }
      if (param_3 == 0) {
        FUN_004ac710((int)param_1,s_Zero_length_tRNS_chunk_004e0134);
        FUN_004afd10(param_1,0);
        return;
      }
      FUN_004afce0(param_1,local_100,param_3);
      *(short *)((int)param_1 + 0x11a) = (short)param_3;
    }
    else if (cVar1 == '\x02') {
      if (param_3 != 6) {
        FUN_004ac710((int)param_1,s_Incorrect_tRNS_chunk_length_004e014c);
        FUN_004afd10(param_1,param_3);
        return;
      }
      FUN_004afce0(param_1,local_108,6);
      *(undefined2 *)((int)param_1 + 0x11a) = 1;
      iVar2 = FUN_004afcc0(local_108);
      *(short *)((int)param_1 + 0x18e) = (short)iVar2;
      iVar2 = FUN_004afcc0(local_106);
      *(short *)(param_1 + 100) = (short)iVar2;
      iVar2 = FUN_004afcc0(local_104);
      *(short *)((int)param_1 + 0x192) = (short)iVar2;
    }
    else {
      if (cVar1 != '\0') {
        pcVar3 = s_tRNS_chunk_not_allowed_with_alph_004e0108;
        goto LAB_004b1448;
      }
      if (param_3 != 2) {
        FUN_004ac710((int)param_1,s_Incorrect_tRNS_chunk_length_004e014c);
        FUN_004afd10(param_1,param_3);
        return;
      }
      FUN_004afce0(param_1,local_108,2);
      *(undefined2 *)((int)param_1 + 0x11a) = 1;
      iVar2 = FUN_004afcc0(local_108);
      *(short *)(param_1 + 0x65) = (short)iVar2;
    }
    iVar2 = FUN_004afd10(param_1,0);
    if (iVar2 == 0) {
      FUN_004a6740(param_1,param_2,(undefined4 *)local_100,(uint)*(ushort *)((int)param_1 + 0x11a),
                   param_1 + 99);
      return;
    }
  }
  else {
    if ((param_1[0x1a] & 4U) != 0) {
      FUN_004ac710((int)param_1,s_Invalid_tRNS_after_IDAT_004e0180);
      FUN_004afd10(param_1,param_3);
      return;
    }
    if ((param_2 == 0) || ((*(byte *)(param_2 + 8) & 0x10) == 0)) goto LAB_004b125c;
    pcVar3 = s_Duplicate_tRNS_chunk_004e0168;
LAB_004b1448:
    FUN_004ac710((int)param_1,pcVar3);
    FUN_004afd10(param_1,param_3);
  }
  return;
}

